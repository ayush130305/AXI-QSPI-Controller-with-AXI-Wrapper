# QSPI Controller with AXI4-Lite Wrapper: Design Note

**Block:** `qspi_axi_top`
**Purpose of this document:** the single reference for design verification (DV). It describes what the block does, its interfaces and registers, the behaviour DV needs to check, the known limitations, and what the existing testbenches already cover.
**Related documents:** [THEORY.md](./THEORY.md) (protocol background: AXI4-Lite, SPI/QSPI, CDC, XIP), [WALKTHROUGH.md](./WALKTHROUGH.md) (signal-level trace through the RTL, with line numbers), [register_map.md](./register_map.md) (register reference only), [../README.md](../README.md) (how to build and run).

---

## 1. Overview

`qspi_axi_top` is a QSPI flash controller driven over AXI4-Lite. A CPU or other AXI master can reach the flash in two ways, through one shared AXI4-Lite slave port:

1. **Register path.** Software writes a command, address and byte count into registers, sets START, then polls STATUS and moves data through TX_DATA / RX_DATA, one byte at a time.
2. **XIP path (memory-mapped).** A plain 32-bit AXI read inside a configured address window triggers a QSPI read on its own. The controller turns the AXI address into a flash address and returns the four bytes as one little-endian word. The read opcode, line widths and dummy count come from the `XIP_CFG` register, set once at boot.

Both paths share one QSPI engine. The AXI side and the QSPI side run on independent, asynchronous clocks (`ACLK` and `qclk`), so all signals between them pass through a CDC bridge.

## 2. Architecture

### 2.1 Block diagram

```
                   S_AXI (one AXI4-Lite slave port)
                              |
                    +---------------------+
                    | qspi_unified_slave  |   routes by address; DECERR for
                    |   (rtl/axi/)        |   anything not a register / not XIP
                    +----+----------+-----+
         register AXI4-L  |          |  XIP read (AR/R only)
                    +-----v----+  +--v-----------+
                    |axi4L_slave|  |qspi_xip_slave|
                    | registers |  | fetch FSM    |
                    +-----+-----+  +------+-------+
                          |   xip_cfg --->|
                    +-----v---------------v-----+
                    |       qspi_arbiter        |   one requester owns the engine
                    +-------------+-------------+
                                  |            ACLK domain
                    =============== cdc_bridge (pulse_sync + 2-flop) ===========
                                  |            qclk domain
                    +-------------v-------------+
                    |        qspi_engine        |-----> cs_n, io0..io3 (out/oe/in)
                    |  CMD > ADDR > DUMMY > DATA|
                    +---------------------------+
```

### 2.2 Modules

| Module | File | Role |
|---|---|---|
| `qspi_axi_top` | `rtl/qspi_axi_top.sv` | Top level. Parameters `TIMEOUT_CYCLES`, `XIP_BASE`, `XIP_SIZE`. Wires everything below together. |
| `qspi_unified_slave` | `rtl/axi/qspi_unified_slave.sv` | Single external AXI4-Lite slave port. Writes always go to the register path (XIP is read-only). Reads are routed by address: XIP window, register offset, or neither (DECERR). |
| `axi4L_slave` | `rtl/axi/axi4L_slave.sv` | Register bank, AW/W/B and AR/R handshake FSMs, sticky STATUS bits, `XIP_CFG` register. |
| `qspi_xip_slave` | `rtl/xip/qspi_xip_slave.sv` | Read-only memory-mapped fetch FSM: address check and translation, one four-byte engine transaction per read, little-endian word assembly, error response. |
| `qspi_arbiter` | `rtl/qspi/qspi_arbiter.sv` | Grants the single engine to the register path or the XIP path. Routes responses back to the owner only. Forwards ABORT globally. |
| `cdc_bridge` | `rtl/cdc/cdc_bridge.sv` | Crosses control, status and data between `ACLK` and `qclk`. Holds TX/RX data. |
| `pulse_sync` | `rtl/cdc/pulse_sync.sv` | Toggle-based pulse synchroniser (three flops plus XOR edge detect). |
| `qspi_engine` | `rtl/qspi/qspi_engine.sv` | The QSPI shift engine and phase FSM. Holds the timeout counter. |
| `qspi_axi_pkg` | `rtl/qspi/qspi_axi_pkg.sv` | Register offsets, bit positions, line-width encodings, AXI FSM enums. |
| `qspi_flash_model` | `emu/qspi_flash_model.sv` | Simulation-only flash model used by the testbenches. Not part of the design. |

