// qspi_unified_slave.sv
//
// Merges the two previously-separate AXI4-Lite slave ports (register path
// and memory-mapped XIP) into ONE external AXI4-Lite slave port. Built
// specifically for connecting a single-master-port CPU (e.g. PicoRV32's
// picorv32_axi, which has one AXI4-Lite master port, not separate
// instruction/data buses) without requiring the CPU-integration side to
// build its own external address decoder.
//
// Write channels (AW/W/B) need NO decoding at all: XIP is read-only by
// design, so every write unconditionally goes to the register path.
// Read channels (AR/R) need address-based routing, AND a genuine third
// case this module discovered during integration: axi4L_slave.sv's own
// read decode silently returns 0/OKAY for any address it doesn't
// recognize (a `default: AXI_RDATA = '0` case, with no error response) -
// reasonable on its own when that module only ever saw its own dedicated
// port, but wrong once a single shared port also has XIP addresses in
// the same space, since a genuinely invalid address (neither a real
// register offset nor inside the XIP window) would otherwise silently
// return garbage instead of an error. Rather than modify axi4L_slave.sv
// itself, this module intercepts that case directly: an address that is
// neither in the XIP window nor a recognized register offset gets DECERR
// from THIS layer, without ever being forwarded to either internal slave.

import qspi_axi_pkg::*;

