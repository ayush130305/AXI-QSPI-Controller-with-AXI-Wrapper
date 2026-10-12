// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtb_xip_qspi_axi_top__Syms.h"


VL_ATTR_COLD void Vtb_xip_qspi_axi_top___024root__trace_init_sub__TOP__qspi_axi_pkg__0(Vtb_xip_qspi_axi_top___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vtb_xip_qspi_axi_top___024root__trace_init_sub__TOP__0(Vtb_xip_qspi_axi_top___024root* vlSelf, VerilatedVcd* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_xip_qspi_axi_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_xip_qspi_axi_top___024root__trace_init_sub__TOP__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->pushPrefix("qspi_axi_pkg", VerilatedTracePrefixType::SCOPE_MODULE);
    Vtb_xip_qspi_axi_top___024root__trace_init_sub__TOP__qspi_axi_pkg__0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->pushPrefix("tb_xip_qspi_axi_top", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declDouble(c+229,0,"ACLK_PERIOD",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+231,0,"qclk_period",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declBit(c+201,0,"ACLK",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+202,0,"qclk",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+203,0,"ARESETn",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+204,0,"qclk_rst",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+205,0,"AXI_AWADDR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+206,0,"AXI_AWVALID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+73,0,"AXI_AWREADY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+207,0,"AXI_WDATA",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+208,0,"AXI_WSTRB",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+209,0,"AXI_WVALID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+74,0,"AXI_WREADY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+233,0,"AXI_BRESP",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+75,0,"AXI_BVALID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+210,0,"AXI_BREADY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1,0,"AXI_ARADDR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+211,0,"AXI_ARVALID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+76,0,"AXI_ARREADY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+27,0,"AXI_RDATA",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+233,0,"AXI_RRESP",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+77,0,"AXI_RVALID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+212,0,"AXI_RREADY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+2,0,"XIP_ARADDR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+213,0,"XIP_ARVALID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+78,0,"XIP_ARREADY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+79,0,"XIP_RDATA",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+80,0,"XIP_RRESP",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+81,0,"XIP_RVALID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+214,0,"XIP_RREADY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+154,0,"dut_cs_n",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+155,0,"dut_io0_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+156,0,"dut_io0_oe",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+189,0,"dut_io0_in",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+157,0,"dut_io1_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+158,0,"dut_io1_oe",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+190,0,"dut_io1_in",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+159,0,"dut_io2_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+160,0,"dut_io2_oe",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+191,0,"dut_io2_in",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+161,0,"dut_io3_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+162,0,"dut_io3_oe",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+192,0,"dut_io3_in",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+193,0,"fm_io0_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+194,0,"fm_io0_oe",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+195,0,"fm_io1_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+196,0,"fm_io1_oe",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+197,0,"fm_io2_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+198,0,"fm_io2_oe",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+199,0,"fm_io3_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+200,0,"fm_io3_oe",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+189,0,"io0_line",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+190,0,"io1_line",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+191,0,"io2_line",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+192,0,"io3_line",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+138,0,"fm_written_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+139,0,"fm_written_byte",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+3,0,"pass_count",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+4,0,"fail_count",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->pushPrefix("u_dut", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+234,0,"TIMEOUT_CYCLES",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+235,0,"XIP_BASE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+235,0,"XIP_SIZE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+201,0,"ACLK",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+203,0,"ARESETn",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+202,0,"qclk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+204,0,"qclk_rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+205,0,"AXI_AWADDR",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+206,0,"AXI_AWVALID",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+73,0,"AXI_AWREADY",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+207,0,"AXI_WDATA",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+208,0,"AXI_WSTRB",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+209,0,"AXI_WVALID",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+74,0,"AXI_WREADY",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+233,0,"AXI_BRESP",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+75,0,"AXI_BVALID",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+210,0,"AXI_BREADY",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1,0,"AXI_ARADDR",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+211,0,"AXI_ARVALID",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+76,0,"AXI_ARREADY",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+27,0,"AXI_RDATA",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+233,0,"AXI_RRESP",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+77,0,"AXI_RVALID",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+212,0,"AXI_RREADY",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+2,0,"XIP_ARADDR",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+213,0,"XIP_ARVALID",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+78,0,"XIP_ARREADY",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+79,0,"XIP_RDATA",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+80,0,"XIP_RRESP",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+81,0,"XIP_RVALID",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+214,0,"XIP_RREADY",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+154,0,"cs_n",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+155,0,"io0_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+156,0,"io0_oe",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+189,0,"io0_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+157,0,"io1_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+158,0,"io1_oe",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+190,0,"io1_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+159,0,"io2_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+160,0,"io2_oe",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+191,0,"io2_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+161,0,"io3_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+162,0,"io3_oe",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+192,0,"io3_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+36,0,"int_a_start",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+37,0,"int_a_abort",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+82,0,"int_a_ctrl_cmd",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+83,0,"int_a_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+84,0,"int_a_num_bytes",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+28,0,"int_a_busy",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+29,0,"int_a_done",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+38,0,"int_a_error",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+85,0,"int_a_tx_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+30,0,"int_a_tx_req",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+86,0,"int_a_rx_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+31,0,"int_a_rx_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+87,0,"int_xip_cfg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+88,0,"int_x_start",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+89,0,"int_x_ctrl_cmd",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+90,0,"int_x_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+236,0,"int_x_num_bytes",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+39,0,"int_x_busy",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+32,0,"int_x_done",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+33,0,"int_x_error",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+86,0,"int_x_rx_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+34,0,"int_x_rx_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+40,0,"int_m_start",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+37,0,"int_m_abort",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+215,0,"int_m_ctrl_cmd",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+41,0,"int_m_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+42,0,"int_m_num_bytes",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+91,0,"int_m_busy",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+92,0,"int_m_done",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+93,0,"int_m_error",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+43,0,"int_m_tx_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+94,0,"int_m_tx_req",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+86,0,"int_m_rx_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+95,0,"int_m_rx_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+163,0,"int_q_start",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+164,0,"int_q_abort",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+215,0,"int_q_ctrl_cmd",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+41,0,"int_q_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+42,0,"int_q_num_bytes",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+165,0,"int_q_busy",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+166,0,"int_q_done",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+167,0,"int_q_error",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+57,0,"int_q_tx_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+168,0,"int_q_tx_req",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+169,0,"int_q_rx_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+170,0,"int_q_rx_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("u_arbiter", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+201,0,"ACLK",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+203,0,"ARESETn",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+36,0,"a_start",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+37,0,"a_abort",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+82,0,"a_ctrl_cmd",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+83,0,"a_addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+84,0,"a_num_bytes",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+85,0,"a_tx_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+28,0,"a_busy",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+29,0,"a_done",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+38,0,"a_error",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+30,0,"a_tx_req",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+86,0,"a_rx_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+31,0,"a_rx_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+88,0,"x_start",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+89,0,"x_ctrl_cmd",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+90,0,"x_addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+236,0,"x_num_bytes",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+39,0,"x_busy",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+32,0,"x_done",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+33,0,"x_error",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+86,0,"x_rx_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+34,0,"x_rx_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+40,0,"axi_start",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+37,0,"axi_abort",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+215,0,"axi_ctrl_cmd",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+41,0,"axi_addr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+42,0,"axi_num_bytes",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+43,0,"axi_tx_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+91,0,"axi_busy",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+92,0,"axi_done",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+93,0,"axi_error",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+94,0,"axi_tx_req",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+86,0,"axi_rx_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+95,0,"axi_rx_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+96,0,"grant",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+97,0,"busy_seen",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+98,0,"drain_cnt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+237,0,"DRAIN_CYCLES",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+44,0,"route_to_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+45,0,"route_to_xip",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("u_axi_slave", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+201,0,"ACLK",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+203,0,"ARESETn",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+205,0,"AXI_AWADDR",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+206,0,"AXI_AWVALID",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+73,0,"AXI_AWREADY",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+207,0,"AXI_WDATA",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+208,0,"AXI_WSTRB",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+209,0,"AXI_WVALID",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+74,0,"AXI_WREADY",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+233,0,"AXI_BRESP",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+75,0,"AXI_BVALID",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+210,0,"AXI_BREADY",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1,0,"AXI_ARADDR",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+211,0,"AXI_ARVALID",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+76,0,"AXI_ARREADY",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+27,0,"AXI_RDATA",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+233,0,"AXI_RRESP",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+77,0,"AXI_RVALID",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+212,0,"AXI_RREADY",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+36,0,"qspi_start",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+37,0,"qspi_abort",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+82,0,"qspi_ctrl_cmd",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+83,0,"qspi_addr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+84,0,"qspi_num_bytes",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+28,0,"qspi_busy",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+29,0,"qspi_done",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+38,0,"qspi_error",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+85,0,"qspi_tx_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+30,0,"qspi_tx_req",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+86,0,"qspi_rx_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+31,0,"qspi_rx_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+87,0,"xip_cfg",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+82,0,"reg_ctrl_cmd",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+83,0,"reg_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+84,0,"reg_num_bytes",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+99,0,"reg_tx_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+87,0,"reg_xip_cfg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+100,0,"state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+46,0,"aw_hs",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+47,0,"w_hs",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+216,0,"b_hs",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+48,0,"ar_hs",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+49,0,"r_hs",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+101,0,"aw_addr_latched",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+102,0,"w_data_latched",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+103,0,"w_strb_latched",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+104,0,"ar_addr_latched",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+50,0,"do_write",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+51,0,"eff_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+52,0,"eff_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+53,0,"eff_strb",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+105,0,"read_state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+106,0,"done_latched",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+107,0,"tx_ready_latched",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+108,0,"rx_ready_latched",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+109,0,"error_latched",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+110,0,"qspi_error_d1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+54,0,"status_w1c_done",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+55,0,"status_w1c_error",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+56,0,"tx_data_write",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+35,0,"rx_data_read",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+111,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+112,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk3", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+113,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk4", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+114,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk5", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+115,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("u_cdc", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+201,0,"aclk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+203,0,"aclk_rstn",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+202,0,"qclk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+204,0,"qclk_rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+40,0,"axi_start",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+37,0,"axi_abort",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+215,0,"axi_ctrl_cmd",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+41,0,"axi_addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+42,0,"axi_num_bytes",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+91,0,"axi_busy",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+92,0,"axi_done",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+93,0,"axi_error",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+43,0,"axi_tx_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+94,0,"axi_tx_req",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+86,0,"axi_rx_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+95,0,"axi_rx_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+163,0,"qspi_start",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+164,0,"qspi_abort",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+215,0,"qspi_ctrl_cmd",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+41,0,"qspi_addr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+42,0,"qspi_num_bytes",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+165,0,"qspi_busy",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+166,0,"qspi_done",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+167,0,"qspi_error",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+57,0,"qspi_tx_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+168,0,"qspi_tx_req",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+169,0,"qspi_rx_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+170,0,"qspi_rx_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+116,0,"error_ff1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+93,0,"error_ff2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+117,0,"busy_ff1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+91,0,"busy_ff2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+118,0,"tx_data_hold",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+119,0,"tx_data_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+58,0,"tx_data_ready_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+171,0,"rx_data_hold",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->pushPrefix("u_abort_sync", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+201,0,"src_clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+203,0,"src_rstn",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+37,0,"pulse_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+202,0,"dst_clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+217,0,"dst_rstn",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+164,0,"pulse_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+218,0,"toggle_src",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+172,0,"sync_ff1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+173,0,"sync_ff2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+174,0,"sync_ff3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("u_done_sync", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+202,0,"src_clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+217,0,"src_rstn",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+166,0,"pulse_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+201,0,"dst_clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+203,0,"dst_rstn",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+92,0,"pulse_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+175,0,"toggle_src",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+120,0,"sync_ff1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+121,0,"sync_ff2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+122,0,"sync_ff3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("u_rxvalid_sync", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+202,0,"src_clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+217,0,"src_rstn",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+170,0,"pulse_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+201,0,"dst_clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+203,0,"dst_rstn",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+95,0,"pulse_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+176,0,"toggle_src",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+123,0,"sync_ff1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+124,0,"sync_ff2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+125,0,"sync_ff3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("u_start_sync", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+201,0,"src_clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+203,0,"src_rstn",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+40,0,"pulse_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+202,0,"dst_clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+217,0,"dst_rstn",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+163,0,"pulse_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+126,0,"toggle_src",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+59,0,"sync_ff1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+60,0,"sync_ff2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+61,0,"sync_ff3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("u_tx_ready_sync", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+201,0,"src_clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+203,0,"src_rstn",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+119,0,"pulse_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+202,0,"dst_clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+217,0,"dst_rstn",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+58,0,"pulse_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+127,0,"toggle_src",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+62,0,"sync_ff1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+63,0,"sync_ff2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+64,0,"sync_ff3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("u_txreq_sync", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+202,0,"src_clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+217,0,"src_rstn",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+168,0,"pulse_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+201,0,"dst_clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+203,0,"dst_rstn",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+94,0,"pulse_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+177,0,"toggle_src",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+128,0,"sync_ff1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+129,0,"sync_ff2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+130,0,"sync_ff3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("u_qspi_engine", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+234,0,"TIMEOUT_CYCLES",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+202,0,"sclk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+204,0,"sclk_rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+154,0,"cs_n",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+155,0,"io0_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+156,0,"io0_oe",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+189,0,"io0_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+157,0,"io1_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+158,0,"io1_oe",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+190,0,"io1_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+159,0,"io2_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+160,0,"io2_oe",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+191,0,"io2_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+161,0,"io3_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+162,0,"io3_oe",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+192,0,"io3_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+163,0,"qspi_start",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+164,0,"qspi_abort",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+215,0,"qspi_ctrl_cmd",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+41,0,"qspi_addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+42,0,"qspi_num_bytes",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+165,0,"qspi_busy",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+166,0,"qspi_done",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+167,0,"qspi_error",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+57,0,"qspi_tx_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+168,0,"qspi_tx_req",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+169,0,"qspi_rx_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+170,0,"qspi_rx_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+233,0,"LW_S",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+238,0,"LW_D",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+239,0,"LW_Q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+178,0,"phase",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+179,0,"bit_cnt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+165,0,"busy_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+180,0,"ctrl",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 22,0);
    tracep->declBus(c+65,0,"addr_lat",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+66,0,"num_bytes_lat",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+181,0,"phase_limit",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+182,0,"addr_clocks",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+183,0,"data_clocks",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+67,0,"timeout_cnt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+184,0,"timeout_hit",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+167,0,"error_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+68,0,"out_shift",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 39,0);
    tracep->declBus(c+70,0,"tx_shift_byte",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+169,0,"in_byte",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+185,0,"clocks_per_byte",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+71,0,"byte_bit_cnt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+186,0,"byte_boundary",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+187,0,"entering_data_from_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+188,0,"entering_data_from_dummy",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+72,0,"byte_boundary_d1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("u_xip_slave", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+235,0,"XIP_BASE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+235,0,"XIP_SIZE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+201,0,"ACLK",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+203,0,"ARESETn",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+2,0,"AXI_ARADDR",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+213,0,"AXI_ARVALID",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+78,0,"AXI_ARREADY",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+79,0,"AXI_RDATA",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+80,0,"AXI_RRESP",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+81,0,"AXI_RVALID",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+214,0,"AXI_RREADY",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+87,0,"xip_cfg",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+88,0,"x_start",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+89,0,"x_ctrl_cmd",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+90,0,"x_addr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+236,0,"x_num_bytes",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+39,0,"x_busy",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+32,0,"x_done",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+33,0,"x_error",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+86,0,"x_rx_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+34,0,"x_rx_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+237,0,"XIP_BEAT_BYTES",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+131,0,"state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+132,0,"ar_addr_latched",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+90,0,"flash_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+5,0,"addr_in_range_live",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+79,0,"assemble_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+133,0,"byte_count",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+134,0,"fetch_error",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+135,0,"engine_busy_seen",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+136,0,"drain_cnt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+240,0,"XIP_DRAIN_CYCLES",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+137,0,"x_rx_valid_d1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("u_model", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+241,0,"MEM_SIZE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+202,0,"qclk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+154,0,"cs_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+189,0,"io0_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+190,0,"io1_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+191,0,"io2_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+192,0,"io3_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+193,0,"io0_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+194,0,"io0_oe",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+195,0,"io1_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+196,0,"io1_oe",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+197,0,"io2_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+198,0,"io2_oe",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+199,0,"io3_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+200,0,"io3_oe",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+138,0,"written_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+139,0,"written_byte",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+233,0,"LW_S",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+238,0,"LW_D",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+239,0,"LW_Q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+242,0,"OP_READ",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+243,0,"OP_FAST_READ",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+244,0,"OP_DUAL_READ",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+245,0,"OP_QUAD_READ",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+246,0,"OP_PAGE_PROGRAM",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+247,0,"OP_QUAD_PROGRAM",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+248,0,"OP_READ_4B",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+249,0,"OP_FAST_READ_4B",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+250,0,"OP_QUAD_READ_4B",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+251,0,"OP_TEST_QUAD_ND",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+252,0,"OP_TEST_DUAL_ADDR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+253,0,"OP_TEST_QUAD_ADDR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+254,0,"OP_TEST_QUAD_ADDR_SINGLE_DATA",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+140,0,"phase",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+141,0,"bitcnt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+142,0,"opcode",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+143,0,"addr_shift",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+144,0,"out_byte",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+145,0,"next_addr_byte",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+146,0,"nibblecnt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+147,0,"clocks_per_byte",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+148,0,"in_byte_acc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+149,0,"dec_dir",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+150,0,"dec_data_lines",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+151,0,"dec_addr_lines",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+152,0,"dec_dummy_cycles",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+153,0,"dec_addr_bytes",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+219,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+6,0,"rdata",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+7,0,"rresp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+8,0,"xip_cfg_val",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("unnamedblk2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+220,0,"ax_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+221,0,"xp_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+222,0,"ax_resp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+223,0,"xp_resp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk3", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+224,0,"xip_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+225,0,"xip_resp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+226,0,"abort_ctrl_cmd",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk4", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+9,0,"slow_xip_cfg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+10,0,"xip_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+11,0,"xip_resp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+12,0,"status_val",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+13,0,"status_resp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk5", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+227,0,"xip_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+228,0,"xip_resp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk6", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+14,0,"dual_xip_cfg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+15,0,"xip_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+16,0,"xip_resp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk7", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+17,0,"quad_xip_cfg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+18,0,"xip_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+19,0,"xip_resp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk8", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+20,0,"normal_xip_cfg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+21,0,"xip_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+22,0,"xip_resp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+23,0,"all_ok",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+24,0,"base_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+25,0,"expected",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("unnamedblk9", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+26,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
}

VL_ATTR_COLD void Vtb_xip_qspi_axi_top___024root__trace_init_sub__TOP__qspi_axi_pkg__0(Vtb_xip_qspi_axi_top___024root* vlSelf, VerilatedVcd* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_xip_qspi_axi_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_xip_qspi_axi_top___024root__trace_init_sub__TOP__qspi_axi_pkg__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+255,0,"REG_CTRL_CMD",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+237,0,"REG_ADDR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+256,0,"REG_NUM_BYTES",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+257,0,"REG_STATUS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+258,0,"REG_TX_DATA",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+259,0,"REG_RX_DATA",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+260,0,"REG_XIP_CFG",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+261,0,"XIP_CFG_BIT_ENABLE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+255,0,"STATUS_BIT_BUSY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+262,0,"STATUS_BIT_DONE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+263,0,"STATUS_BIT_TX_READY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+264,0,"STATUS_BIT_RX_READY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+237,0,"STATUS_BIT_ERROR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+265,0,"CTRL_BIT_ABORT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+233,0,"LW_SINGLE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+238,0,"LW_DUAL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+239,0,"LW_QUAD",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
}

VL_ATTR_COLD void Vtb_xip_qspi_axi_top___024root__trace_init_top(Vtb_xip_qspi_axi_top___024root* vlSelf, VerilatedVcd* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_xip_qspi_axi_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_xip_qspi_axi_top___024root__trace_init_top\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtb_xip_qspi_axi_top___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vtb_xip_qspi_axi_top___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void Vtb_xip_qspi_axi_top___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vtb_xip_qspi_axi_top___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vtb_xip_qspi_axi_top___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vtb_xip_qspi_axi_top___024root__trace_register(Vtb_xip_qspi_axi_top___024root* vlSelf, VerilatedVcd* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_xip_qspi_axi_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_xip_qspi_axi_top___024root__trace_register\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    tracep->addConstCb(&Vtb_xip_qspi_axi_top___024root__trace_const_0, 0U, vlSelf);
    tracep->addFullCb(&Vtb_xip_qspi_axi_top___024root__trace_full_0, 0U, vlSelf);
    tracep->addChgCb(&Vtb_xip_qspi_axi_top___024root__trace_chg_0, 0U, vlSelf);
    tracep->addCleanupCb(&Vtb_xip_qspi_axi_top___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vtb_xip_qspi_axi_top___024root__trace_const_0_sub_0(Vtb_xip_qspi_axi_top___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vtb_xip_qspi_axi_top___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_xip_qspi_axi_top___024root__trace_const_0\n"); );
    // Init
    Vtb_xip_qspi_axi_top___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_xip_qspi_axi_top___024root*>(voidSelf);
    Vtb_xip_qspi_axi_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vtb_xip_qspi_axi_top___024root__trace_const_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vtb_xip_qspi_axi_top___024root__trace_const_0_sub_0(Vtb_xip_qspi_axi_top___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_xip_qspi_axi_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_xip_qspi_axi_top___024root__trace_const_0_sub_0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullDouble(oldp+229,(10.0));
    bufp->fullDouble(oldp+231,(20.0));
    bufp->fullCData(oldp+233,(0U),2);
    bufp->fullIData(oldp+234,(0x96U),32);
    bufp->fullIData(oldp+235,(0x1000000U),32);
    bufp->fullIData(oldp+236,(4U),32);
    bufp->fullIData(oldp+237,(4U),32);
    bufp->fullCData(oldp+238,(1U),2);
    bufp->fullCData(oldp+239,(2U),2);
    bufp->fullIData(oldp+240,(6U),32);
    bufp->fullIData(oldp+241,(0x100U),32);
    bufp->fullCData(oldp+242,(3U),8);
    bufp->fullCData(oldp+243,(0xbU),8);
    bufp->fullCData(oldp+244,(0x3bU),8);
    bufp->fullCData(oldp+245,(0x6bU),8);
    bufp->fullCData(oldp+246,(2U),8);
    bufp->fullCData(oldp+247,(0x32U),8);
    bufp->fullCData(oldp+248,(0x13U),8);
    bufp->fullCData(oldp+249,(0xcU),8);
    bufp->fullCData(oldp+250,(0x6cU),8);
    bufp->fullCData(oldp+251,(0xf0U),8);
    bufp->fullCData(oldp+252,(0xbdU),8);
    bufp->fullCData(oldp+253,(0xebU),8);
    bufp->fullCData(oldp+254,(0xddU),8);
    bufp->fullIData(oldp+255,(0U),32);
    bufp->fullIData(oldp+256,(8U),32);
    bufp->fullIData(oldp+257,(0xcU),32);
    bufp->fullIData(oldp+258,(0x10U),32);
    bufp->fullIData(oldp+259,(0x14U),32);
    bufp->fullIData(oldp+260,(0x18U),32);
    bufp->fullIData(oldp+261,(0x1fU),32);
    bufp->fullIData(oldp+262,(1U),32);
    bufp->fullIData(oldp+263,(2U),32);
    bufp->fullIData(oldp+264,(3U),32);
    bufp->fullIData(oldp+265,(0x17U),32);
}

VL_ATTR_COLD void Vtb_xip_qspi_axi_top___024root__trace_full_0_sub_0(Vtb_xip_qspi_axi_top___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vtb_xip_qspi_axi_top___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_xip_qspi_axi_top___024root__trace_full_0\n"); );
    // Init
    Vtb_xip_qspi_axi_top___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_xip_qspi_axi_top___024root*>(voidSelf);
    Vtb_xip_qspi_axi_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vtb_xip_qspi_axi_top___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vtb_xip_qspi_axi_top___024root__trace_full_0_sub_0(Vtb_xip_qspi_axi_top___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_xip_qspi_axi_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_xip_qspi_axi_top___024root__trace_full_0_sub_0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullIData(oldp+1,(vlSelfRef.tb_xip_qspi_axi_top__DOT__AXI_ARADDR),32);
    bufp->fullIData(oldp+2,(vlSelfRef.tb_xip_qspi_axi_top__DOT__XIP_ARADDR),32);
    bufp->fullIData(oldp+3,(vlSelfRef.tb_xip_qspi_axi_top__DOT__pass_count),32);
    bufp->fullIData(oldp+4,(vlSelfRef.tb_xip_qspi_axi_top__DOT__fail_count),32);
    bufp->fullBit(oldp+5,(((0x1000000U <= vlSelfRef.tb_xip_qspi_axi_top__DOT__XIP_ARADDR) 
                           & (0x2000000U > vlSelfRef.tb_xip_qspi_axi_top__DOT__XIP_ARADDR))));
    bufp->fullIData(oldp+6,(vlSelfRef.tb_xip_qspi_axi_top__DOT__unnamedblk1__DOT__rdata),32);
    bufp->fullCData(oldp+7,(vlSelfRef.tb_xip_qspi_axi_top__DOT__unnamedblk1__DOT__rresp),2);
    bufp->fullIData(oldp+8,(vlSelfRef.tb_xip_qspi_axi_top__DOT__unnamedblk1__DOT__xip_cfg_val),32);
    bufp->fullIData(oldp+9,(vlSelfRef.tb_xip_qspi_axi_top__DOT__unnamedblk1__DOT__unnamedblk4__DOT__slow_xip_cfg),32);
    bufp->fullIData(oldp+10,(vlSelfRef.tb_xip_qspi_axi_top__DOT__unnamedblk1__DOT__unnamedblk4__DOT__xip_data),32);
    bufp->fullCData(oldp+11,(vlSelfRef.tb_xip_qspi_axi_top__DOT__unnamedblk1__DOT__unnamedblk4__DOT__xip_resp),2);
    bufp->fullIData(oldp+12,(vlSelfRef.tb_xip_qspi_axi_top__DOT__unnamedblk1__DOT__unnamedblk4__DOT__status_val),32);
    bufp->fullCData(oldp+13,(vlSelfRef.tb_xip_qspi_axi_top__DOT__unnamedblk1__DOT__unnamedblk4__DOT__status_resp),2);
    bufp->fullIData(oldp+14,(vlSelfRef.tb_xip_qspi_axi_top__DOT__unnamedblk1__DOT__unnamedblk6__DOT__dual_xip_cfg),32);
    bufp->fullIData(oldp+15,(vlSelfRef.tb_xip_qspi_axi_top__DOT__unnamedblk1__DOT__unnamedblk6__DOT__xip_data),32);
    bufp->fullCData(oldp+16,(vlSelfRef.tb_xip_qspi_axi_top__DOT__unnamedblk1__DOT__unnamedblk6__DOT__xip_resp),2);
    bufp->fullIData(oldp+17,(vlSelfRef.tb_xip_qspi_axi_top__DOT__unnamedblk1__DOT__unnamedblk7__DOT__quad_xip_cfg),32);
    bufp->fullIData(oldp+18,(vlSelfRef.tb_xip_qspi_axi_top__DOT__unnamedblk1__DOT__unnamedblk7__DOT__xip_data),32);
    bufp->fullCData(oldp+19,(vlSelfRef.tb_xip_qspi_axi_top__DOT__unnamedblk1__DOT__unnamedblk7__DOT__xip_resp),2);
    bufp->fullIData(oldp+20,(vlSelfRef.tb_xip_qspi_axi_top__DOT__unnamedblk1__DOT__unnamedblk8__DOT__normal_xip_cfg),32);
    bufp->fullIData(oldp+21,(vlSelfRef.tb_xip_qspi_axi_top__DOT__unnamedblk1__DOT__unnamedblk8__DOT__xip_data),32);
    bufp->fullCData(oldp+22,(vlSelfRef.tb_xip_qspi_axi_top__DOT__unnamedblk1__DOT__unnamedblk8__DOT__xip_resp),2);
    bufp->fullBit(oldp+23,(vlSelfRef.tb_xip_qspi_axi_top__DOT__unnamedblk1__DOT__unnamedblk8__DOT__all_ok));
    bufp->fullIData(oldp+24,(vlSelfRef.tb_xip_qspi_axi_top__DOT__unnamedblk1__DOT__unnamedblk8__DOT__base_addr),32);
    bufp->fullIData(oldp+25,(vlSelfRef.tb_xip_qspi_axi_top__DOT__unnamedblk1__DOT__unnamedblk8__DOT__expected),32);
    bufp->fullIData(oldp+26,(vlSelfRef.tb_xip_qspi_axi_top__DOT__unnamedblk1__DOT__unnamedblk8__DOT__unnamedblk9__DOT__i),32);
    bufp->fullIData(oldp+27,(((0U == vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_axi_slave__DOT__ar_addr_latched)
                               ? vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_axi_slave__DOT__reg_ctrl_cmd
                               : ((4U == vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_axi_slave__DOT__ar_addr_latched)
                                   ? vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_axi_slave__DOT__reg_addr
                                   : ((8U == vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_axi_slave__DOT__ar_addr_latched)
                                       ? vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_axi_slave__DOT__reg_num_bytes
                                       : ((0xcU == vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_axi_slave__DOT__ar_addr_latched)
                                           ? (((IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_axi_slave__DOT__error_latched) 
                                               << 4U) 
                                              | ((((IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_axi_slave__DOT__rx_ready_latched) 
                                                   << 3U) 
                                                  | ((IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_axi_slave__DOT__tx_ready_latched) 
                                                     << 2U)) 
                                                 | (((IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_axi_slave__DOT__done_latched) 
                                                     << 1U) 
                                                    | ((IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_arbiter__DOT__route_to_reg) 
                                                       & (IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_cdc__DOT__busy_ff2)))))
                                           : ((0x10U 
                                               == vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_axi_slave__DOT__ar_addr_latched)
                                               ? 0U
                                               : ((0x18U 
                                                   == vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_axi_slave__DOT__ar_addr_latched)
                                                   ? vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_axi_slave__DOT__reg_xip_cfg
                                                   : 
                                                  ((0x14U 
                                                    == vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_axi_slave__DOT__ar_addr_latched)
                                                    ? (IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__int_m_rx_data)
                                                    : 0U)))))))),32);
    bufp->fullBit(oldp+28,(((IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_arbiter__DOT__route_to_reg) 
                            & (IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_cdc__DOT__busy_ff2))));
    bufp->fullBit(oldp+29,(((IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_arbiter__DOT__route_to_reg) 
                            & ((IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_cdc__DOT__u_done_sync__DOT__sync_ff2) 
                               ^ (IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_cdc__DOT__u_done_sync__DOT__sync_ff3)))));
    bufp->fullBit(oldp+30,(((IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_arbiter__DOT__route_to_reg) 
                            & (IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__int_m_tx_req))));
    bufp->fullBit(oldp+31,(((IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_arbiter__DOT__route_to_reg) 
                            & (IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__int_m_rx_valid))));
    bufp->fullBit(oldp+32,(((IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_arbiter__DOT__route_to_xip) 
                            & ((IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_cdc__DOT__u_done_sync__DOT__sync_ff2) 
                               ^ (IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_cdc__DOT__u_done_sync__DOT__sync_ff3)))));
    bufp->fullBit(oldp+33,(((IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_arbiter__DOT__route_to_xip) 
                            & (IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_cdc__DOT__error_ff2))));
    bufp->fullBit(oldp+34,(((IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_arbiter__DOT__route_to_xip) 
                            & (IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__int_m_rx_valid))));
    bufp->fullBit(oldp+35,(((IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_axi_slave__DOT__r_hs) 
                            & (0x14U == vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_axi_slave__DOT__ar_addr_latched))));
    bufp->fullBit(oldp+36,(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__int_a_start));
    bufp->fullBit(oldp+37,(((IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_axi_slave__DOT____VdfgRegularize_h3a287cbd_0_0) 
                            & (vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_axi_slave__DOT__eff_data 
                               >> 0x17U))));
    bufp->fullBit(oldp+38,(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__int_a_error));
    bufp->fullBit(oldp+39,(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__int_x_busy));
    bufp->fullBit(oldp+40,(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__int_m_start));
    bufp->fullIData(oldp+41,(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__int_m_addr),32);
    bufp->fullIData(oldp+42,(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__int_m_num_bytes),32);
    bufp->fullCData(oldp+43,(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__int_m_tx_data),8);
    bufp->fullBit(oldp+44,(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_arbiter__DOT__route_to_reg));
    bufp->fullBit(oldp+45,(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_arbiter__DOT__route_to_xip));
    bufp->fullBit(oldp+46,(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_axi_slave__DOT__aw_hs));
    bufp->fullBit(oldp+47,(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_axi_slave__DOT__w_hs));
    bufp->fullBit(oldp+48,(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_axi_slave__DOT__ar_hs));
    bufp->fullBit(oldp+49,(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_axi_slave__DOT__r_hs));
    bufp->fullBit(oldp+50,(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_axi_slave__DOT__do_write));
    bufp->fullIData(oldp+51,(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_axi_slave__DOT__eff_addr),32);
    bufp->fullIData(oldp+52,(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_axi_slave__DOT__eff_data),32);
    bufp->fullCData(oldp+53,(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_axi_slave__DOT__eff_strb),4);
    bufp->fullBit(oldp+54,(((IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_axi_slave__DOT____VdfgRegularize_h3a287cbd_0_1) 
                            & (vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_axi_slave__DOT__eff_data 
                               >> 1U))));
    bufp->fullBit(oldp+55,(((IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_axi_slave__DOT____VdfgRegularize_h3a287cbd_0_1) 
                            & (vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_axi_slave__DOT__eff_data 
                               >> 4U))));
    bufp->fullBit(oldp+56,(((IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_axi_slave__DOT__do_write) 
                            & (0x10U == vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_axi_slave__DOT__eff_addr))));
    bufp->fullCData(oldp+57,(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__int_q_tx_data),8);
    bufp->fullBit(oldp+58,(((IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_cdc__DOT__u_tx_ready_sync__DOT__sync_ff2) 
                            ^ (IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_cdc__DOT__u_tx_ready_sync__DOT__sync_ff3))));
    bufp->fullBit(oldp+59,(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_cdc__DOT__u_start_sync__DOT__sync_ff1));
    bufp->fullBit(oldp+60,(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_cdc__DOT__u_start_sync__DOT__sync_ff2));
    bufp->fullBit(oldp+61,(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_cdc__DOT__u_start_sync__DOT__sync_ff3));
    bufp->fullBit(oldp+62,(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_cdc__DOT__u_tx_ready_sync__DOT__sync_ff1));
    bufp->fullBit(oldp+63,(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_cdc__DOT__u_tx_ready_sync__DOT__sync_ff2));
    bufp->fullBit(oldp+64,(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_cdc__DOT__u_tx_ready_sync__DOT__sync_ff3));
    bufp->fullIData(oldp+65,(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_qspi_engine__DOT__addr_lat),32);
    bufp->fullIData(oldp+66,(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_qspi_engine__DOT__num_bytes_lat),32);
    bufp->fullIData(oldp+67,(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_qspi_engine__DOT__timeout_cnt),32);
    bufp->fullQData(oldp+68,(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_qspi_engine__DOT__out_shift),40);
    bufp->fullCData(oldp+70,(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_qspi_engine__DOT__tx_shift_byte),8);
    bufp->fullCData(oldp+71,(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_qspi_engine__DOT__byte_bit_cnt),4);
    bufp->fullBit(oldp+72,(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_qspi_engine__DOT__byte_boundary_d1));
    bufp->fullBit(oldp+73,(((0U == (IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_axi_slave__DOT__state)) 
                            | (2U == (IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_axi_slave__DOT__state)))));
    bufp->fullBit(oldp+74,(((0U == (IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_axi_slave__DOT__state)) 
                            | (1U == (IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_axi_slave__DOT__state)))));
    bufp->fullBit(oldp+75,((3U == (IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_axi_slave__DOT__state))));
    bufp->fullBit(oldp+76,((0U == (IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_axi_slave__DOT__read_state))));
    bufp->fullBit(oldp+77,((1U == (IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_axi_slave__DOT__read_state))));
    bufp->fullBit(oldp+78,((0U == (IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_xip_slave__DOT__state))));
    bufp->fullIData(oldp+79,(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_xip_slave__DOT__assemble_reg),32);
    bufp->fullCData(oldp+80,(((IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_xip_slave__DOT__fetch_error)
                               ? 2U : 0U)),2);
    bufp->fullBit(oldp+81,((3U == (IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_xip_slave__DOT__state))));
    bufp->fullIData(oldp+82,(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_axi_slave__DOT__reg_ctrl_cmd),32);
    bufp->fullIData(oldp+83,(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_axi_slave__DOT__reg_addr),32);
    bufp->fullIData(oldp+84,(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_axi_slave__DOT__reg_num_bytes),32);
    bufp->fullCData(oldp+85,((0xffU & vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_axi_slave__DOT__reg_tx_data)),8);
    bufp->fullCData(oldp+86,(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__int_m_rx_data),8);
    bufp->fullIData(oldp+87,(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_axi_slave__DOT__reg_xip_cfg),32);
    bufp->fullBit(oldp+88,(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__int_x_start));
    bufp->fullIData(oldp+89,((0x200000U | (0x1fffffU 
                                           & vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_axi_slave__DOT__reg_xip_cfg))),32);
    bufp->fullIData(oldp+90,((vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_xip_slave__DOT__ar_addr_latched 
                              - (IData)(0x1000000U))),32);
    bufp->fullBit(oldp+91,(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_cdc__DOT__busy_ff2));
    bufp->fullBit(oldp+92,(((IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_cdc__DOT__u_done_sync__DOT__sync_ff2) 
                            ^ (IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_cdc__DOT__u_done_sync__DOT__sync_ff3))));
    bufp->fullBit(oldp+93,(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_cdc__DOT__error_ff2));
    bufp->fullBit(oldp+94,(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__int_m_tx_req));
    bufp->fullBit(oldp+95,(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__int_m_rx_valid));
    bufp->fullCData(oldp+96,(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_arbiter__DOT__grant),2);
    bufp->fullBit(oldp+97,(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_arbiter__DOT__busy_seen));
    bufp->fullCData(oldp+98,(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_arbiter__DOT__drain_cnt),4);
    bufp->fullIData(oldp+99,(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_axi_slave__DOT__reg_tx_data),32);
    bufp->fullCData(oldp+100,(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_axi_slave__DOT__state),2);
    bufp->fullIData(oldp+101,(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_axi_slave__DOT__aw_addr_latched),32);
    bufp->fullIData(oldp+102,(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_axi_slave__DOT__w_data_latched),32);
    bufp->fullCData(oldp+103,(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_axi_slave__DOT__w_strb_latched),4);
    bufp->fullIData(oldp+104,(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_axi_slave__DOT__ar_addr_latched),32);
    bufp->fullCData(oldp+105,(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_axi_slave__DOT__read_state),2);
    bufp->fullBit(oldp+106,(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_axi_slave__DOT__done_latched));
    bufp->fullBit(oldp+107,(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_axi_slave__DOT__tx_ready_latched));
    bufp->fullBit(oldp+108,(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_axi_slave__DOT__rx_ready_latched));
    bufp->fullBit(oldp+109,(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_axi_slave__DOT__error_latched));
    bufp->fullBit(oldp+110,(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_axi_slave__DOT__qspi_error_d1));
    bufp->fullIData(oldp+111,(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_axi_slave__DOT__unnamedblk1__DOT__i),32);
    bufp->fullIData(oldp+112,(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_axi_slave__DOT__unnamedblk2__DOT__i),32);
    bufp->fullIData(oldp+113,(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_axi_slave__DOT__unnamedblk3__DOT__i),32);
    bufp->fullIData(oldp+114,(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_axi_slave__DOT__unnamedblk4__DOT__i),32);
    bufp->fullIData(oldp+115,(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_axi_slave__DOT__unnamedblk5__DOT__i),32);
    bufp->fullBit(oldp+116,(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_cdc__DOT__error_ff1));
    bufp->fullBit(oldp+117,(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_cdc__DOT__busy_ff1));
    bufp->fullCData(oldp+118,(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_cdc__DOT__tx_data_hold),8);
    bufp->fullBit(oldp+119,(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_cdc__DOT__tx_data_ready));
    bufp->fullBit(oldp+120,(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_cdc__DOT__u_done_sync__DOT__sync_ff1));
    bufp->fullBit(oldp+121,(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_cdc__DOT__u_done_sync__DOT__sync_ff2));
    bufp->fullBit(oldp+122,(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_cdc__DOT__u_done_sync__DOT__sync_ff3));
    bufp->fullBit(oldp+123,(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_cdc__DOT__u_rxvalid_sync__DOT__sync_ff1));
    bufp->fullBit(oldp+124,(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_cdc__DOT__u_rxvalid_sync__DOT__sync_ff2));
    bufp->fullBit(oldp+125,(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_cdc__DOT__u_rxvalid_sync__DOT__sync_ff3));
    bufp->fullBit(oldp+126,(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_cdc__DOT__u_start_sync__DOT__toggle_src));
    bufp->fullBit(oldp+127,(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_cdc__DOT__u_tx_ready_sync__DOT__toggle_src));
    bufp->fullBit(oldp+128,(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_cdc__DOT__u_txreq_sync__DOT__sync_ff1));
    bufp->fullBit(oldp+129,(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_cdc__DOT__u_txreq_sync__DOT__sync_ff2));
    bufp->fullBit(oldp+130,(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_cdc__DOT__u_txreq_sync__DOT__sync_ff3));
    bufp->fullCData(oldp+131,(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_xip_slave__DOT__state),3);
    bufp->fullIData(oldp+132,(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_xip_slave__DOT__ar_addr_latched),32);
    bufp->fullCData(oldp+133,(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_xip_slave__DOT__byte_count),3);
    bufp->fullBit(oldp+134,(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_xip_slave__DOT__fetch_error));
    bufp->fullBit(oldp+135,(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_xip_slave__DOT__engine_busy_seen));
    bufp->fullCData(oldp+136,(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_xip_slave__DOT__drain_cnt),4);
    bufp->fullBit(oldp+137,(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_xip_slave__DOT__x_rx_valid_d1));
    bufp->fullBit(oldp+138,(vlSelfRef.tb_xip_qspi_axi_top__DOT__fm_written_valid));
    bufp->fullCData(oldp+139,(vlSelfRef.tb_xip_qspi_axi_top__DOT__fm_written_byte),8);
    bufp->fullCData(oldp+140,(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_model__DOT__phase),2);
    bufp->fullSData(oldp+141,(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_model__DOT__bitcnt),11);
    bufp->fullCData(oldp+142,(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_model__DOT__opcode),8);
    bufp->fullIData(oldp+143,(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_model__DOT__addr_shift),32);
    bufp->fullCData(oldp+144,(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_model__DOT__out_byte),8);
    bufp->fullCData(oldp+145,(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_model__DOT__next_addr_byte),8);
    bufp->fullCData(oldp+146,(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_model__DOT__nibblecnt),4);
    bufp->fullCData(oldp+147,(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_model__DOT__clocks_per_byte),4);
    bufp->fullCData(oldp+148,(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_model__DOT__in_byte_acc),8);
    bufp->fullBit(oldp+149,(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_model__DOT__dec_dir));
    bufp->fullCData(oldp+150,(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_model__DOT__dec_data_lines),2);
    bufp->fullCData(oldp+151,(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_model__DOT__dec_addr_lines),2);
    bufp->fullCData(oldp+152,(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_model__DOT__dec_dummy_cycles),8);
    bufp->fullCData(oldp+153,(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_model__DOT__dec_addr_bytes),8);
    bufp->fullBit(oldp+154,((1U & (~ (IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_qspi_engine__DOT__busy_r)))));
    bufp->fullBit(oldp+155,(vlSelfRef.tb_xip_qspi_axi_top__DOT__dut_io0_out));
    bufp->fullBit(oldp+156,(vlSelfRef.tb_xip_qspi_axi_top__DOT__dut_io0_oe));
    bufp->fullBit(oldp+157,(vlSelfRef.tb_xip_qspi_axi_top__DOT__dut_io1_out));
    bufp->fullBit(oldp+158,(vlSelfRef.tb_xip_qspi_axi_top__DOT__dut_io1_oe));
    bufp->fullBit(oldp+159,(vlSelfRef.tb_xip_qspi_axi_top__DOT__dut_io2_out));
    bufp->fullBit(oldp+160,(vlSelfRef.tb_xip_qspi_axi_top__DOT__dut_io2_oe));
    bufp->fullBit(oldp+161,(vlSelfRef.tb_xip_qspi_axi_top__DOT__dut_io3_out));
    bufp->fullBit(oldp+162,(vlSelfRef.tb_xip_qspi_axi_top__DOT__dut_io3_oe));
    bufp->fullBit(oldp+163,(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__int_q_start));
    bufp->fullBit(oldp+164,(((IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_cdc__DOT__u_abort_sync__DOT__sync_ff2) 
                             ^ (IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_cdc__DOT__u_abort_sync__DOT__sync_ff3))));
    bufp->fullBit(oldp+165,(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_qspi_engine__DOT__busy_r));
    bufp->fullBit(oldp+166,(((IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_qspi_engine__DOT____VdfgRegularize_h909204f5_0_0) 
                             & (IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_qspi_engine__DOT____VdfgRegularize_h909204f5_0_1))));
    bufp->fullBit(oldp+167,(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_qspi_engine__DOT__error_r));
    bufp->fullBit(oldp+168,(((IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_qspi_engine__DOT__byte_boundary) 
                             & (vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_qspi_engine__DOT__ctrl 
                                >> 0x16U))));
    bufp->fullCData(oldp+169,(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_qspi_engine__DOT__in_byte),8);
    bufp->fullBit(oldp+170,(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__int_q_rx_valid));
    bufp->fullCData(oldp+171,(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_cdc__DOT__rx_data_hold),8);
    bufp->fullBit(oldp+172,(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_cdc__DOT__u_abort_sync__DOT__sync_ff1));
    bufp->fullBit(oldp+173,(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_cdc__DOT__u_abort_sync__DOT__sync_ff2));
    bufp->fullBit(oldp+174,(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_cdc__DOT__u_abort_sync__DOT__sync_ff3));
    bufp->fullBit(oldp+175,(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_cdc__DOT__u_done_sync__DOT__toggle_src));
    bufp->fullBit(oldp+176,(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_cdc__DOT__u_rxvalid_sync__DOT__toggle_src));
    bufp->fullBit(oldp+177,(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_cdc__DOT__u_txreq_sync__DOT__toggle_src));
    bufp->fullCData(oldp+178,(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_qspi_engine__DOT__phase),2);
    bufp->fullSData(oldp+179,(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_qspi_engine__DOT__bit_cnt),16);
    bufp->fullIData(oldp+180,(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_qspi_engine__DOT__ctrl),23);
    bufp->fullSData(oldp+181,(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_qspi_engine__DOT__phase_limit),16);
    bufp->fullSData(oldp+182,(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_qspi_engine__DOT__addr_clocks),16);
    bufp->fullSData(oldp+183,(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_qspi_engine__DOT__data_clocks),16);
    bufp->fullBit(oldp+184,(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_qspi_engine__DOT__timeout_hit));
    bufp->fullCData(oldp+185,(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_qspi_engine__DOT__clocks_per_byte),4);
    bufp->fullBit(oldp+186,(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_qspi_engine__DOT__byte_boundary));
    bufp->fullBit(oldp+187,(((IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_qspi_engine__DOT__busy_r) 
                             & ((1U == (IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_qspi_engine__DOT__phase)) 
                                & ((IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_qspi_engine__DOT____VdfgRegularize_h909204f5_0_1) 
                                   & (0U == (0x1fe000U 
                                             & vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_qspi_engine__DOT__ctrl)))))));
    bufp->fullBit(oldp+188,(((IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_qspi_engine__DOT__busy_r) 
                             & ((2U == (IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_qspi_engine__DOT__phase)) 
                                & (IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_qspi_engine__DOT____VdfgRegularize_h909204f5_0_1)))));
    bufp->fullBit(oldp+189,(vlSelfRef.tb_xip_qspi_axi_top__DOT__dut_io0_in));
    bufp->fullBit(oldp+190,(vlSelfRef.tb_xip_qspi_axi_top__DOT__dut_io1_in));
    bufp->fullBit(oldp+191,(vlSelfRef.tb_xip_qspi_axi_top__DOT__dut_io2_in));
    bufp->fullBit(oldp+192,(vlSelfRef.tb_xip_qspi_axi_top__DOT__dut_io3_in));
    bufp->fullBit(oldp+193,(vlSelfRef.tb_xip_qspi_axi_top__DOT__fm_io0_out));
    bufp->fullBit(oldp+194,(vlSelfRef.tb_xip_qspi_axi_top__DOT__fm_io0_oe));
    bufp->fullBit(oldp+195,(vlSelfRef.tb_xip_qspi_axi_top__DOT__fm_io1_out));
    bufp->fullBit(oldp+196,(vlSelfRef.tb_xip_qspi_axi_top__DOT__fm_io1_oe));
    bufp->fullBit(oldp+197,(vlSelfRef.tb_xip_qspi_axi_top__DOT__fm_io2_out));
    bufp->fullBit(oldp+198,(vlSelfRef.tb_xip_qspi_axi_top__DOT__fm_io2_oe));
    bufp->fullBit(oldp+199,(vlSelfRef.tb_xip_qspi_axi_top__DOT__fm_io3_out));
    bufp->fullBit(oldp+200,(vlSelfRef.tb_xip_qspi_axi_top__DOT__fm_io3_oe));
    bufp->fullBit(oldp+201,(vlSelfRef.tb_xip_qspi_axi_top__DOT__ACLK));
    bufp->fullBit(oldp+202,(vlSelfRef.tb_xip_qspi_axi_top__DOT__qclk));
    bufp->fullBit(oldp+203,(vlSelfRef.tb_xip_qspi_axi_top__DOT__ARESETn));
    bufp->fullBit(oldp+204,(vlSelfRef.tb_xip_qspi_axi_top__DOT__qclk_rst));
    bufp->fullIData(oldp+205,(vlSelfRef.tb_xip_qspi_axi_top__DOT__AXI_AWADDR),32);
    bufp->fullBit(oldp+206,(vlSelfRef.tb_xip_qspi_axi_top__DOT__AXI_AWVALID));
    bufp->fullIData(oldp+207,(vlSelfRef.tb_xip_qspi_axi_top__DOT__AXI_WDATA),32);
    bufp->fullCData(oldp+208,(vlSelfRef.tb_xip_qspi_axi_top__DOT__AXI_WSTRB),4);
    bufp->fullBit(oldp+209,(vlSelfRef.tb_xip_qspi_axi_top__DOT__AXI_WVALID));
    bufp->fullBit(oldp+210,(vlSelfRef.tb_xip_qspi_axi_top__DOT__AXI_BREADY));
    bufp->fullBit(oldp+211,(vlSelfRef.tb_xip_qspi_axi_top__DOT__AXI_ARVALID));
    bufp->fullBit(oldp+212,(vlSelfRef.tb_xip_qspi_axi_top__DOT__AXI_RREADY));
    bufp->fullBit(oldp+213,(vlSelfRef.tb_xip_qspi_axi_top__DOT__XIP_ARVALID));
    bufp->fullBit(oldp+214,(vlSelfRef.tb_xip_qspi_axi_top__DOT__XIP_RREADY));
    bufp->fullIData(oldp+215,(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__int_m_ctrl_cmd),32);
    bufp->fullBit(oldp+216,(((IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__AXI_BREADY) 
                             & (3U == (IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_axi_slave__DOT__state)))));
    bufp->fullBit(oldp+217,((1U & (~ (IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__qclk_rst)))));
    bufp->fullBit(oldp+218,(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_cdc__DOT__u_abort_sync__DOT__toggle_src));
    bufp->fullIData(oldp+219,(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_model__DOT__unnamedblk1__DOT__i),32);
    bufp->fullIData(oldp+220,(vlSelfRef.tb_xip_qspi_axi_top__DOT__unnamedblk1__DOT__unnamedblk2__DOT__ax_data),32);
    bufp->fullIData(oldp+221,(vlSelfRef.tb_xip_qspi_axi_top__DOT__unnamedblk1__DOT__unnamedblk2__DOT__xp_data),32);
    bufp->fullCData(oldp+222,(vlSelfRef.tb_xip_qspi_axi_top__DOT__unnamedblk1__DOT__unnamedblk2__DOT__ax_resp),2);
    bufp->fullCData(oldp+223,(vlSelfRef.tb_xip_qspi_axi_top__DOT__unnamedblk1__DOT__unnamedblk2__DOT__xp_resp),2);
    bufp->fullIData(oldp+224,(vlSelfRef.tb_xip_qspi_axi_top__DOT__unnamedblk1__DOT__unnamedblk3__DOT__xip_data),32);
    bufp->fullCData(oldp+225,(vlSelfRef.tb_xip_qspi_axi_top__DOT__unnamedblk1__DOT__unnamedblk3__DOT__xip_resp),2);
    bufp->fullIData(oldp+226,(vlSelfRef.tb_xip_qspi_axi_top__DOT__unnamedblk1__DOT__unnamedblk3__DOT__abort_ctrl_cmd),32);
    bufp->fullIData(oldp+227,(vlSelfRef.tb_xip_qspi_axi_top__DOT__unnamedblk1__DOT__unnamedblk5__DOT__xip_data),32);
    bufp->fullCData(oldp+228,(vlSelfRef.tb_xip_qspi_axi_top__DOT__unnamedblk1__DOT__unnamedblk5__DOT__xip_resp),2);
}