## 3. Top-level interface

### 3.1 Parameters

| Parameter | Default | Meaning |
|---|---|---|
| `TIMEOUT_CYCLES` | `20'hFFFFF` | Number of `qclk` cycles of continuous BUSY after which the engine aborts itself and raises ERROR. |
| `XIP_BASE` | `32'h0100_0000` | Start of the XIP address window. |
| `XIP_SIZE` | `32'h0100_0000` | Size of the XIP window (16 MB). The window is `XIP_BASE <= addr < XIP_BASE + XIP_SIZE`. |

### 3.2 Ports

| Group | Signals | Notes |
|---|---|---|
| Clocks / resets | `ACLK`, `ARESETn` (active-low); `qclk`, `qclk_rst` (**active-high**) | Independent, asynchronous clocks. The two reset polarities differ. |
| AXI4-Lite slave | `S_AXI_AW*`, `S_AXI_W*`, `S_AXI_B*`, `S_AXI_AR*`, `S_AXI_R*` (32-bit address and data, 4-bit `WSTRB`) | Single port for both paths. |
| QSPI pins | `cs_n`; `io0..io3` each as `_out`, `_oe`, `_in` | Separate output, output-enable and input per line (the top level does not instantiate tri-state buffers). |

## 4. Clocking, reset and CDC

- `ACLK` is the AXI-side clock. `qclk` drives the QSPI engine and is also the serial clock source. The testbench sets `ACLK` to 10 ns and `qclk` to 20 ns by default (`+qclk_period=` overrides it).
- **Pulses ACLK to qclk** (`start`, `abort`): toggle synchroniser. The source flips a toggle flop on each pulse, three destination flops follow, and an XOR of the last two regenerates a one-cycle pulse. See waveform 4.
- **Pulses qclk to ACLK** (`done`, `tx_req`, `rx_valid`): the same synchroniser in the other direction.
- **Levels** (`busy`, `error`): two-flop synchronisers. They are faster than the pulse path.
- **Quasi-static values** (`ctrl_cmd`, `addr`, `num_bytes`) are passed without synchronisers. They are written well before START and held until the transaction ends. This is a deliberate design rule that DV should treat as an assumption: software must not change them while BUSY.
- **Ordering hazard that shaped the design:** the level synchroniser (`busy`) is faster than the pulse synchronisers (`rx_valid`, `tx_req`, `done`). `busy` can therefore drop before the last `rx_valid` has arrived. Section 8 lists where this is handled.

## 5. Register map

All registers are 32-bit, accessed on 4-byte-aligned offsets. Unlisted bits are reserved and read as 0. Reads of any address that is neither a listed offset nor inside the XIP window return DECERR.

| Offset | Name | Access | Description |
|---|---|---|---|
| 0x00 | CTRL_CMD | R/W | Transaction command (below) |
| 0x04 | ADDR | R/W | Flash address, 24 or 32-bit depending on `ADDR_WIDTH` |
| 0x08 | NUM_BYTES | R/W | Byte count, 12-bit effective range 0-4095 |
| 0x0C | STATUS | R, W1C | Status flags (below) |
| 0x10 | TX_DATA | W | Next byte to transmit (write direction) |
| 0x14 | RX_DATA | R | Last byte received (read direction) |
| 0x18 | XIP_CFG | R/W | Fixed configuration for every XIP access (below) |

**CTRL_CMD**

| Bits | Field | Notes |
|---|---|---|
| 31:24 | reserved | |
| 23 | ABORT | Strobe, not stored. Writing 1 cancels any transaction in any phase, **whether it came from the register path or from XIP**. |
| 22 | DIR | 0 = read, 1 = write |
| 21 | START | Strobe, not stored. Writing 1 begins a transaction. Ignored while BUSY. |
| 20:13 | DUMMY_CYCLES | 0-255 |
| 12 | ADDR_WIDTH | 0 = 24-bit, 1 = 32-bit |
| 11:10 | DATA_LINES | 0 = single, 1 = dual, 2 = quad |
| 9:8 | ADDR_LINES | 0 = single, 1 = dual, 2 = quad |
| 7:0 | OPCODE | Flash command byte |

