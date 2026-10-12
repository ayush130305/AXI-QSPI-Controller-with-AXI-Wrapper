# QSPI Controller: Register Map

Moved out of the top-level README. Back to [README](../README.md).

All registers are 32-bit and accessed on 4-byte-aligned offsets. Unlisted bits are reserved and read as 0.

| Offset | Name         | Access | Notes |
|--------|--------------|--------|-------|
| 0x00   | CTRL_CMD     | R/W    | see bit layout below |
| 0x04   | ADDR         | R/W    | flash address, 24 or 32-bit depending on CTRL_CMD |
| 0x08   | NUM_BYTES    | R/W    | byte count, 12-bit effective range (0-4095). 0 = no data phase |
| 0x0C   | STATUS       | R/W*   | see bit layout below (*STATUS is written only for W1C bits) |
| 0x10   | TX_DATA      | W      | next byte to transmit (write direction) |
| 0x14   | RX_DATA      | R      | last byte received (read direction) |
| 0x18   | XIP_CFG      | R/W    | see bit layout below; configures every XIP-triggered access |

**CTRL_CMD bits:**

| Bits | Field | Notes |
|------|-------|-------|
| 31:25 | reserved | |
| 24 | NO_ADDR | 1 = skip the address phase: the transaction is opcode, optional dummy cycles, then data. Used for WREN, RDID, RDSR, WRSR, chip erase and similar. With NUM_BYTES = 0 it is opcode only. Reset value 0 (address phase present) |
| 23 | ABORT | strobe, not stored. Write 1 to immediately cancel any in-progress transaction, any phase, **regardless of whether it was started via the register path or via XIP** |
| 22 | DIR | 0=read, 1=write |
| 21 | START | strobe, not stored. Write 1 to begin a transaction; ignored while BUSY |
| 20:13 | DUMMY_CYCLES | 0-255 |
| 12 | ADDR_WIDTH | 0=24-bit, 1=32-bit |
| 11:10 | DATA_LINES | 0=single, 1=dual, 2=quad |
| 9:8 | ADDR_LINES | 0=single, 1=dual, 2=quad |
| 7:0 | OPCODE | flash command byte |

**STATUS bits:**

| Bit | Field | Type | Notes |
|-----|-------|------|-------|
| 0 | BUSY | RO, level | transaction in progress |
| 1 | DONE | sticky, W1C | latched on completion; write 1 to clear (also auto-clears on next START) |
| 2 | TX_READY | sticky, auto-clear | set when the engine wants the next TX byte; clears on TX_DATA write. **Informational only - see [design_note.md](./design_note.md) section 9.1.** |
| 3 | RX_READY | sticky, auto-clear | set when a byte has landed in RX_DATA; clears on RX_DATA read. **Informational only - see [design_note.md](./design_note.md) section 9.1.** |
| 4 | ERROR | sticky, W1C | set if the timeout safety net fires (busy stuck far longer than any legitimate transfer should take) |
| 31:5 | reserved | | |

**XIP_CFG bits:** (set once at boot, before enabling XIP - not re-specified per access, since a CPU fetch has no way to program a register before each read)

| Bits | Field | Notes |
|------|-------|-------|
| 31 | XIP_ENABLE | 1 = XIP reads are served. 0 = an XIP read is still accepted but answered with DECERR (the slave never leaves a request unanswered) |
| 20:13 | DUMMY_CYCLES | |
| 12 | ADDR_WIDTH | 0=24-bit, 1=32-bit |
| 11:10 | DATA_LINES | same encoding as CTRL_CMD |
| 9:8 | ADDR_LINES | same encoding |
| 7:0 | OPCODE | fixed read opcode used for every XIP access |

**Access rules** (full detail in [design_note.md](./design_note.md) section 8.5):

- Reads of an offset that is neither listed above nor inside the XIP window return DECERR.
- Writes to the XIP window or to an unlisted offset return OKAY and are ignored.
- `ADDR`, `NUM_BYTES` and `CTRL_CMD` must not be changed while BUSY.
