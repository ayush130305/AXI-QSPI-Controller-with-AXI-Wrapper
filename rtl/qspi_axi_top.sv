module qspi_axi_top #(
  parameter int unsigned TIMEOUT_CYCLES = 20'hFFFFF,
  parameter logic [31:0] XIP_CFG_RESET  = 32'h0, // see axi4L_slave.sv - passed through unchanged
  parameter logic [31:0] XIP_BASE        = 32'h0100_0000,
  parameter logic [31:0] XIP_SIZE        = 32'h0100_0000
)(
  input  logic        ACLK,
  input  logic        ARESETn,   // active-low, AXI-side reset

  input  logic        qclk,
  input  logic        qclk_rst,  // active-high, QSPI-side reset

  //Single external AXI4-Lite slave interface - covers both the register
  //path and the memory-mapped XIP window, routed internally by
  //qspi_unified_slave.sv based on address. Built this way specifically so
  //a single-master-port CPU (e.g. PicoRV32's picorv32_axi) connects
  //directly, with no external address decoder needed on the integrator's
  //side. Writes always go to the register path (XIP is read-only);
  //reads are routed by address range.
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

  //QSPI physical pins (external - to the real flash chip)
  output logic        cs_n,

  output logic        io0_out, output logic io0_oe, input logic io0_in,
  output logic        io1_out, output logic io1_oe, input logic io1_in,
  output logic        io2_out, output logic io2_oe, input logic io2_in,
  output logic        io3_out, output logic io3_oe, input logic io3_in
);

  //Internal wiring: qspi_unified_slave <-> axi4L_slave (register path,
  //full AXI4-Lite)
  logic [31:0] u_reg_awaddr;
  logic        u_reg_awvalid;
  logic        u_reg_awready;
  logic [31:0] u_reg_wdata;
  logic [3:0]  u_reg_wstrb;
  logic        u_reg_wvalid;
  logic        u_reg_wready;
  logic [1:0]  u_reg_bresp;
  logic        u_reg_bvalid;
  logic        u_reg_bready;
  logic [31:0] u_reg_araddr;
  logic        u_reg_arvalid;
  logic        u_reg_arready;
  logic [31:0] u_reg_rdata;
  logic [1:0]  u_reg_rresp;
  logic        u_reg_rvalid;
  logic        u_reg_rready;

  //Internal wiring: qspi_unified_slave <-> qspi_xip_slave (XIP path,
  //AR/R only - read-only)
  logic [31:0] u_xip_araddr;
  logic        u_xip_arvalid;
  logic        u_xip_arready;
  logic [31:0] u_xip_rdata;
  logic [1:0]  u_xip_rresp;
  logic        u_xip_rvalid;
  logic        u_xip_rready;

  //Internal wiring: axi4L_slave <-> qspi_arbiter (ACLK domain, register path)
  logic        int_a_start;
  logic        int_a_abort;
  logic [31:0] int_a_ctrl_cmd;
  logic [31:0] int_a_addr;
  logic [31:0] int_a_num_bytes;
  logic        int_a_busy;
  logic        int_a_done;
  logic        int_a_error;
  logic [7:0]  int_a_tx_data;
  logic        int_a_tx_req;
  logic [7:0]  int_a_rx_data;
  logic        int_a_rx_valid;
  logic [31:0] int_xip_cfg;

  //Internal wiring: qspi_xip_slave <-> qspi_arbiter (ACLK domain, XIP path)
  logic        int_x_start;
  logic [31:0] int_x_ctrl_cmd;
  logic [31:0] int_x_addr;
  logic [31:0] int_x_num_bytes;
  logic        int_x_busy;
  logic        int_x_done;
  logic        int_x_error;
  logic [7:0]  int_x_rx_data;
  logic        int_x_rx_valid;

  //Internal wiring: qspi_arbiter <-> cdc_bridge (ACLK domain, merged/single path -
  //same role int_a_* played before the arbiter existed)
  logic        int_m_start;
  logic        int_m_abort;
  logic [31:0] int_m_ctrl_cmd;
  logic [31:0] int_m_addr;
  logic [31:0] int_m_num_bytes;
  logic        int_m_busy;
  logic        int_m_done;
  logic        int_m_error;
  logic [7:0]  int_m_tx_data;
  logic        int_m_tx_req;
  logic [7:0]  int_m_rx_data;
  logic        int_m_rx_valid;

  //Internal wiring: cdc_bridge <-> qspi_engine (qclk domain)
  logic        int_q_start;
  logic        int_q_abort;
  logic [31:0] int_q_ctrl_cmd;
  logic [31:0] int_q_addr;
  logic [31:0] int_q_num_bytes;
  logic        int_q_busy;
  logic        int_q_done;
  logic        int_q_error;
  logic [7:0]  int_q_tx_data;
  logic        int_q_tx_req;
  logic [7:0]  int_q_rx_data;
  logic        int_q_rx_valid;

  qspi_unified_slave #(
    .XIP_BASE (XIP_BASE),
    .XIP_SIZE (XIP_SIZE)
  ) u_unified_slave (
    .ACLK    (ACLK),
    .ARESETn (ARESETn),

    .S_AXI_AWADDR  (S_AXI_AWADDR),
    .S_AXI_AWVALID (S_AXI_AWVALID),
    .S_AXI_AWREADY (S_AXI_AWREADY),
    .S_AXI_WDATA   (S_AXI_WDATA),
    .S_AXI_WSTRB   (S_AXI_WSTRB),
    .S_AXI_WVALID  (S_AXI_WVALID),
    .S_AXI_WREADY  (S_AXI_WREADY),
    .S_AXI_BRESP   (S_AXI_BRESP),
    .S_AXI_BVALID  (S_AXI_BVALID),
    .S_AXI_BREADY  (S_AXI_BREADY),
    .S_AXI_ARADDR  (S_AXI_ARADDR),
    .S_AXI_ARVALID (S_AXI_ARVALID),
    .S_AXI_ARREADY (S_AXI_ARREADY),
    .S_AXI_RDATA   (S_AXI_RDATA),
    .S_AXI_RRESP   (S_AXI_RRESP),
    .S_AXI_RVALID  (S_AXI_RVALID),
    .S_AXI_RREADY  (S_AXI_RREADY),

    .REG_AWADDR  (u_reg_awaddr),
    .REG_AWVALID (u_reg_awvalid),
    .REG_AWREADY (u_reg_awready),
    .REG_WDATA   (u_reg_wdata),
    .REG_WSTRB   (u_reg_wstrb),
    .REG_WVALID  (u_reg_wvalid),
    .REG_WREADY  (u_reg_wready),
    .REG_BRESP   (u_reg_bresp),
    .REG_BVALID  (u_reg_bvalid),
    .REG_BREADY  (u_reg_bready),
    .REG_ARADDR  (u_reg_araddr),
    .REG_ARVALID (u_reg_arvalid),
    .REG_ARREADY (u_reg_arready),
    .REG_RDATA   (u_reg_rdata),
    .REG_RRESP   (u_reg_rresp),
    .REG_RVALID  (u_reg_rvalid),
    .REG_RREADY  (u_reg_rready),

    .XIP_ARADDR  (u_xip_araddr),
    .XIP_ARVALID (u_xip_arvalid),
    .XIP_ARREADY (u_xip_arready),
    .XIP_RDATA   (u_xip_rdata),
    .XIP_RRESP   (u_xip_rresp),
    .XIP_RVALID  (u_xip_rvalid),
    .XIP_RREADY  (u_xip_rready)
  );

  axi4L_slave #(
    .XIP_CFG_RESET (XIP_CFG_RESET)
  ) u_axi_slave (
    .ACLK        (ACLK),
    .ARESETn     (ARESETn),

    .AXI_AWADDR  (u_reg_awaddr),
    .AXI_AWVALID (u_reg_awvalid),
    .AXI_AWREADY (u_reg_awready),

    .AXI_WDATA   (u_reg_wdata),
    .AXI_WSTRB   (u_reg_wstrb),
    .AXI_WVALID  (u_reg_wvalid),
    .AXI_WREADY  (u_reg_wready),

    .AXI_BRESP   (u_reg_bresp),
    .AXI_BVALID  (u_reg_bvalid),
    .AXI_BREADY  (u_reg_bready),

    .AXI_ARADDR  (u_reg_araddr),
    .AXI_ARVALID (u_reg_arvalid),
    .AXI_ARREADY (u_reg_arready),

    .AXI_RDATA   (u_reg_rdata),
    .AXI_RRESP   (u_reg_rresp),
    .AXI_RVALID  (u_reg_rvalid),
    .AXI_RREADY  (u_reg_rready),

    .qspi_start     (int_a_start),
    .qspi_abort     (int_a_abort),
    .qspi_ctrl_cmd  (int_a_ctrl_cmd),
    .qspi_addr      (int_a_addr),
    .qspi_num_bytes (int_a_num_bytes),
    .qspi_busy      (int_a_busy),
    .qspi_done      (int_a_done),
    .qspi_error     (int_a_error),
    .qspi_tx_data   (int_a_tx_data),
    .qspi_tx_req    (int_a_tx_req),
    .qspi_rx_data   (int_a_rx_data),
    .qspi_rx_valid  (int_a_rx_valid),

    .xip_cfg        (int_xip_cfg)
  );

  qspi_xip_slave #(
    .XIP_BASE (XIP_BASE),
    .XIP_SIZE (XIP_SIZE)
  ) u_xip_slave (
    .ACLK (ACLK),
    .ARESETn (ARESETn),

    .AXI_ARADDR  (u_xip_araddr),
    .AXI_ARVALID (u_xip_arvalid),
    .AXI_ARREADY (u_xip_arready),
    .AXI_RDATA   (u_xip_rdata),
    .AXI_RRESP   (u_xip_rresp),
    .AXI_RVALID  (u_xip_rvalid),
    .AXI_RREADY  (u_xip_rready),

    .xip_cfg (int_xip_cfg),

    .x_start     (int_x_start),
    .x_ctrl_cmd  (int_x_ctrl_cmd),
    .x_addr      (int_x_addr),
    .x_num_bytes (int_x_num_bytes),
    .x_busy      (int_x_busy),
    .x_done      (int_x_done),
    .x_error     (int_x_error),
    .x_rx_data   (int_x_rx_data),
    .x_rx_valid  (int_x_rx_valid)
  );

  qspi_arbiter u_arbiter (
    .ACLK    (ACLK),
    .ARESETn (ARESETn),

    .a_start     (int_a_start),
    .a_abort     (int_a_abort),
    .a_ctrl_cmd  (int_a_ctrl_cmd),
    .a_addr      (int_a_addr),
    .a_num_bytes (int_a_num_bytes),
    .a_tx_data   (int_a_tx_data),
    .a_busy      (int_a_busy),
    .a_done      (int_a_done),
    .a_error     (int_a_error),
    .a_tx_req    (int_a_tx_req),
    .a_rx_data   (int_a_rx_data),
    .a_rx_valid  (int_a_rx_valid),

    .x_start     (int_x_start),
    .x_ctrl_cmd  (int_x_ctrl_cmd),
    .x_addr      (int_x_addr),
    .x_num_bytes (int_x_num_bytes),
    .x_busy      (int_x_busy),
    .x_done      (int_x_done),
    .x_error     (int_x_error),
    .x_rx_data   (int_x_rx_data),
    .x_rx_valid  (int_x_rx_valid),

    .axi_start     (int_m_start),
    .axi_abort     (int_m_abort),
    .axi_ctrl_cmd  (int_m_ctrl_cmd),
    .axi_addr      (int_m_addr),
    .axi_num_bytes (int_m_num_bytes),
    .axi_tx_data   (int_m_tx_data),
    .axi_busy      (int_m_busy),
    .axi_done      (int_m_done),
    .axi_error     (int_m_error),
    .axi_tx_req    (int_m_tx_req),
    .axi_rx_data   (int_m_rx_data),
    .axi_rx_valid  (int_m_rx_valid)
  );

  cdc_bridge u_cdc (
    .aclk      (ACLK),
    .aclk_rstn (ARESETn),
    .qclk      (qclk),
    .qclk_rst  (qclk_rst),

    .axi_start      (int_m_start),
    .axi_abort      (int_m_abort),
    .axi_ctrl_cmd   (int_m_ctrl_cmd),
    .axi_addr       (int_m_addr),
    .axi_num_bytes  (int_m_num_bytes),
    .axi_busy       (int_m_busy),
    .axi_done       (int_m_done),
    .axi_error      (int_m_error),
    .axi_tx_data    (int_m_tx_data),
    .axi_tx_req     (int_m_tx_req),
    .axi_rx_data    (int_m_rx_data),
    .axi_rx_valid   (int_m_rx_valid),

    .qspi_start     (int_q_start),
    .qspi_abort     (int_q_abort),
    .qspi_ctrl_cmd  (int_q_ctrl_cmd),
    .qspi_addr      (int_q_addr),
    .qspi_num_bytes (int_q_num_bytes),
    .qspi_busy      (int_q_busy),
    .qspi_done      (int_q_done),
    .qspi_error     (int_q_error),
    .qspi_tx_data   (int_q_tx_data),
    .qspi_tx_req    (int_q_tx_req),
    .qspi_rx_data   (int_q_rx_data),
    .qspi_rx_valid  (int_q_rx_valid)
  );

  qspi_engine #(
    .TIMEOUT_CYCLES(TIMEOUT_CYCLES)
  ) u_qspi_engine (
    .sclk     (qclk),
    .sclk_rst (qclk_rst),

    .cs_n (cs_n),

    .io0_out(io0_out), .io0_oe(io0_oe), .io0_in(io0_in),
    .io1_out(io1_out), .io1_oe(io1_oe), .io1_in(io1_in),
    .io2_out(io2_out), .io2_oe(io2_oe), .io2_in(io2_in),
    .io3_out(io3_out), .io3_oe(io3_oe), .io3_in(io3_in),

    .qspi_start     (int_q_start),
    .qspi_abort     (int_q_abort),
    .qspi_ctrl_cmd  (int_q_ctrl_cmd),
    .qspi_addr      (int_q_addr),
    .qspi_num_bytes (int_q_num_bytes),
    .qspi_busy      (int_q_busy),
    .qspi_done      (int_q_done),
    .qspi_error     (int_q_error),
    .qspi_tx_data   (int_q_tx_data),
    .qspi_tx_req    (int_q_tx_req),
    .qspi_rx_data   (int_q_rx_data),
    .qspi_rx_valid  (int_q_rx_valid)
  );

endmodule