**STATUS**

| Bit | Field | Type | Meaning |
|---|---|---|---|
| 0 | BUSY | RO, level | Transaction in progress |
| 1 | DONE | sticky, W1C | Set on completion. Cleared by writing 1, and also on the next START. |
| 2 | TX_READY | sticky, auto-clear | Engine wants the next TX byte. Cleared by a TX_DATA write. Informational only (see 9.1). |
| 3 | RX_READY | sticky, auto-clear | A byte has landed in RX_DATA. Cleared by an RX_DATA read. Informational only (see 9.1). |
| 4 | ERROR | sticky, W1C | The timeout safety net fired. |
| 31:5 | reserved | | |

**XIP_CFG** (set once at boot, before enabling XIP)

| Bits | Field | Notes |
|---|---|---|
| 31 | XIP_ENABLE | Gates whether XIP requests are served. When 0, XIP reads still complete, with DECERR. |
| 20:13 | DUMMY_CYCLES | |
| 12 | ADDR_WIDTH | 0 = 24-bit, 1 = 32-bit |
| 11:10 | DATA_LINES | Same encoding as CTRL_CMD |
| 9:8 | ADDR_LINES | Same encoding as CTRL_CMD |
| 7:0 | OPCODE | Fixed read opcode used for every XIP access |

`XIP_ENABLE` is bit 31 on purpose. Bit 0 would overlap `OPCODE[7:0]`, which was an early bug.

## 6. Register-path operation

### 6.1 Software sequence

1. Write `ADDR` and `NUM_BYTES`.
2. For a write transaction, write the first byte to `TX_DATA`.
3. Write `CTRL_CMD` with START set (and `DIR`, widths, dummy count and opcode).
4. Poll `STATUS` until BUSY clears and DONE is set. For reads, read `RX_DATA`; for writes, supply further bytes to `TX_DATA` as TX_READY indicates.
5. Write 1 to `STATUS.DONE` to clear it (optional, since the next START clears it too).

### 6.2 Hardware sequence

1. `axi4L_slave` stores the registers. On a CTRL_CMD write with bit 21 set it pulses `qspi_start` for one `ACLK` cycle.
2. `cdc_bridge` carries the pulse into `qclk`. The configuration (`ctrl_cmd`, `addr`, `num_bytes`) is latched by the engine and frozen for the transaction.
3. The engine sets BUSY and lowers `cs_n`. It then walks four phases in order:
   - **CMD:** opcode on `io0`, single line.
   - **ADDR:** 24 or 32 bits, 1, 2 or 4 bits per `qclk` according to `ADDR_LINES`.
   - **DUMMY:** `DUMMY_CYCLES` clocks with the bus turned around.
   - **DATA:** `NUM_BYTES` bytes at 1, 2 or 4 bits per `qclk` according to `DATA_LINES`.
4. Reads: each completed byte pulses `rx_valid` and is captured into `RX_DATA`. Writes: the engine pulses `tx_req` before each new byte. The first byte is pre-loaded at START, because no `tx_req` can precede byte 0.
5. At the end of DATA the engine drops BUSY, raises `cs_n`, and pulses `done`. `cdc_bridge` returns the events to `ACLK` and `axi4L_slave` updates STATUS.

Phase order is `CMD(00) > ADDR(01) > DUMMY(10) > DATA(11) > CMD(00)`. See waveform 1.

## 7. XIP path operation

