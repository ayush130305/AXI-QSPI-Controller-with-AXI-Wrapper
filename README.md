# QSPI Controller with AXI4-Lite Wrapper

A QSPI flash controller with an AXI4-Lite register interface. A CPU or AXI master controls a QSPI flash transaction by writing and reading registers, while a separate QSPI engine generates the serial protocol on `cs_n` and `io0`-`io3`. A second, memory-mapped, read-only XIP window lets the CPU read the flash as ordinary address space. Both paths share one AXI4-Lite slave port and one engine.

## Features

- AXI4-Lite slave with a register bank and a read-only 16 MB XIP window on one port
- Single, dual and quad lines, set separately for the address and data phases
- 24-bit and 32-bit addresses, 0 to 255 dummy cycles, transfers of up to 4095 bytes
- Commands with no address phase (`CTRL_CMD` bit 24, `NO_ADDR`) for WREN, RDID, RDSR, WRSR and similar, and opcode-only commands with `NUM_BYTES = 0`
- ABORT and a timeout safety net, with sticky DONE and ERROR status
- Separate AXI (`ACLK`) and QSPI (`qclk`) clocks, crossed with synchronisers
- Works with any external QSPI flash: opcode, widths and dummy count are all programmed, nothing is chip-specific

## Documentation

| Document | Contents |
|---|---|
| [docs/design_note.md](./docs/design_note.md) | Architecture and block diagram, interface, operation, arbitration, abort and timeout, limitations, test inventory, glossary, core concepts (CDC, synchronisers, QSPI phases, XIP), waveform evidence. Start here. |
| [docs/register_map.md](./docs/register_map.md) | Register offsets and bit layouts |

## Repository layout

The design is three layers on one shared engine: an AXI4-Lite register base, the QSPI core, and the XIP read path on top. The RTL folders follow that split.

```
QSPI_with_AXI4_wrapper/
├── README.md
├── docs/
│   ├── design_note.md            architecture, registers, verification, waveforms (start here)
│   ├── register_map.md           register reference
│   ├── images_diagrams/          block diagram and synchroniser diagrams
│   └── images_waveforms/         waveform captures 1-10
├── rtl/
│   ├── qspi_axi_top.sv           top level: parameters, ports, wiring
│   ├── axi/                      AXI4-Lite side (the base layer)
│   │   ├── qspi_unified_slave.sv   single AXI port; routes register / XIP / invalid
│   │   └── axi4L_slave.sv          register bank, STATUS bits, XIP_CFG
│   ├── qspi/                     QSPI core, shared by both paths
│   │   ├── qspi_engine.sv          CMD > ADDR > DUMMY > DATA shift engine, timeout
│   │   ├── qspi_arbiter.sv         grants the engine to register path or XIP, global abort
│   │   └── qspi_axi_pkg.sv         register offsets, bit positions, enums
│   ├── xip/                      memory-mapped read path
│   │   └── qspi_xip_slave.sv       address window, 4-byte fetch, little-endian assembly
│   └── cdc/                      ACLK <-> qclk crossing
│       ├── cdc_bridge.sv
│       └── pulse_sync.sv
├── sim/
│   ├── filelist.f                RTL + emulation model compile list
│   ├── tb_qspi_axi_top.sv        core register-path testbench (25 tests)
│   ├── tb_xip_qspi_axi_top.sv    XIP testbench (11 tests)
│   ├── build/                    simulator output (Verilator obj_dir, sim binaries)
│   └── waves/                    VCD dumps
└── emu/
    └── qspi_flash_model.sv       QSPI flash model used by the testbenches (not part of the design)
```

## Running the testbenches

Quick start (Icarus Verilog), from the repository root:
```bash
cd sim && mkdir -p build
iverilog -g2012 -s tb_qspi_axi_top -o build/core_test -c filelist.f tb_qspi_axi_top.sv && vvp build/core_test | tail -3
```
Expected last line: `SUMMARY: 25 pass, 0 fail`. A failing test prints a `[FAIL]` line with the value it got and the value it expected.

Requires Verilator 5.x or Icarus Verilog. Run from the `sim` folder. `filelist.f` lists every RTL file and the flash model, so the commands stay short. The simulation time unit is **picoseconds**.

**Verilator**
```bash
cd sim

# core register-path suite, expect: SUMMARY: 25 pass, 0 fail
verilator --binary --timing --trace -Wno-fatal --top-module tb_qspi_axi_top \
  --Mdir build/obj_core -f filelist.f tb_qspi_axi_top.sv
./build/obj_core/Vtb_qspi_axi_top

# XIP suite, expect: SUMMARY: 11 pass, 0 fail
verilator --binary --timing --trace -Wno-fatal --top-module tb_xip_qspi_axi_top \
  --Mdir build/obj_xip -f filelist.f tb_xip_qspi_axi_top.sv
./build/obj_xip/Vtb_xip_qspi_axi_top
```

**Icarus Verilog**
```bash
cd sim
mkdir -p build
iverilog -g2012 -s tb_qspi_axi_top     -o build/core_test -c filelist.f tb_qspi_axi_top.sv     && vvp build/core_test
iverilog -g2012 -s tb_xip_qspi_axi_top -o build/xip_test  -c filelist.f tb_xip_qspi_axi_top.sv && vvp build/xip_test
```

Waveform dumps (`*.vcd`) are written to the directory you run from (`sim/`). Move them into `sim/waves/` if you want to keep them.

## Status

All 25 core and 11 XIP tests pass on Icarus Verilog and on Verilator 5.032. Known limitations (no real flow control, no continuous-read mode for XIP) are in [docs/design_note.md](./docs/design_note.md), section 9.
