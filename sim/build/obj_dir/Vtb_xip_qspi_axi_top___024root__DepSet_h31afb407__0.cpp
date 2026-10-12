// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_xip_qspi_axi_top.h for the primary calling header

#include "Vtb_xip_qspi_axi_top__pch.h"
#include "Vtb_xip_qspi_axi_top__Syms.h"
#include "Vtb_xip_qspi_axi_top___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_xip_qspi_axi_top___024root___dump_triggers__act(Vtb_xip_qspi_axi_top___024root* vlSelf);
#endif  // VL_DEBUG

void Vtb_xip_qspi_axi_top___024root___eval_triggers__act(Vtb_xip_qspi_axi_top___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_xip_qspi_axi_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_xip_qspi_axi_top___024root___eval_triggers__act\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered.set(0U, ((IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__ACLK) 
                                       & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_xip_qspi_axi_top__DOT__ACLK__0))));
    vlSelfRef.__VactTriggered.set(1U, ((~ (IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__ARESETn)) 
                                       & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_xip_qspi_axi_top__DOT__ARESETn__0)));
    vlSelfRef.__VactTriggered.set(2U, ((IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__qclk) 
                                       & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_xip_qspi_axi_top__DOT__qclk__0))));
    vlSelfRef.__VactTriggered.set(3U, ((IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__qclk_rst) 
                                       & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_xip_qspi_axi_top__DOT__qclk_rst__0))));
    vlSelfRef.__VactTriggered.set(4U, vlSelfRef.__VdlySched.awaitingCurrentTime());
    vlSelfRef.__VactTriggered.set(5U, ((IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__ARESETn) 
                                       & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_xip_qspi_axi_top__DOT__ARESETn__0))));
    vlSelfRef.__Vtrigprevexpr___TOP__tb_xip_qspi_axi_top__DOT__ACLK__0 
        = vlSelfRef.tb_xip_qspi_axi_top__DOT__ACLK;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_xip_qspi_axi_top__DOT__ARESETn__0 
        = vlSelfRef.tb_xip_qspi_axi_top__DOT__ARESETn;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_xip_qspi_axi_top__DOT__qclk__0 
        = vlSelfRef.tb_xip_qspi_axi_top__DOT__qclk;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_xip_qspi_axi_top__DOT__qclk_rst__0 
        = vlSelfRef.tb_xip_qspi_axi_top__DOT__qclk_rst;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtb_xip_qspi_axi_top___024root___dump_triggers__act(vlSelf);
    }
#endif
}