1. A read on the AXI port lands in `[XIP_BASE, XIP_BASE + XIP_SIZE)`. `qspi_unified_slave` forwards it to `qspi_xip_slave`.
2. `ARREADY` is asserted whenever the XIP FSM is idle, **regardless of `XIP_ENABLE`**. A disabled or out-of-range request is accepted and then answered with DECERR. (Gating ARREADY on the enable bit was an early AXI protocol violation: a slave must always eventually respond.)
3. The range check uses the live `ARADDR`, not the latched copy, because the latch has not updated yet on the accepting cycle.
4. Flash address = `ARADDR - XIP_BASE`. The engine is started with `DIR = read`, the width, opcode and dummy fields from `XIP_CFG`, and `NUM_BYTES = 4` (one word per transaction).
5. The FSM states are `XIP_IDLE, XIP_REQ, XIP_COLLECT, XIP_RESP, XIP_SETTLE`. `XIP_SETTLE` is a one-cycle gap so that a fast error completion cannot re-accept a lingering `ARVALID` from the master.
6. The four bytes are assembled **little-endian**: the first byte (lowest address) lands in bits [7:0]. See waveform 10.
7. The response is OKAY (`RRESP = 00`) on success, or DECERR (`RRESP = 10`) if XIP is disabled, the address is out of range, or the engine reported an error.

Every XIP read pays the full CMD + ADDR + DUMMY overhead of a new transaction. There is no continuous-read mode (see 9.2).

## 8. Arbitration, abort and error handling

### 8.1 Arbitration

- Grant states: `GNT_NONE`, `GNT_REG`, `GNT_XIP`. If both request on the same cycle, the register path wins.
- Each requester only ever sees `busy`, `done`, `error`, `tx_req` and `rx_valid` while it holds the grant. `rx_data` is passed through ungated: it has no meaning without that requester's own `rx_valid`, and gating it broke register-path reads after a transaction.
- **Grant release** needs two things: the arbiter must first have seen BUSY go high for this transaction (otherwise the CDC round trip lets it release a grant before the transaction starts), and BUSY must have stayed low for `DRAIN_CYCLES` (= 4) so late `rx_valid` / `tx_req` pulses still reach their owner.
- Because both paths now share one AXI port, two **reads** can never be concurrent. A register-path START (write channels) and an XIP read (read channel) can still arrive together, since AW/W and AR are independent channels. See 10.3.

### 8.2 Abort

- Writing CTRL_CMD bit 23 pulses `abort`. The arbiter forwards it to the engine **unconditionally, regardless of who holds the grant**. A register-path abort can therefore cut short an XIP transaction. This is deliberate: abort is a recovery mechanism, and gating it would leave a hung XIP transaction recoverable only by reset.
- The engine drops BUSY and `cs_n` the same cycle. `done` never pulses on an abort.
- If XIP held the grant, `qspi_xip_slave` leaves `XIP_COLLECT` for `XIP_RESP` after `XIP_DRAIN_CYCLES` (= 6) and answers DECERR. See waveform 9.

### 8.3 Timeout

- The engine counts `qclk` cycles while BUSY. At `TIMEOUT_CYCLES` it behaves as an abort and sets ERROR (sticky, W1C). A legitimate transfer must never reach this limit, so the default is very large. The testbench overrides it (200) to test it quickly.
- On the XIP side a timeout is reported as DECERR. The register path must still work afterwards.

### 8.4 Sticky-bit rules

- `STATUS.DONE` is sticky because the raw `done` pulse is a single `ACLK` cycle and cannot be polled.
- `DONE` and `ERROR` clear by writing 1 to their own bit only. Clearing one must not disturb the other bits (waveform 7).
- `TX_READY` and `RX_READY` clear on their data-register access, not through STATUS.

### 8.5 AXI response summary

| Situation | Response |
|---|---|
| Any register read at a valid offset | OKAY |
| Register read at an offset that is neither valid nor in the XIP window | DECERR |
| Register write | OKAY. The write channel always returns OKAY, and unmapped write offsets are ignored (see 10.3). |
| XIP read, success | OKAY, 32-bit little-endian word |
| XIP read with `XIP_ENABLE = 0`, out of range, timeout or abort | DECERR |

## 9. Known limitations

### 9.1 No real flow control

`TX_READY` / `RX_READY` only tell software that a byte needs servicing. The engine does **not** stall for it: the byte stream runs at full `qclk` speed regardless. True backpressure would need the engine's counters paused mid-transfer, which is only safe if `qclk` is gated before reaching the SCLK pin. That is a top-level or board matter outside these RTL files and was never confirmed.