module qspi_unified_slave #(
  parameter logic [31:0] XIP_BASE = 32'h0100_0000,
  parameter logic [31:0] XIP_SIZE = 32'h0100_0000
)(
  input  logic        ACLK,
  input  logic        ARESETn,

  // Single external AXI4-Lite slave port - what a real single-master-port
  // CPU (or any AXI4-Lite master) connects to.
  input  logic [31:0] S_AXI_AWADDR, 
  input  logic        S_AXI_AWVALID,
  output logic        S_AXI_AWREADY,
  input  logic [31:0] S_AXI_WDATA,
  input  logic [3:0]  S_AXI_WSTRB,
  input  logic        S_AXI_WVALID,
  output logic        S_AXI_WREADY,
  output logic [1:0]  S_AXI_BRESP,
  output logic        S_AXI_BVALID,
  input  logic        S_AXI_BREADY,
  input  logic [31:0] S_AXI_ARADDR,
  input  logic        S_AXI_ARVALID,
  output logic        S_AXI_ARREADY,
  output logic [31:0] S_AXI_RDATA,
  output logic [1:0]  S_AXI_RRESP,
  output logic        S_AXI_RVALID,
  input  logic        S_AXI_RREADY,

  // Internal port to axi4L_slave.sv (register path) - full AXI4-Lite,
  // unmodified port names matching that module's existing interface.
  output logic [31:0] REG_AWADDR,
  output logic        REG_AWVALID,
  input  logic        REG_AWREADY,
  output logic [31:0] REG_WDATA,
  output logic [3:0]  REG_WSTRB,
  output logic        REG_WVALID,
  input  logic        REG_WREADY,
  input  logic [1:0]  REG_BRESP,
  input  logic        REG_BVALID,
  output logic        REG_BREADY,
  output logic [31:0] REG_ARADDR,
  output logic        REG_ARVALID,
  input  logic        REG_ARREADY,
  input  logic [31:0] REG_RDATA,
  input  logic [1:0]  REG_RRESP,
  input  logic        REG_RVALID,
  output logic        REG_RREADY,

  // Internal port to qspi_xip_slave.sv (XIP path) - AR/R only, since XIP
  // is read-only.
  output logic [31:0] XIP_ARADDR,
  output logic        XIP_ARVALID,
  input  logic        XIP_ARREADY,
  input  logic [31:0] XIP_RDATA,
  input  logic [1:0]  XIP_RRESP,
  input  logic        XIP_RVALID,
  output logic        XIP_RREADY
);

  // ---- Write channels: unconditional pass-through to the register path ----
  // XIP never accepts writes, so there is nothing to decode here at all.
  assign REG_AWADDR    = S_AXI_AWADDR;
  assign REG_AWVALID   = S_AXI_AWVALID;
  assign S_AXI_AWREADY = REG_AWREADY;

  assign REG_WDATA     = S_AXI_WDATA;
  assign REG_WSTRB     = S_AXI_WSTRB;
  assign REG_WVALID    = S_AXI_WVALID;
  assign S_AXI_WREADY  = REG_WREADY;

  assign S_AXI_BRESP   = REG_BRESP;
  assign S_AXI_BVALID  = REG_BVALID;
  assign REG_BREADY    = S_AXI_BREADY;

  // ---- Read channels: 3-way address-based routing ----
  // addr_in_xip_range reads directly off the LIVE S_AXI_ARADDR - this is
  // safe (unlike checking a locally-latched copy on the same cycle it
  // updates, which caused a real bug earlier in this project's XIP work)
  // because S_AXI_ARADDR is an externally-driven input the AXI protocol
  // guarantees stays stable for as long as S_AXI_ARVALID is asserted -
  // there is no local NBA update racing against this read.
  logic addr_in_xip_range;
  assign addr_in_xip_range = (S_AXI_ARADDR >= XIP_BASE) &&
                              (S_AXI_ARADDR <  (XIP_BASE + XIP_SIZE));

  // Valid register offsets are 0x00 through REG_XIP_CFG (0x18) inclusive,
  // each a 4-byte-aligned word - REG_XIP_CFG + 4 is the first byte past
  // the last valid register.
  logic addr_in_reg_range;
  assign addr_in_reg_range = (!addr_in_xip_range) &&
                              (S_AXI_ARADDR < (REG_XIP_CFG + 32'd4));

  logic addr_invalid;
  assign addr_invalid = !addr_in_xip_range && !addr_in_reg_range;

  assign REG_ARADDR  = S_AXI_ARADDR;
  assign XIP_ARADDR  = S_AXI_ARADDR;
  assign REG_ARVALID = S_AXI_ARVALID && addr_in_reg_range;
  assign XIP_ARVALID = S_AXI_ARVALID && addr_in_xip_range;

  // An invalid address is accepted immediately (ARREADY high) rather than
  // ever forwarded anywhere - same AXI principle already established in
  // qspi_xip_slave.sv itself: a slave must always eventually respond,
  // even with an error, never silently withhold the handshake.
  assign S_AXI_ARREADY = addr_invalid  ? 1'b1 :
                          addr_in_xip_range ? XIP_ARREADY : REG_ARREADY;

  // read_target_t is latched at the AR handshake, and is what actually
  // governs R-channel routing - NOT the live address, since by the time
  // the R response arrives, S_AXI_ARADDR may already reflect a different,
  // newer pending request.
  typedef enum logic [1:0] {TARGET_REG, TARGET_XIP, TARGET_INVALID} read_target_t;
  read_target_t read_target;

  // A one-cycle-pulsed "fake" response for the invalid-address case,
  // since there's no real slave behind it to generate RVALID.
  logic invalid_resp_pending;

  always_ff @(posedge ACLK or negedge ARESETn) begin
    if (!ARESETn) begin
      read_target          <= TARGET_REG;
      invalid_resp_pending <= 1'b0;
    end else begin
      if (S_AXI_ARVALID && S_AXI_ARREADY) begin
        read_target          <= addr_invalid ? TARGET_INVALID :
                                 addr_in_xip_range ? TARGET_XIP : TARGET_REG;
        invalid_resp_pending <= addr_invalid;
      end else if (invalid_resp_pending && S_AXI_RREADY) begin
        invalid_resp_pending <= 1'b0;
      end
    end
  end

  assign S_AXI_RDATA  = (read_target == TARGET_XIP) ? XIP_RDATA  :
                         (read_target == TARGET_REG) ? REG_RDATA : '0;
  assign S_AXI_RRESP  = (read_target == TARGET_INVALID) ? 2'b10 : // DECERR
                         (read_target == TARGET_XIP)     ? XIP_RRESP :
                                                            REG_RRESP;
  assign S_AXI_RVALID = (read_target == TARGET_INVALID) ? invalid_resp_pending :
                         (read_target == TARGET_XIP)     ? XIP_RVALID :
                                                            REG_RVALID;

  // Only the currently-latched target ever sees RREADY - the other side
  // must never think its own (nonexistent, in this cycle) response was
  // consumed.
  assign REG_RREADY = (read_target == TARGET_REG) ? S_AXI_RREADY : 1'b0;
  assign XIP_RREADY = (read_target == TARGET_XIP) ? S_AXI_RREADY : 1'b0;

endmodule