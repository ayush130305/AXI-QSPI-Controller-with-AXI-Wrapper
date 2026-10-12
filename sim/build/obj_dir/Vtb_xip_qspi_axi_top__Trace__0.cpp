// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtb_xip_qspi_axi_top__Syms.h"


void Vtb_xip_qspi_axi_top___024root__trace_chg_0_sub_0(Vtb_xip_qspi_axi_top___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vtb_xip_qspi_axi_top___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_xip_qspi_axi_top___024root__trace_chg_0\n"); );
    // Init
    Vtb_xip_qspi_axi_top___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_xip_qspi_axi_top___024root*>(voidSelf);
    Vtb_xip_qspi_axi_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vtb_xip_qspi_axi_top___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vtb_xip_qspi_axi_top___024root__trace_chg_0_sub_0(Vtb_xip_qspi_axi_top___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_xip_qspi_axi_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_xip_qspi_axi_top___024root__trace_chg_0_sub_0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[1U] 
                     | vlSelfRef.__Vm_traceActivity
                     [2U]))) {
        bufp->chgIData(oldp+0,(vlSelfRef.tb_xip_qspi_axi_top__DOT__AXI_ARADDR),32);
        bufp->chgIData(oldp+1,(vlSelfRef.tb_xip_qspi_axi_top__DOT__XIP_ARADDR),32);
        bufp->chgIData(oldp+2,(vlSelfRef.tb_xip_qspi_axi_top__DOT__pass_count),32);
        bufp->chgIData(oldp+3,(vlSelfRef.tb_xip_qspi_axi_top__DOT__fail_count),32);
        bufp->chgBit(oldp+4,(((0x1000000U <= vlSelfRef.tb_xip_qspi_axi_top__DOT__XIP_ARADDR) 
                              & (0x2000000U > vlSelfRef.tb_xip_qspi_axi_top__DOT__XIP_ARADDR))));
        bufp->chgIData(oldp+5,(vlSelfRef.tb_xip_qspi_axi_top__DOT__unnamedblk1__DOT__rdata),32);
        bufp->chgCData(oldp+6,(vlSelfRef.tb_xip_qspi_axi_top__DOT__unnamedblk1__DOT__rresp),2);
        bufp->chgIData(oldp+7,(vlSelfRef.tb_xip_qspi_axi_top__DOT__unnamedblk1__DOT__xip_cfg_val),32);
        bufp->chgIData(oldp+8,(vlSelfRef.tb_xip_qspi_axi_top__DOT__unnamedblk1__DOT__unnamedblk4__DOT__slow_xip_cfg),32);
        bufp->chgIData(oldp+9,(vlSelfRef.tb_xip_qspi_axi_top__DOT__unnamedblk1__DOT__unnamedblk4__DOT__xip_data),32);
        bufp->chgCData(oldp+10,(vlSelfRef.tb_xip_qspi_axi_top__DOT__unnamedblk1__DOT__unnamedblk4__DOT__xip_resp),2);
        bufp->chgIData(oldp+11,(vlSelfRef.tb_xip_qspi_axi_top__DOT__unnamedblk1__DOT__unnamedblk4__DOT__status_val),32);
        bufp->chgCData(oldp+12,(vlSelfRef.tb_xip_qspi_axi_top__DOT__unnamedblk1__DOT__unnamedblk4__DOT__status_resp),2);
        bufp->chgIData(oldp+13,(vlSelfRef.tb_xip_qspi_axi_top__DOT__unnamedblk1__DOT__unnamedblk6__DOT__dual_xip_cfg),32);
        bufp->chgIData(oldp+14,(vlSelfRef.tb_xip_qspi_axi_top__DOT__unnamedblk1__DOT__unnamedblk6__DOT__xip_data),32);
        bufp->chgCData(oldp+15,(vlSelfRef.tb_xip_qspi_axi_top__DOT__unnamedblk1__DOT__unnamedblk6__DOT__xip_resp),2);
        bufp->chgIData(oldp+16,(vlSelfRef.tb_xip_qspi_axi_top__DOT__unnamedblk1__DOT__unnamedblk7__DOT__quad_xip_cfg),32);
        bufp->chgIData(oldp+17,(vlSelfRef.tb_xip_qspi_axi_top__DOT__unnamedblk1__DOT__unnamedblk7__DOT__xip_data),32);
        bufp->chgCData(oldp+18,(vlSelfRef.tb_xip_qspi_axi_top__DOT__unnamedblk1__DOT__unnamedblk7__DOT__xip_resp),2);
        bufp->chgIData(oldp+19,(vlSelfRef.tb_xip_qspi_axi_top__DOT__unnamedblk1__DOT__unnamedblk8__DOT__normal_xip_cfg),32);
        bufp->chgIData(oldp+20,(vlSelfRef.tb_xip_qspi_axi_top__DOT__unnamedblk1__DOT__unnamedblk8__DOT__xip_data),32);
        bufp->chgCData(oldp+21,(vlSelfRef.tb_xip_qspi_axi_top__DOT__unnamedblk1__DOT__unnamedblk8__DOT__xip_resp),2);
        bufp->chgBit(oldp+22,(vlSelfRef.tb_xip_qspi_axi_top__DOT__unnamedblk1__DOT__unnamedblk8__DOT__all_ok));
        bufp->chgIData(oldp+23,(vlSelfRef.tb_xip_qspi_axi_top__DOT__unnamedblk1__DOT__unnamedblk8__DOT__base_addr),32);
        bufp->chgIData(oldp+24,(vlSelfRef.tb_xip_qspi_axi_top__DOT__unnamedblk1__DOT__unnamedblk8__DOT__expected),32);
        bufp->chgIData(oldp+25,(vlSelfRef.tb_xip_qspi_axi_top__DOT__unnamedblk1__DOT__unnamedblk8__DOT__unnamedblk9__DOT__i),32);
    }
    if (VL_UNLIKELY(((vlSelfRef.__Vm_traceActivity[3U] 
                      | vlSelfRef.__Vm_traceActivity
                      [5U]) | vlSelfRef.__Vm_traceActivity
                     [7U]))) {
        bufp->chgIData(oldp+26,(((0U == vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_axi_slave__DOT__ar_addr_latched)
                                  ? vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_axi_slave__DOT__reg_ctrl_cmd
                                  : ((4U == vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_axi_slave__DOT__ar_addr_latched)
                                      ? vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_axi_slave__DOT__reg_addr
                                      : ((8U == vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_axi_slave__DOT__ar_addr_latched)
                                          ? vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_axi_slave__DOT__reg_num_bytes
                                          : ((0xcU 
                                              == vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_axi_slave__DOT__ar_addr_latched)
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
                                                  : 
                                                 ((0x18U 
                                                   == vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_axi_slave__DOT__ar_addr_latched)
                                                   ? vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_axi_slave__DOT__reg_xip_cfg
                                                   : 
                                                  ((0x14U 
                                                    == vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_axi_slave__DOT__ar_addr_latched)
                                                    ? (IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__int_m_rx_data)
                                                    : 0U)))))))),32);
        bufp->chgBit(oldp+27,(((IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_arbiter__DOT__route_to_reg) 
                               & (IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_cdc__DOT__busy_ff2))));
        bufp->chgBit(oldp+28,(((IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_arbiter__DOT__route_to_reg) 
                               & ((IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_cdc__DOT__u_done_sync__DOT__sync_ff2) 
                                  ^ (IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_cdc__DOT__u_done_sync__DOT__sync_ff3)))));
        bufp->chgBit(oldp+29,(((IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_arbiter__DOT__route_to_reg) 
                               & (IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__int_m_tx_req))));
        bufp->chgBit(oldp+30,(((IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_arbiter__DOT__route_to_reg) 
                               & (IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__int_m_rx_valid))));
        bufp->chgBit(oldp+31,(((IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_arbiter__DOT__route_to_xip) 
                               & ((IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_cdc__DOT__u_done_sync__DOT__sync_ff2) 
                                  ^ (IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_cdc__DOT__u_done_sync__DOT__sync_ff3)))));
        bufp->chgBit(oldp+32,(((IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_arbiter__DOT__route_to_xip) 
                               & (IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_cdc__DOT__error_ff2))));
        bufp->chgBit(oldp+33,(((IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_arbiter__DOT__route_to_xip) 
                               & (IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__int_m_rx_valid))));
        bufp->chgBit(oldp+34,(((IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_axi_slave__DOT__r_hs) 
                               & (0x14U == vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_axi_slave__DOT__ar_addr_latched))));
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[3U] 
                     | vlSelfRef.__Vm_traceActivity
                     [7U]))) {
        bufp->chgBit(oldp+35,(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__int_a_start));
        bufp->chgBit(oldp+36,(((IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_axi_slave__DOT____VdfgRegularize_h3a287cbd_0_0) 
                               & (vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_axi_slave__DOT__eff_data 
                                  >> 0x17U))));
        bufp->chgBit(oldp+37,(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__int_a_error));
        bufp->chgBit(oldp+38,(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__int_x_busy));
        bufp->chgBit(oldp+39,(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__int_m_start));
        bufp->chgIData(oldp+40,(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__int_m_addr),32);
        bufp->chgIData(oldp+41,(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__int_m_num_bytes),32);
        bufp->chgCData(oldp+42,(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__int_m_tx_data),8);
        bufp->chgBit(oldp+43,(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_arbiter__DOT__route_to_reg));
        bufp->chgBit(oldp+44,(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_arbiter__DOT__route_to_xip));
        bufp->chgBit(oldp+45,(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_axi_slave__DOT__aw_hs));
        bufp->chgBit(oldp+46,(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_axi_slave__DOT__w_hs));
        bufp->chgBit(oldp+47,(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_axi_slave__DOT__ar_hs));
        bufp->chgBit(oldp+48,(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_axi_slave__DOT__r_hs));
        bufp->chgBit(oldp+49,(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_axi_slave__DOT__do_write));
        bufp->chgIData(oldp+50,(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_axi_slave__DOT__eff_addr),32);
        bufp->chgIData(oldp+51,(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_axi_slave__DOT__eff_data),32);
        bufp->chgCData(oldp+52,(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_axi_slave__DOT__eff_strb),4);
        bufp->chgBit(oldp+53,(((IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_axi_slave__DOT____VdfgRegularize_h3a287cbd_0_1) 
                               & (vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_axi_slave__DOT__eff_data 
                                  >> 1U))));
        bufp->chgBit(oldp+54,(((IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_axi_slave__DOT____VdfgRegularize_h3a287cbd_0_1) 
                               & (vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_axi_slave__DOT__eff_data 
                                  >> 4U))));
        bufp->chgBit(oldp+55,(((IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_axi_slave__DOT__do_write) 
                               & (0x10U == vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_axi_slave__DOT__eff_addr))));
    }
    if (VL_UNLIKELY(vlSelfRef.__Vm_traceActivity[4U])) {
        bufp->chgCData(oldp+56,(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__int_q_tx_data),8);
        bufp->chgBit(oldp+57,(((IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_cdc__DOT__u_tx_ready_sync__DOT__sync_ff2) 
                               ^ (IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_cdc__DOT__u_tx_ready_sync__DOT__sync_ff3))));
        bufp->chgBit(oldp+58,(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_cdc__DOT__u_start_sync__DOT__sync_ff1));
        bufp->chgBit(oldp+59,(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_cdc__DOT__u_start_sync__DOT__sync_ff2));
        bufp->chgBit(oldp+60,(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_cdc__DOT__u_start_sync__DOT__sync_ff3));
        bufp->chgBit(oldp+61,(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_cdc__DOT__u_tx_ready_sync__DOT__sync_ff1));
        bufp->chgBit(oldp+62,(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_cdc__DOT__u_tx_ready_sync__DOT__sync_ff2));
        bufp->chgBit(oldp+63,(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_cdc__DOT__u_tx_ready_sync__DOT__sync_ff3));
        bufp->chgIData(oldp+64,(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_qspi_engine__DOT__addr_lat),32);
        bufp->chgIData(oldp+65,(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_qspi_engine__DOT__num_bytes_lat),32);
        bufp->chgIData(oldp+66,(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_qspi_engine__DOT__timeout_cnt),32);
        bufp->chgQData(oldp+67,(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_qspi_engine__DOT__out_shift),40);
        bufp->chgCData(oldp+69,(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_qspi_engine__DOT__tx_shift_byte),8);
        bufp->chgCData(oldp+70,(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_qspi_engine__DOT__byte_bit_cnt),4);
        bufp->chgBit(oldp+71,(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_qspi_engine__DOT__byte_boundary_d1));
    }
    if (VL_UNLIKELY(vlSelfRef.__Vm_traceActivity[5U])) {
        bufp->chgBit(oldp+72,(((0U == (IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_axi_slave__DOT__state)) 
                               | (2U == (IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_axi_slave__DOT__state)))));
        bufp->chgBit(oldp+73,(((0U == (IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_axi_slave__DOT__state)) 
                               | (1U == (IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_axi_slave__DOT__state)))));
        bufp->chgBit(oldp+74,((3U == (IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_axi_slave__DOT__state))));
        bufp->chgBit(oldp+75,((0U == (IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_axi_slave__DOT__read_state))));
        bufp->chgBit(oldp+76,((1U == (IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_axi_slave__DOT__read_state))));
        bufp->chgBit(oldp+77,((0U == (IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_xip_slave__DOT__state))));
        bufp->chgIData(oldp+78,(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_xip_slave__DOT__assemble_reg),32);
        bufp->chgCData(oldp+79,(((IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_xip_slave__DOT__fetch_error)
                                  ? 2U : 0U)),2);
        bufp->chgBit(oldp+80,((3U == (IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_xip_slave__DOT__state))));
        bufp->chgIData(oldp+81,(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_axi_slave__DOT__reg_ctrl_cmd),32);
        bufp->chgIData(oldp+82,(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_axi_slave__DOT__reg_addr),32);
        bufp->chgIData(oldp+83,(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_axi_slave__DOT__reg_num_bytes),32);
        bufp->chgCData(oldp+84,((0xffU & vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_axi_slave__DOT__reg_tx_data)),8);
        bufp->chgCData(oldp+85,(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__int_m_rx_data),8);
        bufp->chgIData(oldp+86,(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_axi_slave__DOT__reg_xip_cfg),32);
        bufp->chgBit(oldp+87,(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__int_x_start));
        bufp->chgIData(oldp+88,((0x200000U | (0x1fffffU 
                                              & vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_axi_slave__DOT__reg_xip_cfg))),32);
        bufp->chgIData(oldp+89,((vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_xip_slave__DOT__ar_addr_latched 
                                 - (IData)(0x1000000U))),32);
        bufp->chgBit(oldp+90,(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_cdc__DOT__busy_ff2));
        bufp->chgBit(oldp+91,(((IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_cdc__DOT__u_done_sync__DOT__sync_ff2) 
                               ^ (IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_cdc__DOT__u_done_sync__DOT__sync_ff3))));
        bufp->chgBit(oldp+92,(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_cdc__DOT__error_ff2));
        bufp->chgBit(oldp+93,(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__int_m_tx_req));
        bufp->chgBit(oldp+94,(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__int_m_rx_valid));
        bufp->chgCData(oldp+95,(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_arbiter__DOT__grant),2);
        bufp->chgBit(oldp+96,(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_arbiter__DOT__busy_seen));
        bufp->chgCData(oldp+97,(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_arbiter__DOT__drain_cnt),4);
        bufp->chgIData(oldp+98,(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_axi_slave__DOT__reg_tx_data),32);
        bufp->chgCData(oldp+99,(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_axi_slave__DOT__state),2);
        bufp->chgIData(oldp+100,(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_axi_slave__DOT__aw_addr_latched),32);
        bufp->chgIData(oldp+101,(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_axi_slave__DOT__w_data_latched),32);
        bufp->chgCData(oldp+102,(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_axi_slave__DOT__w_strb_latched),4);
        bufp->chgIData(oldp+103,(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_axi_slave__DOT__ar_addr_latched),32);
        bufp->chgCData(oldp+104,(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_axi_slave__DOT__read_state),2);
        bufp->chgBit(oldp+105,(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_axi_slave__DOT__done_latched));
        bufp->chgBit(oldp+106,(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_axi_slave__DOT__tx_ready_latched));
        bufp->chgBit(oldp+107,(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_axi_slave__DOT__rx_ready_latched));
        bufp->chgBit(oldp+108,(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_axi_slave__DOT__error_latched));
        bufp->chgBit(oldp+109,(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_axi_slave__DOT__qspi_error_d1));
        bufp->chgIData(oldp+110,(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_axi_slave__DOT__unnamedblk1__DOT__i),32);
        bufp->chgIData(oldp+111,(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_axi_slave__DOT__unnamedblk2__DOT__i),32);
        bufp->chgIData(oldp+112,(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_axi_slave__DOT__unnamedblk3__DOT__i),32);
        bufp->chgIData(oldp+113,(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_axi_slave__DOT__unnamedblk4__DOT__i),32);
        bufp->chgIData(oldp+114,(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_axi_slave__DOT__unnamedblk5__DOT__i),32);
        bufp->chgBit(oldp+115,(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_cdc__DOT__error_ff1));
        bufp->chgBit(oldp+116,(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_cdc__DOT__busy_ff1));
        bufp->chgCData(oldp+117,(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_cdc__DOT__tx_data_hold),8);
        bufp->chgBit(oldp+118,(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_cdc__DOT__tx_data_ready));
        bufp->chgBit(oldp+119,(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_cdc__DOT__u_done_sync__DOT__sync_ff1));
        bufp->chgBit(oldp+120,(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_cdc__DOT__u_done_sync__DOT__sync_ff2));
        bufp->chgBit(oldp+121,(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_cdc__DOT__u_done_sync__DOT__sync_ff3));
        bufp->chgBit(oldp+122,(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_cdc__DOT__u_rxvalid_sync__DOT__sync_ff1));
        bufp->chgBit(oldp+123,(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_cdc__DOT__u_rxvalid_sync__DOT__sync_ff2));
        bufp->chgBit(oldp+124,(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_cdc__DOT__u_rxvalid_sync__DOT__sync_ff3));
        bufp->chgBit(oldp+125,(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_cdc__DOT__u_start_sync__DOT__toggle_src));
        bufp->chgBit(oldp+126,(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_cdc__DOT__u_tx_ready_sync__DOT__toggle_src));
        bufp->chgBit(oldp+127,(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_cdc__DOT__u_txreq_sync__DOT__sync_ff1));
        bufp->chgBit(oldp+128,(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_cdc__DOT__u_txreq_sync__DOT__sync_ff2));
        bufp->chgBit(oldp+129,(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_cdc__DOT__u_txreq_sync__DOT__sync_ff3));
        bufp->chgCData(oldp+130,(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_xip_slave__DOT__state),3);
        bufp->chgIData(oldp+131,(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_xip_slave__DOT__ar_addr_latched),32);
        bufp->chgCData(oldp+132,(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_xip_slave__DOT__byte_count),3);
        bufp->chgBit(oldp+133,(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_xip_slave__DOT__fetch_error));
        bufp->chgBit(oldp+134,(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_xip_slave__DOT__engine_busy_seen));
        bufp->chgCData(oldp+135,(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_xip_slave__DOT__drain_cnt),4);
        bufp->chgBit(oldp+136,(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_xip_slave__DOT__x_rx_valid_d1));
    }
    if (VL_UNLIKELY(vlSelfRef.__Vm_traceActivity[6U])) {
        bufp->chgBit(oldp+137,(vlSelfRef.tb_xip_qspi_axi_top__DOT__fm_written_valid));
        bufp->chgCData(oldp+138,(vlSelfRef.tb_xip_qspi_axi_top__DOT__fm_written_byte),8);
        bufp->chgCData(oldp+139,(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_model__DOT__phase),2);
        bufp->chgSData(oldp+140,(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_model__DOT__bitcnt),11);
        bufp->chgCData(oldp+141,(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_model__DOT__opcode),8);
        bufp->chgIData(oldp+142,(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_model__DOT__addr_shift),32);
        bufp->chgCData(oldp+143,(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_model__DOT__out_byte),8);
        bufp->chgCData(oldp+144,(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_model__DOT__next_addr_byte),8);
        bufp->chgCData(oldp+145,(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_model__DOT__nibblecnt),4);
        bufp->chgCData(oldp+146,(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_model__DOT__clocks_per_byte),4);
        bufp->chgCData(oldp+147,(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_model__DOT__in_byte_acc),8);
        bufp->chgBit(oldp+148,(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_model__DOT__dec_dir));
        bufp->chgCData(oldp+149,(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_model__DOT__dec_data_lines),2);
        bufp->chgCData(oldp+150,(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_model__DOT__dec_addr_lines),2);
        bufp->chgCData(oldp+151,(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_model__DOT__dec_dummy_cycles),8);
        bufp->chgCData(oldp+152,(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_model__DOT__dec_addr_bytes),8);
    }
    if (VL_UNLIKELY(vlSelfRef.__Vm_traceActivity[8U])) {
        bufp->chgBit(oldp+153,((1U & (~ (IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_qspi_engine__DOT__busy_r)))));
        bufp->chgBit(oldp+154,(vlSelfRef.tb_xip_qspi_axi_top__DOT__dut_io0_out));
        bufp->chgBit(oldp+155,(vlSelfRef.tb_xip_qspi_axi_top__DOT__dut_io0_oe));
        bufp->chgBit(oldp+156,(vlSelfRef.tb_xip_qspi_axi_top__DOT__dut_io1_out));
        bufp->chgBit(oldp+157,(vlSelfRef.tb_xip_qspi_axi_top__DOT__dut_io1_oe));
        bufp->chgBit(oldp+158,(vlSelfRef.tb_xip_qspi_axi_top__DOT__dut_io2_out));
        bufp->chgBit(oldp+159,(vlSelfRef.tb_xip_qspi_axi_top__DOT__dut_io2_oe));
        bufp->chgBit(oldp+160,(vlSelfRef.tb_xip_qspi_axi_top__DOT__dut_io3_out));
        bufp->chgBit(oldp+161,(vlSelfRef.tb_xip_qspi_axi_top__DOT__dut_io3_oe));
        bufp->chgBit(oldp+162,(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__int_q_start));
        bufp->chgBit(oldp+163,(((IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_cdc__DOT__u_abort_sync__DOT__sync_ff2) 
                                ^ (IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_cdc__DOT__u_abort_sync__DOT__sync_ff3))));
        bufp->chgBit(oldp+164,(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_qspi_engine__DOT__busy_r));
        bufp->chgBit(oldp+165,(((IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_qspi_engine__DOT____VdfgRegularize_h909204f5_0_0) 
                                & (IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_qspi_engine__DOT____VdfgRegularize_h909204f5_0_1))));
        bufp->chgBit(oldp+166,(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_qspi_engine__DOT__error_r));
        bufp->chgBit(oldp+167,(((IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_qspi_engine__DOT__byte_boundary) 
                                & (vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_qspi_engine__DOT__ctrl 
                                   >> 0x16U))));
        bufp->chgCData(oldp+168,(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_qspi_engine__DOT__in_byte),8);
        bufp->chgBit(oldp+169,(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__int_q_rx_valid));
        bufp->chgCData(oldp+170,(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_cdc__DOT__rx_data_hold),8);
        bufp->chgBit(oldp+171,(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_cdc__DOT__u_abort_sync__DOT__sync_ff1));
        bufp->chgBit(oldp+172,(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_cdc__DOT__u_abort_sync__DOT__sync_ff2));
        bufp->chgBit(oldp+173,(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_cdc__DOT__u_abort_sync__DOT__sync_ff3));
        bufp->chgBit(oldp+174,(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_cdc__DOT__u_done_sync__DOT__toggle_src));
        bufp->chgBit(oldp+175,(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_cdc__DOT__u_rxvalid_sync__DOT__toggle_src));
        bufp->chgBit(oldp+176,(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_cdc__DOT__u_txreq_sync__DOT__toggle_src));
        bufp->chgCData(oldp+177,(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_qspi_engine__DOT__phase),2);
        bufp->chgSData(oldp+178,(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_qspi_engine__DOT__bit_cnt),16);
        bufp->chgIData(oldp+179,(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_qspi_engine__DOT__ctrl),23);
        bufp->chgSData(oldp+180,(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_qspi_engine__DOT__phase_limit),16);
        bufp->chgSData(oldp+181,(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_qspi_engine__DOT__addr_clocks),16);
        bufp->chgSData(oldp+182,(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_qspi_engine__DOT__data_clocks),16);
        bufp->chgBit(oldp+183,(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_qspi_engine__DOT__timeout_hit));
        bufp->chgCData(oldp+184,(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_qspi_engine__DOT__clocks_per_byte),4);
        bufp->chgBit(oldp+185,(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_qspi_engine__DOT__byte_boundary));
        bufp->chgBit(oldp+186,(((IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_qspi_engine__DOT__busy_r) 
                                & ((1U == (IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_qspi_engine__DOT__phase)) 
                                   & ((IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_qspi_engine__DOT____VdfgRegularize_h909204f5_0_1) 
                                      & (0U == (0x1fe000U 
                                                & vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_qspi_engine__DOT__ctrl)))))));
        bufp->chgBit(oldp+187,(((IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_qspi_engine__DOT__busy_r) 
                                & ((2U == (IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_qspi_engine__DOT__phase)) 
                                   & (IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_qspi_engine__DOT____VdfgRegularize_h909204f5_0_1)))));
    }
    if (VL_UNLIKELY(vlSelfRef.__Vm_traceActivity[9U])) {
        bufp->chgBit(oldp+188,(vlSelfRef.tb_xip_qspi_axi_top__DOT__dut_io0_in));
        bufp->chgBit(oldp+189,(vlSelfRef.tb_xip_qspi_axi_top__DOT__dut_io1_in));
        bufp->chgBit(oldp+190,(vlSelfRef.tb_xip_qspi_axi_top__DOT__dut_io2_in));
        bufp->chgBit(oldp+191,(vlSelfRef.tb_xip_qspi_axi_top__DOT__dut_io3_in));
        bufp->chgBit(oldp+192,(vlSelfRef.tb_xip_qspi_axi_top__DOT__fm_io0_out));
        bufp->chgBit(oldp+193,(vlSelfRef.tb_xip_qspi_axi_top__DOT__fm_io0_oe));
        bufp->chgBit(oldp+194,(vlSelfRef.tb_xip_qspi_axi_top__DOT__fm_io1_out));
        bufp->chgBit(oldp+195,(vlSelfRef.tb_xip_qspi_axi_top__DOT__fm_io1_oe));
        bufp->chgBit(oldp+196,(vlSelfRef.tb_xip_qspi_axi_top__DOT__fm_io2_out));
        bufp->chgBit(oldp+197,(vlSelfRef.tb_xip_qspi_axi_top__DOT__fm_io2_oe));
        bufp->chgBit(oldp+198,(vlSelfRef.tb_xip_qspi_axi_top__DOT__fm_io3_out));
        bufp->chgBit(oldp+199,(vlSelfRef.tb_xip_qspi_axi_top__DOT__fm_io3_oe));
    }
    bufp->chgBit(oldp+200,(vlSelfRef.tb_xip_qspi_axi_top__DOT__ACLK));
    bufp->chgBit(oldp+201,(vlSelfRef.tb_xip_qspi_axi_top__DOT__qclk));
    bufp->chgBit(oldp+202,(vlSelfRef.tb_xip_qspi_axi_top__DOT__ARESETn));
    bufp->chgBit(oldp+203,(vlSelfRef.tb_xip_qspi_axi_top__DOT__qclk_rst));
    bufp->chgIData(oldp+204,(vlSelfRef.tb_xip_qspi_axi_top__DOT__AXI_AWADDR),32);
    bufp->chgBit(oldp+205,(vlSelfRef.tb_xip_qspi_axi_top__DOT__AXI_AWVALID));
    bufp->chgIData(oldp+206,(vlSelfRef.tb_xip_qspi_axi_top__DOT__AXI_WDATA),32);
    bufp->chgCData(oldp+207,(vlSelfRef.tb_xip_qspi_axi_top__DOT__AXI_WSTRB),4);
    bufp->chgBit(oldp+208,(vlSelfRef.tb_xip_qspi_axi_top__DOT__AXI_WVALID));
    bufp->chgBit(oldp+209,(vlSelfRef.tb_xip_qspi_axi_top__DOT__AXI_BREADY));
    bufp->chgBit(oldp+210,(vlSelfRef.tb_xip_qspi_axi_top__DOT__AXI_ARVALID));
    bufp->chgBit(oldp+211,(vlSelfRef.tb_xip_qspi_axi_top__DOT__AXI_RREADY));
    bufp->chgBit(oldp+212,(vlSelfRef.tb_xip_qspi_axi_top__DOT__XIP_ARVALID));
    bufp->chgBit(oldp+213,(vlSelfRef.tb_xip_qspi_axi_top__DOT__XIP_RREADY));
    bufp->chgIData(oldp+214,(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__int_m_ctrl_cmd),32);
    bufp->chgBit(oldp+215,(((IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__AXI_BREADY) 
                            & (3U == (IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_axi_slave__DOT__state)))));
    bufp->chgBit(oldp+216,((1U & (~ (IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__qclk_rst)))));
    bufp->chgBit(oldp+217,(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_cdc__DOT__u_abort_sync__DOT__toggle_src));
    bufp->chgIData(oldp+218,(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_model__DOT__unnamedblk1__DOT__i),32);
    bufp->chgIData(oldp+219,(vlSelfRef.tb_xip_qspi_axi_top__DOT__unnamedblk1__DOT__unnamedblk2__DOT__ax_data),32);
    bufp->chgIData(oldp+220,(vlSelfRef.tb_xip_qspi_axi_top__DOT__unnamedblk1__DOT__unnamedblk2__DOT__xp_data),32);
    bufp->chgCData(oldp+221,(vlSelfRef.tb_xip_qspi_axi_top__DOT__unnamedblk1__DOT__unnamedblk2__DOT__ax_resp),2);
    bufp->chgCData(oldp+222,(vlSelfRef.tb_xip_qspi_axi_top__DOT__unnamedblk1__DOT__unnamedblk2__DOT__xp_resp),2);
    bufp->chgIData(oldp+223,(vlSelfRef.tb_xip_qspi_axi_top__DOT__unnamedblk1__DOT__unnamedblk3__DOT__xip_data),32);
    bufp->chgCData(oldp+224,(vlSelfRef.tb_xip_qspi_axi_top__DOT__unnamedblk1__DOT__unnamedblk3__DOT__xip_resp),2);
    bufp->chgIData(oldp+225,(vlSelfRef.tb_xip_qspi_axi_top__DOT__unnamedblk1__DOT__unnamedblk3__DOT__abort_ctrl_cmd),32);
    bufp->chgIData(oldp+226,(vlSelfRef.tb_xip_qspi_axi_top__DOT__unnamedblk1__DOT__unnamedblk5__DOT__xip_data),32);
    bufp->chgCData(oldp+227,(vlSelfRef.tb_xip_qspi_axi_top__DOT__unnamedblk1__DOT__unnamedblk5__DOT__xip_resp),2);
}

void Vtb_xip_qspi_axi_top___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_xip_qspi_axi_top___024root__trace_cleanup\n"); );
    // Init
    Vtb_xip_qspi_axi_top___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_xip_qspi_axi_top___024root*>(voidSelf);
    Vtb_xip_qspi_axi_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[3U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[4U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[5U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[6U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[7U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[8U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[9U] = 0U;
}