### 9.2 No continuous-read mode for XIP

There is no mode-bits phase, so every XIP access repeats the full command and address. This is correct for occasional memory-mapped reads but likely too slow to execute code from.

### 9.3 Other constraints to keep in mind

- XIP fetches one fixed 4-byte word per transaction.
- `NUM_BYTES` effective range is 0-4095 (12 bits).
- `ctrl_cmd`, `addr` and `num_bytes` are not synchronised and must be stable while BUSY.

## 10. Verification

### 10.1 Environment

- Testbenches: `sim/tb_qspi_axi_top.sv` (core, register path, 18 tests) and `sim/tb_xip_qspi_axi_top.sv` (XIP, 11 tests). Both are self-checking and print `[PASS]` / `[FAIL]` lines and a `SUMMARY`.
- Flash model: `emu/qspi_flash_model.sv`. Its memory is `mem[i] = i`, so any wrong byte is identifiable from its value, and it records bytes written to it. It decodes the opcode itself, so it is independent of the DUT. Opcode `0xEB` there is a simplified, test-fixture-only quad variant.
- Simulation time unit is **picoseconds**.
- Both suites pass on Icarus Verilog and on Verilator 5.032. The commands are in the README and use `sim/filelist.f`, which lists every RTL file plus the flash model (it must include `rtl/axi/qspi_unified_slave.sv`, which the top level instantiates).

### 10.2 Test inventory

**Core suite (`tb_qspi_axi_top.sv`)**

| Area | Tests |
|---|---|
| Read widths | `read_single_1byte`, `read_dual_1byte`, `read_quad_1byte`, `read_quad_3byte_lastbyte` |
| Address / dummy options | `read_32bit_addr`, `read_dummy_zero`, `dual_line_address_phase`, `quad_line_address_phase`, `mixed_quad_addr_single_data` |
| Write direction | `write_single_1byte`, `write_quad_1byte` |
| Control and sequencing | `back_to_back_txns`, `start_while_busy_ignored`, `numbytes_256_truncation` |
| Status behaviour | `sticky_done_bit`, `tx_rx_ready_visibility` |
| Abort and timeout | `abort_midtransaction`, `timeout_safety_net` |

**XIP suite (`tb_xip_qspi_axi_top.sv`)**

| Area | Tests |
|---|---|
| Basic fetch | `xip_baseline_fetch`, `xip_dual_line_data_fetch`, `xip_quad_line_data_fetch`, `xip_back_to_back_fetches` |
| Rejection paths | `xip_disabled_reject`, `xip_out_of_range` |
| Shared port | `shared_port_register_then_xip_read` |
| Abort / timeout / recovery | `abort_cuts_short_xip_transaction`, `xip_timeout_reports_error`, `register_path_recovers_after_xip_timeout` |
| Robustness | `xip_cfg_write_mid_flight_does_not_corrupt` |

### 10.3 Gaps and open questions for DV

These come from reading the RTL and the test list. They are not confirmed failures.

1. **Register-path START against an XIP read in the same cycle.** The old same-cycle collision test was removed when the two paths were merged onto one AR channel. A START write (AW/W) and an XIP read (AR) can still coincide, and no test exercises it.
2. **Writes to unmapped or read-only offsets.** `BRESP` is always OKAY and the RTL appears to ignore them silently. Check this is the intended behaviour. Only *reads* of unmapped offsets return DECERR.
3. **No write-direction tests beyond single byte.** Multi-byte writes, dual-line writes and 32-bit-address writes are not covered by name.
4. **XIP with `ADDR_WIDTH = 1` (32-bit)**, a non-default `XIP_BASE` / `XIP_SIZE`, and addresses at the window edges (`BASE - 4`, `BASE + SIZE - 4`, `BASE + SIZE`) are not covered by name.
5. **Clock ratios.** `qclk_period` is a plusarg but the suites run at one default. Sweeping `qclk` both faster and slower than `ACLK` is the natural CDC stress.
6. **Reset during a transaction**, on either reset alone, is not covered.
7. **`WSTRB` partial writes** to the registers are not covered by name.
8. **Abort in each phase** (CMD, ADDR, DUMMY, DATA). The abort test hits one point in the CMD phase.
9. **Unaligned XIP addresses.** The 4-byte assembly and the flash-address translation for `ARADDR[1:0] != 0` are unspecified.
10. **NUM_BYTES = 0** behaviour is unspecified.
11. **Waveform 8 mismatch.** See Appendix A, capture 8.

