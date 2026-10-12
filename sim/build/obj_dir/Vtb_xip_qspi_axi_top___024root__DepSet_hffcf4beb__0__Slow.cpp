// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_xip_qspi_axi_top.h for the primary calling header

#include "Vtb_xip_qspi_axi_top__pch.h"
#include "Vtb_xip_qspi_axi_top___024root.h"

VL_ATTR_COLD void Vtb_xip_qspi_axi_top___024root___eval_static__TOP(Vtb_xip_qspi_axi_top___024root* vlSelf);
VL_ATTR_COLD void Vtb_xip_qspi_axi_top___024root____Vm_traceActivitySetAll(Vtb_xip_qspi_axi_top___024root* vlSelf);

VL_ATTR_COLD void Vtb_xip_qspi_axi_top___024root___eval_static(Vtb_xip_qspi_axi_top___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_xip_qspi_axi_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_xip_qspi_axi_top___024root___eval_static\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtb_xip_qspi_axi_top___024root___eval_static__TOP(vlSelf);
    Vtb_xip_qspi_axi_top___024root____Vm_traceActivitySetAll(vlSelf);
}

VL_ATTR_COLD void Vtb_xip_qspi_axi_top___024root___eval_static__TOP(Vtb_xip_qspi_axi_top___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_xip_qspi_axi_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_xip_qspi_axi_top___024root___eval_static__TOP\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_xip_qspi_axi_top__DOT__pass_count = 0U;
    vlSelfRef.tb_xip_qspi_axi_top__DOT__fail_count = 0U;
}

