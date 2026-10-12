// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_xip_qspi_axi_top.h for the primary calling header

#include "Vtb_xip_qspi_axi_top__pch.h"
#include "Vtb_xip_qspi_axi_top__Syms.h"
#include "Vtb_xip_qspi_axi_top___024root.h"

VL_ATTR_COLD void Vtb_xip_qspi_axi_top___024root___eval_initial__TOP(Vtb_xip_qspi_axi_top___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_xip_qspi_axi_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_xip_qspi_axi_top___024root___eval_initial__TOP\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlWide<6>/*191:0*/ __Vtemp_1;
    // Body
    __Vtemp_1[0U] = 0x2e766364U;
    __Vtemp_1[1U] = 0x5f746f70U;
    __Vtemp_1[2U] = 0x5f617869U;
    __Vtemp_1[3U] = 0x71737069U;
    __Vtemp_1[4U] = 0x7869705fU;
    __Vtemp_1[5U] = 0x74625fU;
    vlSymsp->_vm_contextp__->dumpfile(VL_CVT_PACK_STR_NW(6, __Vtemp_1));
    vlSymsp->_traceDumpOpen();
    vlSelfRef.tb_xip_qspi_axi_top__DOT__u_model__DOT__unnamedblk1__DOT__i = 0U;
    while (VL_GTS_III(32, 0x100U, vlSelfRef.tb_xip_qspi_axi_top__DOT__u_model__DOT__unnamedblk1__DOT__i)) {
        vlSelfRef.tb_xip_qspi_axi_top__DOT__u_model__DOT__mem[(0xffU 
                                                               & vlSelfRef.tb_xip_qspi_axi_top__DOT__u_model__DOT__unnamedblk1__DOT__i)] 
            = (0xffU & vlSelfRef.tb_xip_qspi_axi_top__DOT__u_model__DOT__unnamedblk1__DOT__i);
        vlSelfRef.tb_xip_qspi_axi_top__DOT__u_model__DOT__unnamedblk1__DOT__i 
            = ((IData)(1U) + vlSelfRef.tb_xip_qspi_axi_top__DOT__u_model__DOT__unnamedblk1__DOT__i);
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_xip_qspi_axi_top___024root___dump_triggers__stl(Vtb_xip_qspi_axi_top___024root* vlSelf);
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtb_xip_qspi_axi_top___024root___eval_triggers__stl(Vtb_xip_qspi_axi_top___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_xip_qspi_axi_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_xip_qspi_axi_top___024root___eval_triggers__stl\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VstlTriggered.set(0U, (IData)(vlSelfRef.__VstlFirstIteration));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtb_xip_qspi_axi_top___024root___dump_triggers__stl(vlSelf);
    }
#endif
}