### 10.4 Bugs found and fixed during bring-up

These are the corner cases that matter most for DV, because each one was a real failure mode.

**Engine and CDC (`qspi_engine.sv`, `cdc_bridge.sv`)**
- RX lost the first nibble/bit of every byte: `rx_valid` raced the final shift-register update. Fixed by building `rx_valid` from a one-cycle-delayed `byte_boundary`.
- Single and dual-line reads were corrupted by sampling all four IO lines regardless of the configured width.
- Write direction lost byte 0: TX data was never primed before the first byte-load point.
- TX shift register loaded one cycle late, corrupting every write (same non-blocking-assignment timing class as the RX bug).
- `NUM_BYTES` silently wrapped at 256 (only `num_bytes[7:0]` was used).

**Register and architecture changes**
- `STATUS.DONE` changed from a raw pulse to a sticky, W1C bit.
- Added global ABORT (CTRL_CMD bit 23).
- Added the timeout safety net and the ERROR bit.
- Added TX_READY / RX_READY.
- Verified dual and quad **address** phases for the first time, and the mixed combinations (quad address with single data).
- Added the memory-mapped XIP read path, with arbitration.

**XIP and arbiter (`qspi_arbiter.sv`, `qspi_xip_slave.sv`)**
- `rx_data` was wrongly gated by grant, breaking register-path reads after a transaction.
- Grant was released before the slower `rx_valid` / `tx_req` synchronisers delivered. Fixed with the drain margin.
- `ARREADY` was gated on `XIP_ENABLE`: a disabled XIP could hang a master forever.
- `XIP_CFG` enable bit overlapped the opcode field.
- `x_rx_data` was sampled one cycle early relative to when `cdc_bridge` settles it.
- Byte assembly was big-endian. Corrected to little-endian.
- A stale error from the previous transaction was visible to the next for a few cycles (CDC lag). Fixed by requiring BUSY to be seen high first for the current transaction.
- After abort became global, a normal completion could be misreported as an abort, because BUSY can drop before the last `rx_valid` arrives. Fixed with `XIP_DRAIN_CYCLES`.

---

## Appendix A. Waveform evidence

Captures from GTKWave on Verilator 5.032 runs, with signals added by full hierarchical path (for example `tb_qspi_axi_top.u_dut.u_qspi_engine.phase`). Images are in `images_waveforms/`. Captures 1-7 come from the core suite, 8-10 from the XIP suite.

**1. Basic read, phase by phase.** `read_quad_1byte`, about 90-1210 ps. Signals: `ACLK`, `qclk`, `qspi_start`, `phase`, `bit_cnt`, `cs_n`, `io0_out`, `io0_oe`, `busy_r`.
`phase` walks CMD, ADDR, DUMMY, DATA, CMD with the expected durations. `cs_n` and `busy_r` move together, `io0_oe` is only high during the transaction, and `io0_out` shows the opcode shifting out.
![basic read phases](images_waveforms/waveform_1_basic_read_phases.png)

**2. RX-timing fix.** `read_quad_1byte` at address 0x50 (chosen because its high nibble is non-zero), zoomed on the DATA tail. Signals: `byte_boundary`, `byte_boundary_d1`, `in_byte`, `qspi_rx_valid`.
When `byte_boundary` pulses, `in_byte` still reads `05`. One `qclk` later, at `byte_boundary_d1`, it reads the correct `50`. `qspi_rx_valid` is built from `byte_boundary_d1`.
![rx timing fix](images_waveforms/waveform_2_rx_timing_fix.png)