VL_ATTR_COLD void Vtb_xip_qspi_axi_top___024root___eval_final(Vtb_xip_qspi_axi_top___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_xip_qspi_axi_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_xip_qspi_axi_top___024root___eval_final\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_xip_qspi_axi_top___024root___dump_triggers__stl(Vtb_xip_qspi_axi_top___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vtb_xip_qspi_axi_top___024root___eval_phase__stl(Vtb_xip_qspi_axi_top___024root* vlSelf);

VL_ATTR_COLD void Vtb_xip_qspi_axi_top___024root___eval_settle(Vtb_xip_qspi_axi_top___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_xip_qspi_axi_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_xip_qspi_axi_top___024root___eval_settle\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VstlIterCount;
    CData/*0:0*/ __VstlContinue;
    // Body
    __VstlIterCount = 0U;
    vlSelfRef.__VstlFirstIteration = 1U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        if (VL_UNLIKELY((0x64U < __VstlIterCount))) {
#ifdef VL_DEBUG
            Vtb_xip_qspi_axi_top___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("tb_xip_qspi_axi_top.sv", 6, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vtb_xip_qspi_axi_top___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelfRef.__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_xip_qspi_axi_top___024root___dump_triggers__stl(Vtb_xip_qspi_axi_top___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_xip_qspi_axi_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_xip_qspi_axi_top___024root___dump_triggers__stl\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VstlTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtb_xip_qspi_axi_top___024root___stl_sequent__TOP__0(Vtb_xip_qspi_axi_top___024root* vlSelf);

VL_ATTR_COLD void Vtb_xip_qspi_axi_top___024root___eval_stl(Vtb_xip_qspi_axi_top___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_xip_qspi_axi_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_xip_qspi_axi_top___024root___eval_stl\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        Vtb_xip_qspi_axi_top___024root___stl_sequent__TOP__0(vlSelf);
        Vtb_xip_qspi_axi_top___024root____Vm_traceActivitySetAll(vlSelf);
    }
}

extern const VlUnpacked<CData/*0:0*/, 256> Vtb_xip_qspi_axi_top__ConstPool__TABLE_h88605944_0;
extern const VlUnpacked<CData/*1:0*/, 256> Vtb_xip_qspi_axi_top__ConstPool__TABLE_hfd9406a3_0;
extern const VlUnpacked<CData/*1:0*/, 256> Vtb_xip_qspi_axi_top__ConstPool__TABLE_h8ac4dd06_0;
extern const VlUnpacked<CData/*7:0*/, 256> Vtb_xip_qspi_axi_top__ConstPool__TABLE_ha46860c4_0;
extern const VlUnpacked<CData/*7:0*/, 256> Vtb_xip_qspi_axi_top__ConstPool__TABLE_h38f833e1_0;

VL_ATTR_COLD void Vtb_xip_qspi_axi_top___024root___stl_sequent__TOP__0(Vtb_xip_qspi_axi_top___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_xip_qspi_axi_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_xip_qspi_axi_top___024root___stl_sequent__TOP__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*7:0*/ __Vtableidx3;
    __Vtableidx3 = 0;
    // Body
    vlSelfRef.tb_xip_qspi_axi_top__DOT__XIP_ARREADY 
        = (0U == (IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_xip_slave__DOT__state));
    vlSelfRef.tb_xip_qspi_axi_top__DOT__XIP_RVALID 
        = (3U == (IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_xip_slave__DOT__state));
    vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__int_m_tx_req 
        = ((IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_cdc__DOT__u_txreq_sync__DOT__sync_ff2) 
           ^ (IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_cdc__DOT__u_txreq_sync__DOT__sync_ff3));
    vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__int_m_rx_valid 
        = ((IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_cdc__DOT__u_rxvalid_sync__DOT__sync_ff2) 
           ^ (IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_cdc__DOT__u_rxvalid_sync__DOT__sync_ff3));
    vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_axi_slave__DOT__b_hs 
        = ((IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__AXI_BREADY) 
           & (3U == (IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_axi_slave__DOT__state)));
    vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_axi_slave__DOT__ar_hs 
        = ((0U == (IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_axi_slave__DOT__read_state)) 
           & (IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__AXI_ARVALID));
    vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_axi_slave__DOT__r_hs 
        = ((IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__AXI_RREADY) 
           & (1U == (IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_axi_slave__DOT__read_state)));
    vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__int_q_rx_valid 
        = ((~ (vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_qspi_engine__DOT__ctrl 
               >> 0x16U)) & (IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_qspi_engine__DOT__byte_boundary_d1));
    vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_qspi_engine__DOT__timeout_hit 
        = ((IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_qspi_engine__DOT__busy_r) 
           & (0x96U <= vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_qspi_engine__DOT__timeout_cnt));
    vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__int_q_start 
        = ((IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_cdc__DOT__u_start_sync__DOT__sync_ff2) 
           ^ (IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_cdc__DOT__u_start_sync__DOT__sync_ff3));
    if (vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_qspi_engine__DOT__busy_r) {
        vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_qspi_engine__DOT____VdfgRegularize_h909204f5_0_0 
            = (3U == (IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_qspi_engine__DOT__phase));
        vlSelfRef.tb_xip_qspi_axi_top__DOT__dut_io3_oe = 0U;
        vlSelfRef.tb_xip_qspi_axi_top__DOT__dut_io2_oe = 0U;
        vlSelfRef.tb_xip_qspi_axi_top__DOT__dut_io1_oe = 0U;
        vlSelfRef.tb_xip_qspi_axi_top__DOT__dut_io0_oe = 0U;
        if ((0U != (IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_qspi_engine__DOT__phase))) {
            if ((1U == (IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_qspi_engine__DOT__phase))) {
                if ((0U != (3U & (vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_qspi_engine__DOT__ctrl 
                                  >> 8U)))) {
                    if ((1U != (3U & (vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_qspi_engine__DOT__ctrl 
                                      >> 8U)))) {
                        if ((2U == (3U & (vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_qspi_engine__DOT__ctrl 
                                          >> 8U)))) {
                            vlSelfRef.tb_xip_qspi_axi_top__DOT__dut_io3_oe = 1U;
                            vlSelfRef.tb_xip_qspi_axi_top__DOT__dut_io2_oe = 1U;
                        }
                    }
                    if ((1U == (3U & (vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_qspi_engine__DOT__ctrl 
                                      >> 8U)))) {
                        vlSelfRef.tb_xip_qspi_axi_top__DOT__dut_io1_oe = 1U;
                    } else if ((2U == (3U & (vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_qspi_engine__DOT__ctrl 
                                             >> 8U)))) {
                        vlSelfRef.tb_xip_qspi_axi_top__DOT__dut_io1_oe = 1U;
                    }
                }
            } else if ((3U == (IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_qspi_engine__DOT__phase))) {
                if ((0x400000U & vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_qspi_engine__DOT__ctrl)) {
                    if ((0U != (3U & (vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_qspi_engine__DOT__ctrl 
                                      >> 0xaU)))) {
                        if ((1U != (3U & (vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_qspi_engine__DOT__ctrl 
                                          >> 0xaU)))) {
                            if ((2U == (3U & (vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_qspi_engine__DOT__ctrl 
                                              >> 0xaU)))) {
                                vlSelfRef.tb_xip_qspi_axi_top__DOT__dut_io3_oe = 1U;
                                vlSelfRef.tb_xip_qspi_axi_top__DOT__dut_io2_oe = 1U;
                            }
                        }
                        if ((1U == (3U & (vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_qspi_engine__DOT__ctrl 
                                          >> 0xaU)))) {
                            vlSelfRef.tb_xip_qspi_axi_top__DOT__dut_io1_oe = 1U;
                        } else if ((2U == (3U & (vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_qspi_engine__DOT__ctrl 
                                                 >> 0xaU)))) {
                            vlSelfRef.tb_xip_qspi_axi_top__DOT__dut_io1_oe = 1U;
                        }
                    }
                }
            }
        }
        if ((0U == (IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_qspi_engine__DOT__phase))) {
            vlSelfRef.tb_xip_qspi_axi_top__DOT__dut_io0_oe = 1U;
        } else if ((1U == (IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_qspi_engine__DOT__phase))) {
            if ((0U == (3U & (vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_qspi_engine__DOT__ctrl 
                              >> 8U)))) {
                vlSelfRef.tb_xip_qspi_axi_top__DOT__dut_io0_oe = 1U;
            } else if ((1U == (3U & (vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_qspi_engine__DOT__ctrl 
                                     >> 8U)))) {
                vlSelfRef.tb_xip_qspi_axi_top__DOT__dut_io0_oe = 1U;
            } else if ((2U == (3U & (vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_qspi_engine__DOT__ctrl 
                                     >> 8U)))) {
                vlSelfRef.tb_xip_qspi_axi_top__DOT__dut_io0_oe = 1U;
            }
        } else if ((3U == (IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_qspi_engine__DOT__phase))) {
            if ((0x400000U & vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_qspi_engine__DOT__ctrl)) {
                if ((0U == (3U & (vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_qspi_engine__DOT__ctrl 
                                  >> 0xaU)))) {
                    vlSelfRef.tb_xip_qspi_axi_top__DOT__dut_io0_oe = 1U;
                } else if ((1U == (3U & (vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_qspi_engine__DOT__ctrl 
                                         >> 0xaU)))) {
                    vlSelfRef.tb_xip_qspi_axi_top__DOT__dut_io0_oe = 1U;
                } else if ((2U == (3U & (vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_qspi_engine__DOT__ctrl 
                                         >> 0xaU)))) {
                    vlSelfRef.tb_xip_qspi_axi_top__DOT__dut_io0_oe = 1U;
                }
            }
        }
    } else {
        vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_qspi_engine__DOT____VdfgRegularize_h909204f5_0_0 = 0U;
        vlSelfRef.tb_xip_qspi_axi_top__DOT__dut_io3_oe = 0U;
        vlSelfRef.tb_xip_qspi_axi_top__DOT__dut_io2_oe = 0U;
        vlSelfRef.tb_xip_qspi_axi_top__DOT__dut_io1_oe = 0U;
        vlSelfRef.tb_xip_qspi_axi_top__DOT__dut_io0_oe = 0U;
    }
    vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_qspi_engine__DOT__clocks_per_byte 
        = (0xfU & VL_DIV_III(32, (IData)(8U), ([&]() {
                    vlSelfRef.__Vfunc_tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_qspi_engine__DOT__lines_per_clock__30__lw 
                        = (3U & (vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_qspi_engine__DOT__ctrl 
                                 >> 0xaU));
                    vlSelfRef.__Vfunc_tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_qspi_engine__DOT__lines_per_clock__30__Vfuncout 
                        = ((0U == (IData)(vlSelfRef.__Vfunc_tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_qspi_engine__DOT__lines_per_clock__30__lw))
                            ? 1U : ((1U == (IData)(vlSelfRef.__Vfunc_tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_qspi_engine__DOT__lines_per_clock__30__lw))
                                     ? 2U : ((2U == (IData)(vlSelfRef.__Vfunc_tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_qspi_engine__DOT__lines_per_clock__30__lw))
                                              ? 4U : 1U)));
                }(), vlSelfRef.__Vfunc_tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_qspi_engine__DOT__lines_per_clock__30__Vfuncout)));
    vlSelfRef.tb_xip_qspi_axi_top__DOT__dut_io3_out = 0U;
    vlSelfRef.tb_xip_qspi_axi_top__DOT__dut_io2_out = 0U;
    vlSelfRef.tb_xip_qspi_axi_top__DOT__dut_io1_out = 0U;
    vlSelfRef.tb_xip_qspi_axi_top__DOT__dut_io0_out = 0U;
    if (vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_qspi_engine__DOT__busy_r) {
        if ((0U != (IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_qspi_engine__DOT__phase))) {
            if ((1U == (IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_qspi_engine__DOT__phase))) {
                if ((0U != (3U & (vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_qspi_engine__DOT__ctrl 
                                  >> 8U)))) {
                    if ((1U != (3U & (vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_qspi_engine__DOT__ctrl 
                                      >> 8U)))) {
                        if ((2U == (3U & (vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_qspi_engine__DOT__ctrl 
                                          >> 8U)))) {
                            vlSelfRef.tb_xip_qspi_axi_top__DOT__dut_io3_out 
                                = (1U & (IData)((vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_qspi_engine__DOT__out_shift 
                                                 >> 0x27U)));
                            vlSelfRef.tb_xip_qspi_axi_top__DOT__dut_io2_out 
                                = (1U & (IData)((vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_qspi_engine__DOT__out_shift 
                                                 >> 0x26U)));
                        }
                    }
                    if ((1U == (3U & (vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_qspi_engine__DOT__ctrl 
                                      >> 8U)))) {
                        vlSelfRef.tb_xip_qspi_axi_top__DOT__dut_io1_out 
                            = (1U & (IData)((vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_qspi_engine__DOT__out_shift 
                                             >> 0x27U)));
                    } else if ((2U == (3U & (vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_qspi_engine__DOT__ctrl 
                                             >> 8U)))) {
                        vlSelfRef.tb_xip_qspi_axi_top__DOT__dut_io1_out 
                            = (1U & (IData)((vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_qspi_engine__DOT__out_shift 
                                             >> 0x25U)));
                    }
                }
            } else if ((3U == (IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_qspi_engine__DOT__phase))) {
                if ((0x400000U & vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_qspi_engine__DOT__ctrl)) {
                    if ((0U != (3U & (vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_qspi_engine__DOT__ctrl 
                                      >> 0xaU)))) {
                        if ((1U != (3U & (vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_qspi_engine__DOT__ctrl 
                                          >> 0xaU)))) {
                            if ((2U == (3U & (vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_qspi_engine__DOT__ctrl 
                                              >> 0xaU)))) {
                                vlSelfRef.tb_xip_qspi_axi_top__DOT__dut_io3_out 
                                    = (1U & ((IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_qspi_engine__DOT__tx_shift_byte) 
                                             >> 7U));
                                vlSelfRef.tb_xip_qspi_axi_top__DOT__dut_io2_out 
                                    = (1U & ((IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_qspi_engine__DOT__tx_shift_byte) 
                                             >> 6U));
                            }
                        }
                        if ((1U == (3U & (vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_qspi_engine__DOT__ctrl 
                                          >> 0xaU)))) {
                            vlSelfRef.tb_xip_qspi_axi_top__DOT__dut_io1_out 
                                = (1U & ((IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_qspi_engine__DOT__tx_shift_byte) 
                                         >> 7U));
                        } else if ((2U == (3U & (vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_qspi_engine__DOT__ctrl 
                                                 >> 0xaU)))) {
                            vlSelfRef.tb_xip_qspi_axi_top__DOT__dut_io1_out 
                                = (1U & ((IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_qspi_engine__DOT__tx_shift_byte) 
                                         >> 5U));
                        }
                    }
                }
            }
        }
        if ((0U == (IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_qspi_engine__DOT__phase))) {
            vlSelfRef.tb_xip_qspi_axi_top__DOT__dut_io0_out 
                = (1U & (IData)((vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_qspi_engine__DOT__out_shift 
                                 >> 0x27U)));
        } else if ((1U == (IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_qspi_engine__DOT__phase))) {
            if ((0U == (3U & (vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_qspi_engine__DOT__ctrl 
                              >> 8U)))) {
                vlSelfRef.tb_xip_qspi_axi_top__DOT__dut_io0_out 
                    = (1U & (IData)((vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_qspi_engine__DOT__out_shift 
                                     >> 0x27U)));
            } else if ((1U == (3U & (vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_qspi_engine__DOT__ctrl 
                                     >> 8U)))) {
                vlSelfRef.tb_xip_qspi_axi_top__DOT__dut_io0_out 
                    = (1U & (IData)((vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_qspi_engine__DOT__out_shift 
                                     >> 0x26U)));
            } else if ((2U == (3U & (vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_qspi_engine__DOT__ctrl 
                                     >> 8U)))) {
                vlSelfRef.tb_xip_qspi_axi_top__DOT__dut_io0_out 
                    = (1U & (IData)((vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_qspi_engine__DOT__out_shift 
                                     >> 0x24U)));
            }
        } else if ((3U == (IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_qspi_engine__DOT__phase))) {
            if ((0x400000U & vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_qspi_engine__DOT__ctrl)) {
                if ((0U == (3U & (vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_qspi_engine__DOT__ctrl 
                                  >> 0xaU)))) {
                    vlSelfRef.tb_xip_qspi_axi_top__DOT__dut_io0_out 
                        = (1U & ((IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_qspi_engine__DOT__tx_shift_byte) 
                                 >> 7U));
                } else if ((1U == (3U & (vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_qspi_engine__DOT__ctrl 
                                         >> 0xaU)))) {
                    vlSelfRef.tb_xip_qspi_axi_top__DOT__dut_io0_out 
                        = (1U & ((IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_qspi_engine__DOT__tx_shift_byte) 
                                 >> 6U));
                } else if ((2U == (3U & (vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_qspi_engine__DOT__ctrl 
                                         >> 0xaU)))) {
                    vlSelfRef.tb_xip_qspi_axi_top__DOT__dut_io0_out 
                        = (1U & ((IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_qspi_engine__DOT__tx_shift_byte) 
                                 >> 4U));
                }
            }
        }
    }
    vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_qspi_engine__DOT__addr_clocks 
        = (0xffffU & VL_DIV_III(32, ((0x1000U & vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_qspi_engine__DOT__ctrl)
                                      ? 0x20U : 0x18U), 
                                ([&]() {
                    vlSelfRef.__Vfunc_tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_qspi_engine__DOT__lines_per_clock__27__lw 
                        = (3U & (vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_qspi_engine__DOT__ctrl 
                                 >> 8U));
                    vlSelfRef.__Vfunc_tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_qspi_engine__DOT__lines_per_clock__27__Vfuncout 
                        = ((0U == (IData)(vlSelfRef.__Vfunc_tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_qspi_engine__DOT__lines_per_clock__27__lw))
                            ? 1U : ((1U == (IData)(vlSelfRef.__Vfunc_tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_qspi_engine__DOT__lines_per_clock__27__lw))
                                     ? 2U : ((2U == (IData)(vlSelfRef.__Vfunc_tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_qspi_engine__DOT__lines_per_clock__27__lw))
                                              ? 4U : 1U)));
                }(), vlSelfRef.__Vfunc_tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_qspi_engine__DOT__lines_per_clock__27__Vfuncout)));
    vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_qspi_engine__DOT__data_clocks 
        = (0xffffU & VL_DIV_III(32, VL_SHIFTL_III(32,32,32, 
                                                  (0xfffU 
                                                   & vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_qspi_engine__DOT__num_bytes_lat), 3U), 
                                ([&]() {
                    vlSelfRef.__Vfunc_tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_qspi_engine__DOT__lines_per_clock__28__lw 
                        = (3U & (vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_qspi_engine__DOT__ctrl 
                                 >> 0xaU));
                    vlSelfRef.__Vfunc_tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_qspi_engine__DOT__lines_per_clock__28__Vfuncout 
                        = ((0U == (IData)(vlSelfRef.__Vfunc_tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_qspi_engine__DOT__lines_per_clock__28__lw))
                            ? 1U : ((1U == (IData)(vlSelfRef.__Vfunc_tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_qspi_engine__DOT__lines_per_clock__28__lw))
                                     ? 2U : ((2U == (IData)(vlSelfRef.__Vfunc_tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_qspi_engine__DOT__lines_per_clock__28__lw))
                                              ? 4U : 1U)));
                }(), vlSelfRef.__Vfunc_tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_qspi_engine__DOT__lines_per_clock__28__Vfuncout)));
    vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_qspi_engine__DOT__phase_limit 
        = (0xffffU & ((2U & (IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_qspi_engine__DOT__phase))
                       ? ((1U & (IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_qspi_engine__DOT__phase))
                           ? ((0U == (IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_qspi_engine__DOT__data_clocks))
                               ? 0U : ((IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_qspi_engine__DOT__data_clocks) 
                                       - (IData)(1U)))
                           : ((0U == (0xffU & (vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_qspi_engine__DOT__ctrl 
                                               >> 0xdU)))
                               ? 0U : ((0xffU & (vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_qspi_engine__DOT__ctrl 
                                                 >> 0xdU)) 
                                       - (IData)(1U))))
                       : ((1U & (IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_qspi_engine__DOT__phase))
                           ? ((IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_qspi_engine__DOT__addr_clocks) 
                              - (IData)(1U)) : 7U)));
    vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_axi_slave__DOT__aw_hs 
        = (((0U == (IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_axi_slave__DOT__state)) 
            | (2U == (IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_axi_slave__DOT__state))) 
           & (IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__AXI_AWVALID));
    vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_axi_slave__DOT__w_hs 
        = (((0U == (IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_axi_slave__DOT__state)) 
            | (1U == (IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_axi_slave__DOT__state))) 
           & (IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__AXI_WVALID));
    __Vtableidx3 = vlSelfRef.tb_xip_qspi_axi_top__DOT__u_model__DOT__opcode;
    vlSelfRef.tb_xip_qspi_axi_top__DOT__u_model__DOT__dec_dir 
        = Vtb_xip_qspi_axi_top__ConstPool__TABLE_h88605944_0
        [__Vtableidx3];
    vlSelfRef.tb_xip_qspi_axi_top__DOT__u_model__DOT__dec_data_lines 
        = Vtb_xip_qspi_axi_top__ConstPool__TABLE_hfd9406a3_0
        [__Vtableidx3];
    vlSelfRef.tb_xip_qspi_axi_top__DOT__u_model__DOT__dec_addr_lines 
        = Vtb_xip_qspi_axi_top__ConstPool__TABLE_h8ac4dd06_0
        [__Vtableidx3];
    vlSelfRef.tb_xip_qspi_axi_top__DOT__u_model__DOT__dec_dummy_cycles 
        = Vtb_xip_qspi_axi_top__ConstPool__TABLE_ha46860c4_0
        [__Vtableidx3];
    vlSelfRef.tb_xip_qspi_axi_top__DOT__u_model__DOT__dec_addr_bytes 
        = Vtb_xip_qspi_axi_top__ConstPool__TABLE_h38f833e1_0
        [__Vtableidx3];
    vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_qspi_engine__DOT__byte_boundary 
        = ((IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_qspi_engine__DOT____VdfgRegularize_h909204f5_0_0) 
           & ((IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_qspi_engine__DOT__byte_bit_cnt) 
              == (0xfU & ((IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_qspi_engine__DOT__clocks_per_byte) 
                          - (IData)(1U)))));
    vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_qspi_engine__DOT____VdfgRegularize_h909204f5_0_1 
        = ((IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_qspi_engine__DOT__bit_cnt) 
           == (IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_qspi_engine__DOT__phase_limit));
    vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_axi_slave__DOT__eff_addr 
        = ((IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_axi_slave__DOT__aw_hs)
            ? vlSelfRef.tb_xip_qspi_axi_top__DOT__AXI_AWADDR
            : vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_axi_slave__DOT__aw_addr_latched);
    if (vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_axi_slave__DOT__w_hs) {
        vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_axi_slave__DOT__eff_strb 
            = vlSelfRef.tb_xip_qspi_axi_top__DOT__AXI_WSTRB;
        vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_axi_slave__DOT__eff_data 
            = vlSelfRef.tb_xip_qspi_axi_top__DOT__AXI_WDATA;
    } else {
        vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_axi_slave__DOT__eff_strb 
            = vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_axi_slave__DOT__w_strb_latched;
        vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_axi_slave__DOT__eff_data 
            = vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_axi_slave__DOT__w_data_latched;
    }
    vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_axi_slave__DOT__do_write 
        = (((((0U == (IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_axi_slave__DOT__state)) 
              & (IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_axi_slave__DOT__aw_hs)) 
             | (1U == (IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_axi_slave__DOT__state))) 
            & (IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_axi_slave__DOT__w_hs)) 
           | ((2U == (IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_axi_slave__DOT__state)) 
              & (IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_axi_slave__DOT__aw_hs)));
    vlSelfRef.tb_xip_qspi_axi_top__DOT__u_model__DOT__clocks_per_byte 
        = (0xfU & VL_DIV_III(32, (IData)(8U), ([&]() {
                    vlSelfRef.__Vfunc_tb_xip_qspi_axi_top__DOT__u_model__DOT__lpc__32__w 
                        = vlSelfRef.tb_xip_qspi_axi_top__DOT__u_model__DOT__dec_data_lines;
                    vlSelfRef.__Vfunc_tb_xip_qspi_axi_top__DOT__u_model__DOT__lpc__32__Vfuncout 
                        = ((0U == (IData)(vlSelfRef.__Vfunc_tb_xip_qspi_axi_top__DOT__u_model__DOT__lpc__32__w))
                            ? 1U : ((1U == (IData)(vlSelfRef.__Vfunc_tb_xip_qspi_axi_top__DOT__u_model__DOT__lpc__32__w))
                                     ? 2U : ((2U == (IData)(vlSelfRef.__Vfunc_tb_xip_qspi_axi_top__DOT__u_model__DOT__lpc__32__w))
                                              ? 4U : 1U)));
                }(), vlSelfRef.__Vfunc_tb_xip_qspi_axi_top__DOT__u_model__DOT__lpc__32__Vfuncout)));
    vlSelfRef.tb_xip_qspi_axi_top__DOT__fm_io0_oe = 0U;
    vlSelfRef.tb_xip_qspi_axi_top__DOT__fm_io1_oe = 0U;
    vlSelfRef.tb_xip_qspi_axi_top__DOT__fm_io2_oe = 0U;
    vlSelfRef.tb_xip_qspi_axi_top__DOT__fm_io3_oe = 0U;
    vlSelfRef.tb_xip_qspi_axi_top__DOT__fm_io0_out = 0U;
    vlSelfRef.tb_xip_qspi_axi_top__DOT__fm_io1_out = 0U;
    vlSelfRef.tb_xip_qspi_axi_top__DOT__fm_io2_out = 0U;
    vlSelfRef.tb_xip_qspi_axi_top__DOT__fm_io3_out = 0U;
    if ((((IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_qspi_engine__DOT__busy_r) 
          & (3U == (IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_model__DOT__phase))) 
         & (~ (IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_model__DOT__dec_dir)))) {
        if ((0U == (IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_model__DOT__dec_data_lines))) {
            vlSelfRef.tb_xip_qspi_axi_top__DOT__fm_io0_oe = 1U;
            vlSelfRef.tb_xip_qspi_axi_top__DOT__fm_io0_out 
                = (1U & ((IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_model__DOT__out_byte) 
                         >> 7U));
        } else if ((1U == (IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_model__DOT__dec_data_lines))) {
            vlSelfRef.tb_xip_qspi_axi_top__DOT__fm_io0_oe = 1U;
            vlSelfRef.tb_xip_qspi_axi_top__DOT__fm_io0_out 
                = (1U & ((IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_model__DOT__out_byte) 
                         >> 6U));
        } else if ((2U == (IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_model__DOT__dec_data_lines))) {
            vlSelfRef.tb_xip_qspi_axi_top__DOT__fm_io0_oe = 1U;
            vlSelfRef.tb_xip_qspi_axi_top__DOT__fm_io0_out 
                = (1U & ((IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_model__DOT__out_byte) 
                         >> 4U));
        }
        if ((0U != (IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_model__DOT__dec_data_lines))) {
            if ((1U == (IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_model__DOT__dec_data_lines))) {
                vlSelfRef.tb_xip_qspi_axi_top__DOT__fm_io1_oe = 1U;
                vlSelfRef.tb_xip_qspi_axi_top__DOT__fm_io1_out 
                    = (1U & ((IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_model__DOT__out_byte) 
                             >> 7U));
            } else if ((2U == (IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_model__DOT__dec_data_lines))) {
                vlSelfRef.tb_xip_qspi_axi_top__DOT__fm_io1_oe = 1U;
                vlSelfRef.tb_xip_qspi_axi_top__DOT__fm_io1_out 
                    = (1U & ((IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_model__DOT__out_byte) 
                             >> 5U));
            }
            if ((1U != (IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_model__DOT__dec_data_lines))) {
                if ((2U == (IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_model__DOT__dec_data_lines))) {
                    vlSelfRef.tb_xip_qspi_axi_top__DOT__fm_io2_oe = 1U;
                    vlSelfRef.tb_xip_qspi_axi_top__DOT__fm_io3_oe = 1U;
                    vlSelfRef.tb_xip_qspi_axi_top__DOT__fm_io2_out 
                        = (1U & ((IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_model__DOT__out_byte) 
                                 >> 6U));
                    vlSelfRef.tb_xip_qspi_axi_top__DOT__fm_io3_out 
                        = (1U & ((IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_model__DOT__out_byte) 
                                 >> 7U));
                }
            }
        }
    }
    vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_axi_slave__DOT____VdfgRegularize_h3a287cbd_0_1 
        = ((IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_axi_slave__DOT__do_write) 
           & ((0xcU == vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_axi_slave__DOT__eff_addr) 
              & (IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_axi_slave__DOT__eff_strb)));
    vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_axi_slave__DOT____VdfgRegularize_h3a287cbd_0_0 
        = ((IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_axi_slave__DOT__do_write) 
           & (0U == vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_axi_slave__DOT__eff_addr));
    vlSelfRef.tb_xip_qspi_axi_top__DOT__dut_io0_in 
        = (((IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__dut_io0_oe)
             ? (IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__dut_io0_out)
             : ((IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__fm_io0_oe) 
                & (IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__fm_io0_out))) 
           & ((IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__dut_io0_oe) 
              | (IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__fm_io0_oe)));
    vlSelfRef.tb_xip_qspi_axi_top__DOT__dut_io1_in 
        = (((IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__dut_io1_oe)
             ? (IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__dut_io1_out)
             : ((IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__fm_io1_oe) 
                & (IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__fm_io1_out))) 
           & ((IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__dut_io1_oe) 
              | (IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__fm_io1_oe)));
    vlSelfRef.tb_xip_qspi_axi_top__DOT__dut_io2_in 
        = (((IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__dut_io2_oe)
             ? (IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__dut_io2_out)
             : ((IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__fm_io2_oe) 
                & (IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__fm_io2_out))) 
           & ((IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__dut_io2_oe) 
              | (IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__fm_io2_oe)));
    vlSelfRef.tb_xip_qspi_axi_top__DOT__dut_io3_in 
        = (((IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__dut_io3_oe)
             ? (IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__dut_io3_out)
             : ((IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__fm_io3_oe) 
                & (IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__fm_io3_out))) 
           & ((IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__dut_io3_oe) 
              | (IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__fm_io3_oe)));
    vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__int_a_start 
        = ((IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_axi_slave__DOT____VdfgRegularize_h3a287cbd_0_0) 
           & (vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_axi_slave__DOT__eff_data 
              >> 0x15U));
    vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__int_m_start = 0U;
    vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__int_m_tx_data = 0U;
    vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__int_m_num_bytes = 0U;
    vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__int_m_ctrl_cmd = 0U;
    vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__int_m_addr = 0U;
    if ((0U == (IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_arbiter__DOT__grant))) {
        if (vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__int_a_start) {
            vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__int_m_start 
                = vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__int_a_start;
            vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__int_m_tx_data 
                = (0xffU & vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_axi_slave__DOT__reg_tx_data);
            vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__int_m_num_bytes 
                = vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_axi_slave__DOT__reg_num_bytes;
            vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__int_m_ctrl_cmd 
                = vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_axi_slave__DOT__reg_ctrl_cmd;
            vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__int_m_addr 
                = vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_axi_slave__DOT__reg_addr;
        } else if (vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__int_x_start) {
            vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__int_m_start 
                = vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__int_x_start;
            vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__int_m_num_bytes = 4U;
            vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__int_m_ctrl_cmd 
                = (0x200000U | (0x1fffffU & vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_axi_slave__DOT__reg_xip_cfg));
            vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__int_m_addr 
                = (vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_xip_slave__DOT__ar_addr_latched 
                   - (IData)(0x1000000U));
        }
    } else if ((1U == (IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_arbiter__DOT__grant))) {
        vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__int_m_start 
            = vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__int_a_start;
        vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__int_m_tx_data 
            = (0xffU & vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_axi_slave__DOT__reg_tx_data);
        vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__int_m_num_bytes 
            = vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_axi_slave__DOT__reg_num_bytes;
        vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__int_m_ctrl_cmd 
            = vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_axi_slave__DOT__reg_ctrl_cmd;
        vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__int_m_addr 
            = vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_axi_slave__DOT__reg_addr;
    } else if ((2U == (IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_arbiter__DOT__grant))) {
        vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__int_m_start 
            = vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__int_x_start;
        vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__int_m_num_bytes = 4U;
        vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__int_m_ctrl_cmd 
            = (0x200000U | (0x1fffffU & vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_axi_slave__DOT__reg_xip_cfg));
        vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__int_m_addr 
            = (vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_xip_slave__DOT__ar_addr_latched 
               - (IData)(0x1000000U));
    }
    vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_arbiter__DOT__route_to_reg 
        = ((1U == (IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_arbiter__DOT__grant)) 
           | ((0U == (IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_arbiter__DOT__grant)) 
              & (IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__int_a_start)));
    vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_arbiter__DOT__route_to_xip 
        = ((2U == (IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_arbiter__DOT__grant)) 
           | ((0U == (IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_arbiter__DOT__grant)) 
              & ((~ (IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__int_a_start)) 
                 & (IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__int_x_start))));
    vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__int_a_error 
        = ((IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_arbiter__DOT__route_to_reg) 
           & (IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_cdc__DOT__error_ff2));
    vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__int_x_busy 
        = ((IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_arbiter__DOT__route_to_xip) 
           & (IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_cdc__DOT__busy_ff2));
}

VL_ATTR_COLD void Vtb_xip_qspi_axi_top___024root___eval_triggers__stl(Vtb_xip_qspi_axi_top___024root* vlSelf);

VL_ATTR_COLD bool Vtb_xip_qspi_axi_top___024root___eval_phase__stl(Vtb_xip_qspi_axi_top___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_xip_qspi_axi_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_xip_qspi_axi_top___024root___eval_phase__stl\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vtb_xip_qspi_axi_top___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelfRef.__VstlTriggered.any();
    if (__VstlExecute) {
        Vtb_xip_qspi_axi_top___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_xip_qspi_axi_top___024root___dump_triggers__act(Vtb_xip_qspi_axi_top___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_xip_qspi_axi_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_xip_qspi_axi_top___024root___dump_triggers__act\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VactTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge tb_xip_qspi_axi_top.ACLK)\n");
    }
    if ((2ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @(negedge tb_xip_qspi_axi_top.ARESETn)\n");
    }
    if ((4ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 2 is active: @(posedge tb_xip_qspi_axi_top.qclk)\n");
    }
    if ((8ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 3 is active: @(posedge tb_xip_qspi_axi_top.qclk_rst)\n");
    }
    if ((0x10ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 4 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
    if ((0x20ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 5 is active: @(posedge tb_xip_qspi_axi_top.ARESETn)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_xip_qspi_axi_top___024root___dump_triggers__nba(Vtb_xip_qspi_axi_top___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_xip_qspi_axi_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_xip_qspi_axi_top___024root___dump_triggers__nba\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge tb_xip_qspi_axi_top.ACLK)\n");
    }
    if ((2ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @(negedge tb_xip_qspi_axi_top.ARESETn)\n");
    }
    if ((4ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 2 is active: @(posedge tb_xip_qspi_axi_top.qclk)\n");
    }
    if ((8ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 3 is active: @(posedge tb_xip_qspi_axi_top.qclk_rst)\n");
    }
    if ((0x10ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 4 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
    if ((0x20ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 5 is active: @(posedge tb_xip_qspi_axi_top.ARESETn)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtb_xip_qspi_axi_top___024root____Vm_traceActivitySetAll(Vtb_xip_qspi_axi_top___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_xip_qspi_axi_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_xip_qspi_axi_top___024root____Vm_traceActivitySetAll\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vm_traceActivity[0U] = 1U;
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
    vlSelfRef.__Vm_traceActivity[4U] = 1U;
    vlSelfRef.__Vm_traceActivity[5U] = 1U;
    vlSelfRef.__Vm_traceActivity[6U] = 1U;
    vlSelfRef.__Vm_traceActivity[7U] = 1U;
    vlSelfRef.__Vm_traceActivity[8U] = 1U;
    vlSelfRef.__Vm_traceActivity[9U] = 1U;
}

VL_ATTR_COLD void Vtb_xip_qspi_axi_top___024root___ctor_var_reset(Vtb_xip_qspi_axi_top___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_xip_qspi_axi_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_xip_qspi_axi_top___024root___ctor_var_reset\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->tb_xip_qspi_axi_top__DOT__ACLK = VL_RAND_RESET_I(1);
    vlSelf->tb_xip_qspi_axi_top__DOT__qclk = VL_RAND_RESET_I(1);
    vlSelf->tb_xip_qspi_axi_top__DOT__ARESETn = VL_RAND_RESET_I(1);
    vlSelf->tb_xip_qspi_axi_top__DOT__qclk_rst = VL_RAND_RESET_I(1);
    vlSelf->tb_xip_qspi_axi_top__DOT__AXI_AWADDR = VL_RAND_RESET_I(32);
    vlSelf->tb_xip_qspi_axi_top__DOT__AXI_AWVALID = VL_RAND_RESET_I(1);
    vlSelf->tb_xip_qspi_axi_top__DOT__AXI_WDATA = VL_RAND_RESET_I(32);
    vlSelf->tb_xip_qspi_axi_top__DOT__AXI_WSTRB = VL_RAND_RESET_I(4);
    vlSelf->tb_xip_qspi_axi_top__DOT__AXI_WVALID = VL_RAND_RESET_I(1);
    vlSelf->tb_xip_qspi_axi_top__DOT__AXI_BREADY = VL_RAND_RESET_I(1);
    vlSelf->tb_xip_qspi_axi_top__DOT__AXI_ARADDR = VL_RAND_RESET_I(32);
    vlSelf->tb_xip_qspi_axi_top__DOT__AXI_ARVALID = VL_RAND_RESET_I(1);
    vlSelf->tb_xip_qspi_axi_top__DOT__AXI_RREADY = VL_RAND_RESET_I(1);
    vlSelf->tb_xip_qspi_axi_top__DOT__XIP_ARADDR = VL_RAND_RESET_I(32);
    vlSelf->tb_xip_qspi_axi_top__DOT__XIP_ARVALID = VL_RAND_RESET_I(1);
    vlSelf->tb_xip_qspi_axi_top__DOT__XIP_ARREADY = VL_RAND_RESET_I(1);
    vlSelf->tb_xip_qspi_axi_top__DOT__XIP_RVALID = VL_RAND_RESET_I(1);
    vlSelf->tb_xip_qspi_axi_top__DOT__XIP_RREADY = VL_RAND_RESET_I(1);
    vlSelf->tb_xip_qspi_axi_top__DOT__dut_io0_out = VL_RAND_RESET_I(1);
    vlSelf->tb_xip_qspi_axi_top__DOT__dut_io0_oe = VL_RAND_RESET_I(1);
    vlSelf->tb_xip_qspi_axi_top__DOT__dut_io0_in = VL_RAND_RESET_I(1);
    vlSelf->tb_xip_qspi_axi_top__DOT__dut_io1_out = VL_RAND_RESET_I(1);
    vlSelf->tb_xip_qspi_axi_top__DOT__dut_io1_oe = VL_RAND_RESET_I(1);
    vlSelf->tb_xip_qspi_axi_top__DOT__dut_io1_in = VL_RAND_RESET_I(1);
    vlSelf->tb_xip_qspi_axi_top__DOT__dut_io2_out = VL_RAND_RESET_I(1);
    vlSelf->tb_xip_qspi_axi_top__DOT__dut_io2_oe = VL_RAND_RESET_I(1);
    vlSelf->tb_xip_qspi_axi_top__DOT__dut_io2_in = VL_RAND_RESET_I(1);
    vlSelf->tb_xip_qspi_axi_top__DOT__dut_io3_out = VL_RAND_RESET_I(1);
    vlSelf->tb_xip_qspi_axi_top__DOT__dut_io3_oe = VL_RAND_RESET_I(1);
    vlSelf->tb_xip_qspi_axi_top__DOT__dut_io3_in = VL_RAND_RESET_I(1);
    vlSelf->tb_xip_qspi_axi_top__DOT__fm_io0_out = VL_RAND_RESET_I(1);
    vlSelf->tb_xip_qspi_axi_top__DOT__fm_io0_oe = VL_RAND_RESET_I(1);
    vlSelf->tb_xip_qspi_axi_top__DOT__fm_io1_out = VL_RAND_RESET_I(1);
    vlSelf->tb_xip_qspi_axi_top__DOT__fm_io1_oe = VL_RAND_RESET_I(1);
    vlSelf->tb_xip_qspi_axi_top__DOT__fm_io2_out = VL_RAND_RESET_I(1);
    vlSelf->tb_xip_qspi_axi_top__DOT__fm_io2_oe = VL_RAND_RESET_I(1);
    vlSelf->tb_xip_qspi_axi_top__DOT__fm_io3_out = VL_RAND_RESET_I(1);
    vlSelf->tb_xip_qspi_axi_top__DOT__fm_io3_oe = VL_RAND_RESET_I(1);
    vlSelf->tb_xip_qspi_axi_top__DOT__fm_written_valid = VL_RAND_RESET_I(1);
    vlSelf->tb_xip_qspi_axi_top__DOT__fm_written_byte = VL_RAND_RESET_I(8);
    vlSelf->tb_xip_qspi_axi_top__DOT__pass_count = 0;
    vlSelf->tb_xip_qspi_axi_top__DOT__fail_count = 0;
    vlSelf->tb_xip_qspi_axi_top__DOT__unnamedblk1__DOT__rdata = VL_RAND_RESET_I(32);
    vlSelf->tb_xip_qspi_axi_top__DOT__unnamedblk1__DOT__rresp = VL_RAND_RESET_I(2);
    vlSelf->tb_xip_qspi_axi_top__DOT__unnamedblk1__DOT__xip_cfg_val = VL_RAND_RESET_I(32);
    vlSelf->tb_xip_qspi_axi_top__DOT__unnamedblk1__DOT__unnamedblk2__DOT__ax_data = VL_RAND_RESET_I(32);
    vlSelf->tb_xip_qspi_axi_top__DOT__unnamedblk1__DOT__unnamedblk2__DOT__xp_data = VL_RAND_RESET_I(32);
    vlSelf->tb_xip_qspi_axi_top__DOT__unnamedblk1__DOT__unnamedblk2__DOT__ax_resp = VL_RAND_RESET_I(2);
    vlSelf->tb_xip_qspi_axi_top__DOT__unnamedblk1__DOT__unnamedblk2__DOT__xp_resp = VL_RAND_RESET_I(2);
    vlSelf->tb_xip_qspi_axi_top__DOT__unnamedblk1__DOT__unnamedblk3__DOT__xip_data = VL_RAND_RESET_I(32);
    vlSelf->tb_xip_qspi_axi_top__DOT__unnamedblk1__DOT__unnamedblk3__DOT__xip_resp = VL_RAND_RESET_I(2);
    vlSelf->tb_xip_qspi_axi_top__DOT__unnamedblk1__DOT__unnamedblk3__DOT__abort_ctrl_cmd = VL_RAND_RESET_I(32);
    vlSelf->tb_xip_qspi_axi_top__DOT__unnamedblk1__DOT__unnamedblk4__DOT__slow_xip_cfg = VL_RAND_RESET_I(32);
    vlSelf->tb_xip_qspi_axi_top__DOT__unnamedblk1__DOT__unnamedblk4__DOT__xip_data = VL_RAND_RESET_I(32);
    vlSelf->tb_xip_qspi_axi_top__DOT__unnamedblk1__DOT__unnamedblk4__DOT__xip_resp = VL_RAND_RESET_I(2);
    vlSelf->tb_xip_qspi_axi_top__DOT__unnamedblk1__DOT__unnamedblk4__DOT__status_val = VL_RAND_RESET_I(32);
    vlSelf->tb_xip_qspi_axi_top__DOT__unnamedblk1__DOT__unnamedblk4__DOT__status_resp = VL_RAND_RESET_I(2);
    vlSelf->tb_xip_qspi_axi_top__DOT__unnamedblk1__DOT__unnamedblk5__DOT__xip_data = VL_RAND_RESET_I(32);
    vlSelf->tb_xip_qspi_axi_top__DOT__unnamedblk1__DOT__unnamedblk5__DOT__xip_resp = VL_RAND_RESET_I(2);
    vlSelf->tb_xip_qspi_axi_top__DOT__unnamedblk1__DOT__unnamedblk6__DOT__dual_xip_cfg = VL_RAND_RESET_I(32);
    vlSelf->tb_xip_qspi_axi_top__DOT__unnamedblk1__DOT__unnamedblk6__DOT__xip_data = VL_RAND_RESET_I(32);
    vlSelf->tb_xip_qspi_axi_top__DOT__unnamedblk1__DOT__unnamedblk6__DOT__xip_resp = VL_RAND_RESET_I(2);
    vlSelf->tb_xip_qspi_axi_top__DOT__unnamedblk1__DOT__unnamedblk7__DOT__quad_xip_cfg = VL_RAND_RESET_I(32);
    vlSelf->tb_xip_qspi_axi_top__DOT__unnamedblk1__DOT__unnamedblk7__DOT__xip_data = VL_RAND_RESET_I(32);
    vlSelf->tb_xip_qspi_axi_top__DOT__unnamedblk1__DOT__unnamedblk7__DOT__xip_resp = VL_RAND_RESET_I(2);
    vlSelf->tb_xip_qspi_axi_top__DOT__unnamedblk1__DOT__unnamedblk8__DOT__normal_xip_cfg = VL_RAND_RESET_I(32);
    vlSelf->tb_xip_qspi_axi_top__DOT__unnamedblk1__DOT__unnamedblk8__DOT__xip_data = VL_RAND_RESET_I(32);
    vlSelf->tb_xip_qspi_axi_top__DOT__unnamedblk1__DOT__unnamedblk8__DOT__xip_resp = VL_RAND_RESET_I(2);
    vlSelf->tb_xip_qspi_axi_top__DOT__unnamedblk1__DOT__unnamedblk8__DOT__all_ok = VL_RAND_RESET_I(1);
    vlSelf->tb_xip_qspi_axi_top__DOT__unnamedblk1__DOT__unnamedblk8__DOT__base_addr = VL_RAND_RESET_I(32);
    vlSelf->tb_xip_qspi_axi_top__DOT__unnamedblk1__DOT__unnamedblk8__DOT__expected = VL_RAND_RESET_I(32);
    vlSelf->tb_xip_qspi_axi_top__DOT__unnamedblk1__DOT__unnamedblk8__DOT__unnamedblk9__DOT__i = 0;
    vlSelf->tb_xip_qspi_axi_top__DOT__u_dut__DOT__int_a_start = VL_RAND_RESET_I(1);
    vlSelf->tb_xip_qspi_axi_top__DOT__u_dut__DOT__int_a_error = VL_RAND_RESET_I(1);
    vlSelf->tb_xip_qspi_axi_top__DOT__u_dut__DOT__int_x_start = VL_RAND_RESET_I(1);
    vlSelf->tb_xip_qspi_axi_top__DOT__u_dut__DOT__int_x_busy = VL_RAND_RESET_I(1);
    vlSelf->tb_xip_qspi_axi_top__DOT__u_dut__DOT__int_m_start = VL_RAND_RESET_I(1);
    vlSelf->tb_xip_qspi_axi_top__DOT__u_dut__DOT__int_m_ctrl_cmd = VL_RAND_RESET_I(32);
    vlSelf->tb_xip_qspi_axi_top__DOT__u_dut__DOT__int_m_addr = VL_RAND_RESET_I(32);
    vlSelf->tb_xip_qspi_axi_top__DOT__u_dut__DOT__int_m_num_bytes = VL_RAND_RESET_I(32);
    vlSelf->tb_xip_qspi_axi_top__DOT__u_dut__DOT__int_m_tx_data = VL_RAND_RESET_I(8);
    vlSelf->tb_xip_qspi_axi_top__DOT__u_dut__DOT__int_m_tx_req = VL_RAND_RESET_I(1);
    vlSelf->tb_xip_qspi_axi_top__DOT__u_dut__DOT__int_m_rx_data = VL_RAND_RESET_I(8);
    vlSelf->tb_xip_qspi_axi_top__DOT__u_dut__DOT__int_m_rx_valid = VL_RAND_RESET_I(1);
    vlSelf->tb_xip_qspi_axi_top__DOT__u_dut__DOT__int_q_start = VL_RAND_RESET_I(1);
    vlSelf->tb_xip_qspi_axi_top__DOT__u_dut__DOT__int_q_tx_data = VL_RAND_RESET_I(8);
    vlSelf->tb_xip_qspi_axi_top__DOT__u_dut__DOT__int_q_rx_valid = VL_RAND_RESET_I(1);
    vlSelf->tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_axi_slave__DOT__reg_ctrl_cmd = VL_RAND_RESET_I(32);
    vlSelf->tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_axi_slave__DOT__reg_addr = VL_RAND_RESET_I(32);
    vlSelf->tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_axi_slave__DOT__reg_num_bytes = VL_RAND_RESET_I(32);
    vlSelf->tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_axi_slave__DOT__reg_tx_data = VL_RAND_RESET_I(32);
    vlSelf->tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_axi_slave__DOT__reg_xip_cfg = VL_RAND_RESET_I(32);
    vlSelf->tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_axi_slave__DOT__state = VL_RAND_RESET_I(2);
    vlSelf->tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_axi_slave__DOT__aw_hs = VL_RAND_RESET_I(1);
    vlSelf->tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_axi_slave__DOT__w_hs = VL_RAND_RESET_I(1);
    vlSelf->tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_axi_slave__DOT__b_hs = VL_RAND_RESET_I(1);
    vlSelf->tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_axi_slave__DOT__ar_hs = VL_RAND_RESET_I(1);
    vlSelf->tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_axi_slave__DOT__r_hs = VL_RAND_RESET_I(1);
    vlSelf->tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_axi_slave__DOT__aw_addr_latched = VL_RAND_RESET_I(32);
    vlSelf->tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_axi_slave__DOT__w_data_latched = VL_RAND_RESET_I(32);
    vlSelf->tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_axi_slave__DOT__w_strb_latched = VL_RAND_RESET_I(4);
    vlSelf->tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_axi_slave__DOT__ar_addr_latched = VL_RAND_RESET_I(32);
    vlSelf->tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_axi_slave__DOT__do_write = VL_RAND_RESET_I(1);
    vlSelf->tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_axi_slave__DOT__eff_addr = VL_RAND_RESET_I(32);
    vlSelf->tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_axi_slave__DOT__eff_data = VL_RAND_RESET_I(32);
    vlSelf->tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_axi_slave__DOT__eff_strb = VL_RAND_RESET_I(4);
    vlSelf->tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_axi_slave__DOT__read_state = VL_RAND_RESET_I(2);
    vlSelf->tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_axi_slave__DOT__done_latched = VL_RAND_RESET_I(1);
    vlSelf->tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_axi_slave__DOT__tx_ready_latched = VL_RAND_RESET_I(1);
    vlSelf->tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_axi_slave__DOT__rx_ready_latched = VL_RAND_RESET_I(1);
    vlSelf->tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_axi_slave__DOT__error_latched = VL_RAND_RESET_I(1);
    vlSelf->tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_axi_slave__DOT__qspi_error_d1 = VL_RAND_RESET_I(1);
    vlSelf->tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_axi_slave__DOT__unnamedblk1__DOT__i = 0;
    vlSelf->tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_axi_slave__DOT__unnamedblk2__DOT__i = 0;
    vlSelf->tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_axi_slave__DOT__unnamedblk3__DOT__i = 0;
    vlSelf->tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_axi_slave__DOT__unnamedblk4__DOT__i = 0;
    vlSelf->tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_axi_slave__DOT__unnamedblk5__DOT__i = 0;
    vlSelf->tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_axi_slave__DOT____VdfgRegularize_h3a287cbd_0_0 = VL_RAND_RESET_I(1);
    vlSelf->tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_axi_slave__DOT____VdfgRegularize_h3a287cbd_0_1 = VL_RAND_RESET_I(1);
    vlSelf->tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_xip_slave__DOT__state = VL_RAND_RESET_I(3);
    vlSelf->tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_xip_slave__DOT__ar_addr_latched = VL_RAND_RESET_I(32);
    vlSelf->tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_xip_slave__DOT__assemble_reg = VL_RAND_RESET_I(32);
    vlSelf->tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_xip_slave__DOT__byte_count = VL_RAND_RESET_I(3);
    vlSelf->tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_xip_slave__DOT__fetch_error = VL_RAND_RESET_I(1);
    vlSelf->tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_xip_slave__DOT__engine_busy_seen = VL_RAND_RESET_I(1);
    vlSelf->tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_xip_slave__DOT__drain_cnt = VL_RAND_RESET_I(4);
    vlSelf->tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_xip_slave__DOT__x_rx_valid_d1 = VL_RAND_RESET_I(1);
    vlSelf->tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_arbiter__DOT__grant = VL_RAND_RESET_I(2);
    vlSelf->tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_arbiter__DOT__busy_seen = VL_RAND_RESET_I(1);
    vlSelf->tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_arbiter__DOT__drain_cnt = VL_RAND_RESET_I(4);
    vlSelf->tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_arbiter__DOT__route_to_reg = VL_RAND_RESET_I(1);
    vlSelf->tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_arbiter__DOT__route_to_xip = VL_RAND_RESET_I(1);
    vlSelf->tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_cdc__DOT__error_ff1 = VL_RAND_RESET_I(1);
    vlSelf->tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_cdc__DOT__error_ff2 = VL_RAND_RESET_I(1);
    vlSelf->tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_cdc__DOT__busy_ff1 = VL_RAND_RESET_I(1);
    vlSelf->tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_cdc__DOT__busy_ff2 = VL_RAND_RESET_I(1);
    vlSelf->tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_cdc__DOT__tx_data_hold = VL_RAND_RESET_I(8);
    vlSelf->tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_cdc__DOT__tx_data_ready = VL_RAND_RESET_I(1);
    vlSelf->tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_cdc__DOT__rx_data_hold = VL_RAND_RESET_I(8);
    vlSelf->tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_cdc__DOT__u_start_sync__DOT__toggle_src = VL_RAND_RESET_I(1);
    vlSelf->tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_cdc__DOT__u_start_sync__DOT__sync_ff1 = VL_RAND_RESET_I(1);
    vlSelf->tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_cdc__DOT__u_start_sync__DOT__sync_ff2 = VL_RAND_RESET_I(1);
    vlSelf->tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_cdc__DOT__u_start_sync__DOT__sync_ff3 = VL_RAND_RESET_I(1);
    vlSelf->tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_cdc__DOT__u_abort_sync__DOT__toggle_src = VL_RAND_RESET_I(1);
    vlSelf->tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_cdc__DOT__u_abort_sync__DOT__sync_ff1 = VL_RAND_RESET_I(1);
    vlSelf->tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_cdc__DOT__u_abort_sync__DOT__sync_ff2 = VL_RAND_RESET_I(1);
    vlSelf->tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_cdc__DOT__u_abort_sync__DOT__sync_ff3 = VL_RAND_RESET_I(1);
    vlSelf->tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_cdc__DOT__u_done_sync__DOT__toggle_src = VL_RAND_RESET_I(1);
    vlSelf->tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_cdc__DOT__u_done_sync__DOT__sync_ff1 = VL_RAND_RESET_I(1);
    vlSelf->tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_cdc__DOT__u_done_sync__DOT__sync_ff2 = VL_RAND_RESET_I(1);
    vlSelf->tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_cdc__DOT__u_done_sync__DOT__sync_ff3 = VL_RAND_RESET_I(1);
    vlSelf->tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_cdc__DOT__u_txreq_sync__DOT__toggle_src = VL_RAND_RESET_I(1);
    vlSelf->tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_cdc__DOT__u_txreq_sync__DOT__sync_ff1 = VL_RAND_RESET_I(1);
    vlSelf->tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_cdc__DOT__u_txreq_sync__DOT__sync_ff2 = VL_RAND_RESET_I(1);
    vlSelf->tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_cdc__DOT__u_txreq_sync__DOT__sync_ff3 = VL_RAND_RESET_I(1);
    vlSelf->tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_cdc__DOT__u_rxvalid_sync__DOT__toggle_src = VL_RAND_RESET_I(1);
    vlSelf->tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_cdc__DOT__u_rxvalid_sync__DOT__sync_ff1 = VL_RAND_RESET_I(1);
    vlSelf->tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_cdc__DOT__u_rxvalid_sync__DOT__sync_ff2 = VL_RAND_RESET_I(1);
    vlSelf->tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_cdc__DOT__u_rxvalid_sync__DOT__sync_ff3 = VL_RAND_RESET_I(1);
    vlSelf->tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_cdc__DOT__u_tx_ready_sync__DOT__toggle_src = VL_RAND_RESET_I(1);
    vlSelf->tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_cdc__DOT__u_tx_ready_sync__DOT__sync_ff1 = VL_RAND_RESET_I(1);
    vlSelf->tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_cdc__DOT__u_tx_ready_sync__DOT__sync_ff2 = VL_RAND_RESET_I(1);
    vlSelf->tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_cdc__DOT__u_tx_ready_sync__DOT__sync_ff3 = VL_RAND_RESET_I(1);
    vlSelf->tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_qspi_engine__DOT__phase = VL_RAND_RESET_I(2);
    vlSelf->tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_qspi_engine__DOT__bit_cnt = VL_RAND_RESET_I(16);
    vlSelf->tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_qspi_engine__DOT__busy_r = VL_RAND_RESET_I(1);
    vlSelf->tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_qspi_engine__DOT__ctrl = VL_RAND_RESET_I(23);
    vlSelf->tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_qspi_engine__DOT__addr_lat = VL_RAND_RESET_I(32);
    vlSelf->tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_qspi_engine__DOT__num_bytes_lat = VL_RAND_RESET_I(32);
    vlSelf->tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_qspi_engine__DOT__phase_limit = VL_RAND_RESET_I(16);
    vlSelf->tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_qspi_engine__DOT__addr_clocks = VL_RAND_RESET_I(16);
    vlSelf->tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_qspi_engine__DOT__data_clocks = VL_RAND_RESET_I(16);
    vlSelf->tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_qspi_engine__DOT__timeout_cnt = VL_RAND_RESET_I(32);
    vlSelf->tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_qspi_engine__DOT__timeout_hit = VL_RAND_RESET_I(1);
    vlSelf->tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_qspi_engine__DOT__error_r = VL_RAND_RESET_I(1);
    vlSelf->tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_qspi_engine__DOT__out_shift = VL_RAND_RESET_Q(40);
    vlSelf->tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_qspi_engine__DOT__tx_shift_byte = VL_RAND_RESET_I(8);
    vlSelf->tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_qspi_engine__DOT__in_byte = VL_RAND_RESET_I(8);
    vlSelf->tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_qspi_engine__DOT__clocks_per_byte = VL_RAND_RESET_I(4);
    vlSelf->tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_qspi_engine__DOT__byte_bit_cnt = VL_RAND_RESET_I(4);
    vlSelf->tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_qspi_engine__DOT__byte_boundary = VL_RAND_RESET_I(1);
    vlSelf->tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_qspi_engine__DOT__byte_boundary_d1 = VL_RAND_RESET_I(1);
    vlSelf->tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_qspi_engine__DOT____VdfgRegularize_h909204f5_0_0 = VL_RAND_RESET_I(1);
    vlSelf->tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_qspi_engine__DOT____VdfgRegularize_h909204f5_0_1 = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 256; ++__Vi0) {
        vlSelf->tb_xip_qspi_axi_top__DOT__u_model__DOT__mem[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->tb_xip_qspi_axi_top__DOT__u_model__DOT__phase = VL_RAND_RESET_I(2);
    vlSelf->tb_xip_qspi_axi_top__DOT__u_model__DOT__bitcnt = VL_RAND_RESET_I(11);
    vlSelf->tb_xip_qspi_axi_top__DOT__u_model__DOT__opcode = VL_RAND_RESET_I(8);
    vlSelf->tb_xip_qspi_axi_top__DOT__u_model__DOT__addr_shift = VL_RAND_RESET_I(32);
    vlSelf->tb_xip_qspi_axi_top__DOT__u_model__DOT__out_byte = VL_RAND_RESET_I(8);
    vlSelf->tb_xip_qspi_axi_top__DOT__u_model__DOT__next_addr_byte = VL_RAND_RESET_I(8);
    vlSelf->tb_xip_qspi_axi_top__DOT__u_model__DOT__nibblecnt = VL_RAND_RESET_I(4);
    vlSelf->tb_xip_qspi_axi_top__DOT__u_model__DOT__clocks_per_byte = VL_RAND_RESET_I(4);
    vlSelf->tb_xip_qspi_axi_top__DOT__u_model__DOT__in_byte_acc = VL_RAND_RESET_I(8);
    vlSelf->tb_xip_qspi_axi_top__DOT__u_model__DOT__dec_dir = VL_RAND_RESET_I(1);
    vlSelf->tb_xip_qspi_axi_top__DOT__u_model__DOT__dec_data_lines = VL_RAND_RESET_I(2);
    vlSelf->tb_xip_qspi_axi_top__DOT__u_model__DOT__dec_addr_lines = VL_RAND_RESET_I(2);
    vlSelf->tb_xip_qspi_axi_top__DOT__u_model__DOT__dec_dummy_cycles = VL_RAND_RESET_I(8);
    vlSelf->tb_xip_qspi_axi_top__DOT__u_model__DOT__dec_addr_bytes = VL_RAND_RESET_I(8);
    vlSelf->tb_xip_qspi_axi_top__DOT__u_model__DOT__unnamedblk1__DOT__i = 0;
    vlSelf->__Vfunc_tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_qspi_engine__DOT__lines_per_clock__27__Vfuncout = 0;
    vlSelf->__Vfunc_tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_qspi_engine__DOT__lines_per_clock__27__lw = VL_RAND_RESET_I(2);
    vlSelf->__Vfunc_tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_qspi_engine__DOT__lines_per_clock__28__Vfuncout = 0;
    vlSelf->__Vfunc_tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_qspi_engine__DOT__lines_per_clock__28__lw = VL_RAND_RESET_I(2);
    vlSelf->__Vfunc_tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_qspi_engine__DOT__lines_per_clock__30__Vfuncout = 0;
    vlSelf->__Vfunc_tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_qspi_engine__DOT__lines_per_clock__30__lw = VL_RAND_RESET_I(2);
    vlSelf->__Vfunc_tb_xip_qspi_axi_top__DOT__u_model__DOT__lpc__32__Vfuncout = 0;
    vlSelf->__Vfunc_tb_xip_qspi_axi_top__DOT__u_model__DOT__lpc__32__w = VL_RAND_RESET_I(2);
    vlSelf->__Vdly__tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_cdc__DOT__u_abort_sync__DOT__toggle_src = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_qspi_engine__DOT__phase = VL_RAND_RESET_I(2);
    vlSelf->__Vdly__tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_qspi_engine__DOT__bit_cnt = VL_RAND_RESET_I(16);
    vlSelf->__Vdly__tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_qspi_engine__DOT__busy_r = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_qspi_engine__DOT__in_byte = VL_RAND_RESET_I(8);
    vlSelf->__Vdly__tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_cdc__DOT__u_done_sync__DOT__toggle_src = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_cdc__DOT__u_txreq_sync__DOT__toggle_src = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_cdc__DOT__u_rxvalid_sync__DOT__toggle_src = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__tb_xip_qspi_axi_top__DOT__ACLK__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__tb_xip_qspi_axi_top__DOT__ARESETn__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__tb_xip_qspi_axi_top__DOT__qclk__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__tb_xip_qspi_axi_top__DOT__qclk_rst__0 = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 10; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