**3. TX priming fix.** `write_single_1byte`, about 3630-4750 ps. Signals: `axi_start`, `tx_data_hold`, `qspi_tx_data`, `tx_shift_byte`, `io0_out`.
`tx_data_hold` takes `AA` right after `axi_start`, without waiting for a `tx_req`. `tx_shift_byte` shifts `AA, 54, A8, 50, A0, 40, 80, 00` and `io0_out` produces 1,0,1,0,1,0,1,0 from the first bit.
![tx priming fix](images_waveforms/waveform_3_tx_priming_fix.png)

**4. CDC pulse crossing (ACLK to qclk).** About 90-250 ps. Signals: `axi_start`, `u_start_sync.toggle_src`, `sync_ff1/2/3`, `qspi_start`.
`toggle_src` flips with `axi_start`. The three sync flops follow one `qclk` apart. `qspi_start` appears in the one cycle where `sync_ff2` and `sync_ff3` differ.
![cdc pulse sync](images_waveforms/waveform_4_cdc_pulse_sync.png)

**5. Abort mid-transaction.** `abort_midtransaction`, about 22140-22570 ps. Signals: `phase`, `bit_cnt`, `qspi_abort`, `busy_r`, `cs_n`, `qspi_done`.
`qspi_abort` fires while `bit_cnt` is mid-count in the CMD phase. `busy_r` and `cs_n` change the same cycle, and `qspi_done` stays low throughout.
![abort mid transaction](images_waveforms/waveform_5_abort_midtransaction.png)

**6. Timeout safety net.** `timeout_safety_net` (this instance has `TIMEOUT_CYCLES = 200`), about 22560-26945 ps. Signals: `timeout_cnt`, `timeout_hit`, `error_r`, `busy_r`.
`busy_r` stays high for about 4.3 us (roughly 215 `qclk` cycles at 20 ns) while `timeout_cnt` counts. The zoomed capture shows the trigger: `timeout_hit` for exactly one cycle at the threshold, `error_r` set on the next edge, and `busy_r` dropping on that edge.
![timeout safety net](images_waveforms/waveform_6_timeout_safety_net.png)
![timeout trigger, zoomed](images_waveforms/waveform_6b_timeout_safety_net_zoomed.png)

**7. Sticky DONE.** `sticky_done_bit`, about 16800-18020 ps. Signals: `qspi_done`, `done_latched`, `AXI_RDATA`, `status_w1c_done`.
`qspi_done` is a brief pulse while `done_latched` stays set after it. STATUS reads `0x0E`, then `0x0C` after the W1C: only bit 1 cleared, TX_READY and RX_READY undisturbed.
![sticky done](images_waveforms/waveform_7_sticky_done_bit.png)

**8. XIP grant.** XIP suite, about 2-3 ns. Signals: `grant`, `a_start`, `x_start`, `axi_start`.
The capture shows `x_start` and `axi_start` pulsing together with `a_start` low, `grant` going from `00` to `10` (`GNT_XIP`) and returning to `00` once the transaction and drain margin finish. **This is an XIP-only grant.** It does not show the register-path-versus-XIP tie-break that an earlier version of this document described, and that same-cycle collision test no longer exists (see 10.3, item 1). Replace this capture if a collision test is added.
![xip grant](images_waveforms/waveform_8_xip_status_concurrent.png)

**9. Global abort during XIP.** `abort_cuts_short_xip_transaction`, about 3465-3845 ps. Signals: `grant`, `qspi_abort`, `axi_abort`, `state`, `fetch_error`, `XIP_RRESP`.
`grant` is `10` (XIP) when `qspi_abort` pulses, and `axi_abort` pulses in the same cycle. About 130 ps later, after the drain margin, `state` moves `010` to `011` to `100` to `000`, `fetch_error` sets, and `XIP_RRESP` reads `10` (DECERR).
![global abort during xip](images_waveforms/waveform_9_global_abort_xip.png)

**10. Little-endian assembly.** `xip_baseline_fetch`, about 145-1805 ps. Signals: `x_rx_valid_d1`, `byte_count`, `assemble_reg`, `XIP_RDATA`.
Each `x_rx_valid_d1` pulse places a byte at its own position. `assemble_reg` builds up as `…10`, `…1110`, `…121110`, then `13121110`, so the lowest-address byte ends in the low byte of the word.
![little endian assembly](images_waveforms/waveform_10_little_endian_assembly.png)
