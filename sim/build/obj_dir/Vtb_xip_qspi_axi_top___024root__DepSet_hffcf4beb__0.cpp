// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_xip_qspi_axi_top.h for the primary calling header

#include "Vtb_xip_qspi_axi_top__pch.h"
#include "Vtb_xip_qspi_axi_top___024root.h"

VL_ATTR_COLD void Vtb_xip_qspi_axi_top___024root___eval_initial__TOP(Vtb_xip_qspi_axi_top___024root* vlSelf);
VlCoroutine Vtb_xip_qspi_axi_top___024root___eval_initial__TOP__Vtiming__0(Vtb_xip_qspi_axi_top___024root* vlSelf);
VlCoroutine Vtb_xip_qspi_axi_top___024root___eval_initial__TOP__Vtiming__1(Vtb_xip_qspi_axi_top___024root* vlSelf);
VlCoroutine Vtb_xip_qspi_axi_top___024root___eval_initial__TOP__Vtiming__2(Vtb_xip_qspi_axi_top___024root* vlSelf);
VlCoroutine Vtb_xip_qspi_axi_top___024root___eval_initial__TOP__Vtiming__3(Vtb_xip_qspi_axi_top___024root* vlSelf);

void Vtb_xip_qspi_axi_top___024root___eval_initial(Vtb_xip_qspi_axi_top___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_xip_qspi_axi_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_xip_qspi_axi_top___024root___eval_initial\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtb_xip_qspi_axi_top___024root___eval_initial__TOP(vlSelf);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    Vtb_xip_qspi_axi_top___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    Vtb_xip_qspi_axi_top___024root___eval_initial__TOP__Vtiming__1(vlSelf);
    Vtb_xip_qspi_axi_top___024root___eval_initial__TOP__Vtiming__2(vlSelf);
    Vtb_xip_qspi_axi_top___024root___eval_initial__TOP__Vtiming__3(vlSelf);
    vlSelfRef.__Vtrigprevexpr___TOP__tb_xip_qspi_axi_top__DOT__ACLK__0 
        = vlSelfRef.tb_xip_qspi_axi_top__DOT__ACLK;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_xip_qspi_axi_top__DOT__ARESETn__0 
        = vlSelfRef.tb_xip_qspi_axi_top__DOT__ARESETn;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_xip_qspi_axi_top__DOT__qclk__0 
        = vlSelfRef.tb_xip_qspi_axi_top__DOT__qclk;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_xip_qspi_axi_top__DOT__qclk_rst__0 
        = vlSelfRef.tb_xip_qspi_axi_top__DOT__qclk_rst;
}

VL_INLINE_OPT VlCoroutine Vtb_xip_qspi_axi_top___024root___eval_initial__TOP__Vtiming__0(Vtb_xip_qspi_axi_top___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_xip_qspi_axi_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_xip_qspi_axi_top___024root___eval_initial__TOP__Vtiming__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_xip_qspi_axi_top__DOT__ACLK = 0U;
    while (1U) {
        co_await vlSelfRef.__VdlySched.delay(5ULL, 
                                             nullptr, 
                                             "tb_xip_qspi_axi_top.sv", 
                                             15);
        vlSelfRef.tb_xip_qspi_axi_top__DOT__ACLK = 
            (1U & (~ (IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__ACLK)));
    }
}

VL_INLINE_OPT VlCoroutine Vtb_xip_qspi_axi_top___024root___eval_initial__TOP__Vtiming__1(Vtb_xip_qspi_axi_top___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_xip_qspi_axi_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_xip_qspi_axi_top___024root___eval_initial__TOP__Vtiming__1\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_xip_qspi_axi_top__DOT__qclk = 0U;
    while (1U) {
        co_await vlSelfRef.__VdlySched.delay(0xaULL, 
                                             nullptr, 
                                             "tb_xip_qspi_axi_top.sv", 
                                             16);
        vlSelfRef.tb_xip_qspi_axi_top__DOT__qclk = 
            (1U & (~ (IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__qclk)));
    }
}

VL_INLINE_OPT VlCoroutine Vtb_xip_qspi_axi_top___024root___eval_initial__TOP__Vtiming__2(Vtb_xip_qspi_axi_top___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_xip_qspi_axi_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_xip_qspi_axi_top___024root___eval_initial__TOP__Vtiming__2\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_xip_qspi_axi_top__DOT__ARESETn = 0U;
    vlSelfRef.tb_xip_qspi_axi_top__DOT__qclk_rst = 1U;
    co_await vlSelfRef.__VtrigSched_h694734a5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_xip_qspi_axi_top.ACLK)", 
                                                         "tb_xip_qspi_axi_top.sv", 
                                                         21);
    co_await vlSelfRef.__VtrigSched_h694734a5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_xip_qspi_axi_top.ACLK)", 
                                                         "tb_xip_qspi_axi_top.sv", 
                                                         21);
    co_await vlSelfRef.__VtrigSched_h694734a5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_xip_qspi_axi_top.ACLK)", 
                                                         "tb_xip_qspi_axi_top.sv", 
                                                         21);
    co_await vlSelfRef.__VtrigSched_h694734a5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_xip_qspi_axi_top.ACLK)", 
                                                         "tb_xip_qspi_axi_top.sv", 
                                                         21);
    co_await vlSelfRef.__VtrigSched_h694734a5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_xip_qspi_axi_top.ACLK)", 
                                                         "tb_xip_qspi_axi_top.sv", 
                                                         21);
    vlSelfRef.tb_xip_qspi_axi_top__DOT__ARESETn = 1U;
    co_await vlSelfRef.__VtrigSched_ha0c0d2c3__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_xip_qspi_axi_top.qclk)", 
                                                         "tb_xip_qspi_axi_top.sv", 
                                                         23);
    co_await vlSelfRef.__VtrigSched_ha0c0d2c3__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_xip_qspi_axi_top.qclk)", 
                                                         "tb_xip_qspi_axi_top.sv", 
                                                         23);
    co_await vlSelfRef.__VtrigSched_ha0c0d2c3__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_xip_qspi_axi_top.qclk)", 
                                                         "tb_xip_qspi_axi_top.sv", 
                                                         23);
    co_await vlSelfRef.__VtrigSched_ha0c0d2c3__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_xip_qspi_axi_top.qclk)", 
                                                         "tb_xip_qspi_axi_top.sv", 
                                                         23);
    co_await vlSelfRef.__VtrigSched_ha0c0d2c3__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_xip_qspi_axi_top.qclk)", 
                                                         "tb_xip_qspi_axi_top.sv", 
                                                         23);
    vlSelfRef.tb_xip_qspi_axi_top__DOT__qclk_rst = 0U;
}

VlCoroutine Vtb_xip_qspi_axi_top___024root___eval_initial__TOP__Vtiming__3____Vfork_1__0(Vtb_xip_qspi_axi_top___024root* vlSelf);
VlCoroutine Vtb_xip_qspi_axi_top___024root___eval_initial__TOP__Vtiming__3____Vfork_2__0(Vtb_xip_qspi_axi_top___024root* vlSelf);
VlCoroutine Vtb_xip_qspi_axi_top___024root___eval_initial__TOP__Vtiming__3____Vfork_2__1(Vtb_xip_qspi_axi_top___024root* vlSelf);
VlCoroutine Vtb_xip_qspi_axi_top___024root___eval_initial__TOP__Vtiming__3____Vfork_3__0(Vtb_xip_qspi_axi_top___024root* vlSelf);
VlCoroutine Vtb_xip_qspi_axi_top___024root___eval_initial__TOP__Vtiming__3____Vfork_3__1(Vtb_xip_qspi_axi_top___024root* vlSelf);
VlCoroutine Vtb_xip_qspi_axi_top___024root___eval_initial__TOP__Vtiming__3____Vfork_4__0(Vtb_xip_qspi_axi_top___024root* vlSelf);
VlCoroutine Vtb_xip_qspi_axi_top___024root___eval_initial__TOP__Vtiming__3____Vfork_4__1(Vtb_xip_qspi_axi_top___024root* vlSelf);

VL_INLINE_OPT VlCoroutine Vtb_xip_qspi_axi_top___024root___eval_initial__TOP__Vtiming__3(Vtb_xip_qspi_axi_top___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_xip_qspi_axi_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_xip_qspi_axi_top___024root___eval_initial__TOP__Vtiming__3\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __Vtask_tb_xip_qspi_axi_top__DOT__xip_read__0__addr;
    __Vtask_tb_xip_qspi_axi_top__DOT__xip_read__0__addr = 0;
    IData/*31:0*/ __Vtask_tb_xip_qspi_axi_top__DOT__xip_read__0__data;
    __Vtask_tb_xip_qspi_axi_top__DOT__xip_read__0__data = 0;
    CData/*1:0*/ __Vtask_tb_xip_qspi_axi_top__DOT__xip_read__0__resp;
    __Vtask_tb_xip_qspi_axi_top__DOT__xip_read__0__resp = 0;
    CData/*0:0*/ __Vtask_tb_xip_qspi_axi_top__DOT__xip_read__0__ar_done;
    __Vtask_tb_xip_qspi_axi_top__DOT__xip_read__0__ar_done = 0;
    std::string __Vtask_tb_xip_qspi_axi_top__DOT__report__1__name;
    CData/*0:0*/ __Vtask_tb_xip_qspi_axi_top__DOT__report__1__ok;
    __Vtask_tb_xip_qspi_axi_top__DOT__report__1__ok = 0;
    std::string __Vtask_tb_xip_qspi_axi_top__DOT__report__1__detail;
    IData/*31:0*/ __Vtask_tb_xip_qspi_axi_top__DOT__axi_write__2__addr;
    __Vtask_tb_xip_qspi_axi_top__DOT__axi_write__2__addr = 0;
    IData/*31:0*/ __Vtask_tb_xip_qspi_axi_top__DOT__axi_write__2__data;
    __Vtask_tb_xip_qspi_axi_top__DOT__axi_write__2__data = 0;
    CData/*0:0*/ __Vtask_tb_xip_qspi_axi_top__DOT__axi_write__2__aw_done;
    __Vtask_tb_xip_qspi_axi_top__DOT__axi_write__2__aw_done = 0;
    CData/*0:0*/ __Vtask_tb_xip_qspi_axi_top__DOT__axi_write__2__w_done;
    __Vtask_tb_xip_qspi_axi_top__DOT__axi_write__2__w_done = 0;
    IData/*31:0*/ __Vtask_tb_xip_qspi_axi_top__DOT__xip_read__3__addr;
    __Vtask_tb_xip_qspi_axi_top__DOT__xip_read__3__addr = 0;
    IData/*31:0*/ __Vtask_tb_xip_qspi_axi_top__DOT__xip_read__3__data;
    __Vtask_tb_xip_qspi_axi_top__DOT__xip_read__3__data = 0;
    CData/*1:0*/ __Vtask_tb_xip_qspi_axi_top__DOT__xip_read__3__resp;
    __Vtask_tb_xip_qspi_axi_top__DOT__xip_read__3__resp = 0;
    CData/*0:0*/ __Vtask_tb_xip_qspi_axi_top__DOT__xip_read__3__ar_done;
    __Vtask_tb_xip_qspi_axi_top__DOT__xip_read__3__ar_done = 0;
    std::string __Vtask_tb_xip_qspi_axi_top__DOT__report__4__name;
    CData/*0:0*/ __Vtask_tb_xip_qspi_axi_top__DOT__report__4__ok;
    __Vtask_tb_xip_qspi_axi_top__DOT__report__4__ok = 0;
    std::string __Vtask_tb_xip_qspi_axi_top__DOT__report__4__detail;
    IData/*31:0*/ __Vtask_tb_xip_qspi_axi_top__DOT__xip_read__5__addr;
    __Vtask_tb_xip_qspi_axi_top__DOT__xip_read__5__addr = 0;
    IData/*31:0*/ __Vtask_tb_xip_qspi_axi_top__DOT__xip_read__5__data;
    __Vtask_tb_xip_qspi_axi_top__DOT__xip_read__5__data = 0;
    CData/*1:0*/ __Vtask_tb_xip_qspi_axi_top__DOT__xip_read__5__resp;
    __Vtask_tb_xip_qspi_axi_top__DOT__xip_read__5__resp = 0;
    CData/*0:0*/ __Vtask_tb_xip_qspi_axi_top__DOT__xip_read__5__ar_done;
    __Vtask_tb_xip_qspi_axi_top__DOT__xip_read__5__ar_done = 0;
    std::string __Vtask_tb_xip_qspi_axi_top__DOT__report__6__name;
    CData/*0:0*/ __Vtask_tb_xip_qspi_axi_top__DOT__report__6__ok;
    __Vtask_tb_xip_qspi_axi_top__DOT__report__6__ok = 0;
    std::string __Vtask_tb_xip_qspi_axi_top__DOT__report__6__detail;
    std::string __Vtask_tb_xip_qspi_axi_top__DOT__report__7__name;
    CData/*0:0*/ __Vtask_tb_xip_qspi_axi_top__DOT__report__7__ok;
    __Vtask_tb_xip_qspi_axi_top__DOT__report__7__ok = 0;
    std::string __Vtask_tb_xip_qspi_axi_top__DOT__report__7__detail;
    std::string __Vtask_tb_xip_qspi_axi_top__DOT__report__9__name;
    CData/*0:0*/ __Vtask_tb_xip_qspi_axi_top__DOT__report__9__ok;
    __Vtask_tb_xip_qspi_axi_top__DOT__report__9__ok = 0;
    std::string __Vtask_tb_xip_qspi_axi_top__DOT__report__9__detail;
    IData/*31:0*/ __Vtask_tb_xip_qspi_axi_top__DOT__axi_write__10__addr;
    __Vtask_tb_xip_qspi_axi_top__DOT__axi_write__10__addr = 0;
    IData/*31:0*/ __Vtask_tb_xip_qspi_axi_top__DOT__axi_write__10__data;
    __Vtask_tb_xip_qspi_axi_top__DOT__axi_write__10__data = 0;
    CData/*0:0*/ __Vtask_tb_xip_qspi_axi_top__DOT__axi_write__10__aw_done;
    __Vtask_tb_xip_qspi_axi_top__DOT__axi_write__10__aw_done = 0;
    CData/*0:0*/ __Vtask_tb_xip_qspi_axi_top__DOT__axi_write__10__w_done;
    __Vtask_tb_xip_qspi_axi_top__DOT__axi_write__10__w_done = 0;
    IData/*31:0*/ __Vtask_tb_xip_qspi_axi_top__DOT__xip_read__11__addr;
    __Vtask_tb_xip_qspi_axi_top__DOT__xip_read__11__addr = 0;
    IData/*31:0*/ __Vtask_tb_xip_qspi_axi_top__DOT__xip_read__11__data;
    __Vtask_tb_xip_qspi_axi_top__DOT__xip_read__11__data = 0;
    CData/*1:0*/ __Vtask_tb_xip_qspi_axi_top__DOT__xip_read__11__resp;
    __Vtask_tb_xip_qspi_axi_top__DOT__xip_read__11__resp = 0;
    CData/*0:0*/ __Vtask_tb_xip_qspi_axi_top__DOT__xip_read__11__ar_done;
    __Vtask_tb_xip_qspi_axi_top__DOT__xip_read__11__ar_done = 0;
    std::string __Vtask_tb_xip_qspi_axi_top__DOT__report__12__name;
    CData/*0:0*/ __Vtask_tb_xip_qspi_axi_top__DOT__report__12__ok;
    __Vtask_tb_xip_qspi_axi_top__DOT__report__12__ok = 0;
    std::string __Vtask_tb_xip_qspi_axi_top__DOT__report__12__detail;
    IData/*31:0*/ __Vtask_tb_xip_qspi_axi_top__DOT__axi_write__13__addr;
    __Vtask_tb_xip_qspi_axi_top__DOT__axi_write__13__addr = 0;
    IData/*31:0*/ __Vtask_tb_xip_qspi_axi_top__DOT__axi_write__13__data;
    __Vtask_tb_xip_qspi_axi_top__DOT__axi_write__13__data = 0;
    CData/*0:0*/ __Vtask_tb_xip_qspi_axi_top__DOT__axi_write__13__aw_done;
    __Vtask_tb_xip_qspi_axi_top__DOT__axi_write__13__aw_done = 0;
    CData/*0:0*/ __Vtask_tb_xip_qspi_axi_top__DOT__axi_write__13__w_done;
    __Vtask_tb_xip_qspi_axi_top__DOT__axi_write__13__w_done = 0;
    IData/*31:0*/ __Vtask_tb_xip_qspi_axi_top__DOT__axi_read__14__addr;
    __Vtask_tb_xip_qspi_axi_top__DOT__axi_read__14__addr = 0;
    IData/*31:0*/ __Vtask_tb_xip_qspi_axi_top__DOT__axi_read__14__data;
    __Vtask_tb_xip_qspi_axi_top__DOT__axi_read__14__data = 0;
    CData/*1:0*/ __Vtask_tb_xip_qspi_axi_top__DOT__axi_read__14__resp;
    __Vtask_tb_xip_qspi_axi_top__DOT__axi_read__14__resp = 0;
    CData/*0:0*/ __Vtask_tb_xip_qspi_axi_top__DOT__axi_read__14__ar_done;
    __Vtask_tb_xip_qspi_axi_top__DOT__axi_read__14__ar_done = 0;
    std::string __Vtask_tb_xip_qspi_axi_top__DOT__report__15__name;
    CData/*0:0*/ __Vtask_tb_xip_qspi_axi_top__DOT__report__15__ok;
    __Vtask_tb_xip_qspi_axi_top__DOT__report__15__ok = 0;
    std::string __Vtask_tb_xip_qspi_axi_top__DOT__report__15__detail;
    std::string __Vtask_tb_xip_qspi_axi_top__DOT__report__17__name;
    CData/*0:0*/ __Vtask_tb_xip_qspi_axi_top__DOT__report__17__ok;
    __Vtask_tb_xip_qspi_axi_top__DOT__report__17__ok = 0;
    std::string __Vtask_tb_xip_qspi_axi_top__DOT__report__17__detail;
    IData/*31:0*/ __Vtask_tb_xip_qspi_axi_top__DOT__axi_write__18__addr;
    __Vtask_tb_xip_qspi_axi_top__DOT__axi_write__18__addr = 0;
    IData/*31:0*/ __Vtask_tb_xip_qspi_axi_top__DOT__axi_write__18__data;
    __Vtask_tb_xip_qspi_axi_top__DOT__axi_write__18__data = 0;
    CData/*0:0*/ __Vtask_tb_xip_qspi_axi_top__DOT__axi_write__18__aw_done;
    __Vtask_tb_xip_qspi_axi_top__DOT__axi_write__18__aw_done = 0;
    CData/*0:0*/ __Vtask_tb_xip_qspi_axi_top__DOT__axi_write__18__w_done;
    __Vtask_tb_xip_qspi_axi_top__DOT__axi_write__18__w_done = 0;
    IData/*31:0*/ __Vtask_tb_xip_qspi_axi_top__DOT__xip_read__19__addr;
    __Vtask_tb_xip_qspi_axi_top__DOT__xip_read__19__addr = 0;
    IData/*31:0*/ __Vtask_tb_xip_qspi_axi_top__DOT__xip_read__19__data;
    __Vtask_tb_xip_qspi_axi_top__DOT__xip_read__19__data = 0;
    CData/*1:0*/ __Vtask_tb_xip_qspi_axi_top__DOT__xip_read__19__resp;
    __Vtask_tb_xip_qspi_axi_top__DOT__xip_read__19__resp = 0;
    CData/*0:0*/ __Vtask_tb_xip_qspi_axi_top__DOT__xip_read__19__ar_done;
    __Vtask_tb_xip_qspi_axi_top__DOT__xip_read__19__ar_done = 0;
    std::string __Vtask_tb_xip_qspi_axi_top__DOT__report__20__name;
    CData/*0:0*/ __Vtask_tb_xip_qspi_axi_top__DOT__report__20__ok;
    __Vtask_tb_xip_qspi_axi_top__DOT__report__20__ok = 0;
    std::string __Vtask_tb_xip_qspi_axi_top__DOT__report__20__detail;
    IData/*31:0*/ __Vtask_tb_xip_qspi_axi_top__DOT__axi_write__21__addr;
    __Vtask_tb_xip_qspi_axi_top__DOT__axi_write__21__addr = 0;
    IData/*31:0*/ __Vtask_tb_xip_qspi_axi_top__DOT__axi_write__21__data;
    __Vtask_tb_xip_qspi_axi_top__DOT__axi_write__21__data = 0;
    CData/*0:0*/ __Vtask_tb_xip_qspi_axi_top__DOT__axi_write__21__aw_done;
    __Vtask_tb_xip_qspi_axi_top__DOT__axi_write__21__aw_done = 0;
    CData/*0:0*/ __Vtask_tb_xip_qspi_axi_top__DOT__axi_write__21__w_done;
    __Vtask_tb_xip_qspi_axi_top__DOT__axi_write__21__w_done = 0;
    IData/*31:0*/ __Vtask_tb_xip_qspi_axi_top__DOT__xip_read__22__addr;
    __Vtask_tb_xip_qspi_axi_top__DOT__xip_read__22__addr = 0;
    IData/*31:0*/ __Vtask_tb_xip_qspi_axi_top__DOT__xip_read__22__data;
    __Vtask_tb_xip_qspi_axi_top__DOT__xip_read__22__data = 0;
    CData/*1:0*/ __Vtask_tb_xip_qspi_axi_top__DOT__xip_read__22__resp;
    __Vtask_tb_xip_qspi_axi_top__DOT__xip_read__22__resp = 0;
    CData/*0:0*/ __Vtask_tb_xip_qspi_axi_top__DOT__xip_read__22__ar_done;
    __Vtask_tb_xip_qspi_axi_top__DOT__xip_read__22__ar_done = 0;
    std::string __Vtask_tb_xip_qspi_axi_top__DOT__report__23__name;
    CData/*0:0*/ __Vtask_tb_xip_qspi_axi_top__DOT__report__23__ok;
    __Vtask_tb_xip_qspi_axi_top__DOT__report__23__ok = 0;
    std::string __Vtask_tb_xip_qspi_axi_top__DOT__report__23__detail;
    IData/*31:0*/ __Vtask_tb_xip_qspi_axi_top__DOT__axi_write__24__addr;
    __Vtask_tb_xip_qspi_axi_top__DOT__axi_write__24__addr = 0;
    IData/*31:0*/ __Vtask_tb_xip_qspi_axi_top__DOT__axi_write__24__data;
    __Vtask_tb_xip_qspi_axi_top__DOT__axi_write__24__data = 0;
    CData/*0:0*/ __Vtask_tb_xip_qspi_axi_top__DOT__axi_write__24__aw_done;
    __Vtask_tb_xip_qspi_axi_top__DOT__axi_write__24__aw_done = 0;
    CData/*0:0*/ __Vtask_tb_xip_qspi_axi_top__DOT__axi_write__24__w_done;
    __Vtask_tb_xip_qspi_axi_top__DOT__axi_write__24__w_done = 0;
    IData/*31:0*/ __Vtask_tb_xip_qspi_axi_top__DOT__xip_read__25__addr;
    __Vtask_tb_xip_qspi_axi_top__DOT__xip_read__25__addr = 0;
    IData/*31:0*/ __Vtask_tb_xip_qspi_axi_top__DOT__xip_read__25__data;
    __Vtask_tb_xip_qspi_axi_top__DOT__xip_read__25__data = 0;
    CData/*1:0*/ __Vtask_tb_xip_qspi_axi_top__DOT__xip_read__25__resp;
    __Vtask_tb_xip_qspi_axi_top__DOT__xip_read__25__resp = 0;
    CData/*0:0*/ __Vtask_tb_xip_qspi_axi_top__DOT__xip_read__25__ar_done;
    __Vtask_tb_xip_qspi_axi_top__DOT__xip_read__25__ar_done = 0;
    std::string __Vtask_tb_xip_qspi_axi_top__DOT__report__26__name;
    CData/*0:0*/ __Vtask_tb_xip_qspi_axi_top__DOT__report__26__ok;
    __Vtask_tb_xip_qspi_axi_top__DOT__report__26__ok = 0;
    std::string __Vtask_tb_xip_qspi_axi_top__DOT__report__26__detail;
    // Body
    Vtb_xip_qspi_axi_top___024root___eval_initial__TOP__Vtiming__3____Vfork_1__0(vlSelf);
    co_await vlSelfRef.__VtrigSched_h04146f10__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_xip_qspi_axi_top.ARESETn)", 
                                                         "tb_xip_qspi_axi_top.sv", 
                                                         187);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_h694734a5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_xip_qspi_axi_top.ACLK)", 
                                                         "tb_xip_qspi_axi_top.sv", 
                                                         188);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_h694734a5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_xip_qspi_axi_top.ACLK)", 
                                                         "tb_xip_qspi_axi_top.sv", 
                                                         188);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_h694734a5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_xip_qspi_axi_top.ACLK)", 
                                                         "tb_xip_qspi_axi_top.sv", 
                                                         188);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_h694734a5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_xip_qspi_axi_top.ACLK)", 
                                                         "tb_xip_qspi_axi_top.sv", 
                                                         188);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_h694734a5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_xip_qspi_axi_top.ACLK)", 
                                                         "tb_xip_qspi_axi_top.sv", 
                                                         188);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    __Vtask_tb_xip_qspi_axi_top__DOT__xip_read__0__addr = 0x1000004U;
    __Vtask_tb_xip_qspi_axi_top__DOT__xip_read__0__ar_done = 0U;
    co_await vlSelfRef.__VtrigSched_h694734a5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_xip_qspi_axi_top.ACLK)", 
                                                         "tb_xip_qspi_axi_top.sv", 
                                                         150);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VdlySched.delay(2ULL, nullptr, 
                                         "tb_xip_qspi_axi_top.sv", 
                                         150);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_xip_qspi_axi_top__DOT__XIP_ARADDR 
        = __Vtask_tb_xip_qspi_axi_top__DOT__xip_read__0__addr;
    vlSelfRef.tb_xip_qspi_axi_top__DOT__XIP_ARVALID = 1U;
    while ((1U & (~ (IData)(__Vtask_tb_xip_qspi_axi_top__DOT__xip_read__0__ar_done)))) {
        co_await vlSelfRef.__VtrigSched_h694734a5__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_xip_qspi_axi_top.ACLK)", 
                                                             "tb_xip_qspi_axi_top.sv", 
                                                             153);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        if (((IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__XIP_ARVALID) 
             & (0U == (IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_xip_slave__DOT__state)))) {
            __Vtask_tb_xip_qspi_axi_top__DOT__xip_read__0__ar_done = 1U;
        }
    }
    co_await vlSelfRef.__VtrigSched_h694734a5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_xip_qspi_axi_top.ACLK)", 
                                                         "tb_xip_qspi_axi_top.sv", 
                                                         156);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_xip_qspi_axi_top__DOT__XIP_ARVALID = 0U;
    co_await vlSelfRef.__VtrigSched_h694734a5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_xip_qspi_axi_top.ACLK)", 
                                                         "tb_xip_qspi_axi_top.sv", 
                                                         158);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_xip_qspi_axi_top__DOT__XIP_RREADY = 1U;
    while ((3U != (IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_xip_slave__DOT__state))) {
        co_await vlSelfRef.__VtrigSched_h694734a5__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_xip_qspi_axi_top.ACLK)", 
                                                             "tb_xip_qspi_axi_top.sv", 
                                                             160);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
    }
    __Vtask_tb_xip_qspi_axi_top__DOT__xip_read__0__data 
        = vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_xip_slave__DOT__assemble_reg;
    __Vtask_tb_xip_qspi_axi_top__DOT__xip_read__0__resp 
        = ((IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_xip_slave__DOT__fetch_error)
            ? 2U : 0U);
    co_await vlSelfRef.__VtrigSched_h694734a5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_xip_qspi_axi_top.ACLK)", 
                                                         "tb_xip_qspi_axi_top.sv", 
                                                         163);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_xip_qspi_axi_top__DOT__XIP_RREADY = 0U;
    vlSelfRef.tb_xip_qspi_axi_top__DOT__unnamedblk1__DOT__rdata 
        = __Vtask_tb_xip_qspi_axi_top__DOT__xip_read__0__data;
    vlSelfRef.tb_xip_qspi_axi_top__DOT__unnamedblk1__DOT__rresp 
        = __Vtask_tb_xip_qspi_axi_top__DOT__xip_read__0__resp;
    __Vtask_tb_xip_qspi_axi_top__DOT__report__1__detail = 
        std::string{"(Expected DECERR 2'b10 when disabled)"};
    __Vtask_tb_xip_qspi_axi_top__DOT__report__1__ok 
        = (2U == (IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__unnamedblk1__DOT__rresp));
    __Vtask_tb_xip_qspi_axi_top__DOT__report__1__name = 
        std::string{"xip_disabled_reject"};
    if (__Vtask_tb_xip_qspi_axi_top__DOT__report__1__ok) {
        vlSelfRef.tb_xip_qspi_axi_top__DOT__pass_count 
            = ((IData)(1U) + vlSelfRef.tb_xip_qspi_axi_top__DOT__pass_count);
        VL_WRITEF_NX("[PASS] %@ %@\n",0,-1,&(__Vtask_tb_xip_qspi_axi_top__DOT__report__1__name),
                     -1,&(__Vtask_tb_xip_qspi_axi_top__DOT__report__1__detail));
    } else {
        vlSelfRef.tb_xip_qspi_axi_top__DOT__fail_count 
            = ((IData)(1U) + vlSelfRef.tb_xip_qspi_axi_top__DOT__fail_count);
        VL_WRITEF_NX("[FAIL] %@ %@\n",0,-1,&(__Vtask_tb_xip_qspi_axi_top__DOT__report__1__name),
                     -1,&(__Vtask_tb_xip_qspi_axi_top__DOT__report__1__detail));
    }
    vlSelfRef.tb_xip_qspi_axi_top__DOT__unnamedblk1__DOT__xip_cfg_val = 0x8001000bU;
    __Vtask_tb_xip_qspi_axi_top__DOT__axi_write__2__data 
        = vlSelfRef.tb_xip_qspi_axi_top__DOT__unnamedblk1__DOT__xip_cfg_val;
    __Vtask_tb_xip_qspi_axi_top__DOT__axi_write__2__addr = 0x18U;
    __Vtask_tb_xip_qspi_axi_top__DOT__axi_write__2__aw_done = 0U;
    __Vtask_tb_xip_qspi_axi_top__DOT__axi_write__2__w_done = 0U;
    co_await vlSelfRef.__VtrigSched_h694734a5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_xip_qspi_axi_top.ACLK)", 
                                                         "tb_xip_qspi_axi_top.sv", 
                                                         112);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VdlySched.delay(2ULL, nullptr, 
                                         "tb_xip_qspi_axi_top.sv", 
                                         112);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_xip_qspi_axi_top__DOT__AXI_AWADDR 
        = __Vtask_tb_xip_qspi_axi_top__DOT__axi_write__2__addr;
    vlSelfRef.tb_xip_qspi_axi_top__DOT__AXI_AWVALID = 1U;
    vlSelfRef.tb_xip_qspi_axi_top__DOT__AXI_WDATA = __Vtask_tb_xip_qspi_axi_top__DOT__axi_write__2__data;
    vlSelfRef.tb_xip_qspi_axi_top__DOT__AXI_WSTRB = 0xfU;
    vlSelfRef.tb_xip_qspi_axi_top__DOT__AXI_WVALID = 1U;
    while ((1U & (~ ((IData)(__Vtask_tb_xip_qspi_axi_top__DOT__axi_write__2__aw_done) 
                     & (IData)(__Vtask_tb_xip_qspi_axi_top__DOT__axi_write__2__w_done))))) {
        co_await vlSelfRef.__VtrigSched_h694734a5__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_xip_qspi_axi_top.ACLK)", 
                                                             "tb_xip_qspi_axi_top.sv", 
                                                             116);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        if (((IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__AXI_AWVALID) 
             & ((0U == (IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_axi_slave__DOT__state)) 
                | (2U == (IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_axi_slave__DOT__state))))) {
            __Vtask_tb_xip_qspi_axi_top__DOT__axi_write__2__aw_done = 1U;
        }
        if (((IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__AXI_WVALID) 
             & ((0U == (IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_axi_slave__DOT__state)) 
                | (1U == (IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_axi_slave__DOT__state))))) {
            __Vtask_tb_xip_qspi_axi_top__DOT__axi_write__2__w_done = 1U;
        }
    }
    co_await vlSelfRef.__VtrigSched_h694734a5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_xip_qspi_axi_top.ACLK)", 
                                                         "tb_xip_qspi_axi_top.sv", 
                                                         120);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_xip_qspi_axi_top__DOT__AXI_AWVALID = 0U;
    vlSelfRef.tb_xip_qspi_axi_top__DOT__AXI_WVALID = 0U;
    co_await vlSelfRef.__VtrigSched_h694734a5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_xip_qspi_axi_top.ACLK)", 
                                                         "tb_xip_qspi_axi_top.sv", 
                                                         122);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_xip_qspi_axi_top__DOT__AXI_BREADY = 1U;
    while ((3U != (IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_axi_slave__DOT__state))) {
        co_await vlSelfRef.__VtrigSched_h694734a5__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_xip_qspi_axi_top.ACLK)", 
                                                             "tb_xip_qspi_axi_top.sv", 
                                                             124);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
    }
    co_await vlSelfRef.__VtrigSched_h694734a5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_xip_qspi_axi_top.ACLK)", 
                                                         "tb_xip_qspi_axi_top.sv", 
                                                         125);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_xip_qspi_axi_top__DOT__AXI_BREADY = 0U;
    __Vtask_tb_xip_qspi_axi_top__DOT__xip_read__3__addr = 0x1000010U;
    __Vtask_tb_xip_qspi_axi_top__DOT__xip_read__3__ar_done = 0U;
    co_await vlSelfRef.__VtrigSched_h694734a5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_xip_qspi_axi_top.ACLK)", 
                                                         "tb_xip_qspi_axi_top.sv", 
                                                         150);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VdlySched.delay(2ULL, nullptr, 
                                         "tb_xip_qspi_axi_top.sv", 
                                         150);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_xip_qspi_axi_top__DOT__XIP_ARADDR 
        = __Vtask_tb_xip_qspi_axi_top__DOT__xip_read__3__addr;
    vlSelfRef.tb_xip_qspi_axi_top__DOT__XIP_ARVALID = 1U;
    while ((1U & (~ (IData)(__Vtask_tb_xip_qspi_axi_top__DOT__xip_read__3__ar_done)))) {
        co_await vlSelfRef.__VtrigSched_h694734a5__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_xip_qspi_axi_top.ACLK)", 
                                                             "tb_xip_qspi_axi_top.sv", 
                                                             153);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        if (((IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__XIP_ARVALID) 
             & (0U == (IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_xip_slave__DOT__state)))) {
            __Vtask_tb_xip_qspi_axi_top__DOT__xip_read__3__ar_done = 1U;
        }
    }
    co_await vlSelfRef.__VtrigSched_h694734a5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_xip_qspi_axi_top.ACLK)", 
                                                         "tb_xip_qspi_axi_top.sv", 
                                                         156);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_xip_qspi_axi_top__DOT__XIP_ARVALID = 0U;
    co_await vlSelfRef.__VtrigSched_h694734a5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_xip_qspi_axi_top.ACLK)", 
                                                         "tb_xip_qspi_axi_top.sv", 
                                                         158);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_xip_qspi_axi_top__DOT__XIP_RREADY = 1U;
    while ((3U != (IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_xip_slave__DOT__state))) {
        co_await vlSelfRef.__VtrigSched_h694734a5__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_xip_qspi_axi_top.ACLK)", 
                                                             "tb_xip_qspi_axi_top.sv", 
                                                             160);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
    }
    __Vtask_tb_xip_qspi_axi_top__DOT__xip_read__3__data 
        = vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_xip_slave__DOT__assemble_reg;
    __Vtask_tb_xip_qspi_axi_top__DOT__xip_read__3__resp 
        = ((IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_xip_slave__DOT__fetch_error)
            ? 2U : 0U);
    co_await vlSelfRef.__VtrigSched_h694734a5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_xip_qspi_axi_top.ACLK)", 
                                                         "tb_xip_qspi_axi_top.sv", 
                                                         163);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_xip_qspi_axi_top__DOT__XIP_RREADY = 0U;
    vlSelfRef.tb_xip_qspi_axi_top__DOT__unnamedblk1__DOT__rdata 
        = __Vtask_tb_xip_qspi_axi_top__DOT__xip_read__3__data;
    vlSelfRef.tb_xip_qspi_axi_top__DOT__unnamedblk1__DOT__rresp 
        = __Vtask_tb_xip_qspi_axi_top__DOT__xip_read__3__resp;
    __Vtask_tb_xip_qspi_axi_top__DOT__report__4__detail 
        = VL_SFORMATF_N_NX("(Got %08x, Expected 13121110, Resp %b)",0,
                           32,vlSelfRef.tb_xip_qspi_axi_top__DOT__unnamedblk1__DOT__rdata,
                           2,(IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__unnamedblk1__DOT__rresp)) ;
    __Vtask_tb_xip_qspi_axi_top__DOT__report__4__ok 
        = ((0U == (IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__unnamedblk1__DOT__rresp)) 
           & (0x13121110U == vlSelfRef.tb_xip_qspi_axi_top__DOT__unnamedblk1__DOT__rdata));
    __Vtask_tb_xip_qspi_axi_top__DOT__report__4__name = 
        std::string{"xip_baseline_fetch"};
    if (__Vtask_tb_xip_qspi_axi_top__DOT__report__4__ok) {
        vlSelfRef.tb_xip_qspi_axi_top__DOT__pass_count 
            = ((IData)(1U) + vlSelfRef.tb_xip_qspi_axi_top__DOT__pass_count);
        VL_WRITEF_NX("[PASS] %@ %@\n",0,-1,&(__Vtask_tb_xip_qspi_axi_top__DOT__report__4__name),
                     -1,&(__Vtask_tb_xip_qspi_axi_top__DOT__report__4__detail));
    } else {
        vlSelfRef.tb_xip_qspi_axi_top__DOT__fail_count 
            = ((IData)(1U) + vlSelfRef.tb_xip_qspi_axi_top__DOT__fail_count);
        VL_WRITEF_NX("[FAIL] %@ %@\n",0,-1,&(__Vtask_tb_xip_qspi_axi_top__DOT__report__4__name),
                     -1,&(__Vtask_tb_xip_qspi_axi_top__DOT__report__4__detail));
    }
    __Vtask_tb_xip_qspi_axi_top__DOT__xip_read__5__addr = 0x2000000U;
    __Vtask_tb_xip_qspi_axi_top__DOT__xip_read__5__ar_done = 0U;
    co_await vlSelfRef.__VtrigSched_h694734a5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_xip_qspi_axi_top.ACLK)", 
                                                         "tb_xip_qspi_axi_top.sv", 
                                                         150);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VdlySched.delay(2ULL, nullptr, 
                                         "tb_xip_qspi_axi_top.sv", 
                                         150);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_xip_qspi_axi_top__DOT__XIP_ARADDR 
        = __Vtask_tb_xip_qspi_axi_top__DOT__xip_read__5__addr;
    vlSelfRef.tb_xip_qspi_axi_top__DOT__XIP_ARVALID = 1U;
    while ((1U & (~ (IData)(__Vtask_tb_xip_qspi_axi_top__DOT__xip_read__5__ar_done)))) {
        co_await vlSelfRef.__VtrigSched_h694734a5__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_xip_qspi_axi_top.ACLK)", 
                                                             "tb_xip_qspi_axi_top.sv", 
                                                             153);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        if (((IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__XIP_ARVALID) 
             & (0U == (IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_xip_slave__DOT__state)))) {
            __Vtask_tb_xip_qspi_axi_top__DOT__xip_read__5__ar_done = 1U;
        }
    }
    co_await vlSelfRef.__VtrigSched_h694734a5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_xip_qspi_axi_top.ACLK)", 
                                                         "tb_xip_qspi_axi_top.sv", 
                                                         156);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_xip_qspi_axi_top__DOT__XIP_ARVALID = 0U;
    co_await vlSelfRef.__VtrigSched_h694734a5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_xip_qspi_axi_top.ACLK)", 
                                                         "tb_xip_qspi_axi_top.sv", 
                                                         158);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_xip_qspi_axi_top__DOT__XIP_RREADY = 1U;
    while ((3U != (IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_xip_slave__DOT__state))) {
        co_await vlSelfRef.__VtrigSched_h694734a5__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_xip_qspi_axi_top.ACLK)", 
                                                             "tb_xip_qspi_axi_top.sv", 
                                                             160);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
    }
    __Vtask_tb_xip_qspi_axi_top__DOT__xip_read__5__data 
        = vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_xip_slave__DOT__assemble_reg;
    __Vtask_tb_xip_qspi_axi_top__DOT__xip_read__5__resp 
        = ((IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_xip_slave__DOT__fetch_error)
            ? 2U : 0U);
    co_await vlSelfRef.__VtrigSched_h694734a5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_xip_qspi_axi_top.ACLK)", 
                                                         "tb_xip_qspi_axi_top.sv", 
                                                         163);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_xip_qspi_axi_top__DOT__XIP_RREADY = 0U;
    vlSelfRef.tb_xip_qspi_axi_top__DOT__unnamedblk1__DOT__rdata 
        = __Vtask_tb_xip_qspi_axi_top__DOT__xip_read__5__data;
    vlSelfRef.tb_xip_qspi_axi_top__DOT__unnamedblk1__DOT__rresp 
        = __Vtask_tb_xip_qspi_axi_top__DOT__xip_read__5__resp;
    __Vtask_tb_xip_qspi_axi_top__DOT__report__6__detail = 
        std::string{"(Expected DECERR 2'b10 for out-of-bounds address)"};
    __Vtask_tb_xip_qspi_axi_top__DOT__report__6__ok 
        = (2U == (IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__unnamedblk1__DOT__rresp));
    __Vtask_tb_xip_qspi_axi_top__DOT__report__6__name = 
        std::string{"xip_out_of_range"};
    if (__Vtask_tb_xip_qspi_axi_top__DOT__report__6__ok) {
        vlSelfRef.tb_xip_qspi_axi_top__DOT__pass_count 
            = ((IData)(1U) + vlSelfRef.tb_xip_qspi_axi_top__DOT__pass_count);
        VL_WRITEF_NX("[PASS] %@ %@\n",0,-1,&(__Vtask_tb_xip_qspi_axi_top__DOT__report__6__name),
                     -1,&(__Vtask_tb_xip_qspi_axi_top__DOT__report__6__detail));
    } else {
        vlSelfRef.tb_xip_qspi_axi_top__DOT__fail_count 
            = ((IData)(1U) + vlSelfRef.tb_xip_qspi_axi_top__DOT__fail_count);
        VL_WRITEF_NX("[FAIL] %@ %@\n",0,-1,&(__Vtask_tb_xip_qspi_axi_top__DOT__report__6__name),
                     -1,&(__Vtask_tb_xip_qspi_axi_top__DOT__report__6__detail));
    }
    co_await vlSelfRef.__VtrigSched_h694734a5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_xip_qspi_axi_top.ACLK)", 
                                                         "tb_xip_qspi_axi_top.sv", 
                                                         211);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_xip_qspi_axi_top__DOT__AXI_ARADDR = 0xcU;
    vlSelfRef.tb_xip_qspi_axi_top__DOT__AXI_ARVALID = 1U;
    vlSelfRef.tb_xip_qspi_axi_top__DOT__XIP_ARADDR = 0x1000020U;
    vlSelfRef.tb_xip_qspi_axi_top__DOT__XIP_ARVALID = 1U;
    vlSelfRef.__Vfork_2__sync.init(2U, nullptr);
    Vtb_xip_qspi_axi_top___024root___eval_initial__TOP__Vtiming__3____Vfork_2__0(vlSelf);
    Vtb_xip_qspi_axi_top___024root___eval_initial__TOP__Vtiming__3____Vfork_2__1(vlSelf);
    co_await vlSelfRef.__Vfork_2__sync.join(nullptr, 
                                            "tb_xip_qspi_axi_top.sv", 
                                            215);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    __Vtask_tb_xip_qspi_axi_top__DOT__report__7__detail = 
        std::string{"(Both transactions completed successfully after collision)"};
    __Vtask_tb_xip_qspi_axi_top__DOT__report__7__ok 
        = (((0U == (IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__unnamedblk1__DOT__unnamedblk2__DOT__ax_resp)) 
            & (0U == (IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__unnamedblk1__DOT__unnamedblk2__DOT__xp_resp))) 
           & (0x23222120U == vlSelfRef.tb_xip_qspi_axi_top__DOT__unnamedblk1__DOT__unnamedblk2__DOT__xp_data));
    __Vtask_tb_xip_qspi_axi_top__DOT__report__7__name = 
        std::string{"arbiter_collision_resolution"};
    if (__Vtask_tb_xip_qspi_axi_top__DOT__report__7__ok) {
        vlSelfRef.tb_xip_qspi_axi_top__DOT__pass_count 
            = ((IData)(1U) + vlSelfRef.tb_xip_qspi_axi_top__DOT__pass_count);
        VL_WRITEF_NX("[PASS] %@ %@\n",0,-1,&(__Vtask_tb_xip_qspi_axi_top__DOT__report__7__name),
                     -1,&(__Vtask_tb_xip_qspi_axi_top__DOT__report__7__detail));
    } else {
        vlSelfRef.tb_xip_qspi_axi_top__DOT__fail_count 
            = ((IData)(1U) + vlSelfRef.tb_xip_qspi_axi_top__DOT__fail_count);
        VL_WRITEF_NX("[FAIL] %@ %@\n",0,-1,&(__Vtask_tb_xip_qspi_axi_top__DOT__report__7__name),
                     -1,&(__Vtask_tb_xip_qspi_axi_top__DOT__report__7__detail));
    }
    co_await vlSelfRef.__VtrigSched_h694734a5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_xip_qspi_axi_top.ACLK)", 
                                                         "tb_xip_qspi_axi_top.sv", 
                                                         251);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_xip_qspi_axi_top__DOT__XIP_ARADDR = 0x1000040U;
    vlSelfRef.tb_xip_qspi_axi_top__DOT__XIP_ARVALID = 1U;
    vlSelfRef.__Vfork_3__sync.init(2U, nullptr);
    Vtb_xip_qspi_axi_top___024root___eval_initial__TOP__Vtiming__3____Vfork_3__0(vlSelf);
    Vtb_xip_qspi_axi_top___024root___eval_initial__TOP__Vtiming__3____Vfork_3__1(vlSelf);
    co_await vlSelfRef.__Vfork_3__sync.join(nullptr, 
                                            "tb_xip_qspi_axi_top.sv", 
                                            254);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    __Vtask_tb_xip_qspi_axi_top__DOT__report__9__detail 
        = VL_SFORMATF_N_NX("(Register-path ABORT should cut short the in-flight XIP fetch, reported as DECERR - got resp=%b data=%08x)",0,
                           2,vlSelfRef.tb_xip_qspi_axi_top__DOT__unnamedblk1__DOT__unnamedblk3__DOT__xip_resp,
                           32,vlSelfRef.tb_xip_qspi_axi_top__DOT__unnamedblk1__DOT__unnamedblk3__DOT__xip_data) ;
    __Vtask_tb_xip_qspi_axi_top__DOT__report__9__ok 
        = (2U == (IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__unnamedblk1__DOT__unnamedblk3__DOT__xip_resp));
    __Vtask_tb_xip_qspi_axi_top__DOT__report__9__name = 
        std::string{"abort_cuts_short_xip_transaction"};
    if (__Vtask_tb_xip_qspi_axi_top__DOT__report__9__ok) {
        vlSelfRef.tb_xip_qspi_axi_top__DOT__pass_count 
            = ((IData)(1U) + vlSelfRef.tb_xip_qspi_axi_top__DOT__pass_count);
        VL_WRITEF_NX("[PASS] %@ %@\n",0,-1,&(__Vtask_tb_xip_qspi_axi_top__DOT__report__9__name),
                     -1,&(__Vtask_tb_xip_qspi_axi_top__DOT__report__9__detail));
    } else {
        vlSelfRef.tb_xip_qspi_axi_top__DOT__fail_count 
            = ((IData)(1U) + vlSelfRef.tb_xip_qspi_axi_top__DOT__fail_count);
        VL_WRITEF_NX("[FAIL] %@ %@\n",0,-1,&(__Vtask_tb_xip_qspi_axi_top__DOT__report__9__name),
                     -1,&(__Vtask_tb_xip_qspi_axi_top__DOT__report__9__detail));
    }
    vlSelfRef.tb_xip_qspi_axi_top__DOT__unnamedblk1__DOT__unnamedblk4__DOT__slow_xip_cfg = 0x801fe00bU;
    __Vtask_tb_xip_qspi_axi_top__DOT__axi_write__10__data 
        = vlSelfRef.tb_xip_qspi_axi_top__DOT__unnamedblk1__DOT__unnamedblk4__DOT__slow_xip_cfg;
    __Vtask_tb_xip_qspi_axi_top__DOT__axi_write__10__addr = 0x18U;
    __Vtask_tb_xip_qspi_axi_top__DOT__axi_write__10__aw_done = 0U;
    __Vtask_tb_xip_qspi_axi_top__DOT__axi_write__10__w_done = 0U;
    co_await vlSelfRef.__VtrigSched_h694734a5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_xip_qspi_axi_top.ACLK)", 
                                                         "tb_xip_qspi_axi_top.sv", 
                                                         112);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VdlySched.delay(2ULL, nullptr, 
                                         "tb_xip_qspi_axi_top.sv", 
                                         112);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_xip_qspi_axi_top__DOT__AXI_AWADDR 
        = __Vtask_tb_xip_qspi_axi_top__DOT__axi_write__10__addr;
    vlSelfRef.tb_xip_qspi_axi_top__DOT__AXI_AWVALID = 1U;
    vlSelfRef.tb_xip_qspi_axi_top__DOT__AXI_WDATA = __Vtask_tb_xip_qspi_axi_top__DOT__axi_write__10__data;
    vlSelfRef.tb_xip_qspi_axi_top__DOT__AXI_WSTRB = 0xfU;
    vlSelfRef.tb_xip_qspi_axi_top__DOT__AXI_WVALID = 1U;
    while ((1U & (~ ((IData)(__Vtask_tb_xip_qspi_axi_top__DOT__axi_write__10__aw_done) 
                     & (IData)(__Vtask_tb_xip_qspi_axi_top__DOT__axi_write__10__w_done))))) {
        co_await vlSelfRef.__VtrigSched_h694734a5__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_xip_qspi_axi_top.ACLK)", 
                                                             "tb_xip_qspi_axi_top.sv", 
                                                             116);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        if (((IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__AXI_AWVALID) 
             & ((0U == (IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_axi_slave__DOT__state)) 
                | (2U == (IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_axi_slave__DOT__state))))) {
            __Vtask_tb_xip_qspi_axi_top__DOT__axi_write__10__aw_done = 1U;
        }
        if (((IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__AXI_WVALID) 
             & ((0U == (IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_axi_slave__DOT__state)) 
                | (1U == (IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_axi_slave__DOT__state))))) {
            __Vtask_tb_xip_qspi_axi_top__DOT__axi_write__10__w_done = 1U;
        }
    }
    co_await vlSelfRef.__VtrigSched_h694734a5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_xip_qspi_axi_top.ACLK)", 
                                                         "tb_xip_qspi_axi_top.sv", 
                                                         120);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_xip_qspi_axi_top__DOT__AXI_AWVALID = 0U;
    vlSelfRef.tb_xip_qspi_axi_top__DOT__AXI_WVALID = 0U;
    co_await vlSelfRef.__VtrigSched_h694734a5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_xip_qspi_axi_top.ACLK)", 
                                                         "tb_xip_qspi_axi_top.sv", 
                                                         122);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_xip_qspi_axi_top__DOT__AXI_BREADY = 1U;
    while ((3U != (IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_axi_slave__DOT__state))) {
        co_await vlSelfRef.__VtrigSched_h694734a5__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_xip_qspi_axi_top.ACLK)", 
                                                             "tb_xip_qspi_axi_top.sv", 
                                                             124);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
    }
    co_await vlSelfRef.__VtrigSched_h694734a5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_xip_qspi_axi_top.ACLK)", 
                                                         "tb_xip_qspi_axi_top.sv", 
                                                         125);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_xip_qspi_axi_top__DOT__AXI_BREADY = 0U;
    __Vtask_tb_xip_qspi_axi_top__DOT__xip_read__11__addr = 0x1000050U;
    __Vtask_tb_xip_qspi_axi_top__DOT__xip_read__11__ar_done = 0U;
    co_await vlSelfRef.__VtrigSched_h694734a5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_xip_qspi_axi_top.ACLK)", 
                                                         "tb_xip_qspi_axi_top.sv", 
                                                         150);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VdlySched.delay(2ULL, nullptr, 
                                         "tb_xip_qspi_axi_top.sv", 
                                         150);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_xip_qspi_axi_top__DOT__XIP_ARADDR 
        = __Vtask_tb_xip_qspi_axi_top__DOT__xip_read__11__addr;
    vlSelfRef.tb_xip_qspi_axi_top__DOT__XIP_ARVALID = 1U;
    while ((1U & (~ (IData)(__Vtask_tb_xip_qspi_axi_top__DOT__xip_read__11__ar_done)))) {
        co_await vlSelfRef.__VtrigSched_h694734a5__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_xip_qspi_axi_top.ACLK)", 
                                                             "tb_xip_qspi_axi_top.sv", 
                                                             153);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        if (((IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__XIP_ARVALID) 
             & (0U == (IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_xip_slave__DOT__state)))) {
            __Vtask_tb_xip_qspi_axi_top__DOT__xip_read__11__ar_done = 1U;
        }
    }
    co_await vlSelfRef.__VtrigSched_h694734a5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_xip_qspi_axi_top.ACLK)", 
                                                         "tb_xip_qspi_axi_top.sv", 
                                                         156);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_xip_qspi_axi_top__DOT__XIP_ARVALID = 0U;
    co_await vlSelfRef.__VtrigSched_h694734a5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_xip_qspi_axi_top.ACLK)", 
                                                         "tb_xip_qspi_axi_top.sv", 
                                                         158);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_xip_qspi_axi_top__DOT__XIP_RREADY = 1U;
    while ((3U != (IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_xip_slave__DOT__state))) {
        co_await vlSelfRef.__VtrigSched_h694734a5__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_xip_qspi_axi_top.ACLK)", 
                                                             "tb_xip_qspi_axi_top.sv", 
                                                             160);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
    }
    __Vtask_tb_xip_qspi_axi_top__DOT__xip_read__11__data 
        = vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_xip_slave__DOT__assemble_reg;
    __Vtask_tb_xip_qspi_axi_top__DOT__xip_read__11__resp 
        = ((IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_xip_slave__DOT__fetch_error)
            ? 2U : 0U);
    co_await vlSelfRef.__VtrigSched_h694734a5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_xip_qspi_axi_top.ACLK)", 
                                                         "tb_xip_qspi_axi_top.sv", 
                                                         163);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_xip_qspi_axi_top__DOT__XIP_RREADY = 0U;
    vlSelfRef.tb_xip_qspi_axi_top__DOT__unnamedblk1__DOT__unnamedblk4__DOT__xip_data 
        = __Vtask_tb_xip_qspi_axi_top__DOT__xip_read__11__data;
    vlSelfRef.tb_xip_qspi_axi_top__DOT__unnamedblk1__DOT__unnamedblk4__DOT__xip_resp 
        = __Vtask_tb_xip_qspi_axi_top__DOT__xip_read__11__resp;
    __Vtask_tb_xip_qspi_axi_top__DOT__report__12__detail 
        = VL_SFORMATF_N_NX("(Expected DECERR from timeout-triggered engine error, got resp=%b)",0,
                           2,vlSelfRef.tb_xip_qspi_axi_top__DOT__unnamedblk1__DOT__unnamedblk4__DOT__xip_resp) ;
    __Vtask_tb_xip_qspi_axi_top__DOT__report__12__ok 
        = (2U == (IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__unnamedblk1__DOT__unnamedblk4__DOT__xip_resp));
    __Vtask_tb_xip_qspi_axi_top__DOT__report__12__name = 
        std::string{"xip_timeout_reports_error"};
    if (__Vtask_tb_xip_qspi_axi_top__DOT__report__12__ok) {
        vlSelfRef.tb_xip_qspi_axi_top__DOT__pass_count 
            = ((IData)(1U) + vlSelfRef.tb_xip_qspi_axi_top__DOT__pass_count);
        VL_WRITEF_NX("[PASS] %@ %@\n",0,-1,&(__Vtask_tb_xip_qspi_axi_top__DOT__report__12__name),
                     -1,&(__Vtask_tb_xip_qspi_axi_top__DOT__report__12__detail));
    } else {
        vlSelfRef.tb_xip_qspi_axi_top__DOT__fail_count 
            = ((IData)(1U) + vlSelfRef.tb_xip_qspi_axi_top__DOT__fail_count);
        VL_WRITEF_NX("[FAIL] %@ %@\n",0,-1,&(__Vtask_tb_xip_qspi_axi_top__DOT__report__12__name),
                     -1,&(__Vtask_tb_xip_qspi_axi_top__DOT__report__12__detail));
    }
    __Vtask_tb_xip_qspi_axi_top__DOT__axi_write__13__data = 0x8001000bU;
    __Vtask_tb_xip_qspi_axi_top__DOT__axi_write__13__addr = 0x18U;
    __Vtask_tb_xip_qspi_axi_top__DOT__axi_write__13__aw_done = 0U;
    __Vtask_tb_xip_qspi_axi_top__DOT__axi_write__13__w_done = 0U;
    co_await vlSelfRef.__VtrigSched_h694734a5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_xip_qspi_axi_top.ACLK)", 
                                                         "tb_xip_qspi_axi_top.sv", 
                                                         112);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VdlySched.delay(2ULL, nullptr, 
                                         "tb_xip_qspi_axi_top.sv", 
                                         112);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_xip_qspi_axi_top__DOT__AXI_AWADDR 
        = __Vtask_tb_xip_qspi_axi_top__DOT__axi_write__13__addr;
    vlSelfRef.tb_xip_qspi_axi_top__DOT__AXI_AWVALID = 1U;
    vlSelfRef.tb_xip_qspi_axi_top__DOT__AXI_WDATA = __Vtask_tb_xip_qspi_axi_top__DOT__axi_write__13__data;
    vlSelfRef.tb_xip_qspi_axi_top__DOT__AXI_WSTRB = 0xfU;
    vlSelfRef.tb_xip_qspi_axi_top__DOT__AXI_WVALID = 1U;
    while ((1U & (~ ((IData)(__Vtask_tb_xip_qspi_axi_top__DOT__axi_write__13__aw_done) 
                     & (IData)(__Vtask_tb_xip_qspi_axi_top__DOT__axi_write__13__w_done))))) {
        co_await vlSelfRef.__VtrigSched_h694734a5__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_xip_qspi_axi_top.ACLK)", 
                                                             "tb_xip_qspi_axi_top.sv", 
                                                             116);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        if (((IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__AXI_AWVALID) 
             & ((0U == (IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_axi_slave__DOT__state)) 
                | (2U == (IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_axi_slave__DOT__state))))) {
            __Vtask_tb_xip_qspi_axi_top__DOT__axi_write__13__aw_done = 1U;
        }
        if (((IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__AXI_WVALID) 
             & ((0U == (IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_axi_slave__DOT__state)) 
                | (1U == (IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_axi_slave__DOT__state))))) {
            __Vtask_tb_xip_qspi_axi_top__DOT__axi_write__13__w_done = 1U;
        }
    }
    co_await vlSelfRef.__VtrigSched_h694734a5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_xip_qspi_axi_top.ACLK)", 
                                                         "tb_xip_qspi_axi_top.sv", 
                                                         120);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_xip_qspi_axi_top__DOT__AXI_AWVALID = 0U;
    vlSelfRef.tb_xip_qspi_axi_top__DOT__AXI_WVALID = 0U;
    co_await vlSelfRef.__VtrigSched_h694734a5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_xip_qspi_axi_top.ACLK)", 
                                                         "tb_xip_qspi_axi_top.sv", 
                                                         122);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_xip_qspi_axi_top__DOT__AXI_BREADY = 1U;
    while ((3U != (IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_axi_slave__DOT__state))) {
        co_await vlSelfRef.__VtrigSched_h694734a5__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_xip_qspi_axi_top.ACLK)", 
                                                             "tb_xip_qspi_axi_top.sv", 
                                                             124);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
    }
    co_await vlSelfRef.__VtrigSched_h694734a5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_xip_qspi_axi_top.ACLK)", 
                                                         "tb_xip_qspi_axi_top.sv", 
                                                         125);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_xip_qspi_axi_top__DOT__AXI_BREADY = 0U;
    __Vtask_tb_xip_qspi_axi_top__DOT__axi_read__14__addr = 0xcU;
    __Vtask_tb_xip_qspi_axi_top__DOT__axi_read__14__ar_done = 0U;
    co_await vlSelfRef.__VtrigSched_h694734a5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_xip_qspi_axi_top.ACLK)", 
                                                         "tb_xip_qspi_axi_top.sv", 
                                                         131);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VdlySched.delay(2ULL, nullptr, 
                                         "tb_xip_qspi_axi_top.sv", 
                                         131);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_xip_qspi_axi_top__DOT__AXI_ARADDR 
        = __Vtask_tb_xip_qspi_axi_top__DOT__axi_read__14__addr;
    vlSelfRef.tb_xip_qspi_axi_top__DOT__AXI_ARVALID = 1U;
    while ((1U & (~ (IData)(__Vtask_tb_xip_qspi_axi_top__DOT__axi_read__14__ar_done)))) {
        co_await vlSelfRef.__VtrigSched_h694734a5__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_xip_qspi_axi_top.ACLK)", 
                                                             "tb_xip_qspi_axi_top.sv", 
                                                             134);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        if (((IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__AXI_ARVALID) 
             & (0U == (IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_axi_slave__DOT__read_state)))) {
            __Vtask_tb_xip_qspi_axi_top__DOT__axi_read__14__ar_done = 1U;
        }
    }
    co_await vlSelfRef.__VtrigSched_h694734a5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_xip_qspi_axi_top.ACLK)", 
                                                         "tb_xip_qspi_axi_top.sv", 
                                                         137);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_xip_qspi_axi_top__DOT__AXI_ARVALID = 0U;
    co_await vlSelfRef.__VtrigSched_h694734a5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_xip_qspi_axi_top.ACLK)", 
                                                         "tb_xip_qspi_axi_top.sv", 
                                                         139);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_xip_qspi_axi_top__DOT__AXI_RREADY = 1U;
    while ((1U != (IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_axi_slave__DOT__read_state))) {
        co_await vlSelfRef.__VtrigSched_h694734a5__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_xip_qspi_axi_top.ACLK)", 
                                                             "tb_xip_qspi_axi_top.sv", 
                                                             141);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
    }
    __Vtask_tb_xip_qspi_axi_top__DOT__axi_read__14__data 
        = ((0U == vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_axi_slave__DOT__ar_addr_latched)
            ? vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_axi_slave__DOT__reg_ctrl_cmd
            : ((4U == vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_axi_slave__DOT__ar_addr_latched)
                ? vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_axi_slave__DOT__reg_addr
                : ((8U == vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_axi_slave__DOT__ar_addr_latched)
                    ? vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_axi_slave__DOT__reg_num_bytes
                    : ((0xcU == vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_axi_slave__DOT__ar_addr_latched)
                        ? (((IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_axi_slave__DOT__error_latched) 
                            << 4U) | ((((IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_axi_slave__DOT__rx_ready_latched) 
                                        << 3U) | ((IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_axi_slave__DOT__tx_ready_latched) 
                                                  << 2U)) 
                                      | (((IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_axi_slave__DOT__done_latched) 
                                          << 1U) | 
                                         ((IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_arbiter__DOT__route_to_reg) 
                                          & (IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_cdc__DOT__busy_ff2)))))
                        : ((0x10U == vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_axi_slave__DOT__ar_addr_latched)
                            ? 0U : ((0x18U == vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_axi_slave__DOT__ar_addr_latched)
                                     ? vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_axi_slave__DOT__reg_xip_cfg
                                     : ((0x14U == vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_axi_slave__DOT__ar_addr_latched)
                                         ? (IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__int_m_rx_data)
                                         : 0U)))))));
    __Vtask_tb_xip_qspi_axi_top__DOT__axi_read__14__resp = 0U;
    co_await vlSelfRef.__VtrigSched_h694734a5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_xip_qspi_axi_top.ACLK)", 
                                                         "tb_xip_qspi_axi_top.sv", 
                                                         144);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_xip_qspi_axi_top__DOT__AXI_RREADY = 0U;
    vlSelfRef.tb_xip_qspi_axi_top__DOT__unnamedblk1__DOT__unnamedblk4__DOT__status_val 
        = __Vtask_tb_xip_qspi_axi_top__DOT__axi_read__14__data;
    vlSelfRef.tb_xip_qspi_axi_top__DOT__unnamedblk1__DOT__unnamedblk4__DOT__status_resp 
        = __Vtask_tb_xip_qspi_axi_top__DOT__axi_read__14__resp;
    __Vtask_tb_xip_qspi_axi_top__DOT__report__15__detail 
        = VL_SFORMATF_N_NX("(Register-path STATUS read after XIP timeout: resp=%b, expected 00)",0,
                           2,vlSelfRef.tb_xip_qspi_axi_top__DOT__unnamedblk1__DOT__unnamedblk4__DOT__status_resp) ;
    __Vtask_tb_xip_qspi_axi_top__DOT__report__15__ok 
        = (0U == (IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__unnamedblk1__DOT__unnamedblk4__DOT__status_resp));
    __Vtask_tb_xip_qspi_axi_top__DOT__report__15__name = 
        std::string{"register_path_recovers_after_xip_timeout"};
    if (__Vtask_tb_xip_qspi_axi_top__DOT__report__15__ok) {
        vlSelfRef.tb_xip_qspi_axi_top__DOT__pass_count 
            = ((IData)(1U) + vlSelfRef.tb_xip_qspi_axi_top__DOT__pass_count);
        VL_WRITEF_NX("[PASS] %@ %@\n",0,-1,&(__Vtask_tb_xip_qspi_axi_top__DOT__report__15__name),
                     -1,&(__Vtask_tb_xip_qspi_axi_top__DOT__report__15__detail));
    } else {
        vlSelfRef.tb_xip_qspi_axi_top__DOT__fail_count 
            = ((IData)(1U) + vlSelfRef.tb_xip_qspi_axi_top__DOT__fail_count);
        VL_WRITEF_NX("[FAIL] %@ %@\n",0,-1,&(__Vtask_tb_xip_qspi_axi_top__DOT__report__15__name),
                     -1,&(__Vtask_tb_xip_qspi_axi_top__DOT__report__15__detail));
    }
    co_await vlSelfRef.__VtrigSched_h694734a5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_xip_qspi_axi_top.ACLK)", 
                                                         "tb_xip_qspi_axi_top.sv", 
                                                         319);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_xip_qspi_axi_top__DOT__XIP_ARADDR = 0x1000060U;
    vlSelfRef.tb_xip_qspi_axi_top__DOT__XIP_ARVALID = 1U;
    vlSelfRef.__Vfork_4__sync.init(2U, nullptr);
    Vtb_xip_qspi_axi_top___024root___eval_initial__TOP__Vtiming__3____Vfork_4__0(vlSelf);
    Vtb_xip_qspi_axi_top___024root___eval_initial__TOP__Vtiming__3____Vfork_4__1(vlSelf);
    co_await vlSelfRef.__Vfork_4__sync.join(nullptr, 
                                            "tb_xip_qspi_axi_top.sv", 
                                            322);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    __Vtask_tb_xip_qspi_axi_top__DOT__report__17__detail 
        = VL_SFORMATF_N_NX("(In-flight fetch should use its ORIGINALLY latched config - got resp=%b data=%08x, expected resp=00 data=63626160)",0,
                           2,vlSelfRef.tb_xip_qspi_axi_top__DOT__unnamedblk1__DOT__unnamedblk5__DOT__xip_resp,
                           32,vlSelfRef.tb_xip_qspi_axi_top__DOT__unnamedblk1__DOT__unnamedblk5__DOT__xip_data) ;
    __Vtask_tb_xip_qspi_axi_top__DOT__report__17__ok 
        = ((0U == (IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__unnamedblk1__DOT__unnamedblk5__DOT__xip_resp)) 
           & (0x63626160U == vlSelfRef.tb_xip_qspi_axi_top__DOT__unnamedblk1__DOT__unnamedblk5__DOT__xip_data));
    __Vtask_tb_xip_qspi_axi_top__DOT__report__17__name = 
        std::string{"xip_cfg_write_mid_flight_does_not_corrupt"};
    if (__Vtask_tb_xip_qspi_axi_top__DOT__report__17__ok) {
        vlSelfRef.tb_xip_qspi_axi_top__DOT__pass_count 
            = ((IData)(1U) + vlSelfRef.tb_xip_qspi_axi_top__DOT__pass_count);
        VL_WRITEF_NX("[PASS] %@ %@\n",0,-1,&(__Vtask_tb_xip_qspi_axi_top__DOT__report__17__name),
                     -1,&(__Vtask_tb_xip_qspi_axi_top__DOT__report__17__detail));
    } else {
        vlSelfRef.tb_xip_qspi_axi_top__DOT__fail_count 
            = ((IData)(1U) + vlSelfRef.tb_xip_qspi_axi_top__DOT__fail_count);
        VL_WRITEF_NX("[FAIL] %@ %@\n",0,-1,&(__Vtask_tb_xip_qspi_axi_top__DOT__report__17__name),
                     -1,&(__Vtask_tb_xip_qspi_axi_top__DOT__report__17__detail));
    }
    vlSelfRef.tb_xip_qspi_axi_top__DOT__unnamedblk1__DOT__unnamedblk6__DOT__dual_xip_cfg = 0x8001043bU;
    __Vtask_tb_xip_qspi_axi_top__DOT__axi_write__18__data 
        = vlSelfRef.tb_xip_qspi_axi_top__DOT__unnamedblk1__DOT__unnamedblk6__DOT__dual_xip_cfg;
    __Vtask_tb_xip_qspi_axi_top__DOT__axi_write__18__addr = 0x18U;
    __Vtask_tb_xip_qspi_axi_top__DOT__axi_write__18__aw_done = 0U;
    __Vtask_tb_xip_qspi_axi_top__DOT__axi_write__18__w_done = 0U;
    co_await vlSelfRef.__VtrigSched_h694734a5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_xip_qspi_axi_top.ACLK)", 
                                                         "tb_xip_qspi_axi_top.sv", 
                                                         112);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VdlySched.delay(2ULL, nullptr, 
                                         "tb_xip_qspi_axi_top.sv", 
                                         112);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_xip_qspi_axi_top__DOT__AXI_AWADDR 
        = __Vtask_tb_xip_qspi_axi_top__DOT__axi_write__18__addr;
    vlSelfRef.tb_xip_qspi_axi_top__DOT__AXI_AWVALID = 1U;
    vlSelfRef.tb_xip_qspi_axi_top__DOT__AXI_WDATA = __Vtask_tb_xip_qspi_axi_top__DOT__axi_write__18__data;
    vlSelfRef.tb_xip_qspi_axi_top__DOT__AXI_WSTRB = 0xfU;
    vlSelfRef.tb_xip_qspi_axi_top__DOT__AXI_WVALID = 1U;
    while ((1U & (~ ((IData)(__Vtask_tb_xip_qspi_axi_top__DOT__axi_write__18__aw_done) 
                     & (IData)(__Vtask_tb_xip_qspi_axi_top__DOT__axi_write__18__w_done))))) {
        co_await vlSelfRef.__VtrigSched_h694734a5__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_xip_qspi_axi_top.ACLK)", 
                                                             "tb_xip_qspi_axi_top.sv", 
                                                             116);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        if (((IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__AXI_AWVALID) 
             & ((0U == (IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_axi_slave__DOT__state)) 
                | (2U == (IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_axi_slave__DOT__state))))) {
            __Vtask_tb_xip_qspi_axi_top__DOT__axi_write__18__aw_done = 1U;
        }
        if (((IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__AXI_WVALID) 
             & ((0U == (IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_axi_slave__DOT__state)) 
                | (1U == (IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_axi_slave__DOT__state))))) {
            __Vtask_tb_xip_qspi_axi_top__DOT__axi_write__18__w_done = 1U;
        }
    }
    co_await vlSelfRef.__VtrigSched_h694734a5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_xip_qspi_axi_top.ACLK)", 
                                                         "tb_xip_qspi_axi_top.sv", 
                                                         120);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_xip_qspi_axi_top__DOT__AXI_AWVALID = 0U;
    vlSelfRef.tb_xip_qspi_axi_top__DOT__AXI_WVALID = 0U;
    co_await vlSelfRef.__VtrigSched_h694734a5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_xip_qspi_axi_top.ACLK)", 
                                                         "tb_xip_qspi_axi_top.sv", 
                                                         122);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_xip_qspi_axi_top__DOT__AXI_BREADY = 1U;
    while ((3U != (IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_axi_slave__DOT__state))) {
        co_await vlSelfRef.__VtrigSched_h694734a5__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_xip_qspi_axi_top.ACLK)", 
                                                             "tb_xip_qspi_axi_top.sv", 
                                                             124);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
    }
    co_await vlSelfRef.__VtrigSched_h694734a5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_xip_qspi_axi_top.ACLK)", 
                                                         "tb_xip_qspi_axi_top.sv", 
                                                         125);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_xip_qspi_axi_top__DOT__AXI_BREADY = 0U;
    __Vtask_tb_xip_qspi_axi_top__DOT__xip_read__19__addr = 0x1000080U;
    __Vtask_tb_xip_qspi_axi_top__DOT__xip_read__19__ar_done = 0U;
    co_await vlSelfRef.__VtrigSched_h694734a5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_xip_qspi_axi_top.ACLK)", 
                                                         "tb_xip_qspi_axi_top.sv", 
                                                         150);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VdlySched.delay(2ULL, nullptr, 
                                         "tb_xip_qspi_axi_top.sv", 
                                         150);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_xip_qspi_axi_top__DOT__XIP_ARADDR 
        = __Vtask_tb_xip_qspi_axi_top__DOT__xip_read__19__addr;
    vlSelfRef.tb_xip_qspi_axi_top__DOT__XIP_ARVALID = 1U;
    while ((1U & (~ (IData)(__Vtask_tb_xip_qspi_axi_top__DOT__xip_read__19__ar_done)))) {
        co_await vlSelfRef.__VtrigSched_h694734a5__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_xip_qspi_axi_top.ACLK)", 
                                                             "tb_xip_qspi_axi_top.sv", 
                                                             153);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        if (((IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__XIP_ARVALID) 
             & (0U == (IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_xip_slave__DOT__state)))) {
            __Vtask_tb_xip_qspi_axi_top__DOT__xip_read__19__ar_done = 1U;
        }
    }
    co_await vlSelfRef.__VtrigSched_h694734a5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_xip_qspi_axi_top.ACLK)", 
                                                         "tb_xip_qspi_axi_top.sv", 
                                                         156);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_xip_qspi_axi_top__DOT__XIP_ARVALID = 0U;
    co_await vlSelfRef.__VtrigSched_h694734a5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_xip_qspi_axi_top.ACLK)", 
                                                         "tb_xip_qspi_axi_top.sv", 
                                                         158);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_xip_qspi_axi_top__DOT__XIP_RREADY = 1U;
    while ((3U != (IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_xip_slave__DOT__state))) {
        co_await vlSelfRef.__VtrigSched_h694734a5__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_xip_qspi_axi_top.ACLK)", 
                                                             "tb_xip_qspi_axi_top.sv", 
                                                             160);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
    }
    __Vtask_tb_xip_qspi_axi_top__DOT__xip_read__19__data 
        = vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_xip_slave__DOT__assemble_reg;
    __Vtask_tb_xip_qspi_axi_top__DOT__xip_read__19__resp 
        = ((IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_xip_slave__DOT__fetch_error)
            ? 2U : 0U);
    co_await vlSelfRef.__VtrigSched_h694734a5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_xip_qspi_axi_top.ACLK)", 
                                                         "tb_xip_qspi_axi_top.sv", 
                                                         163);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_xip_qspi_axi_top__DOT__XIP_RREADY = 0U;
    vlSelfRef.tb_xip_qspi_axi_top__DOT__unnamedblk1__DOT__unnamedblk6__DOT__xip_data 
        = __Vtask_tb_xip_qspi_axi_top__DOT__xip_read__19__data;
    vlSelfRef.tb_xip_qspi_axi_top__DOT__unnamedblk1__DOT__unnamedblk6__DOT__xip_resp 
        = __Vtask_tb_xip_qspi_axi_top__DOT__xip_read__19__resp;
    __Vtask_tb_xip_qspi_axi_top__DOT__report__20__detail 
        = VL_SFORMATF_N_NX("(Got resp=%b data=%08x, expected resp=00 data=83828180)",0,
                           2,vlSelfRef.tb_xip_qspi_axi_top__DOT__unnamedblk1__DOT__unnamedblk6__DOT__xip_resp,
                           32,vlSelfRef.tb_xip_qspi_axi_top__DOT__unnamedblk1__DOT__unnamedblk6__DOT__xip_data) ;
    __Vtask_tb_xip_qspi_axi_top__DOT__report__20__ok 
        = ((0U == (IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__unnamedblk1__DOT__unnamedblk6__DOT__xip_resp)) 
           & (0x83828180U == vlSelfRef.tb_xip_qspi_axi_top__DOT__unnamedblk1__DOT__unnamedblk6__DOT__xip_data));
    __Vtask_tb_xip_qspi_axi_top__DOT__report__20__name = 
        std::string{"xip_dual_line_data_fetch"};
    if (__Vtask_tb_xip_qspi_axi_top__DOT__report__20__ok) {
        vlSelfRef.tb_xip_qspi_axi_top__DOT__pass_count 
            = ((IData)(1U) + vlSelfRef.tb_xip_qspi_axi_top__DOT__pass_count);
        VL_WRITEF_NX("[PASS] %@ %@\n",0,-1,&(__Vtask_tb_xip_qspi_axi_top__DOT__report__20__name),
                     -1,&(__Vtask_tb_xip_qspi_axi_top__DOT__report__20__detail));
    } else {
        vlSelfRef.tb_xip_qspi_axi_top__DOT__fail_count 
            = ((IData)(1U) + vlSelfRef.tb_xip_qspi_axi_top__DOT__fail_count);
        VL_WRITEF_NX("[FAIL] %@ %@\n",0,-1,&(__Vtask_tb_xip_qspi_axi_top__DOT__report__20__name),
                     -1,&(__Vtask_tb_xip_qspi_axi_top__DOT__report__20__detail));
    }
    vlSelfRef.tb_xip_qspi_axi_top__DOT__unnamedblk1__DOT__unnamedblk7__DOT__quad_xip_cfg = 0x8001086bU;
    __Vtask_tb_xip_qspi_axi_top__DOT__axi_write__21__data 
        = vlSelfRef.tb_xip_qspi_axi_top__DOT__unnamedblk1__DOT__unnamedblk7__DOT__quad_xip_cfg;
    __Vtask_tb_xip_qspi_axi_top__DOT__axi_write__21__addr = 0x18U;
    __Vtask_tb_xip_qspi_axi_top__DOT__axi_write__21__aw_done = 0U;
    __Vtask_tb_xip_qspi_axi_top__DOT__axi_write__21__w_done = 0U;
    co_await vlSelfRef.__VtrigSched_h694734a5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_xip_qspi_axi_top.ACLK)", 
                                                         "tb_xip_qspi_axi_top.sv", 
                                                         112);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VdlySched.delay(2ULL, nullptr, 
                                         "tb_xip_qspi_axi_top.sv", 
                                         112);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_xip_qspi_axi_top__DOT__AXI_AWADDR 
        = __Vtask_tb_xip_qspi_axi_top__DOT__axi_write__21__addr;
    vlSelfRef.tb_xip_qspi_axi_top__DOT__AXI_AWVALID = 1U;
    vlSelfRef.tb_xip_qspi_axi_top__DOT__AXI_WDATA = __Vtask_tb_xip_qspi_axi_top__DOT__axi_write__21__data;
    vlSelfRef.tb_xip_qspi_axi_top__DOT__AXI_WSTRB = 0xfU;
    vlSelfRef.tb_xip_qspi_axi_top__DOT__AXI_WVALID = 1U;
    while ((1U & (~ ((IData)(__Vtask_tb_xip_qspi_axi_top__DOT__axi_write__21__aw_done) 
                     & (IData)(__Vtask_tb_xip_qspi_axi_top__DOT__axi_write__21__w_done))))) {
        co_await vlSelfRef.__VtrigSched_h694734a5__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_xip_qspi_axi_top.ACLK)", 
                                                             "tb_xip_qspi_axi_top.sv", 
                                                             116);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        if (((IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__AXI_AWVALID) 
             & ((0U == (IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_axi_slave__DOT__state)) 
                | (2U == (IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_axi_slave__DOT__state))))) {
            __Vtask_tb_xip_qspi_axi_top__DOT__axi_write__21__aw_done = 1U;
        }
        if (((IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__AXI_WVALID) 
             & ((0U == (IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_axi_slave__DOT__state)) 
                | (1U == (IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_axi_slave__DOT__state))))) {
            __Vtask_tb_xip_qspi_axi_top__DOT__axi_write__21__w_done = 1U;
        }
    }
    co_await vlSelfRef.__VtrigSched_h694734a5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_xip_qspi_axi_top.ACLK)", 
                                                         "tb_xip_qspi_axi_top.sv", 
                                                         120);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_xip_qspi_axi_top__DOT__AXI_AWVALID = 0U;
    vlSelfRef.tb_xip_qspi_axi_top__DOT__AXI_WVALID = 0U;
    co_await vlSelfRef.__VtrigSched_h694734a5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_xip_qspi_axi_top.ACLK)", 
                                                         "tb_xip_qspi_axi_top.sv", 
                                                         122);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_xip_qspi_axi_top__DOT__AXI_BREADY = 1U;
    while ((3U != (IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_axi_slave__DOT__state))) {
        co_await vlSelfRef.__VtrigSched_h694734a5__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_xip_qspi_axi_top.ACLK)", 
                                                             "tb_xip_qspi_axi_top.sv", 
                                                             124);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
    }
    co_await vlSelfRef.__VtrigSched_h694734a5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_xip_qspi_axi_top.ACLK)", 
                                                         "tb_xip_qspi_axi_top.sv", 
                                                         125);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_xip_qspi_axi_top__DOT__AXI_BREADY = 0U;
    __Vtask_tb_xip_qspi_axi_top__DOT__xip_read__22__addr = 0x1000090U;
    __Vtask_tb_xip_qspi_axi_top__DOT__xip_read__22__ar_done = 0U;
    co_await vlSelfRef.__VtrigSched_h694734a5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_xip_qspi_axi_top.ACLK)", 
                                                         "tb_xip_qspi_axi_top.sv", 
                                                         150);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VdlySched.delay(2ULL, nullptr, 
                                         "tb_xip_qspi_axi_top.sv", 
                                         150);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_xip_qspi_axi_top__DOT__XIP_ARADDR 
        = __Vtask_tb_xip_qspi_axi_top__DOT__xip_read__22__addr;
    vlSelfRef.tb_xip_qspi_axi_top__DOT__XIP_ARVALID = 1U;
    while ((1U & (~ (IData)(__Vtask_tb_xip_qspi_axi_top__DOT__xip_read__22__ar_done)))) {
        co_await vlSelfRef.__VtrigSched_h694734a5__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_xip_qspi_axi_top.ACLK)", 
                                                             "tb_xip_qspi_axi_top.sv", 
                                                             153);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        if (((IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__XIP_ARVALID) 
             & (0U == (IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_xip_slave__DOT__state)))) {
            __Vtask_tb_xip_qspi_axi_top__DOT__xip_read__22__ar_done = 1U;
        }
    }
    co_await vlSelfRef.__VtrigSched_h694734a5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_xip_qspi_axi_top.ACLK)", 
                                                         "tb_xip_qspi_axi_top.sv", 
                                                         156);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_xip_qspi_axi_top__DOT__XIP_ARVALID = 0U;
    co_await vlSelfRef.__VtrigSched_h694734a5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_xip_qspi_axi_top.ACLK)", 
                                                         "tb_xip_qspi_axi_top.sv", 
                                                         158);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_xip_qspi_axi_top__DOT__XIP_RREADY = 1U;
    while ((3U != (IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_xip_slave__DOT__state))) {
        co_await vlSelfRef.__VtrigSched_h694734a5__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_xip_qspi_axi_top.ACLK)", 
                                                             "tb_xip_qspi_axi_top.sv", 
                                                             160);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
    }
    __Vtask_tb_xip_qspi_axi_top__DOT__xip_read__22__data 
        = vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_xip_slave__DOT__assemble_reg;
    __Vtask_tb_xip_qspi_axi_top__DOT__xip_read__22__resp 
        = ((IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_xip_slave__DOT__fetch_error)
            ? 2U : 0U);
    co_await vlSelfRef.__VtrigSched_h694734a5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_xip_qspi_axi_top.ACLK)", 
                                                         "tb_xip_qspi_axi_top.sv", 
                                                         163);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_xip_qspi_axi_top__DOT__XIP_RREADY = 0U;
    vlSelfRef.tb_xip_qspi_axi_top__DOT__unnamedblk1__DOT__unnamedblk7__DOT__xip_data 
        = __Vtask_tb_xip_qspi_axi_top__DOT__xip_read__22__data;
    vlSelfRef.tb_xip_qspi_axi_top__DOT__unnamedblk1__DOT__unnamedblk7__DOT__xip_resp 
        = __Vtask_tb_xip_qspi_axi_top__DOT__xip_read__22__resp;
    __Vtask_tb_xip_qspi_axi_top__DOT__report__23__detail 
        = VL_SFORMATF_N_NX("(Got resp=%b data=%08x, expected resp=00 data=93929190)",0,
                           2,vlSelfRef.tb_xip_qspi_axi_top__DOT__unnamedblk1__DOT__unnamedblk7__DOT__xip_resp,
                           32,vlSelfRef.tb_xip_qspi_axi_top__DOT__unnamedblk1__DOT__unnamedblk7__DOT__xip_data) ;
    __Vtask_tb_xip_qspi_axi_top__DOT__report__23__ok 
        = ((0U == (IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__unnamedblk1__DOT__unnamedblk7__DOT__xip_resp)) 
           & (0x93929190U == vlSelfRef.tb_xip_qspi_axi_top__DOT__unnamedblk1__DOT__unnamedblk7__DOT__xip_data));
    __Vtask_tb_xip_qspi_axi_top__DOT__report__23__name = 
        std::string{"xip_quad_line_data_fetch"};
    if (__Vtask_tb_xip_qspi_axi_top__DOT__report__23__ok) {
        vlSelfRef.tb_xip_qspi_axi_top__DOT__pass_count 
            = ((IData)(1U) + vlSelfRef.tb_xip_qspi_axi_top__DOT__pass_count);
        VL_WRITEF_NX("[PASS] %@ %@\n",0,-1,&(__Vtask_tb_xip_qspi_axi_top__DOT__report__23__name),
                     -1,&(__Vtask_tb_xip_qspi_axi_top__DOT__report__23__detail));
    } else {
        vlSelfRef.tb_xip_qspi_axi_top__DOT__fail_count 
            = ((IData)(1U) + vlSelfRef.tb_xip_qspi_axi_top__DOT__fail_count);
        VL_WRITEF_NX("[FAIL] %@ %@\n",0,-1,&(__Vtask_tb_xip_qspi_axi_top__DOT__report__23__name),
                     -1,&(__Vtask_tb_xip_qspi_axi_top__DOT__report__23__detail));
    }
    vlSelfRef.tb_xip_qspi_axi_top__DOT__unnamedblk1__DOT__unnamedblk8__DOT__normal_xip_cfg = 0x8001000bU;
    __Vtask_tb_xip_qspi_axi_top__DOT__axi_write__24__data 
        = vlSelfRef.tb_xip_qspi_axi_top__DOT__unnamedblk1__DOT__unnamedblk8__DOT__normal_xip_cfg;
    __Vtask_tb_xip_qspi_axi_top__DOT__axi_write__24__addr = 0x18U;
    __Vtask_tb_xip_qspi_axi_top__DOT__axi_write__24__aw_done = 0U;
    __Vtask_tb_xip_qspi_axi_top__DOT__axi_write__24__w_done = 0U;
    co_await vlSelfRef.__VtrigSched_h694734a5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_xip_qspi_axi_top.ACLK)", 
                                                         "tb_xip_qspi_axi_top.sv", 
                                                         112);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VdlySched.delay(2ULL, nullptr, 
                                         "tb_xip_qspi_axi_top.sv", 
                                         112);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_xip_qspi_axi_top__DOT__AXI_AWADDR 
        = __Vtask_tb_xip_qspi_axi_top__DOT__axi_write__24__addr;
    vlSelfRef.tb_xip_qspi_axi_top__DOT__AXI_AWVALID = 1U;
    vlSelfRef.tb_xip_qspi_axi_top__DOT__AXI_WDATA = __Vtask_tb_xip_qspi_axi_top__DOT__axi_write__24__data;
    vlSelfRef.tb_xip_qspi_axi_top__DOT__AXI_WSTRB = 0xfU;
    vlSelfRef.tb_xip_qspi_axi_top__DOT__AXI_WVALID = 1U;
    while ((1U & (~ ((IData)(__Vtask_tb_xip_qspi_axi_top__DOT__axi_write__24__aw_done) 
                     & (IData)(__Vtask_tb_xip_qspi_axi_top__DOT__axi_write__24__w_done))))) {
        co_await vlSelfRef.__VtrigSched_h694734a5__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_xip_qspi_axi_top.ACLK)", 
                                                             "tb_xip_qspi_axi_top.sv", 
                                                             116);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        if (((IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__AXI_AWVALID) 
             & ((0U == (IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_axi_slave__DOT__state)) 
                | (2U == (IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_axi_slave__DOT__state))))) {
            __Vtask_tb_xip_qspi_axi_top__DOT__axi_write__24__aw_done = 1U;
        }
        if (((IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__AXI_WVALID) 
             & ((0U == (IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_axi_slave__DOT__state)) 
                | (1U == (IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_axi_slave__DOT__state))))) {
            __Vtask_tb_xip_qspi_axi_top__DOT__axi_write__24__w_done = 1U;
        }
    }
    co_await vlSelfRef.__VtrigSched_h694734a5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_xip_qspi_axi_top.ACLK)", 
                                                         "tb_xip_qspi_axi_top.sv", 
                                                         120);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_xip_qspi_axi_top__DOT__AXI_AWVALID = 0U;
    vlSelfRef.tb_xip_qspi_axi_top__DOT__AXI_WVALID = 0U;
    co_await vlSelfRef.__VtrigSched_h694734a5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_xip_qspi_axi_top.ACLK)", 
                                                         "tb_xip_qspi_axi_top.sv", 
                                                         122);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_xip_qspi_axi_top__DOT__AXI_BREADY = 1U;
    while ((3U != (IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_axi_slave__DOT__state))) {
        co_await vlSelfRef.__VtrigSched_h694734a5__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_xip_qspi_axi_top.ACLK)", 
                                                             "tb_xip_qspi_axi_top.sv", 
                                                             124);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
    }
    co_await vlSelfRef.__VtrigSched_h694734a5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_xip_qspi_axi_top.ACLK)", 
                                                         "tb_xip_qspi_axi_top.sv", 
                                                         125);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_xip_qspi_axi_top__DOT__AXI_BREADY = 0U;
    vlSelfRef.tb_xip_qspi_axi_top__DOT__unnamedblk1__DOT__unnamedblk8__DOT__all_ok = 1U;
    vlSelfRef.tb_xip_qspi_axi_top__DOT__unnamedblk1__DOT__unnamedblk8__DOT__base_addr = 0x10000a0U;
    __Vtask_tb_xip_qspi_axi_top__DOT__xip_read__25__addr 
        = vlSelfRef.tb_xip_qspi_axi_top__DOT__unnamedblk1__DOT__unnamedblk8__DOT__base_addr;
    __Vtask_tb_xip_qspi_axi_top__DOT__xip_read__25__ar_done = 0U;
    co_await vlSelfRef.__VtrigSched_h694734a5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_xip_qspi_axi_top.ACLK)", 
                                                         "tb_xip_qspi_axi_top.sv", 
                                                         150);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VdlySched.delay(2ULL, nullptr, 
                                         "tb_xip_qspi_axi_top.sv", 
                                         150);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_xip_qspi_axi_top__DOT__XIP_ARADDR 
        = __Vtask_tb_xip_qspi_axi_top__DOT__xip_read__25__addr;
    vlSelfRef.tb_xip_qspi_axi_top__DOT__XIP_ARVALID = 1U;
    while ((1U & (~ (IData)(__Vtask_tb_xip_qspi_axi_top__DOT__xip_read__25__ar_done)))) {
        co_await vlSelfRef.__VtrigSched_h694734a5__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_xip_qspi_axi_top.ACLK)", 
                                                             "tb_xip_qspi_axi_top.sv", 
                                                             153);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        if (((IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__XIP_ARVALID) 
             & (0U == (IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_xip_slave__DOT__state)))) {
            __Vtask_tb_xip_qspi_axi_top__DOT__xip_read__25__ar_done = 1U;
        }
    }
    co_await vlSelfRef.__VtrigSched_h694734a5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_xip_qspi_axi_top.ACLK)", 
                                                         "tb_xip_qspi_axi_top.sv", 
                                                         156);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_xip_qspi_axi_top__DOT__XIP_ARVALID = 0U;
    co_await vlSelfRef.__VtrigSched_h694734a5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_xip_qspi_axi_top.ACLK)", 
                                                         "tb_xip_qspi_axi_top.sv", 
                                                         158);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_xip_qspi_axi_top__DOT__XIP_RREADY = 1U;
    while ((3U != (IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_xip_slave__DOT__state))) {
        co_await vlSelfRef.__VtrigSched_h694734a5__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_xip_qspi_axi_top.ACLK)", 
                                                             "tb_xip_qspi_axi_top.sv", 
                                                             160);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
    }
    __Vtask_tb_xip_qspi_axi_top__DOT__xip_read__25__data 
        = vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_xip_slave__DOT__assemble_reg;
    __Vtask_tb_xip_qspi_axi_top__DOT__xip_read__25__resp 
        = ((IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_xip_slave__DOT__fetch_error)
            ? 2U : 0U);
    co_await vlSelfRef.__VtrigSched_h694734a5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_xip_qspi_axi_top.ACLK)", 
                                                         "tb_xip_qspi_axi_top.sv", 
                                                         163);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_xip_qspi_axi_top__DOT__XIP_RREADY = 0U;
    vlSelfRef.tb_xip_qspi_axi_top__DOT__unnamedblk1__DOT__unnamedblk8__DOT__xip_data 
        = __Vtask_tb_xip_qspi_axi_top__DOT__xip_read__25__data;
    vlSelfRef.tb_xip_qspi_axi_top__DOT__unnamedblk1__DOT__unnamedblk8__DOT__xip_resp 
        = __Vtask_tb_xip_qspi_axi_top__DOT__xip_read__25__resp;
    vlSelfRef.tb_xip_qspi_axi_top__DOT__unnamedblk1__DOT__unnamedblk8__DOT__expected 
        = (((((IData)(3U) + vlSelfRef.tb_xip_qspi_axi_top__DOT__unnamedblk1__DOT__unnamedblk8__DOT__base_addr) 
             << 0x18U) | (0xff0000U & (((IData)(2U) 
                                        + vlSelfRef.tb_xip_qspi_axi_top__DOT__unnamedblk1__DOT__unnamedblk8__DOT__base_addr) 
                                       << 0x10U))) 
           | ((0xff00U & (((IData)(1U) + vlSelfRef.tb_xip_qspi_axi_top__DOT__unnamedblk1__DOT__unnamedblk8__DOT__base_addr) 
                          << 8U)) | (0xffU & vlSelfRef.tb_xip_qspi_axi_top__DOT__unnamedblk1__DOT__unnamedblk8__DOT__base_addr)));
    if (VL_UNLIKELY(((0U != (IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__unnamedblk1__DOT__unnamedblk8__DOT__xip_resp)) 
                     | (vlSelfRef.tb_xip_qspi_axi_top__DOT__unnamedblk1__DOT__unnamedblk8__DOT__xip_data 
                        != vlSelfRef.tb_xip_qspi_axi_top__DOT__unnamedblk1__DOT__unnamedblk8__DOT__expected)))) {
        vlSelfRef.tb_xip_qspi_axi_top__DOT__unnamedblk1__DOT__unnamedblk8__DOT__all_ok = 0U;
        VL_WRITEF_NX("[BACK2BACK] fetch 0 MISMATCH: got resp=%b data=%08x, expected resp=00 data=%08x\n",0,
                     2,vlSelfRef.tb_xip_qspi_axi_top__DOT__unnamedblk1__DOT__unnamedblk8__DOT__xip_resp,
                     32,vlSelfRef.tb_xip_qspi_axi_top__DOT__unnamedblk1__DOT__unnamedblk8__DOT__xip_data,
                     32,vlSelfRef.tb_xip_qspi_axi_top__DOT__unnamedblk1__DOT__unnamedblk8__DOT__expected);
    }
    vlSelfRef.tb_xip_qspi_axi_top__DOT__unnamedblk1__DOT__unnamedblk8__DOT__unnamedblk9__DOT__i = 1U;
    __Vtask_tb_xip_qspi_axi_top__DOT__xip_read__25__addr 
        = ((IData)(4U) + vlSelfRef.tb_xip_qspi_axi_top__DOT__unnamedblk1__DOT__unnamedblk8__DOT__base_addr);
    __Vtask_tb_xip_qspi_axi_top__DOT__xip_read__25__ar_done = 0U;
    co_await vlSelfRef.__VtrigSched_h694734a5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_xip_qspi_axi_top.ACLK)", 
                                                         "tb_xip_qspi_axi_top.sv", 
                                                         150);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VdlySched.delay(2ULL, nullptr, 
                                         "tb_xip_qspi_axi_top.sv", 
                                         150);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_xip_qspi_axi_top__DOT__XIP_ARADDR 
        = __Vtask_tb_xip_qspi_axi_top__DOT__xip_read__25__addr;
    vlSelfRef.tb_xip_qspi_axi_top__DOT__XIP_ARVALID = 1U;
    while ((1U & (~ (IData)(__Vtask_tb_xip_qspi_axi_top__DOT__xip_read__25__ar_done)))) {
        co_await vlSelfRef.__VtrigSched_h694734a5__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_xip_qspi_axi_top.ACLK)", 
                                                             "tb_xip_qspi_axi_top.sv", 
                                                             153);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        if (((IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__XIP_ARVALID) 
             & (0U == (IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_xip_slave__DOT__state)))) {
            __Vtask_tb_xip_qspi_axi_top__DOT__xip_read__25__ar_done = 1U;
        }
    }
    co_await vlSelfRef.__VtrigSched_h694734a5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_xip_qspi_axi_top.ACLK)", 
                                                         "tb_xip_qspi_axi_top.sv", 
                                                         156);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_xip_qspi_axi_top__DOT__XIP_ARVALID = 0U;
    co_await vlSelfRef.__VtrigSched_h694734a5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_xip_qspi_axi_top.ACLK)", 
                                                         "tb_xip_qspi_axi_top.sv", 
                                                         158);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_xip_qspi_axi_top__DOT__XIP_RREADY = 1U;
    while ((3U != (IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_xip_slave__DOT__state))) {
        co_await vlSelfRef.__VtrigSched_h694734a5__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_xip_qspi_axi_top.ACLK)", 
                                                             "tb_xip_qspi_axi_top.sv", 
                                                             160);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
    }
    __Vtask_tb_xip_qspi_axi_top__DOT__xip_read__25__data 
        = vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_xip_slave__DOT__assemble_reg;
    __Vtask_tb_xip_qspi_axi_top__DOT__xip_read__25__resp 
        = ((IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_xip_slave__DOT__fetch_error)
            ? 2U : 0U);
    co_await vlSelfRef.__VtrigSched_h694734a5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_xip_qspi_axi_top.ACLK)", 
                                                         "tb_xip_qspi_axi_top.sv", 
                                                         163);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_xip_qspi_axi_top__DOT__XIP_RREADY = 0U;
    vlSelfRef.tb_xip_qspi_axi_top__DOT__unnamedblk1__DOT__unnamedblk8__DOT__xip_data 
        = __Vtask_tb_xip_qspi_axi_top__DOT__xip_read__25__data;
    vlSelfRef.tb_xip_qspi_axi_top__DOT__unnamedblk1__DOT__unnamedblk8__DOT__xip_resp 
        = __Vtask_tb_xip_qspi_axi_top__DOT__xip_read__25__resp;
    vlSelfRef.tb_xip_qspi_axi_top__DOT__unnamedblk1__DOT__unnamedblk8__DOT__expected 
        = (((((IData)(7U) + vlSelfRef.tb_xip_qspi_axi_top__DOT__unnamedblk1__DOT__unnamedblk8__DOT__base_addr) 
             << 0x18U) | (0xff0000U & (((IData)(6U) 
                                        + vlSelfRef.tb_xip_qspi_axi_top__DOT__unnamedblk1__DOT__unnamedblk8__DOT__base_addr) 
                                       << 0x10U))) 
           | ((0xff00U & (((IData)(5U) + vlSelfRef.tb_xip_qspi_axi_top__DOT__unnamedblk1__DOT__unnamedblk8__DOT__base_addr) 
                          << 8U)) | (0xffU & ((IData)(4U) 
                                              + vlSelfRef.tb_xip_qspi_axi_top__DOT__unnamedblk1__DOT__unnamedblk8__DOT__base_addr))));
    if (VL_UNLIKELY(((0U != (IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__unnamedblk1__DOT__unnamedblk8__DOT__xip_resp)) 
                     | (vlSelfRef.tb_xip_qspi_axi_top__DOT__unnamedblk1__DOT__unnamedblk8__DOT__xip_data 
                        != vlSelfRef.tb_xip_qspi_axi_top__DOT__unnamedblk1__DOT__unnamedblk8__DOT__expected)))) {
        vlSelfRef.tb_xip_qspi_axi_top__DOT__unnamedblk1__DOT__unnamedblk8__DOT__all_ok = 0U;
        VL_WRITEF_NX("[BACK2BACK] fetch 1 MISMATCH: got resp=%b data=%08x, expected resp=00 data=%08x\n",0,
                     2,vlSelfRef.tb_xip_qspi_axi_top__DOT__unnamedblk1__DOT__unnamedblk8__DOT__xip_resp,
                     32,vlSelfRef.tb_xip_qspi_axi_top__DOT__unnamedblk1__DOT__unnamedblk8__DOT__xip_data,
                     32,vlSelfRef.tb_xip_qspi_axi_top__DOT__unnamedblk1__DOT__unnamedblk8__DOT__expected);
    }
    vlSelfRef.tb_xip_qspi_axi_top__DOT__unnamedblk1__DOT__unnamedblk8__DOT__unnamedblk9__DOT__i = 2U;
    __Vtask_tb_xip_qspi_axi_top__DOT__xip_read__25__addr 
        = ((IData)(8U) + vlSelfRef.tb_xip_qspi_axi_top__DOT__unnamedblk1__DOT__unnamedblk8__DOT__base_addr);
    __Vtask_tb_xip_qspi_axi_top__DOT__xip_read__25__ar_done = 0U;
    co_await vlSelfRef.__VtrigSched_h694734a5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_xip_qspi_axi_top.ACLK)", 
                                                         "tb_xip_qspi_axi_top.sv", 
                                                         150);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VdlySched.delay(2ULL, nullptr, 
                                         "tb_xip_qspi_axi_top.sv", 
                                         150);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_xip_qspi_axi_top__DOT__XIP_ARADDR 
        = __Vtask_tb_xip_qspi_axi_top__DOT__xip_read__25__addr;
    vlSelfRef.tb_xip_qspi_axi_top__DOT__XIP_ARVALID = 1U;
    while ((1U & (~ (IData)(__Vtask_tb_xip_qspi_axi_top__DOT__xip_read__25__ar_done)))) {
        co_await vlSelfRef.__VtrigSched_h694734a5__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_xip_qspi_axi_top.ACLK)", 
                                                             "tb_xip_qspi_axi_top.sv", 
                                                             153);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        if (((IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__XIP_ARVALID) 
             & (0U == (IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_xip_slave__DOT__state)))) {
            __Vtask_tb_xip_qspi_axi_top__DOT__xip_read__25__ar_done = 1U;
        }
    }
    co_await vlSelfRef.__VtrigSched_h694734a5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_xip_qspi_axi_top.ACLK)", 
                                                         "tb_xip_qspi_axi_top.sv", 
                                                         156);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_xip_qspi_axi_top__DOT__XIP_ARVALID = 0U;
    co_await vlSelfRef.__VtrigSched_h694734a5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_xip_qspi_axi_top.ACLK)", 
                                                         "tb_xip_qspi_axi_top.sv", 
                                                         158);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_xip_qspi_axi_top__DOT__XIP_RREADY = 1U;
    while ((3U != (IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_xip_slave__DOT__state))) {
        co_await vlSelfRef.__VtrigSched_h694734a5__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_xip_qspi_axi_top.ACLK)", 
                                                             "tb_xip_qspi_axi_top.sv", 
                                                             160);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
    }
    __Vtask_tb_xip_qspi_axi_top__DOT__xip_read__25__data 
        = vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_xip_slave__DOT__assemble_reg;
    __Vtask_tb_xip_qspi_axi_top__DOT__xip_read__25__resp 
        = ((IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_xip_slave__DOT__fetch_error)
            ? 2U : 0U);
    co_await vlSelfRef.__VtrigSched_h694734a5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_xip_qspi_axi_top.ACLK)", 
                                                         "tb_xip_qspi_axi_top.sv", 
                                                         163);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_xip_qspi_axi_top__DOT__XIP_RREADY = 0U;
    vlSelfRef.tb_xip_qspi_axi_top__DOT__unnamedblk1__DOT__unnamedblk8__DOT__xip_data 
        = __Vtask_tb_xip_qspi_axi_top__DOT__xip_read__25__data;
    vlSelfRef.tb_xip_qspi_axi_top__DOT__unnamedblk1__DOT__unnamedblk8__DOT__xip_resp 
        = __Vtask_tb_xip_qspi_axi_top__DOT__xip_read__25__resp;
    vlSelfRef.tb_xip_qspi_axi_top__DOT__unnamedblk1__DOT__unnamedblk8__DOT__expected 
        = (((((IData)(0xbU) + vlSelfRef.tb_xip_qspi_axi_top__DOT__unnamedblk1__DOT__unnamedblk8__DOT__base_addr) 
             << 0x18U) | (0xff0000U & (((IData)(0xaU) 
                                        + vlSelfRef.tb_xip_qspi_axi_top__DOT__unnamedblk1__DOT__unnamedblk8__DOT__base_addr) 
                                       << 0x10U))) 
           | ((0xff00U & (((IData)(9U) + vlSelfRef.tb_xip_qspi_axi_top__DOT__unnamedblk1__DOT__unnamedblk8__DOT__base_addr) 
                          << 8U)) | (0xffU & ((IData)(8U) 
                                              + vlSelfRef.tb_xip_qspi_axi_top__DOT__unnamedblk1__DOT__unnamedblk8__DOT__base_addr))));
    if (VL_UNLIKELY(((0U != (IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__unnamedblk1__DOT__unnamedblk8__DOT__xip_resp)) 
                     | (vlSelfRef.tb_xip_qspi_axi_top__DOT__unnamedblk1__DOT__unnamedblk8__DOT__xip_data 
                        != vlSelfRef.tb_xip_qspi_axi_top__DOT__unnamedblk1__DOT__unnamedblk8__DOT__expected)))) {
        vlSelfRef.tb_xip_qspi_axi_top__DOT__unnamedblk1__DOT__unnamedblk8__DOT__all_ok = 0U;
        VL_WRITEF_NX("[BACK2BACK] fetch 2 MISMATCH: got resp=%b data=%08x, expected resp=00 data=%08x\n",0,
                     2,vlSelfRef.tb_xip_qspi_axi_top__DOT__unnamedblk1__DOT__unnamedblk8__DOT__xip_resp,
                     32,vlSelfRef.tb_xip_qspi_axi_top__DOT__unnamedblk1__DOT__unnamedblk8__DOT__xip_data,
                     32,vlSelfRef.tb_xip_qspi_axi_top__DOT__unnamedblk1__DOT__unnamedblk8__DOT__expected);
    }
    vlSelfRef.tb_xip_qspi_axi_top__DOT__unnamedblk1__DOT__unnamedblk8__DOT__unnamedblk9__DOT__i = 3U;
    __Vtask_tb_xip_qspi_axi_top__DOT__xip_read__25__addr 
        = ((IData)(0xcU) + vlSelfRef.tb_xip_qspi_axi_top__DOT__unnamedblk1__DOT__unnamedblk8__DOT__base_addr);
    __Vtask_tb_xip_qspi_axi_top__DOT__xip_read__25__ar_done = 0U;
    co_await vlSelfRef.__VtrigSched_h694734a5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_xip_qspi_axi_top.ACLK)", 
                                                         "tb_xip_qspi_axi_top.sv", 
                                                         150);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VdlySched.delay(2ULL, nullptr, 
                                         "tb_xip_qspi_axi_top.sv", 
                                         150);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_xip_qspi_axi_top__DOT__XIP_ARADDR 
        = __Vtask_tb_xip_qspi_axi_top__DOT__xip_read__25__addr;
    vlSelfRef.tb_xip_qspi_axi_top__DOT__XIP_ARVALID = 1U;
    while ((1U & (~ (IData)(__Vtask_tb_xip_qspi_axi_top__DOT__xip_read__25__ar_done)))) {
        co_await vlSelfRef.__VtrigSched_h694734a5__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_xip_qspi_axi_top.ACLK)", 
                                                             "tb_xip_qspi_axi_top.sv", 
                                                             153);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        if (((IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__XIP_ARVALID) 
             & (0U == (IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_xip_slave__DOT__state)))) {
            __Vtask_tb_xip_qspi_axi_top__DOT__xip_read__25__ar_done = 1U;
        }
    }
    co_await vlSelfRef.__VtrigSched_h694734a5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_xip_qspi_axi_top.ACLK)", 
                                                         "tb_xip_qspi_axi_top.sv", 
                                                         156);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_xip_qspi_axi_top__DOT__XIP_ARVALID = 0U;
    co_await vlSelfRef.__VtrigSched_h694734a5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_xip_qspi_axi_top.ACLK)", 
                                                         "tb_xip_qspi_axi_top.sv", 
                                                         158);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_xip_qspi_axi_top__DOT__XIP_RREADY = 1U;
    while ((3U != (IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_xip_slave__DOT__state))) {
        co_await vlSelfRef.__VtrigSched_h694734a5__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_xip_qspi_axi_top.ACLK)", 
                                                             "tb_xip_qspi_axi_top.sv", 
                                                             160);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
    }
    __Vtask_tb_xip_qspi_axi_top__DOT__xip_read__25__data 
        = vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_xip_slave__DOT__assemble_reg;
    __Vtask_tb_xip_qspi_axi_top__DOT__xip_read__25__resp 
        = ((IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_xip_slave__DOT__fetch_error)
            ? 2U : 0U);
    co_await vlSelfRef.__VtrigSched_h694734a5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_xip_qspi_axi_top.ACLK)", 
                                                         "tb_xip_qspi_axi_top.sv", 
                                                         163);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_xip_qspi_axi_top__DOT__XIP_RREADY = 0U;
    vlSelfRef.tb_xip_qspi_axi_top__DOT__unnamedblk1__DOT__unnamedblk8__DOT__xip_data 
        = __Vtask_tb_xip_qspi_axi_top__DOT__xip_read__25__data;
    vlSelfRef.tb_xip_qspi_axi_top__DOT__unnamedblk1__DOT__unnamedblk8__DOT__xip_resp 
        = __Vtask_tb_xip_qspi_axi_top__DOT__xip_read__25__resp;
    vlSelfRef.tb_xip_qspi_axi_top__DOT__unnamedblk1__DOT__unnamedblk8__DOT__expected 
        = (((((IData)(0xfU) + vlSelfRef.tb_xip_qspi_axi_top__DOT__unnamedblk1__DOT__unnamedblk8__DOT__base_addr) 
             << 0x18U) | (0xff0000U & (((IData)(0xeU) 
                                        + vlSelfRef.tb_xip_qspi_axi_top__DOT__unnamedblk1__DOT__unnamedblk8__DOT__base_addr) 
                                       << 0x10U))) 
           | ((0xff00U & (((IData)(0xdU) + vlSelfRef.tb_xip_qspi_axi_top__DOT__unnamedblk1__DOT__unnamedblk8__DOT__base_addr) 
                          << 8U)) | (0xffU & ((IData)(0xcU) 
                                              + vlSelfRef.tb_xip_qspi_axi_top__DOT__unnamedblk1__DOT__unnamedblk8__DOT__base_addr))));
    if (VL_UNLIKELY(((0U != (IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__unnamedblk1__DOT__unnamedblk8__DOT__xip_resp)) 
                     | (vlSelfRef.tb_xip_qspi_axi_top__DOT__unnamedblk1__DOT__unnamedblk8__DOT__xip_data 
                        != vlSelfRef.tb_xip_qspi_axi_top__DOT__unnamedblk1__DOT__unnamedblk8__DOT__expected)))) {
        vlSelfRef.tb_xip_qspi_axi_top__DOT__unnamedblk1__DOT__unnamedblk8__DOT__all_ok = 0U;
        VL_WRITEF_NX("[BACK2BACK] fetch 3 MISMATCH: got resp=%b data=%08x, expected resp=00 data=%08x\n",0,
                     2,vlSelfRef.tb_xip_qspi_axi_top__DOT__unnamedblk1__DOT__unnamedblk8__DOT__xip_resp,
                     32,vlSelfRef.tb_xip_qspi_axi_top__DOT__unnamedblk1__DOT__unnamedblk8__DOT__xip_data,
                     32,vlSelfRef.tb_xip_qspi_axi_top__DOT__unnamedblk1__DOT__unnamedblk8__DOT__expected);
    }
    vlSelfRef.tb_xip_qspi_axi_top__DOT__unnamedblk1__DOT__unnamedblk8__DOT__unnamedblk9__DOT__i = 4U;
    __Vtask_tb_xip_qspi_axi_top__DOT__xip_read__25__addr 
        = ((IData)(0x10U) + vlSelfRef.tb_xip_qspi_axi_top__DOT__unnamedblk1__DOT__unnamedblk8__DOT__base_addr);
    __Vtask_tb_xip_qspi_axi_top__DOT__xip_read__25__ar_done = 0U;
    co_await vlSelfRef.__VtrigSched_h694734a5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_xip_qspi_axi_top.ACLK)", 
                                                         "tb_xip_qspi_axi_top.sv", 
                                                         150);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VdlySched.delay(2ULL, nullptr, 
                                         "tb_xip_qspi_axi_top.sv", 
                                         150);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_xip_qspi_axi_top__DOT__XIP_ARADDR 
        = __Vtask_tb_xip_qspi_axi_top__DOT__xip_read__25__addr;
    vlSelfRef.tb_xip_qspi_axi_top__DOT__XIP_ARVALID = 1U;
    while ((1U & (~ (IData)(__Vtask_tb_xip_qspi_axi_top__DOT__xip_read__25__ar_done)))) {
        co_await vlSelfRef.__VtrigSched_h694734a5__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_xip_qspi_axi_top.ACLK)", 
                                                             "tb_xip_qspi_axi_top.sv", 
                                                             153);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        if (((IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__XIP_ARVALID) 
             & (0U == (IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_xip_slave__DOT__state)))) {
            __Vtask_tb_xip_qspi_axi_top__DOT__xip_read__25__ar_done = 1U;
        }
    }
    co_await vlSelfRef.__VtrigSched_h694734a5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_xip_qspi_axi_top.ACLK)", 
                                                         "tb_xip_qspi_axi_top.sv", 
                                                         156);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_xip_qspi_axi_top__DOT__XIP_ARVALID = 0U;
    co_await vlSelfRef.__VtrigSched_h694734a5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_xip_qspi_axi_top.ACLK)", 
                                                         "tb_xip_qspi_axi_top.sv", 
                                                         158);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_xip_qspi_axi_top__DOT__XIP_RREADY = 1U;
    while ((3U != (IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_xip_slave__DOT__state))) {
        co_await vlSelfRef.__VtrigSched_h694734a5__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_xip_qspi_axi_top.ACLK)", 
                                                             "tb_xip_qspi_axi_top.sv", 
                                                             160);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
    }
    __Vtask_tb_xip_qspi_axi_top__DOT__xip_read__25__data 
        = vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_xip_slave__DOT__assemble_reg;
    __Vtask_tb_xip_qspi_axi_top__DOT__xip_read__25__resp 
        = ((IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_xip_slave__DOT__fetch_error)
            ? 2U : 0U);
    co_await vlSelfRef.__VtrigSched_h694734a5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_xip_qspi_axi_top.ACLK)", 
                                                         "tb_xip_qspi_axi_top.sv", 
                                                         163);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_xip_qspi_axi_top__DOT__XIP_RREADY = 0U;
    vlSelfRef.tb_xip_qspi_axi_top__DOT__unnamedblk1__DOT__unnamedblk8__DOT__xip_data 
        = __Vtask_tb_xip_qspi_axi_top__DOT__xip_read__25__data;
    vlSelfRef.tb_xip_qspi_axi_top__DOT__unnamedblk1__DOT__unnamedblk8__DOT__xip_resp 
        = __Vtask_tb_xip_qspi_axi_top__DOT__xip_read__25__resp;
    vlSelfRef.tb_xip_qspi_axi_top__DOT__unnamedblk1__DOT__unnamedblk8__DOT__expected 
        = (((((IData)(0x13U) + vlSelfRef.tb_xip_qspi_axi_top__DOT__unnamedblk1__DOT__unnamedblk8__DOT__base_addr) 
             << 0x18U) | (0xff0000U & (((IData)(0x12U) 
                                        + vlSelfRef.tb_xip_qspi_axi_top__DOT__unnamedblk1__DOT__unnamedblk8__DOT__base_addr) 
                                       << 0x10U))) 
           | ((0xff00U & (((IData)(0x11U) + vlSelfRef.tb_xip_qspi_axi_top__DOT__unnamedblk1__DOT__unnamedblk8__DOT__base_addr) 
                          << 8U)) | (0xffU & ((IData)(0x10U) 
                                              + vlSelfRef.tb_xip_qspi_axi_top__DOT__unnamedblk1__DOT__unnamedblk8__DOT__base_addr))));
    if (VL_UNLIKELY(((0U != (IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__unnamedblk1__DOT__unnamedblk8__DOT__xip_resp)) 
                     | (vlSelfRef.tb_xip_qspi_axi_top__DOT__unnamedblk1__DOT__unnamedblk8__DOT__xip_data 
                        != vlSelfRef.tb_xip_qspi_axi_top__DOT__unnamedblk1__DOT__unnamedblk8__DOT__expected)))) {
        vlSelfRef.tb_xip_qspi_axi_top__DOT__unnamedblk1__DOT__unnamedblk8__DOT__all_ok = 0U;
        VL_WRITEF_NX("[BACK2BACK] fetch 4 MISMATCH: got resp=%b data=%08x, expected resp=00 data=%08x\n",0,
                     2,vlSelfRef.tb_xip_qspi_axi_top__DOT__unnamedblk1__DOT__unnamedblk8__DOT__xip_resp,
                     32,vlSelfRef.tb_xip_qspi_axi_top__DOT__unnamedblk1__DOT__unnamedblk8__DOT__xip_data,
                     32,vlSelfRef.tb_xip_qspi_axi_top__DOT__unnamedblk1__DOT__unnamedblk8__DOT__expected);
    }
    vlSelfRef.tb_xip_qspi_axi_top__DOT__unnamedblk1__DOT__unnamedblk8__DOT__unnamedblk9__DOT__i = 5U;
    __Vtask_tb_xip_qspi_axi_top__DOT__xip_read__25__addr 
        = ((IData)(0x14U) + vlSelfRef.tb_xip_qspi_axi_top__DOT__unnamedblk1__DOT__unnamedblk8__DOT__base_addr);
    __Vtask_tb_xip_qspi_axi_top__DOT__xip_read__25__ar_done = 0U;
    co_await vlSelfRef.__VtrigSched_h694734a5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_xip_qspi_axi_top.ACLK)", 
                                                         "tb_xip_qspi_axi_top.sv", 
                                                         150);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VdlySched.delay(2ULL, nullptr, 
                                         "tb_xip_qspi_axi_top.sv", 
                                         150);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_xip_qspi_axi_top__DOT__XIP_ARADDR 
        = __Vtask_tb_xip_qspi_axi_top__DOT__xip_read__25__addr;
    vlSelfRef.tb_xip_qspi_axi_top__DOT__XIP_ARVALID = 1U;
    while ((1U & (~ (IData)(__Vtask_tb_xip_qspi_axi_top__DOT__xip_read__25__ar_done)))) {
        co_await vlSelfRef.__VtrigSched_h694734a5__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_xip_qspi_axi_top.ACLK)", 
                                                             "tb_xip_qspi_axi_top.sv", 
                                                             153);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        if (((IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__XIP_ARVALID) 
             & (0U == (IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_xip_slave__DOT__state)))) {
            __Vtask_tb_xip_qspi_axi_top__DOT__xip_read__25__ar_done = 1U;
        }
    }
    co_await vlSelfRef.__VtrigSched_h694734a5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_xip_qspi_axi_top.ACLK)", 
                                                         "tb_xip_qspi_axi_top.sv", 
                                                         156);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_xip_qspi_axi_top__DOT__XIP_ARVALID = 0U;
    co_await vlSelfRef.__VtrigSched_h694734a5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_xip_qspi_axi_top.ACLK)", 
                                                         "tb_xip_qspi_axi_top.sv", 
                                                         158);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_xip_qspi_axi_top__DOT__XIP_RREADY = 1U;
    while ((3U != (IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_xip_slave__DOT__state))) {
        co_await vlSelfRef.__VtrigSched_h694734a5__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_xip_qspi_axi_top.ACLK)", 
                                                             "tb_xip_qspi_axi_top.sv", 
                                                             160);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
    }
    __Vtask_tb_xip_qspi_axi_top__DOT__xip_read__25__resp 
        = ((IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_xip_slave__DOT__fetch_error)
            ? 2U : 0U);
    __Vtask_tb_xip_qspi_axi_top__DOT__xip_read__25__data 
        = vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_xip_slave__DOT__assemble_reg;
    co_await vlSelfRef.__VtrigSched_h694734a5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_xip_qspi_axi_top.ACLK)", 
                                                         "tb_xip_qspi_axi_top.sv", 
                                                         163);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_xip_qspi_axi_top__DOT__XIP_RREADY = 0U;
    vlSelfRef.tb_xip_qspi_axi_top__DOT__unnamedblk1__DOT__unnamedblk8__DOT__xip_data 
        = __Vtask_tb_xip_qspi_axi_top__DOT__xip_read__25__data;
    vlSelfRef.tb_xip_qspi_axi_top__DOT__unnamedblk1__DOT__unnamedblk8__DOT__xip_resp 
        = __Vtask_tb_xip_qspi_axi_top__DOT__xip_read__25__resp;
    vlSelfRef.tb_xip_qspi_axi_top__DOT__unnamedblk1__DOT__unnamedblk8__DOT__expected 
        = (((((IData)(0x17U) + vlSelfRef.tb_xip_qspi_axi_top__DOT__unnamedblk1__DOT__unnamedblk8__DOT__base_addr) 
             << 0x18U) | (0xff0000U & (((IData)(0x16U) 
                                        + vlSelfRef.tb_xip_qspi_axi_top__DOT__unnamedblk1__DOT__unnamedblk8__DOT__base_addr) 
                                       << 0x10U))) 
           | ((0xff00U & (((IData)(0x15U) + vlSelfRef.tb_xip_qspi_axi_top__DOT__unnamedblk1__DOT__unnamedblk8__DOT__base_addr) 
                          << 8U)) | (0xffU & ((IData)(0x14U) 
                                              + vlSelfRef.tb_xip_qspi_axi_top__DOT__unnamedblk1__DOT__unnamedblk8__DOT__base_addr))));
    if (VL_UNLIKELY(((0U != (IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__unnamedblk1__DOT__unnamedblk8__DOT__xip_resp)) 
                     | (vlSelfRef.tb_xip_qspi_axi_top__DOT__unnamedblk1__DOT__unnamedblk8__DOT__xip_data 
                        != vlSelfRef.tb_xip_qspi_axi_top__DOT__unnamedblk1__DOT__unnamedblk8__DOT__expected)))) {
        vlSelfRef.tb_xip_qspi_axi_top__DOT__unnamedblk1__DOT__unnamedblk8__DOT__all_ok = 0U;
        VL_WRITEF_NX("[BACK2BACK] fetch 5 MISMATCH: got resp=%b data=%08x, expected resp=00 data=%08x\n",0,
                     2,vlSelfRef.tb_xip_qspi_axi_top__DOT__unnamedblk1__DOT__unnamedblk8__DOT__xip_resp,
                     32,vlSelfRef.tb_xip_qspi_axi_top__DOT__unnamedblk1__DOT__unnamedblk8__DOT__xip_data,
                     32,vlSelfRef.tb_xip_qspi_axi_top__DOT__unnamedblk1__DOT__unnamedblk8__DOT__expected);
    }
    vlSelfRef.tb_xip_qspi_axi_top__DOT__unnamedblk1__DOT__unnamedblk8__DOT__unnamedblk9__DOT__i = 6U;
    __Vtask_tb_xip_qspi_axi_top__DOT__report__26__detail = 
        std::string{"(6 consecutive XIP fetches, no delay between them, each independently checked)"};
    __Vtask_tb_xip_qspi_axi_top__DOT__report__26__ok 
        = vlSelfRef.tb_xip_qspi_axi_top__DOT__unnamedblk1__DOT__unnamedblk8__DOT__all_ok;
    __Vtask_tb_xip_qspi_axi_top__DOT__report__26__name = 
        std::string{"xip_back_to_back_fetches"};
    if (__Vtask_tb_xip_qspi_axi_top__DOT__report__26__ok) {
        vlSelfRef.tb_xip_qspi_axi_top__DOT__pass_count 
            = ((IData)(1U) + vlSelfRef.tb_xip_qspi_axi_top__DOT__pass_count);
        VL_WRITEF_NX("[PASS] %@ %@\n",0,-1,&(__Vtask_tb_xip_qspi_axi_top__DOT__report__26__name),
                     -1,&(__Vtask_tb_xip_qspi_axi_top__DOT__report__26__detail));
    } else {
        vlSelfRef.tb_xip_qspi_axi_top__DOT__fail_count 
            = ((IData)(1U) + vlSelfRef.tb_xip_qspi_axi_top__DOT__fail_count);
        VL_WRITEF_NX("[FAIL] %@ %@\n",0,-1,&(__Vtask_tb_xip_qspi_axi_top__DOT__report__26__name),
                     -1,&(__Vtask_tb_xip_qspi_axi_top__DOT__report__26__detail));
    }
    VL_WRITEF_NX("=====================================\nSUMMARY: %0d pass, %0d fail\n",0,
                 32,vlSelfRef.tb_xip_qspi_axi_top__DOT__pass_count,
                 32,vlSelfRef.tb_xip_qspi_axi_top__DOT__fail_count);
    VL_FINISH_MT("tb_xip_qspi_axi_top.sv", 414, "");
    co_return;
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
}

VL_INLINE_OPT VlCoroutine Vtb_xip_qspi_axi_top___024root___eval_initial__TOP__Vtiming__3____Vfork_4__1(Vtb_xip_qspi_axi_top___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_xip_qspi_axi_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_xip_qspi_axi_top___024root___eval_initial__TOP__Vtiming__3____Vfork_4__1\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __Vtask_tb_xip_qspi_axi_top__DOT__axi_write__16__addr;
    __Vtask_tb_xip_qspi_axi_top__DOT__axi_write__16__addr = 0;
    IData/*31:0*/ __Vtask_tb_xip_qspi_axi_top__DOT__axi_write__16__data;
    __Vtask_tb_xip_qspi_axi_top__DOT__axi_write__16__data = 0;
    CData/*0:0*/ __Vtask_tb_xip_qspi_axi_top__DOT__axi_write__16__aw_done;
    __Vtask_tb_xip_qspi_axi_top__DOT__axi_write__16__aw_done = 0;
    CData/*0:0*/ __Vtask_tb_xip_qspi_axi_top__DOT__axi_write__16__w_done;
    __Vtask_tb_xip_qspi_axi_top__DOT__axi_write__16__w_done = 0;
    // Body
    co_await vlSelfRef.__VtrigSched_h694734a5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_xip_qspi_axi_top.ACLK)", 
                                                         "tb_xip_qspi_axi_top.sv", 
                                                         332);
    co_await vlSelfRef.__VtrigSched_h694734a5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_xip_qspi_axi_top.ACLK)", 
                                                         "tb_xip_qspi_axi_top.sv", 
                                                         332);
    co_await vlSelfRef.__VtrigSched_h694734a5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_xip_qspi_axi_top.ACLK)", 
                                                         "tb_xip_qspi_axi_top.sv", 
                                                         332);
    co_await vlSelfRef.__VtrigSched_h694734a5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_xip_qspi_axi_top.ACLK)", 
                                                         "tb_xip_qspi_axi_top.sv", 
                                                         332);
    co_await vlSelfRef.__VtrigSched_h694734a5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_xip_qspi_axi_top.ACLK)", 
                                                         "tb_xip_qspi_axi_top.sv", 
                                                         332);
    co_await vlSelfRef.__VtrigSched_h694734a5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_xip_qspi_axi_top.ACLK)", 
                                                         "tb_xip_qspi_axi_top.sv", 
                                                         332);
    co_await vlSelfRef.__VtrigSched_h694734a5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_xip_qspi_axi_top.ACLK)", 
                                                         "tb_xip_qspi_axi_top.sv", 
                                                         332);
    co_await vlSelfRef.__VtrigSched_h694734a5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_xip_qspi_axi_top.ACLK)", 
                                                         "tb_xip_qspi_axi_top.sv", 
                                                         332);
    co_await vlSelfRef.__VtrigSched_h694734a5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_xip_qspi_axi_top.ACLK)", 
                                                         "tb_xip_qspi_axi_top.sv", 
                                                         332);
    co_await vlSelfRef.__VtrigSched_h694734a5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_xip_qspi_axi_top.ACLK)", 
                                                         "tb_xip_qspi_axi_top.sv", 
                                                         332);
    co_await vlSelfRef.__VtrigSched_h694734a5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_xip_qspi_axi_top.ACLK)", 
                                                         "tb_xip_qspi_axi_top.sv", 
                                                         332);
    co_await vlSelfRef.__VtrigSched_h694734a5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_xip_qspi_axi_top.ACLK)", 
                                                         "tb_xip_qspi_axi_top.sv", 
                                                         332);
    co_await vlSelfRef.__VtrigSched_h694734a5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_xip_qspi_axi_top.ACLK)", 
                                                         "tb_xip_qspi_axi_top.sv", 
                                                         332);
    co_await vlSelfRef.__VtrigSched_h694734a5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_xip_qspi_axi_top.ACLK)", 
                                                         "tb_xip_qspi_axi_top.sv", 
                                                         332);
    co_await vlSelfRef.__VtrigSched_h694734a5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_xip_qspi_axi_top.ACLK)", 
                                                         "tb_xip_qspi_axi_top.sv", 
                                                         332);
    __Vtask_tb_xip_qspi_axi_top__DOT__axi_write__16__data = 0x800040ffU;
    __Vtask_tb_xip_qspi_axi_top__DOT__axi_write__16__addr = 0x18U;
    __Vtask_tb_xip_qspi_axi_top__DOT__axi_write__16__aw_done = 0U;
    __Vtask_tb_xip_qspi_axi_top__DOT__axi_write__16__w_done = 0U;
    co_await vlSelfRef.__VtrigSched_h694734a5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_xip_qspi_axi_top.ACLK)", 
                                                         "tb_xip_qspi_axi_top.sv", 
                                                         112);
    co_await vlSelfRef.__VdlySched.delay(2ULL, nullptr, 
                                         "tb_xip_qspi_axi_top.sv", 
                                         112);
    vlSelfRef.tb_xip_qspi_axi_top__DOT__AXI_AWADDR 
        = __Vtask_tb_xip_qspi_axi_top__DOT__axi_write__16__addr;
    vlSelfRef.tb_xip_qspi_axi_top__DOT__AXI_AWVALID = 1U;
    vlSelfRef.tb_xip_qspi_axi_top__DOT__AXI_WDATA = __Vtask_tb_xip_qspi_axi_top__DOT__axi_write__16__data;
    vlSelfRef.tb_xip_qspi_axi_top__DOT__AXI_WSTRB = 0xfU;
    vlSelfRef.tb_xip_qspi_axi_top__DOT__AXI_WVALID = 1U;
    while ((1U & (~ ((IData)(__Vtask_tb_xip_qspi_axi_top__DOT__axi_write__16__aw_done) 
                     & (IData)(__Vtask_tb_xip_qspi_axi_top__DOT__axi_write__16__w_done))))) {
        co_await vlSelfRef.__VtrigSched_h694734a5__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_xip_qspi_axi_top.ACLK)", 
                                                             "tb_xip_qspi_axi_top.sv", 
                                                             116);
        if (((IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__AXI_AWVALID) 
             & ((0U == (IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_axi_slave__DOT__state)) 
                | (2U == (IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_axi_slave__DOT__state))))) {
            __Vtask_tb_xip_qspi_axi_top__DOT__axi_write__16__aw_done = 1U;
        }
        if (((IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__AXI_WVALID) 
             & ((0U == (IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_axi_slave__DOT__state)) 
                | (1U == (IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_axi_slave__DOT__state))))) {
            __Vtask_tb_xip_qspi_axi_top__DOT__axi_write__16__w_done = 1U;
        }
    }
    co_await vlSelfRef.__VtrigSched_h694734a5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_xip_qspi_axi_top.ACLK)", 
                                                         "tb_xip_qspi_axi_top.sv", 
                                                         120);
    vlSelfRef.tb_xip_qspi_axi_top__DOT__AXI_AWVALID = 0U;
    vlSelfRef.tb_xip_qspi_axi_top__DOT__AXI_WVALID = 0U;
    co_await vlSelfRef.__VtrigSched_h694734a5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_xip_qspi_axi_top.ACLK)", 
                                                         "tb_xip_qspi_axi_top.sv", 
                                                         122);
    vlSelfRef.tb_xip_qspi_axi_top__DOT__AXI_BREADY = 1U;
    while ((3U != (IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_axi_slave__DOT__state))) {
        co_await vlSelfRef.__VtrigSched_h694734a5__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_xip_qspi_axi_top.ACLK)", 
                                                             "tb_xip_qspi_axi_top.sv", 
                                                             124);
    }
    co_await vlSelfRef.__VtrigSched_h694734a5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_xip_qspi_axi_top.ACLK)", 
                                                         "tb_xip_qspi_axi_top.sv", 
                                                         125);
    vlSelfRef.tb_xip_qspi_axi_top__DOT__AXI_BREADY = 0U;
    vlSelfRef.__Vfork_4__sync.done("tb_xip_qspi_axi_top.sv", 
                                   331);
}

VL_INLINE_OPT VlCoroutine Vtb_xip_qspi_axi_top___024root___eval_initial__TOP__Vtiming__3____Vfork_4__0(Vtb_xip_qspi_axi_top___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_xip_qspi_axi_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_xip_qspi_axi_top___024root___eval_initial__TOP__Vtiming__3____Vfork_4__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while ((1U & (~ ((IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__XIP_ARVALID) 
                     & (0U == (IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_xip_slave__DOT__state)))))) {
        co_await vlSelfRef.__VtrigSched_h694734a5__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_xip_qspi_axi_top.ACLK)", 
                                                             "tb_xip_qspi_axi_top.sv", 
                                                             324);
    }
    co_await vlSelfRef.__VtrigSched_h694734a5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_xip_qspi_axi_top.ACLK)", 
                                                         "tb_xip_qspi_axi_top.sv", 
                                                         325);
    vlSelfRef.tb_xip_qspi_axi_top__DOT__XIP_ARVALID = 0U;
    vlSelfRef.tb_xip_qspi_axi_top__DOT__XIP_RREADY = 1U;
    while ((3U != (IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_xip_slave__DOT__state))) {
        co_await vlSelfRef.__VtrigSched_h694734a5__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_xip_qspi_axi_top.ACLK)", 
                                                             "tb_xip_qspi_axi_top.sv", 
                                                             327);
    }
    vlSelfRef.tb_xip_qspi_axi_top__DOT__unnamedblk1__DOT__unnamedblk5__DOT__xip_data 
        = vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_xip_slave__DOT__assemble_reg;
    vlSelfRef.tb_xip_qspi_axi_top__DOT__unnamedblk1__DOT__unnamedblk5__DOT__xip_resp 
        = ((IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_xip_slave__DOT__fetch_error)
            ? 2U : 0U);
    co_await vlSelfRef.__VtrigSched_h694734a5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_xip_qspi_axi_top.ACLK)", 
                                                         "tb_xip_qspi_axi_top.sv", 
                                                         329);
    vlSelfRef.tb_xip_qspi_axi_top__DOT__XIP_RREADY = 0U;
    vlSelfRef.__Vfork_4__sync.done("tb_xip_qspi_axi_top.sv", 
                                   323);
}

VL_INLINE_OPT VlCoroutine Vtb_xip_qspi_axi_top___024root___eval_initial__TOP__Vtiming__3____Vfork_3__1(Vtb_xip_qspi_axi_top___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_xip_qspi_axi_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_xip_qspi_axi_top___024root___eval_initial__TOP__Vtiming__3____Vfork_3__1\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __Vtask_tb_xip_qspi_axi_top__DOT__axi_write__8__addr;
    __Vtask_tb_xip_qspi_axi_top__DOT__axi_write__8__addr = 0;
    IData/*31:0*/ __Vtask_tb_xip_qspi_axi_top__DOT__axi_write__8__data;
    __Vtask_tb_xip_qspi_axi_top__DOT__axi_write__8__data = 0;
    CData/*0:0*/ __Vtask_tb_xip_qspi_axi_top__DOT__axi_write__8__aw_done;
    __Vtask_tb_xip_qspi_axi_top__DOT__axi_write__8__aw_done = 0;
    CData/*0:0*/ __Vtask_tb_xip_qspi_axi_top__DOT__axi_write__8__w_done;
    __Vtask_tb_xip_qspi_axi_top__DOT__axi_write__8__w_done = 0;
    // Body
    co_await vlSelfRef.__VtrigSched_h694734a5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_xip_qspi_axi_top.ACLK)", 
                                                         "tb_xip_qspi_axi_top.sv", 
                                                         267);
    co_await vlSelfRef.__VtrigSched_h694734a5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_xip_qspi_axi_top.ACLK)", 
                                                         "tb_xip_qspi_axi_top.sv", 
                                                         267);
    co_await vlSelfRef.__VtrigSched_h694734a5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_xip_qspi_axi_top.ACLK)", 
                                                         "tb_xip_qspi_axi_top.sv", 
                                                         267);
    co_await vlSelfRef.__VtrigSched_h694734a5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_xip_qspi_axi_top.ACLK)", 
                                                         "tb_xip_qspi_axi_top.sv", 
                                                         267);
    co_await vlSelfRef.__VtrigSched_h694734a5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_xip_qspi_axi_top.ACLK)", 
                                                         "tb_xip_qspi_axi_top.sv", 
                                                         267);
    co_await vlSelfRef.__VtrigSched_h694734a5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_xip_qspi_axi_top.ACLK)", 
                                                         "tb_xip_qspi_axi_top.sv", 
                                                         267);
    co_await vlSelfRef.__VtrigSched_h694734a5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_xip_qspi_axi_top.ACLK)", 
                                                         "tb_xip_qspi_axi_top.sv", 
                                                         267);
    co_await vlSelfRef.__VtrigSched_h694734a5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_xip_qspi_axi_top.ACLK)", 
                                                         "tb_xip_qspi_axi_top.sv", 
                                                         267);
    co_await vlSelfRef.__VtrigSched_h694734a5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_xip_qspi_axi_top.ACLK)", 
                                                         "tb_xip_qspi_axi_top.sv", 
                                                         267);
    co_await vlSelfRef.__VtrigSched_h694734a5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_xip_qspi_axi_top.ACLK)", 
                                                         "tb_xip_qspi_axi_top.sv", 
                                                         267);
    co_await vlSelfRef.__VtrigSched_h694734a5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_xip_qspi_axi_top.ACLK)", 
                                                         "tb_xip_qspi_axi_top.sv", 
                                                         267);
    co_await vlSelfRef.__VtrigSched_h694734a5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_xip_qspi_axi_top.ACLK)", 
                                                         "tb_xip_qspi_axi_top.sv", 
                                                         267);
    co_await vlSelfRef.__VtrigSched_h694734a5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_xip_qspi_axi_top.ACLK)", 
                                                         "tb_xip_qspi_axi_top.sv", 
                                                         267);
    co_await vlSelfRef.__VtrigSched_h694734a5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_xip_qspi_axi_top.ACLK)", 
                                                         "tb_xip_qspi_axi_top.sv", 
                                                         267);
    co_await vlSelfRef.__VtrigSched_h694734a5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_xip_qspi_axi_top.ACLK)", 
                                                         "tb_xip_qspi_axi_top.sv", 
                                                         267);
    co_await vlSelfRef.__VtrigSched_h694734a5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_xip_qspi_axi_top.ACLK)", 
                                                         "tb_xip_qspi_axi_top.sv", 
                                                         267);
    co_await vlSelfRef.__VtrigSched_h694734a5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_xip_qspi_axi_top.ACLK)", 
                                                         "tb_xip_qspi_axi_top.sv", 
                                                         267);
    co_await vlSelfRef.__VtrigSched_h694734a5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_xip_qspi_axi_top.ACLK)", 
                                                         "tb_xip_qspi_axi_top.sv", 
                                                         267);
    co_await vlSelfRef.__VtrigSched_h694734a5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_xip_qspi_axi_top.ACLK)", 
                                                         "tb_xip_qspi_axi_top.sv", 
                                                         267);
    co_await vlSelfRef.__VtrigSched_h694734a5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_xip_qspi_axi_top.ACLK)", 
                                                         "tb_xip_qspi_axi_top.sv", 
                                                         267);
    vlSelfRef.tb_xip_qspi_axi_top__DOT__unnamedblk1__DOT__unnamedblk3__DOT__abort_ctrl_cmd = 0U;
    vlSelfRef.tb_xip_qspi_axi_top__DOT__unnamedblk1__DOT__unnamedblk3__DOT__abort_ctrl_cmd 
        = (0x800000U | vlSelfRef.tb_xip_qspi_axi_top__DOT__unnamedblk1__DOT__unnamedblk3__DOT__abort_ctrl_cmd);
    __Vtask_tb_xip_qspi_axi_top__DOT__axi_write__8__data 
        = vlSelfRef.tb_xip_qspi_axi_top__DOT__unnamedblk1__DOT__unnamedblk3__DOT__abort_ctrl_cmd;
    __Vtask_tb_xip_qspi_axi_top__DOT__axi_write__8__addr = 0U;
    __Vtask_tb_xip_qspi_axi_top__DOT__axi_write__8__aw_done = 0U;
    __Vtask_tb_xip_qspi_axi_top__DOT__axi_write__8__w_done = 0U;
    co_await vlSelfRef.__VtrigSched_h694734a5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_xip_qspi_axi_top.ACLK)", 
                                                         "tb_xip_qspi_axi_top.sv", 
                                                         112);
    co_await vlSelfRef.__VdlySched.delay(2ULL, nullptr, 
                                         "tb_xip_qspi_axi_top.sv", 
                                         112);
    vlSelfRef.tb_xip_qspi_axi_top__DOT__AXI_AWADDR 
        = __Vtask_tb_xip_qspi_axi_top__DOT__axi_write__8__addr;
    vlSelfRef.tb_xip_qspi_axi_top__DOT__AXI_AWVALID = 1U;
    vlSelfRef.tb_xip_qspi_axi_top__DOT__AXI_WDATA = __Vtask_tb_xip_qspi_axi_top__DOT__axi_write__8__data;
    vlSelfRef.tb_xip_qspi_axi_top__DOT__AXI_WSTRB = 0xfU;
    vlSelfRef.tb_xip_qspi_axi_top__DOT__AXI_WVALID = 1U;
    while ((1U & (~ ((IData)(__Vtask_tb_xip_qspi_axi_top__DOT__axi_write__8__aw_done) 
                     & (IData)(__Vtask_tb_xip_qspi_axi_top__DOT__axi_write__8__w_done))))) {
        co_await vlSelfRef.__VtrigSched_h694734a5__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_xip_qspi_axi_top.ACLK)", 
                                                             "tb_xip_qspi_axi_top.sv", 
                                                             116);
        if (((IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__AXI_AWVALID) 
             & ((0U == (IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_axi_slave__DOT__state)) 
                | (2U == (IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_axi_slave__DOT__state))))) {
            __Vtask_tb_xip_qspi_axi_top__DOT__axi_write__8__aw_done = 1U;
        }
        if (((IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__AXI_WVALID) 
             & ((0U == (IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_axi_slave__DOT__state)) 
                | (1U == (IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_axi_slave__DOT__state))))) {
            __Vtask_tb_xip_qspi_axi_top__DOT__axi_write__8__w_done = 1U;
        }
    }
    co_await vlSelfRef.__VtrigSched_h694734a5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_xip_qspi_axi_top.ACLK)", 
                                                         "tb_xip_qspi_axi_top.sv", 
                                                         120);
    vlSelfRef.tb_xip_qspi_axi_top__DOT__AXI_AWVALID = 0U;
    vlSelfRef.tb_xip_qspi_axi_top__DOT__AXI_WVALID = 0U;
    co_await vlSelfRef.__VtrigSched_h694734a5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_xip_qspi_axi_top.ACLK)", 
                                                         "tb_xip_qspi_axi_top.sv", 
                                                         122);
    vlSelfRef.tb_xip_qspi_axi_top__DOT__AXI_BREADY = 1U;
    while ((3U != (IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_axi_slave__DOT__state))) {
        co_await vlSelfRef.__VtrigSched_h694734a5__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_xip_qspi_axi_top.ACLK)", 
                                                             "tb_xip_qspi_axi_top.sv", 
                                                             124);
    }
    co_await vlSelfRef.__VtrigSched_h694734a5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_xip_qspi_axi_top.ACLK)", 
                                                         "tb_xip_qspi_axi_top.sv", 
                                                         125);
    vlSelfRef.tb_xip_qspi_axi_top__DOT__AXI_BREADY = 0U;
    vlSelfRef.__Vfork_3__sync.done("tb_xip_qspi_axi_top.sv", 
                                   263);
}

VL_INLINE_OPT VlCoroutine Vtb_xip_qspi_axi_top___024root___eval_initial__TOP__Vtiming__3____Vfork_3__0(Vtb_xip_qspi_axi_top___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_xip_qspi_axi_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_xip_qspi_axi_top___024root___eval_initial__TOP__Vtiming__3____Vfork_3__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while ((1U & (~ ((IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__XIP_ARVALID) 
                     & (0U == (IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_xip_slave__DOT__state)))))) {
        co_await vlSelfRef.__VtrigSched_h694734a5__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_xip_qspi_axi_top.ACLK)", 
                                                             "tb_xip_qspi_axi_top.sv", 
                                                             256);
    }
    co_await vlSelfRef.__VtrigSched_h694734a5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_xip_qspi_axi_top.ACLK)", 
                                                         "tb_xip_qspi_axi_top.sv", 
                                                         257);
    vlSelfRef.tb_xip_qspi_axi_top__DOT__XIP_ARVALID = 0U;
    vlSelfRef.tb_xip_qspi_axi_top__DOT__XIP_RREADY = 1U;
    while ((3U != (IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_xip_slave__DOT__state))) {
        co_await vlSelfRef.__VtrigSched_h694734a5__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_xip_qspi_axi_top.ACLK)", 
                                                             "tb_xip_qspi_axi_top.sv", 
                                                             259);
    }
    vlSelfRef.tb_xip_qspi_axi_top__DOT__unnamedblk1__DOT__unnamedblk3__DOT__xip_data 
        = vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_xip_slave__DOT__assemble_reg;
    vlSelfRef.tb_xip_qspi_axi_top__DOT__unnamedblk1__DOT__unnamedblk3__DOT__xip_resp 
        = ((IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_xip_slave__DOT__fetch_error)
            ? 2U : 0U);
    co_await vlSelfRef.__VtrigSched_h694734a5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_xip_qspi_axi_top.ACLK)", 
                                                         "tb_xip_qspi_axi_top.sv", 
                                                         261);
    vlSelfRef.tb_xip_qspi_axi_top__DOT__XIP_RREADY = 0U;
    vlSelfRef.__Vfork_3__sync.done("tb_xip_qspi_axi_top.sv", 
                                   255);
}

VL_INLINE_OPT VlCoroutine Vtb_xip_qspi_axi_top___024root___eval_initial__TOP__Vtiming__3____Vfork_2__1(Vtb_xip_qspi_axi_top___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_xip_qspi_axi_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_xip_qspi_axi_top___024root___eval_initial__TOP__Vtiming__3____Vfork_2__1\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while ((1U & (~ ((IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__XIP_ARVALID) 
                     & (0U == (IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_xip_slave__DOT__state)))))) {
        co_await vlSelfRef.__VtrigSched_h694734a5__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_xip_qspi_axi_top.ACLK)", 
                                                             "tb_xip_qspi_axi_top.sv", 
                                                             225);
    }
    co_await vlSelfRef.__VtrigSched_h694734a5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_xip_qspi_axi_top.ACLK)", 
                                                         "tb_xip_qspi_axi_top.sv", 
                                                         226);
    vlSelfRef.tb_xip_qspi_axi_top__DOT__XIP_ARVALID = 0U;
    vlSelfRef.tb_xip_qspi_axi_top__DOT__XIP_RREADY = 1U;
    while ((3U != (IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_xip_slave__DOT__state))) {
        co_await vlSelfRef.__VtrigSched_h694734a5__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_xip_qspi_axi_top.ACLK)", 
                                                             "tb_xip_qspi_axi_top.sv", 
                                                             228);
    }
    vlSelfRef.tb_xip_qspi_axi_top__DOT__unnamedblk1__DOT__unnamedblk2__DOT__xp_data 
        = vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_xip_slave__DOT__assemble_reg;
    vlSelfRef.tb_xip_qspi_axi_top__DOT__unnamedblk1__DOT__unnamedblk2__DOT__xp_resp 
        = ((IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_xip_slave__DOT__fetch_error)
            ? 2U : 0U);
    co_await vlSelfRef.__VtrigSched_h694734a5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_xip_qspi_axi_top.ACLK)", 
                                                         "tb_xip_qspi_axi_top.sv", 
                                                         230);
    vlSelfRef.tb_xip_qspi_axi_top__DOT__XIP_RREADY = 0U;
    vlSelfRef.__Vfork_2__sync.done("tb_xip_qspi_axi_top.sv", 
                                   224);
}

VL_INLINE_OPT VlCoroutine Vtb_xip_qspi_axi_top___024root___eval_initial__TOP__Vtiming__3____Vfork_2__0(Vtb_xip_qspi_axi_top___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_xip_qspi_axi_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_xip_qspi_axi_top___024root___eval_initial__TOP__Vtiming__3____Vfork_2__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while ((1U & (~ ((IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__AXI_ARVALID) 
                     & (0U == (IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_axi_slave__DOT__read_state)))))) {
        co_await vlSelfRef.__VtrigSched_h694734a5__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_xip_qspi_axi_top.ACLK)", 
                                                             "tb_xip_qspi_axi_top.sv", 
                                                             217);
    }
    co_await vlSelfRef.__VtrigSched_h694734a5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_xip_qspi_axi_top.ACLK)", 
                                                         "tb_xip_qspi_axi_top.sv", 
                                                         218);
    vlSelfRef.tb_xip_qspi_axi_top__DOT__AXI_ARVALID = 0U;
    vlSelfRef.tb_xip_qspi_axi_top__DOT__AXI_RREADY = 1U;
    while ((1U != (IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_axi_slave__DOT__read_state))) {
        co_await vlSelfRef.__VtrigSched_h694734a5__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_xip_qspi_axi_top.ACLK)", 
                                                             "tb_xip_qspi_axi_top.sv", 
                                                             220);
    }
    vlSelfRef.tb_xip_qspi_axi_top__DOT__unnamedblk1__DOT__unnamedblk2__DOT__ax_data 
        = ((0U == vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_axi_slave__DOT__ar_addr_latched)
            ? vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_axi_slave__DOT__reg_ctrl_cmd
            : ((4U == vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_axi_slave__DOT__ar_addr_latched)
                ? vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_axi_slave__DOT__reg_addr
                : ((8U == vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_axi_slave__DOT__ar_addr_latched)
                    ? vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_axi_slave__DOT__reg_num_bytes
                    : ((0xcU == vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_axi_slave__DOT__ar_addr_latched)
                        ? (((IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_axi_slave__DOT__error_latched) 
                            << 4U) | ((((IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_axi_slave__DOT__rx_ready_latched) 
                                        << 3U) | ((IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_axi_slave__DOT__tx_ready_latched) 
                                                  << 2U)) 
                                      | (((IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_axi_slave__DOT__done_latched) 
                                          << 1U) | 
                                         ((IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_arbiter__DOT__route_to_reg) 
                                          & (IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_cdc__DOT__busy_ff2)))))
                        : ((0x10U == vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_axi_slave__DOT__ar_addr_latched)
                            ? 0U : ((0x18U == vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_axi_slave__DOT__ar_addr_latched)
                                     ? vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_axi_slave__DOT__reg_xip_cfg
                                     : ((0x14U == vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_axi_slave__DOT__ar_addr_latched)
                                         ? (IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__int_m_rx_data)
                                         : 0U)))))));
    vlSelfRef.tb_xip_qspi_axi_top__DOT__unnamedblk1__DOT__unnamedblk2__DOT__ax_resp = 0U;
    co_await vlSelfRef.__VtrigSched_h694734a5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_xip_qspi_axi_top.ACLK)", 
                                                         "tb_xip_qspi_axi_top.sv", 
                                                         222);
    vlSelfRef.tb_xip_qspi_axi_top__DOT__AXI_RREADY = 0U;
    vlSelfRef.__Vfork_2__sync.done("tb_xip_qspi_axi_top.sv", 
                                   216);
}

VL_INLINE_OPT VlCoroutine Vtb_xip_qspi_axi_top___024root___eval_initial__TOP__Vtiming__3____Vfork_1__0(Vtb_xip_qspi_axi_top___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_xip_qspi_axi_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_xip_qspi_axi_top___024root___eval_initial__TOP__Vtiming__3____Vfork_1__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    co_await vlSelfRef.__VdlySched.delay(0x7a120ULL, 
                                         nullptr, "tb_xip_qspi_axi_top.sv", 
                                         184);
    VL_WRITEF_NX("GLOBAL TIMEOUT\n",0);
    VL_FINISH_MT("tb_xip_qspi_axi_top.sv", 184, "");
}

void Vtb_xip_qspi_axi_top___024root___act_comb__TOP__0(Vtb_xip_qspi_axi_top___024root* vlSelf);

void Vtb_xip_qspi_axi_top___024root___eval_act(Vtb_xip_qspi_axi_top___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_xip_qspi_axi_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_xip_qspi_axi_top___024root___eval_act\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0x31ULL & vlSelfRef.__VactTriggered.word(0U))) {
        Vtb_xip_qspi_axi_top___024root___act_comb__TOP__0(vlSelf);
        vlSelfRef.__Vm_traceActivity[3U] = 1U;
    }
}

VL_INLINE_OPT void Vtb_xip_qspi_axi_top___024root___act_comb__TOP__0(Vtb_xip_qspi_axi_top___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_xip_qspi_axi_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_xip_qspi_axi_top___024root___act_comb__TOP__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_axi_slave__DOT__b_hs 
        = ((IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__AXI_BREADY) 
           & (3U == (IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_axi_slave__DOT__state)));
    vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_axi_slave__DOT__ar_hs 
        = ((0U == (IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_axi_slave__DOT__read_state)) 
           & (IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__AXI_ARVALID));
    vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_axi_slave__DOT__r_hs 
        = ((IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__AXI_RREADY) 
           & (1U == (IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_axi_slave__DOT__read_state)));
    vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_axi_slave__DOT__aw_hs 
        = (((0U == (IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_axi_slave__DOT__state)) 
            | (2U == (IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_axi_slave__DOT__state))) 
           & (IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__AXI_AWVALID));
    vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_axi_slave__DOT__w_hs 
        = (((0U == (IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_axi_slave__DOT__state)) 
            | (1U == (IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_axi_slave__DOT__state))) 
           & (IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__AXI_WVALID));
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
    vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_axi_slave__DOT____VdfgRegularize_h3a287cbd_0_1 
        = ((IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_axi_slave__DOT__do_write) 
           & ((0xcU == vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_axi_slave__DOT__eff_addr) 
              & (IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_axi_slave__DOT__eff_strb)));
    vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_axi_slave__DOT____VdfgRegularize_h3a287cbd_0_0 
        = ((IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_axi_slave__DOT__do_write) 
           & (0U == vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_axi_slave__DOT__eff_addr));
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

void Vtb_xip_qspi_axi_top___024root___nba_sequent__TOP__0(Vtb_xip_qspi_axi_top___024root* vlSelf);
void Vtb_xip_qspi_axi_top___024root___nba_sequent__TOP__1(Vtb_xip_qspi_axi_top___024root* vlSelf);
void Vtb_xip_qspi_axi_top___024root___nba_sequent__TOP__2(Vtb_xip_qspi_axi_top___024root* vlSelf);
void Vtb_xip_qspi_axi_top___024root___nba_comb__TOP__0(Vtb_xip_qspi_axi_top___024root* vlSelf);
void Vtb_xip_qspi_axi_top___024root___nba_sequent__TOP__3(Vtb_xip_qspi_axi_top___024root* vlSelf);
void Vtb_xip_qspi_axi_top___024root___nba_comb__TOP__1(Vtb_xip_qspi_axi_top___024root* vlSelf);
void Vtb_xip_qspi_axi_top___024root___nba_comb__TOP__2(Vtb_xip_qspi_axi_top___024root* vlSelf);
void Vtb_xip_qspi_axi_top___024root___nba_sequent__TOP__4(Vtb_xip_qspi_axi_top___024root* vlSelf);

void Vtb_xip_qspi_axi_top___024root___eval_nba(Vtb_xip_qspi_axi_top___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_xip_qspi_axi_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_xip_qspi_axi_top___024root___eval_nba\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0xcULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtb_xip_qspi_axi_top___024root___nba_sequent__TOP__0(vlSelf);
        vlSelfRef.__Vm_traceActivity[4U] = 1U;
    }
    if ((3ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtb_xip_qspi_axi_top___024root___nba_sequent__TOP__1(vlSelf);
        vlSelfRef.__Vm_traceActivity[5U] = 1U;
    }
    if ((4ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtb_xip_qspi_axi_top___024root___nba_sequent__TOP__2(vlSelf);
        vlSelfRef.__Vm_traceActivity[6U] = 1U;
    }
    if ((0x33ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtb_xip_qspi_axi_top___024root___nba_comb__TOP__0(vlSelf);
        vlSelfRef.__Vm_traceActivity[7U] = 1U;
    }
    if ((0xcULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtb_xip_qspi_axi_top___024root___nba_sequent__TOP__3(vlSelf);
        vlSelfRef.__Vm_traceActivity[8U] = 1U;
    }
    if ((0x33ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtb_xip_qspi_axi_top___024root___nba_comb__TOP__1(vlSelf);
    }
    if ((0xcULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtb_xip_qspi_axi_top___024root___nba_comb__TOP__2(vlSelf);
        vlSelfRef.__Vm_traceActivity[9U] = 1U;
    }
    if ((3ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtb_xip_qspi_axi_top___024root___nba_sequent__TOP__4(vlSelf);
    }
}

VL_INLINE_OPT void Vtb_xip_qspi_axi_top___024root___nba_sequent__TOP__0(Vtb_xip_qspi_axi_top___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_xip_qspi_axi_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_xip_qspi_axi_top___024root___nba_sequent__TOP__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __Vfunc_tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_qspi_engine__DOT__lines_per_clock__29__Vfuncout;
    __Vfunc_tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_qspi_engine__DOT__lines_per_clock__29__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_qspi_engine__DOT__lines_per_clock__29__lw;
    __Vfunc_tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_qspi_engine__DOT__lines_per_clock__29__lw = 0;
    IData/*31:0*/ __Vfunc_tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_qspi_engine__DOT__lines_per_clock__31__Vfuncout;
    __Vfunc_tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_qspi_engine__DOT__lines_per_clock__31__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_qspi_engine__DOT__lines_per_clock__31__lw;
    __Vfunc_tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_qspi_engine__DOT__lines_per_clock__31__lw = 0;
    QData/*39:0*/ __Vdly__tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_qspi_engine__DOT__out_shift;
    __Vdly__tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_qspi_engine__DOT__out_shift = 0;
    CData/*7:0*/ __Vdly__tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_qspi_engine__DOT__tx_shift_byte;
    __Vdly__tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_qspi_engine__DOT__tx_shift_byte = 0;
    // Body
    vlSelfRef.__Vdly__tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_cdc__DOT__u_rxvalid_sync__DOT__toggle_src 
        = vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_cdc__DOT__u_rxvalid_sync__DOT__toggle_src;
    vlSelfRef.__Vdly__tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_cdc__DOT__u_done_sync__DOT__toggle_src 
        = vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_cdc__DOT__u_done_sync__DOT__toggle_src;
    vlSelfRef.__Vdly__tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_cdc__DOT__u_txreq_sync__DOT__toggle_src 
        = vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_cdc__DOT__u_txreq_sync__DOT__toggle_src;
    __Vdly__tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_qspi_engine__DOT__out_shift 
        = vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_qspi_engine__DOT__out_shift;
    vlSelfRef.__Vdly__tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_qspi_engine__DOT__in_byte 
        = vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_qspi_engine__DOT__in_byte;
    vlSelfRef.__Vdly__tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_qspi_engine__DOT__bit_cnt 
        = vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_qspi_engine__DOT__bit_cnt;
    __Vdly__tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_qspi_engine__DOT__tx_shift_byte 
        = vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_qspi_engine__DOT__tx_shift_byte;
    vlSelfRef.__Vdly__tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_qspi_engine__DOT__phase 
        = vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_qspi_engine__DOT__phase;
    vlSelfRef.__Vdly__tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_qspi_engine__DOT__busy_r 
        = vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_qspi_engine__DOT__busy_r;
    if (vlSelfRef.tb_xip_qspi_axi_top__DOT__qclk_rst) {
        vlSelfRef.__Vdly__tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_cdc__DOT__u_rxvalid_sync__DOT__toggle_src = 0U;
        vlSelfRef.__Vdly__tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_cdc__DOT__u_done_sync__DOT__toggle_src = 0U;
        vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_qspi_engine__DOT__timeout_cnt = 0U;
        vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_qspi_engine__DOT__byte_bit_cnt = 0U;
        vlSelfRef.__Vdly__tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_cdc__DOT__u_txreq_sync__DOT__toggle_src = 0U;
    } else {
        if (vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__int_q_rx_valid) {
            vlSelfRef.__Vdly__tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_cdc__DOT__u_rxvalid_sync__DOT__toggle_src 
                = (1U & (~ (IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_cdc__DOT__u_rxvalid_sync__DOT__toggle_src)));
        }
        if (((IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_qspi_engine__DOT____VdfgRegularize_h909204f5_0_0) 
             & (IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_qspi_engine__DOT____VdfgRegularize_h909204f5_0_1))) {
            vlSelfRef.__Vdly__tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_cdc__DOT__u_done_sync__DOT__toggle_src 
                = (1U & (~ (IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_cdc__DOT__u_done_sync__DOT__toggle_src)));
        }
        vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_qspi_engine__DOT__timeout_cnt 
            = ((IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_qspi_engine__DOT__busy_r)
                ? ((IData)(1U) + vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_qspi_engine__DOT__timeout_cnt)
                : 0U);
        vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_qspi_engine__DOT__byte_bit_cnt 
            = (((IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_qspi_engine__DOT__busy_r) 
                & (3U == (IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_qspi_engine__DOT__phase)))
                ? (((IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_qspi_engine__DOT__byte_bit_cnt) 
                    == (0xfU & ((IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_qspi_engine__DOT__clocks_per_byte) 
                                - (IData)(1U)))) ? 0U
                    : (0xfU & ((IData)(1U) + (IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_qspi_engine__DOT__byte_bit_cnt))))
                : 0U);
        if (((IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_qspi_engine__DOT__byte_boundary) 
             & (vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_qspi_engine__DOT__ctrl 
                >> 0x16U))) {
            vlSelfRef.__Vdly__tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_cdc__DOT__u_txreq_sync__DOT__toggle_src 
                = (1U & (~ (IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_cdc__DOT__u_txreq_sync__DOT__toggle_src)));
        }
    }
    if (vlSelfRef.tb_xip_qspi_axi_top__DOT__qclk_rst) {
        __Vdly__tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_qspi_engine__DOT__out_shift = 0ULL;
    } else if (((~ (IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_qspi_engine__DOT__busy_r)) 
                & (IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__int_q_start))) {
        __Vdly__tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_qspi_engine__DOT__out_shift 
            = ((0x1000U & vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__int_m_ctrl_cmd)
                ? (((QData)((IData)((0xffU & vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__int_m_ctrl_cmd))) 
                    << 0x20U) | (QData)((IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__int_m_addr)))
                : ((QData)((IData)(((vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__int_m_ctrl_cmd 
                                     << 0x18U) | (0xffffffU 
                                                  & vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__int_m_addr)))) 
                   << 8U));
    } else if (((IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_qspi_engine__DOT__busy_r) 
                & (0U == (IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_qspi_engine__DOT__phase)))) {
        __Vdly__tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_qspi_engine__DOT__out_shift 
            = (0xffffffffffULL & VL_SHIFTL_QQI(40,40,32, vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_qspi_engine__DOT__out_shift, 1U));
    } else if (((IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_qspi_engine__DOT__busy_r) 
                & (1U == (IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_qspi_engine__DOT__phase)))) {
        __Vdly__tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_qspi_engine__DOT__out_shift 
            = (0xffffffffffULL & VL_SHIFTL_QQI(40,40,32, vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_qspi_engine__DOT__out_shift, 
                                               ([&]() {
                        __Vfunc_tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_qspi_engine__DOT__lines_per_clock__29__lw 
                            = (3U & (vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_qspi_engine__DOT__ctrl 
                                     >> 8U));
                        __Vfunc_tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_qspi_engine__DOT__lines_per_clock__29__Vfuncout 
                            = ((0U == (IData)(__Vfunc_tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_qspi_engine__DOT__lines_per_clock__29__lw))
                                ? 1U : ((1U == (IData)(__Vfunc_tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_qspi_engine__DOT__lines_per_clock__29__lw))
                                         ? 2U : ((2U 
                                                  == (IData)(__Vfunc_tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_qspi_engine__DOT__lines_per_clock__29__lw))
                                                  ? 4U
                                                  : 1U)));
                    }(), __Vfunc_tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_qspi_engine__DOT__lines_per_clock__29__Vfuncout)));
    }
    if (vlSelfRef.tb_xip_qspi_axi_top__DOT__qclk_rst) {
        __Vdly__tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_qspi_engine__DOT__tx_shift_byte = 0U;
        vlSelfRef.__Vdly__tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_qspi_engine__DOT__in_byte = 0U;
    } else if (((vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_qspi_engine__DOT__ctrl 
                 >> 0x16U) & (((IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_qspi_engine__DOT__busy_r) 
                               & (((1U == (IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_qspi_engine__DOT__phase)) 
                                   & ((IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_qspi_engine__DOT____VdfgRegularize_h909204f5_0_1) 
                                      & (0U == (0x1fe000U 
                                                & vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_qspi_engine__DOT__ctrl)))) 
                                  | ((2U == (IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_qspi_engine__DOT__phase)) 
                                     & (IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_qspi_engine__DOT____VdfgRegularize_h909204f5_0_1)))) 
                              | (IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_qspi_engine__DOT__byte_boundary)))) {
        __Vdly__tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_qspi_engine__DOT__tx_shift_byte 
            = vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__int_q_tx_data;
    } else if (((IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_qspi_engine__DOT__busy_r) 
                & (3U == (IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_qspi_engine__DOT__phase)))) {
        if ((0x400000U & vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_qspi_engine__DOT__ctrl)) {
            __Vdly__tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_qspi_engine__DOT__tx_shift_byte 
                = (0xffU & VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_qspi_engine__DOT__tx_shift_byte), 
                                         ([&]() {
                            __Vfunc_tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_qspi_engine__DOT__lines_per_clock__31__lw 
                                = (3U & (vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_qspi_engine__DOT__ctrl 
                                         >> 0xaU));
                            __Vfunc_tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_qspi_engine__DOT__lines_per_clock__31__Vfuncout 
                                = ((0U == (IData)(__Vfunc_tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_qspi_engine__DOT__lines_per_clock__31__lw))
                                    ? 1U : ((1U == (IData)(__Vfunc_tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_qspi_engine__DOT__lines_per_clock__31__lw))
                                             ? 2U : 
                                            ((2U == (IData)(__Vfunc_tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_qspi_engine__DOT__lines_per_clock__31__lw))
                                              ? 4U : 1U)));
                        }(), __Vfunc_tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_qspi_engine__DOT__lines_per_clock__31__Vfuncout)));
        } else {
            vlSelfRef.__Vdly__tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_qspi_engine__DOT__in_byte 
                = (0xffU & ((0U == (3U & (vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_qspi_engine__DOT__ctrl 
                                          >> 0xaU)))
                             ? (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_qspi_engine__DOT__in_byte), 1U) 
                                | (IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__dut_io0_in))
                             : ((1U == (3U & (vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_qspi_engine__DOT__ctrl 
                                              >> 0xaU)))
                                 ? (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_qspi_engine__DOT__in_byte), 2U) 
                                    | (((IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__dut_io1_in) 
                                        << 1U) | (IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__dut_io0_in)))
                                 : ((2U == (3U & (vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_qspi_engine__DOT__ctrl 
                                                  >> 0xaU)))
                                     ? (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_qspi_engine__DOT__in_byte), 4U) 
                                        | (((IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__dut_io3_in) 
                                            << 3U) 
                                           | (((IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__dut_io2_in) 
                                               << 2U) 
                                              | (((IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__dut_io1_in) 
                                                  << 1U) 
                                                 | (IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__dut_io0_in)))))
                                     : (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_qspi_engine__DOT__in_byte), 1U) 
                                        | (IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__dut_io0_in))))));
        }
    }
    if (vlSelfRef.tb_xip_qspi_axi_top__DOT__qclk_rst) {
        vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_qspi_engine__DOT__addr_lat = 0U;
        vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_qspi_engine__DOT__num_bytes_lat = 0U;
        vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__int_q_tx_data = 0U;
    } else {
        if (((~ (IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_qspi_engine__DOT__busy_r)) 
             & (IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__int_q_start))) {
            vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_qspi_engine__DOT__addr_lat 
                = vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__int_m_addr;
            vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_qspi_engine__DOT__num_bytes_lat 
                = vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__int_m_num_bytes;
        }
        if (((IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_cdc__DOT__u_tx_ready_sync__DOT__sync_ff2) 
             ^ (IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_cdc__DOT__u_tx_ready_sync__DOT__sync_ff3))) {
            vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__int_q_tx_data 
                = vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_cdc__DOT__tx_data_hold;
        }
    }
    vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_qspi_engine__DOT__byte_boundary_d1 
        = ((~ (IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__qclk_rst)) 
           & (IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_qspi_engine__DOT__byte_boundary));
    vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_cdc__DOT__u_start_sync__DOT__sync_ff3 
        = ((1U & (~ (IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__qclk_rst))) 
           && (IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_cdc__DOT__u_start_sync__DOT__sync_ff2));
    vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_qspi_engine__DOT__out_shift 
        = __Vdly__tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_qspi_engine__DOT__out_shift;
    vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_qspi_engine__DOT__tx_shift_byte 
        = __Vdly__tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_qspi_engine__DOT__tx_shift_byte;
    vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_cdc__DOT__u_start_sync__DOT__sync_ff2 
        = ((1U & (~ (IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__qclk_rst))) 
           && (IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_cdc__DOT__u_start_sync__DOT__sync_ff1));
    vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_cdc__DOT__u_tx_ready_sync__DOT__sync_ff3 
        = ((1U & (~ (IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__qclk_rst))) 
           && (IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_cdc__DOT__u_tx_ready_sync__DOT__sync_ff2));
    vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_cdc__DOT__u_start_sync__DOT__sync_ff1 
        = ((1U & (~ (IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__qclk_rst))) 
           && (IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_cdc__DOT__u_start_sync__DOT__toggle_src));
    vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_cdc__DOT__u_tx_ready_sync__DOT__sync_ff2 
        = ((1U & (~ (IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__qclk_rst))) 
           && (IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_cdc__DOT__u_tx_ready_sync__DOT__sync_ff1));
    vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_cdc__DOT__u_tx_ready_sync__DOT__sync_ff1 
        = ((1U & (~ (IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__qclk_rst))) 
           && (IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_cdc__DOT__u_tx_ready_sync__DOT__toggle_src));
}

extern const VlUnpacked<CData/*0:0*/, 32> Vtb_xip_qspi_axi_top__ConstPool__TABLE_h016400a8_0;
extern const VlUnpacked<CData/*1:0*/, 32> Vtb_xip_qspi_axi_top__ConstPool__TABLE_h1131ab31_0;
extern const VlUnpacked<CData/*0:0*/, 64> Vtb_xip_qspi_axi_top__ConstPool__TABLE_h0ee214af_0;
extern const VlUnpacked<CData/*1:0*/, 64> Vtb_xip_qspi_axi_top__ConstPool__TABLE_h8701a22a_0;

VL_INLINE_OPT void Vtb_xip_qspi_axi_top___024root___nba_sequent__TOP__1(Vtb_xip_qspi_axi_top___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_xip_qspi_axi_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_xip_qspi_axi_top___024root___nba_sequent__TOP__1\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*5:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    CData/*4:0*/ __Vtableidx2;
    __Vtableidx2 = 0;
    CData/*2:0*/ __Vdly__tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_xip_slave__DOT__state;
    __Vdly__tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_xip_slave__DOT__state = 0;
    CData/*0:0*/ __Vdly__tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_arbiter__DOT__busy_seen;
    __Vdly__tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_arbiter__DOT__busy_seen = 0;
    CData/*3:0*/ __Vdly__tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_arbiter__DOT__drain_cnt;
    __Vdly__tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_arbiter__DOT__drain_cnt = 0;
    CData/*1:0*/ __Vdly__tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_arbiter__DOT__grant;
    __Vdly__tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_arbiter__DOT__grant = 0;
    // Body
    vlSelfRef.__Vdly__tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_cdc__DOT__u_abort_sync__DOT__toggle_src 
        = vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_cdc__DOT__u_abort_sync__DOT__toggle_src;
    __Vdly__tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_xip_slave__DOT__state 
        = vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_xip_slave__DOT__state;
    __Vdly__tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_arbiter__DOT__busy_seen 
        = vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_arbiter__DOT__busy_seen;
    __Vdly__tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_arbiter__DOT__drain_cnt 
        = vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_arbiter__DOT__drain_cnt;
    __Vdly__tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_arbiter__DOT__grant 
        = vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_arbiter__DOT__grant;
    if (vlSelfRef.tb_xip_qspi_axi_top__DOT__ARESETn) {
        if (vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__int_m_start) {
            vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_cdc__DOT__u_start_sync__DOT__toggle_src 
                = (1U & (~ (IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_cdc__DOT__u_start_sync__DOT__toggle_src)));
        }
        if (vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_cdc__DOT__tx_data_ready) {
            vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_cdc__DOT__u_tx_ready_sync__DOT__toggle_src 
                = (1U & (~ (IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_cdc__DOT__u_tx_ready_sync__DOT__toggle_src)));
        }
        if (((IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_axi_slave__DOT____VdfgRegularize_h3a287cbd_0_0) 
             & (vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_axi_slave__DOT__eff_data 
                >> 0x17U))) {
            vlSelfRef.__Vdly__tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_cdc__DOT__u_abort_sync__DOT__toggle_src 
                = (1U & (~ (IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_cdc__DOT__u_abort_sync__DOT__toggle_src)));
        }
        if ((0U == (IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_arbiter__DOT__grant))) {
            __Vdly__tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_arbiter__DOT__busy_seen = 0U;
            __Vdly__tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_arbiter__DOT__drain_cnt = 0U;
            if (vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__int_a_start) {
                __Vdly__tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_arbiter__DOT__grant = 1U;
            } else if (vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__int_x_start) {
                __Vdly__tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_arbiter__DOT__grant = 2U;
            }
        } else if (((1U == (IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_arbiter__DOT__grant)) 
                    || (2U == (IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_arbiter__DOT__grant)))) {
            if (vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_cdc__DOT__busy_ff2) {
                __Vdly__tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_arbiter__DOT__busy_seen = 1U;
                __Vdly__tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_arbiter__DOT__drain_cnt = 0U;
            } else if (vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_arbiter__DOT__busy_seen) {
                if ((3U == (IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_arbiter__DOT__drain_cnt))) {
                    __Vdly__tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_arbiter__DOT__grant = 0U;
                    __Vdly__tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_arbiter__DOT__busy_seen = 0U;
                    __Vdly__tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_arbiter__DOT__drain_cnt = 0U;
                } else {
                    __Vdly__tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_arbiter__DOT__drain_cnt 
                        = (0xfU & ((IData)(1U) + (IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_arbiter__DOT__drain_cnt)));
                }
            }
        } else {
            __Vdly__tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_arbiter__DOT__grant = 0U;
            __Vdly__tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_arbiter__DOT__busy_seen = 0U;
            __Vdly__tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_arbiter__DOT__drain_cnt = 0U;
        }
        if (((IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_arbiter__DOT__route_to_reg) 
             & (IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__int_m_rx_valid))) {
            vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_axi_slave__DOT__rx_ready_latched = 1U;
        } else if (((IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_axi_slave__DOT__r_hs) 
                    & (0x14U == vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_axi_slave__DOT__ar_addr_latched))) {
            vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_axi_slave__DOT__rx_ready_latched = 0U;
        }
        if (vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_axi_slave__DOT__w_hs) {
            vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_axi_slave__DOT__w_strb_latched 
                = vlSelfRef.tb_xip_qspi_axi_top__DOT__AXI_WSTRB;
            vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_axi_slave__DOT__w_data_latched 
                = vlSelfRef.tb_xip_qspi_axi_top__DOT__AXI_WDATA;
        }
        if (((IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_arbiter__DOT__route_to_reg) 
             & (IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__int_m_tx_req))) {
            vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_axi_slave__DOT__tx_ready_latched = 1U;
        } else if (((IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_axi_slave__DOT__do_write) 
                    & (0x10U == vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_axi_slave__DOT__eff_addr))) {
            vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_axi_slave__DOT__tx_ready_latched = 0U;
        }
        if (((IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__int_a_error) 
             & (~ (IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_axi_slave__DOT__qspi_error_d1)))) {
            vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_axi_slave__DOT__error_latched = 1U;
        } else if (vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__int_a_start) {
            vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_axi_slave__DOT__error_latched = 0U;
        } else if (((IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_axi_slave__DOT____VdfgRegularize_h3a287cbd_0_1) 
                    & (vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_axi_slave__DOT__eff_data 
                       >> 4U))) {
            vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_axi_slave__DOT__error_latched = 0U;
        }
        if (vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_axi_slave__DOT__aw_hs) {
            vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_axi_slave__DOT__aw_addr_latched 
                = vlSelfRef.tb_xip_qspi_axi_top__DOT__AXI_AWADDR;
        }
        if (((IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_arbiter__DOT__route_to_reg) 
             & ((IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_cdc__DOT__u_done_sync__DOT__sync_ff2) 
                ^ (IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_cdc__DOT__u_done_sync__DOT__sync_ff3)))) {
            vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_axi_slave__DOT__done_latched = 1U;
        } else if (vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__int_a_start) {
            vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_axi_slave__DOT__done_latched = 0U;
        } else if (((IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_axi_slave__DOT____VdfgRegularize_h3a287cbd_0_1) 
                    & (vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_axi_slave__DOT__eff_data 
                       >> 1U))) {
            vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_axi_slave__DOT__done_latched = 0U;
        }
        vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_cdc__DOT__tx_data_ready = 0U;
        if (((IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__int_m_start) 
             | (IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__int_m_tx_req))) {
            vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_cdc__DOT__tx_data_hold 
                = vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__int_m_tx_data;
            vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_cdc__DOT__tx_data_ready = 1U;
        }
        vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__int_x_start = 0U;
        if ((4U & (IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_xip_slave__DOT__state))) {
            __Vdly__tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_xip_slave__DOT__state = 0U;
        } else if ((2U & (IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_xip_slave__DOT__state))) {
            if ((1U & (IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_xip_slave__DOT__state))) {
                if (((IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__XIP_RVALID) 
                     & (IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__XIP_RREADY))) {
                    __Vdly__tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_xip_slave__DOT__state = 4U;
                }
            } else {
                if (((IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_xip_slave__DOT__engine_busy_seen) 
                     & ((IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_arbiter__DOT__route_to_xip) 
                        & (IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_cdc__DOT__error_ff2)))) {
                    vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_xip_slave__DOT__fetch_error = 1U;
                    __Vdly__tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_xip_slave__DOT__state = 3U;
                } else if (vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_xip_slave__DOT__x_rx_valid_d1) {
                    if ((0U == (IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_xip_slave__DOT__byte_count))) {
                        vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_xip_slave__DOT__assemble_reg 
                            = ((0xffffff00U & vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_xip_slave__DOT__assemble_reg) 
                               | (IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__int_m_rx_data));
                    } else if ((1U == (IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_xip_slave__DOT__byte_count))) {
                        vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_xip_slave__DOT__assemble_reg 
                            = ((0xffff00ffU & vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_xip_slave__DOT__assemble_reg) 
                               | ((IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__int_m_rx_data) 
                                  << 8U));
                    } else if ((2U == (IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_xip_slave__DOT__byte_count))) {
                        vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_xip_slave__DOT__assemble_reg 
                            = ((0xff00ffffU & vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_xip_slave__DOT__assemble_reg) 
                               | ((IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__int_m_rx_data) 
                                  << 0x10U));
                    } else if ((3U == (IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_xip_slave__DOT__byte_count))) {
                        vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_xip_slave__DOT__assemble_reg 
                            = ((0xffffffU & vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_xip_slave__DOT__assemble_reg) 
                               | ((IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__int_m_rx_data) 
                                  << 0x18U));
                    }
                    if ((3U == (IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_xip_slave__DOT__byte_count))) {
                        __Vdly__tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_xip_slave__DOT__state = 3U;
                    } else {
                        vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_xip_slave__DOT__byte_count 
                            = (7U & ((IData)(1U) + (IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_xip_slave__DOT__byte_count)));
                    }
                } else if (((IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_xip_slave__DOT__engine_busy_seen) 
                            & (~ (IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__int_x_busy)))) {
                    if ((5U == (IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_xip_slave__DOT__drain_cnt))) {
                        vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_xip_slave__DOT__fetch_error = 1U;
                        __Vdly__tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_xip_slave__DOT__state = 3U;
                    } else {
                        vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_xip_slave__DOT__drain_cnt 
                            = (0xfU & ((IData)(1U) 
                                       + (IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_xip_slave__DOT__drain_cnt)));
                    }
                }
                if (vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__int_x_busy) {
                    vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_xip_slave__DOT__engine_busy_seen = 1U;
                }
            }
        } else if ((1U & (IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_xip_slave__DOT__state))) {
            vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__int_x_start = 1U;
            __Vdly__tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_xip_slave__DOT__state = 2U;
        } else if (((IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__XIP_ARVALID) 
                    & (IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__XIP_ARREADY))) {
            vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_xip_slave__DOT__byte_count = 0U;
            vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_xip_slave__DOT__drain_cnt = 0U;
            vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_xip_slave__DOT__ar_addr_latched 
                = vlSelfRef.tb_xip_qspi_axi_top__DOT__XIP_ARADDR;
            vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_xip_slave__DOT__assemble_reg = 0U;
            vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_xip_slave__DOT__engine_busy_seen = 0U;
            if (((vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_axi_slave__DOT__reg_xip_cfg 
                  >> 0x1fU) & ((0x1000000U <= vlSelfRef.tb_xip_qspi_axi_top__DOT__XIP_ARADDR) 
                               & (0x2000000U > vlSelfRef.tb_xip_qspi_axi_top__DOT__XIP_ARADDR)))) {
                __Vdly__tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_xip_slave__DOT__state = 1U;
                vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_xip_slave__DOT__fetch_error = 0U;
            } else {
                __Vdly__tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_xip_slave__DOT__state = 3U;
                vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_xip_slave__DOT__fetch_error = 1U;
            }
        }
        if (vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_axi_slave__DOT__do_write) {
            if ((0U != vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_axi_slave__DOT__eff_addr)) {
                if ((4U != vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_axi_slave__DOT__eff_addr)) {
                    if ((8U == vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_axi_slave__DOT__eff_addr)) {
                        vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_axi_slave__DOT__unnamedblk3__DOT__i = 4U;
                        if ((1U & (IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_axi_slave__DOT__eff_strb))) {
                            vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_axi_slave__DOT__reg_num_bytes 
                                = ((0xffffff00U & vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_axi_slave__DOT__reg_num_bytes) 
                                   | (0xffU & vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_axi_slave__DOT__eff_data));
                        }
                        if ((2U & (IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_axi_slave__DOT__eff_strb))) {
                            vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_axi_slave__DOT__reg_num_bytes 
                                = ((0xffff00ffU & vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_axi_slave__DOT__reg_num_bytes) 
                                   | (0xff00U & vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_axi_slave__DOT__eff_data));
                        }
                        if ((4U & (IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_axi_slave__DOT__eff_strb))) {
                            vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_axi_slave__DOT__reg_num_bytes 
                                = ((0xff00ffffU & vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_axi_slave__DOT__reg_num_bytes) 
                                   | (0xff0000U & vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_axi_slave__DOT__eff_data));
                        }
                        if ((8U & (IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_axi_slave__DOT__eff_strb))) {
                            vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_axi_slave__DOT__reg_num_bytes 
                                = ((0xffffffU & vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_axi_slave__DOT__reg_num_bytes) 
                                   | (0xff000000U & vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_axi_slave__DOT__eff_data));
                        }
                    }
                    if ((8U != vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_axi_slave__DOT__eff_addr)) {
                        if ((0x10U == vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_axi_slave__DOT__eff_addr)) {
                            vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_axi_slave__DOT__unnamedblk4__DOT__i = 4U;
                            if ((1U & (IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_axi_slave__DOT__eff_strb))) {
                                vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_axi_slave__DOT__reg_tx_data 
                                    = ((0xffffff00U 
                                        & vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_axi_slave__DOT__reg_tx_data) 
                                       | (0xffU & vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_axi_slave__DOT__eff_data));
                            }
                            if ((2U & (IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_axi_slave__DOT__eff_strb))) {
                                vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_axi_slave__DOT__reg_tx_data 
                                    = ((0xffff00ffU 
                                        & vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_axi_slave__DOT__reg_tx_data) 
                                       | (0xff00U & vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_axi_slave__DOT__eff_data));
                            }
                            if ((4U & (IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_axi_slave__DOT__eff_strb))) {
                                vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_axi_slave__DOT__reg_tx_data 
                                    = ((0xff00ffffU 
                                        & vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_axi_slave__DOT__reg_tx_data) 
                                       | (0xff0000U 
                                          & vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_axi_slave__DOT__eff_data));
                            }
                            if ((8U & (IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_axi_slave__DOT__eff_strb))) {
                                vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_axi_slave__DOT__reg_tx_data 
                                    = ((0xffffffU & vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_axi_slave__DOT__reg_tx_data) 
                                       | (0xff000000U 
                                          & vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_axi_slave__DOT__eff_data));
                            }
                        }
                        if ((0x10U != vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_axi_slave__DOT__eff_addr)) {
                            if ((0x18U == vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_axi_slave__DOT__eff_addr)) {
                                vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_axi_slave__DOT__unnamedblk5__DOT__i = 4U;
                                if ((1U & (IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_axi_slave__DOT__eff_strb))) {
                                    vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_axi_slave__DOT__reg_xip_cfg 
                                        = ((0xffffff00U 
                                            & vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_axi_slave__DOT__reg_xip_cfg) 
                                           | (0xffU 
                                              & vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_axi_slave__DOT__eff_data));
                                }
                                if ((2U & (IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_axi_slave__DOT__eff_strb))) {
                                    vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_axi_slave__DOT__reg_xip_cfg 
                                        = ((0xffff00ffU 
                                            & vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_axi_slave__DOT__reg_xip_cfg) 
                                           | (0xff00U 
                                              & vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_axi_slave__DOT__eff_data));
                                }
                                if ((4U & (IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_axi_slave__DOT__eff_strb))) {
                                    vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_axi_slave__DOT__reg_xip_cfg 
                                        = ((0xff00ffffU 
                                            & vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_axi_slave__DOT__reg_xip_cfg) 
                                           | (0xff0000U 
                                              & vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_axi_slave__DOT__eff_data));
                                }
                                if ((8U & (IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_axi_slave__DOT__eff_strb))) {
                                    vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_axi_slave__DOT__reg_xip_cfg 
                                        = ((0xffffffU 
                                            & vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_axi_slave__DOT__reg_xip_cfg) 
                                           | (0xff000000U 
                                              & vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_axi_slave__DOT__eff_data));
                                }
                            }
                        }
                    }
                }
                if ((4U == vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_axi_slave__DOT__eff_addr)) {
                    vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_axi_slave__DOT__unnamedblk2__DOT__i = 4U;
                    if ((1U & (IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_axi_slave__DOT__eff_strb))) {
                        vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_axi_slave__DOT__reg_addr 
                            = ((0xffffff00U & vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_axi_slave__DOT__reg_addr) 
                               | (0xffU & vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_axi_slave__DOT__eff_data));
                    }
                    if ((2U & (IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_axi_slave__DOT__eff_strb))) {
                        vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_axi_slave__DOT__reg_addr 
                            = ((0xffff00ffU & vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_axi_slave__DOT__reg_addr) 
                               | (0xff00U & vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_axi_slave__DOT__eff_data));
                    }
                    if ((4U & (IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_axi_slave__DOT__eff_strb))) {
                        vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_axi_slave__DOT__reg_addr 
                            = ((0xff00ffffU & vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_axi_slave__DOT__reg_addr) 
                               | (0xff0000U & vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_axi_slave__DOT__eff_data));
                    }
                    if ((8U & (IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_axi_slave__DOT__eff_strb))) {
                        vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_axi_slave__DOT__reg_addr 
                            = ((0xffffffU & vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_axi_slave__DOT__reg_addr) 
                               | (0xff000000U & vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_axi_slave__DOT__eff_data));
                    }
                }
            }
            if ((0U == vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_axi_slave__DOT__eff_addr)) {
                vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_axi_slave__DOT__unnamedblk1__DOT__i = 4U;
                if ((1U & (IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_axi_slave__DOT__eff_strb))) {
                    vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_axi_slave__DOT__reg_ctrl_cmd 
                        = ((0xffffff00U & vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_axi_slave__DOT__reg_ctrl_cmd) 
                           | (0xffU & vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_axi_slave__DOT__eff_data));
                }
                if ((2U & (IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_axi_slave__DOT__eff_strb))) {
                    vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_axi_slave__DOT__reg_ctrl_cmd 
                        = ((0xffff00ffU & vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_axi_slave__DOT__reg_ctrl_cmd) 
                           | (0xff00U & vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_axi_slave__DOT__eff_data));
                }
                if ((4U & (IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_axi_slave__DOT__eff_strb))) {
                    vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_axi_slave__DOT__reg_ctrl_cmd 
                        = ((0xff00ffffU & vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_axi_slave__DOT__reg_ctrl_cmd) 
                           | (0xff0000U & vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_axi_slave__DOT__eff_data));
                }
                if ((8U & (IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_axi_slave__DOT__eff_strb))) {
                    vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_axi_slave__DOT__reg_ctrl_cmd 
                        = ((0xffffffU & vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_axi_slave__DOT__reg_ctrl_cmd) 
                           | (0xff000000U & vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_axi_slave__DOT__eff_data));
                }
            }
        }
        if (vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_axi_slave__DOT__ar_hs) {
            vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_axi_slave__DOT__ar_addr_latched 
                = vlSelfRef.tb_xip_qspi_axi_top__DOT__AXI_ARADDR;
        }
        if (vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__int_m_rx_valid) {
            vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__int_m_rx_data 
                = vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_cdc__DOT__rx_data_hold;
        }
    } else {
        vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_cdc__DOT__u_start_sync__DOT__toggle_src = 0U;
        vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_cdc__DOT__u_tx_ready_sync__DOT__toggle_src = 0U;
        vlSelfRef.__Vdly__tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_cdc__DOT__u_abort_sync__DOT__toggle_src = 0U;
        __Vdly__tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_arbiter__DOT__grant = 0U;
        __Vdly__tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_arbiter__DOT__busy_seen = 0U;
        __Vdly__tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_arbiter__DOT__drain_cnt = 0U;
        vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_axi_slave__DOT__rx_ready_latched = 0U;
        vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_axi_slave__DOT__w_strb_latched = 0U;
        vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_axi_slave__DOT__tx_ready_latched = 0U;
        vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_axi_slave__DOT__w_data_latched = 0U;
        vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_axi_slave__DOT__error_latched = 0U;
        vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_axi_slave__DOT__aw_addr_latched = 0U;
        vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_axi_slave__DOT__reg_tx_data = 0U;
        vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_axi_slave__DOT__reg_num_bytes = 0U;
        vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_axi_slave__DOT__reg_ctrl_cmd = 0U;
        vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_axi_slave__DOT__reg_addr = 0U;
        vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_axi_slave__DOT__done_latched = 0U;
        vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_cdc__DOT__tx_data_hold = 0U;
        vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_cdc__DOT__tx_data_ready = 0U;
        vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_xip_slave__DOT__byte_count = 0U;
        vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_xip_slave__DOT__drain_cnt = 0U;
        __Vdly__tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_xip_slave__DOT__state = 0U;
        vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_xip_slave__DOT__ar_addr_latched = 0U;
        vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_xip_slave__DOT__assemble_reg = 0U;
        vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_xip_slave__DOT__fetch_error = 0U;
        vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__int_x_start = 0U;
        vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_xip_slave__DOT__engine_busy_seen = 0U;
        vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_axi_slave__DOT__ar_addr_latched = 0U;
        vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__int_m_rx_data = 0U;
        vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_axi_slave__DOT__reg_xip_cfg = 0U;
    }
    __Vtableidx2 = ((((IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_axi_slave__DOT__r_hs) 
                      << 4U) | ((IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_axi_slave__DOT__ar_hs) 
                                << 3U)) | (((IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_axi_slave__DOT__read_state) 
                                            << 1U) 
                                           | (IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__ARESETn)));
    if (Vtb_xip_qspi_axi_top__ConstPool__TABLE_h016400a8_0
        [__Vtableidx2]) {
        vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_axi_slave__DOT__read_state 
            = Vtb_xip_qspi_axi_top__ConstPool__TABLE_h1131ab31_0
            [__Vtableidx2];
    }
    __Vtableidx1 = ((((IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_axi_slave__DOT__w_hs) 
                      << 5U) | (((IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_axi_slave__DOT__aw_hs) 
                                 << 4U) | ((IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_axi_slave__DOT__b_hs) 
                                           << 3U))) 
                    | (((IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_axi_slave__DOT__state) 
                        << 1U) | (IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__ARESETn)));
    if (Vtb_xip_qspi_axi_top__ConstPool__TABLE_h0ee214af_0
        [__Vtableidx1]) {
        vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_axi_slave__DOT__state 
            = Vtb_xip_qspi_axi_top__ConstPool__TABLE_h8701a22a_0
            [__Vtableidx1];
    }
    vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_cdc__DOT__u_txreq_sync__DOT__sync_ff3 
        = ((IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__ARESETn) 
           && (IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_cdc__DOT__u_txreq_sync__DOT__sync_ff2));
    vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_cdc__DOT__u_rxvalid_sync__DOT__sync_ff3 
        = ((IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__ARESETn) 
           && (IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_cdc__DOT__u_rxvalid_sync__DOT__sync_ff2));
    vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_arbiter__DOT__busy_seen 
        = __Vdly__tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_arbiter__DOT__busy_seen;
    vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_arbiter__DOT__drain_cnt 
        = __Vdly__tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_arbiter__DOT__drain_cnt;
    vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_arbiter__DOT__grant 
        = __Vdly__tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_arbiter__DOT__grant;
    vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_cdc__DOT__busy_ff2 
        = ((IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__ARESETn) 
           && (IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_cdc__DOT__busy_ff1));
    vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_cdc__DOT__u_txreq_sync__DOT__sync_ff2 
        = ((IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__ARESETn) 
           && (IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_cdc__DOT__u_txreq_sync__DOT__sync_ff1));
    vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_cdc__DOT__u_rxvalid_sync__DOT__sync_ff2 
        = ((IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__ARESETn) 
           && (IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_cdc__DOT__u_rxvalid_sync__DOT__sync_ff1));
    vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_axi_slave__DOT__qspi_error_d1 
        = ((IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__ARESETn) 
           && (IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__int_a_error));
    vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_cdc__DOT__u_done_sync__DOT__sync_ff3 
        = ((IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__ARESETn) 
           && (IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_cdc__DOT__u_done_sync__DOT__sync_ff2));
    vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_xip_slave__DOT__state 
        = __Vdly__tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_xip_slave__DOT__state;
    vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_cdc__DOT__busy_ff1 
        = ((IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__ARESETn) 
           && (IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_qspi_engine__DOT__busy_r));
    vlSelfRef.tb_xip_qspi_axi_top__DOT__XIP_ARREADY 
        = (0U == (IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_xip_slave__DOT__state));
    vlSelfRef.tb_xip_qspi_axi_top__DOT__XIP_RVALID 
        = (3U == (IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_xip_slave__DOT__state));
    vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_xip_slave__DOT__x_rx_valid_d1 
        = ((IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__ARESETn) 
           & ((IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_arbiter__DOT__route_to_xip) 
              & (IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__int_m_rx_valid)));
    vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_cdc__DOT__error_ff2 
        = ((IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__ARESETn) 
           && (IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_cdc__DOT__error_ff1));
    vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__int_m_tx_req 
        = ((IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_cdc__DOT__u_txreq_sync__DOT__sync_ff2) 
           ^ (IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_cdc__DOT__u_txreq_sync__DOT__sync_ff3));
    vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_cdc__DOT__u_txreq_sync__DOT__sync_ff1 
        = ((IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__ARESETn) 
           && (IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_cdc__DOT__u_txreq_sync__DOT__toggle_src));
    vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_cdc__DOT__u_rxvalid_sync__DOT__sync_ff1 
        = ((IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__ARESETn) 
           && (IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_cdc__DOT__u_rxvalid_sync__DOT__toggle_src));
    vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_cdc__DOT__u_done_sync__DOT__sync_ff2 
        = ((IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__ARESETn) 
           && (IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_cdc__DOT__u_done_sync__DOT__sync_ff1));
    vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__int_m_rx_valid 
        = ((IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_cdc__DOT__u_rxvalid_sync__DOT__sync_ff2) 
           ^ (IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_cdc__DOT__u_rxvalid_sync__DOT__sync_ff3));
    vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_cdc__DOT__error_ff1 
        = ((IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__ARESETn) 
           && (IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_qspi_engine__DOT__error_r));
    vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_cdc__DOT__u_done_sync__DOT__sync_ff1 
        = ((IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__ARESETn) 
           && (IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_cdc__DOT__u_done_sync__DOT__toggle_src));
}

extern const VlUnpacked<CData/*0:0*/, 256> Vtb_xip_qspi_axi_top__ConstPool__TABLE_h88605944_0;
extern const VlUnpacked<CData/*1:0*/, 256> Vtb_xip_qspi_axi_top__ConstPool__TABLE_hfd9406a3_0;
extern const VlUnpacked<CData/*1:0*/, 256> Vtb_xip_qspi_axi_top__ConstPool__TABLE_h8ac4dd06_0;
extern const VlUnpacked<CData/*7:0*/, 256> Vtb_xip_qspi_axi_top__ConstPool__TABLE_ha46860c4_0;
extern const VlUnpacked<CData/*7:0*/, 256> Vtb_xip_qspi_axi_top__ConstPool__TABLE_h38f833e1_0;

VL_INLINE_OPT void Vtb_xip_qspi_axi_top___024root___nba_sequent__TOP__2(Vtb_xip_qspi_axi_top___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_xip_qspi_axi_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_xip_qspi_axi_top___024root___nba_sequent__TOP__2\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __Vfunc_tb_xip_qspi_axi_top__DOT__u_model__DOT__lpc__33__Vfuncout;
    __Vfunc_tb_xip_qspi_axi_top__DOT__u_model__DOT__lpc__33__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_tb_xip_qspi_axi_top__DOT__u_model__DOT__lpc__33__w;
    __Vfunc_tb_xip_qspi_axi_top__DOT__u_model__DOT__lpc__33__w = 0;
    IData/*31:0*/ __Vfunc_tb_xip_qspi_axi_top__DOT__u_model__DOT__lpc__34__Vfuncout;
    __Vfunc_tb_xip_qspi_axi_top__DOT__u_model__DOT__lpc__34__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_tb_xip_qspi_axi_top__DOT__u_model__DOT__lpc__34__w;
    __Vfunc_tb_xip_qspi_axi_top__DOT__u_model__DOT__lpc__34__w = 0;
    CData/*7:0*/ __Vtableidx3;
    __Vtableidx3 = 0;
    CData/*7:0*/ __Vdly__tb_xip_qspi_axi_top__DOT__u_model__DOT__in_byte_acc;
    __Vdly__tb_xip_qspi_axi_top__DOT__u_model__DOT__in_byte_acc = 0;
    CData/*3:0*/ __Vdly__tb_xip_qspi_axi_top__DOT__u_model__DOT__nibblecnt;
    __Vdly__tb_xip_qspi_axi_top__DOT__u_model__DOT__nibblecnt = 0;
    CData/*7:0*/ __Vdly__tb_xip_qspi_axi_top__DOT__u_model__DOT__out_byte;
    __Vdly__tb_xip_qspi_axi_top__DOT__u_model__DOT__out_byte = 0;
    CData/*1:0*/ __Vdly__tb_xip_qspi_axi_top__DOT__u_model__DOT__phase;
    __Vdly__tb_xip_qspi_axi_top__DOT__u_model__DOT__phase = 0;
    SData/*10:0*/ __Vdly__tb_xip_qspi_axi_top__DOT__u_model__DOT__bitcnt;
    __Vdly__tb_xip_qspi_axi_top__DOT__u_model__DOT__bitcnt = 0;
    IData/*31:0*/ __Vdly__tb_xip_qspi_axi_top__DOT__u_model__DOT__addr_shift;
    __Vdly__tb_xip_qspi_axi_top__DOT__u_model__DOT__addr_shift = 0;
    // Body
    __Vdly__tb_xip_qspi_axi_top__DOT__u_model__DOT__in_byte_acc 
        = vlSelfRef.tb_xip_qspi_axi_top__DOT__u_model__DOT__in_byte_acc;
    __Vdly__tb_xip_qspi_axi_top__DOT__u_model__DOT__nibblecnt 
        = vlSelfRef.tb_xip_qspi_axi_top__DOT__u_model__DOT__nibblecnt;
    __Vdly__tb_xip_qspi_axi_top__DOT__u_model__DOT__bitcnt 
        = vlSelfRef.tb_xip_qspi_axi_top__DOT__u_model__DOT__bitcnt;
    __Vdly__tb_xip_qspi_axi_top__DOT__u_model__DOT__addr_shift 
        = vlSelfRef.tb_xip_qspi_axi_top__DOT__u_model__DOT__addr_shift;
    __Vdly__tb_xip_qspi_axi_top__DOT__u_model__DOT__out_byte 
        = vlSelfRef.tb_xip_qspi_axi_top__DOT__u_model__DOT__out_byte;
    __Vdly__tb_xip_qspi_axi_top__DOT__u_model__DOT__phase 
        = vlSelfRef.tb_xip_qspi_axi_top__DOT__u_model__DOT__phase;
    vlSelfRef.tb_xip_qspi_axi_top__DOT__fm_written_valid = 0U;
    if (vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_qspi_engine__DOT__busy_r) {
        if ((2U & (IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_model__DOT__phase))) {
            if ((1U & (IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_model__DOT__phase))) {
                if (vlSelfRef.tb_xip_qspi_axi_top__DOT__u_model__DOT__dec_dir) {
                    __Vdly__tb_xip_qspi_axi_top__DOT__u_model__DOT__in_byte_acc 
                        = ((0U == (IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_model__DOT__dec_data_lines))
                            ? ((0xfeU & ((IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_model__DOT__in_byte_acc) 
                                         << 1U)) | (IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__dut_io0_in))
                            : ((1U == (IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_model__DOT__dec_data_lines))
                                ? ((0xfcU & ((IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_model__DOT__in_byte_acc) 
                                             << 2U)) 
                                   | (((IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__dut_io1_in) 
                                       << 1U) | (IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__dut_io0_in)))
                                : ((2U == (IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_model__DOT__dec_data_lines))
                                    ? ((0xf0U & ((IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_model__DOT__in_byte_acc) 
                                                 << 4U)) 
                                       | ((((IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__dut_io3_in) 
                                            << 3U) 
                                           | ((IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__dut_io2_in) 
                                              << 2U)) 
                                          | (((IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__dut_io1_in) 
                                              << 1U) 
                                             | (IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__dut_io0_in))))
                                    : ((0xfeU & ((IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_model__DOT__in_byte_acc) 
                                                 << 1U)) 
                                       | (IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__dut_io0_in)))));
                    if (((IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_model__DOT__nibblecnt) 
                         == ((IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_model__DOT__clocks_per_byte) 
                             - (IData)(1U)))) {
                        vlSelfRef.tb_xip_qspi_axi_top__DOT__fm_written_valid = 1U;
                        vlSelfRef.tb_xip_qspi_axi_top__DOT__fm_written_byte 
                            = ((0U == (IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_model__DOT__dec_data_lines))
                                ? ((0xfeU & ((IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_model__DOT__in_byte_acc) 
                                             << 1U)) 
                                   | (IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__dut_io0_in))
                                : ((1U == (IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_model__DOT__dec_data_lines))
                                    ? ((0xfcU & ((IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_model__DOT__in_byte_acc) 
                                                 << 2U)) 
                                       | (((IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__dut_io1_in) 
                                           << 1U) | (IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__dut_io0_in)))
                                    : ((2U == (IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_model__DOT__dec_data_lines))
                                        ? ((0xf0U & 
                                            ((IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_model__DOT__in_byte_acc) 
                                             << 4U)) 
                                           | ((((IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__dut_io3_in) 
                                                << 3U) 
                                               | ((IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__dut_io2_in) 
                                                  << 2U)) 
                                              | (((IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__dut_io1_in) 
                                                  << 1U) 
                                                 | (IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__dut_io0_in))))
                                        : ((0xfeU & 
                                            ((IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_model__DOT__in_byte_acc) 
                                             << 1U)) 
                                           | (IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__dut_io0_in)))));
                        __Vdly__tb_xip_qspi_axi_top__DOT__u_model__DOT__nibblecnt = 0U;
                    } else {
                        __Vdly__tb_xip_qspi_axi_top__DOT__u_model__DOT__nibblecnt 
                            = (0xfU & ((IData)(1U) 
                                       + (IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_model__DOT__nibblecnt)));
                    }
                } else if (((IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_model__DOT__nibblecnt) 
                            == ((IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_model__DOT__clocks_per_byte) 
                                - (IData)(1U)))) {
                    __Vdly__tb_xip_qspi_axi_top__DOT__u_model__DOT__out_byte 
                        = vlSelfRef.tb_xip_qspi_axi_top__DOT__u_model__DOT__mem
                        [vlSelfRef.tb_xip_qspi_axi_top__DOT__u_model__DOT__next_addr_byte];
                    __Vdly__tb_xip_qspi_axi_top__DOT__u_model__DOT__nibblecnt = 0U;
                    vlSelfRef.tb_xip_qspi_axi_top__DOT__u_model__DOT__next_addr_byte 
                        = (0xffU & ((IData)(1U) + (IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_model__DOT__next_addr_byte)));
                } else {
                    __Vdly__tb_xip_qspi_axi_top__DOT__u_model__DOT__out_byte 
                        = (0xffU & VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_model__DOT__out_byte), 
                                                 ([&]() {
                                    __Vfunc_tb_xip_qspi_axi_top__DOT__u_model__DOT__lpc__33__w 
                                        = vlSelfRef.tb_xip_qspi_axi_top__DOT__u_model__DOT__dec_data_lines;
                                    __Vfunc_tb_xip_qspi_axi_top__DOT__u_model__DOT__lpc__33__Vfuncout 
                                        = ((0U == (IData)(__Vfunc_tb_xip_qspi_axi_top__DOT__u_model__DOT__lpc__33__w))
                                            ? 1U : 
                                           ((1U == (IData)(__Vfunc_tb_xip_qspi_axi_top__DOT__u_model__DOT__lpc__33__w))
                                             ? 2U : 
                                            ((2U == (IData)(__Vfunc_tb_xip_qspi_axi_top__DOT__u_model__DOT__lpc__33__w))
                                              ? 4U : 1U)));
                                }(), __Vfunc_tb_xip_qspi_axi_top__DOT__u_model__DOT__lpc__33__Vfuncout)));
                    __Vdly__tb_xip_qspi_axi_top__DOT__u_model__DOT__nibblecnt 
                        = (0xfU & ((IData)(1U) + (IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_model__DOT__nibblecnt)));
                }
            } else if (((IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_model__DOT__bitcnt) 
                        == ((IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_model__DOT__dec_dummy_cycles) 
                            - (IData)(1U)))) {
                vlSelfRef.tb_xip_qspi_axi_top__DOT__u_model__DOT__next_addr_byte 
                    = (0xffU & ((IData)(1U) + vlSelfRef.tb_xip_qspi_axi_top__DOT__u_model__DOT__addr_shift));
                __Vdly__tb_xip_qspi_axi_top__DOT__u_model__DOT__phase = 3U;
                __Vdly__tb_xip_qspi_axi_top__DOT__u_model__DOT__bitcnt = 0U;
                __Vdly__tb_xip_qspi_axi_top__DOT__u_model__DOT__nibblecnt = 0U;
                __Vdly__tb_xip_qspi_axi_top__DOT__u_model__DOT__out_byte 
                    = vlSelfRef.tb_xip_qspi_axi_top__DOT__u_model__DOT__mem
                    [(0xffU & vlSelfRef.tb_xip_qspi_axi_top__DOT__u_model__DOT__addr_shift)];
            } else {
                __Vdly__tb_xip_qspi_axi_top__DOT__u_model__DOT__bitcnt 
                    = (0x7ffU & ((IData)(1U) + (IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_model__DOT__bitcnt)));
            }
        } else if ((1U & (IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_model__DOT__phase))) {
            __Vdly__tb_xip_qspi_axi_top__DOT__u_model__DOT__addr_shift 
                = ((0U == (IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_model__DOT__dec_addr_lines))
                    ? ((vlSelfRef.tb_xip_qspi_axi_top__DOT__u_model__DOT__addr_shift 
                        << 1U) | (IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__dut_io0_in))
                    : ((1U == (IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_model__DOT__dec_addr_lines))
                        ? ((vlSelfRef.tb_xip_qspi_axi_top__DOT__u_model__DOT__addr_shift 
                            << 2U) | (((IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__dut_io1_in) 
                                       << 1U) | (IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__dut_io0_in)))
                        : ((2U == (IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_model__DOT__dec_addr_lines))
                            ? ((vlSelfRef.tb_xip_qspi_axi_top__DOT__u_model__DOT__addr_shift 
                                << 4U) | ((((IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__dut_io3_in) 
                                            << 3U) 
                                           | ((IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__dut_io2_in) 
                                              << 2U)) 
                                          | (((IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__dut_io1_in) 
                                              << 1U) 
                                             | (IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__dut_io0_in))))
                            : ((vlSelfRef.tb_xip_qspi_axi_top__DOT__u_model__DOT__addr_shift 
                                << 1U) | (IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__dut_io0_in)))));
            if (((IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_model__DOT__bitcnt) 
                 == (VL_DIV_III(32, VL_SHIFTL_III(32,32,32, (IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_model__DOT__dec_addr_bytes), 3U), 
                                ([&]() {
                                    __Vfunc_tb_xip_qspi_axi_top__DOT__u_model__DOT__lpc__34__w 
                                        = vlSelfRef.tb_xip_qspi_axi_top__DOT__u_model__DOT__dec_addr_lines;
                                    __Vfunc_tb_xip_qspi_axi_top__DOT__u_model__DOT__lpc__34__Vfuncout 
                                        = ((0U == (IData)(__Vfunc_tb_xip_qspi_axi_top__DOT__u_model__DOT__lpc__34__w))
                                            ? 1U : 
                                           ((1U == (IData)(__Vfunc_tb_xip_qspi_axi_top__DOT__u_model__DOT__lpc__34__w))
                                             ? 2U : 
                                            ((2U == (IData)(__Vfunc_tb_xip_qspi_axi_top__DOT__u_model__DOT__lpc__34__w))
                                              ? 4U : 1U)));
                                }(), __Vfunc_tb_xip_qspi_axi_top__DOT__u_model__DOT__lpc__34__Vfuncout)) 
                     - (IData)(1U)))) {
                if ((0U == (IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_model__DOT__dec_dummy_cycles))) {
                    __Vdly__tb_xip_qspi_axi_top__DOT__u_model__DOT__phase = 3U;
                    __Vdly__tb_xip_qspi_axi_top__DOT__u_model__DOT__bitcnt = 0U;
                    __Vdly__tb_xip_qspi_axi_top__DOT__u_model__DOT__nibblecnt = 0U;
                    if ((0U == (IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_model__DOT__dec_addr_lines))) {
                        __Vdly__tb_xip_qspi_axi_top__DOT__u_model__DOT__out_byte 
                            = vlSelfRef.tb_xip_qspi_axi_top__DOT__u_model__DOT__mem
                            [((0xfeU & (vlSelfRef.tb_xip_qspi_axi_top__DOT__u_model__DOT__addr_shift 
                                        << 1U)) | (IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__dut_io0_in))];
                        vlSelfRef.tb_xip_qspi_axi_top__DOT__u_model__DOT__next_addr_byte 
                            = (0xffU & ((IData)(1U) 
                                        + ((0xfeU & 
                                            (vlSelfRef.tb_xip_qspi_axi_top__DOT__u_model__DOT__addr_shift 
                                             << 1U)) 
                                           | (IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__dut_io0_in))));
                    } else if ((1U == (IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_model__DOT__dec_addr_lines))) {
                        __Vdly__tb_xip_qspi_axi_top__DOT__u_model__DOT__out_byte 
                            = vlSelfRef.tb_xip_qspi_axi_top__DOT__u_model__DOT__mem
                            [((0xfcU & (vlSelfRef.tb_xip_qspi_axi_top__DOT__u_model__DOT__addr_shift 
                                        << 2U)) | (
                                                   ((IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__dut_io1_in) 
                                                    << 1U) 
                                                   | (IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__dut_io0_in)))];
                        vlSelfRef.tb_xip_qspi_axi_top__DOT__u_model__DOT__next_addr_byte 
                            = (0xffU & ((IData)(1U) 
                                        + ((0xfcU & 
                                            (vlSelfRef.tb_xip_qspi_axi_top__DOT__u_model__DOT__addr_shift 
                                             << 2U)) 
                                           | (((IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__dut_io1_in) 
                                               << 1U) 
                                              | (IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__dut_io0_in)))));
                    } else if ((2U == (IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_model__DOT__dec_addr_lines))) {
                        __Vdly__tb_xip_qspi_axi_top__DOT__u_model__DOT__out_byte 
                            = vlSelfRef.tb_xip_qspi_axi_top__DOT__u_model__DOT__mem
                            [((0xf0U & (vlSelfRef.tb_xip_qspi_axi_top__DOT__u_model__DOT__addr_shift 
                                        << 4U)) | (
                                                   (((IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__dut_io3_in) 
                                                     << 3U) 
                                                    | ((IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__dut_io2_in) 
                                                       << 2U)) 
                                                   | (((IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__dut_io1_in) 
                                                       << 1U) 
                                                      | (IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__dut_io0_in))))];
                        vlSelfRef.tb_xip_qspi_axi_top__DOT__u_model__DOT__next_addr_byte 
                            = (0xffU & ((IData)(1U) 
                                        + ((0xf0U & 
                                            (vlSelfRef.tb_xip_qspi_axi_top__DOT__u_model__DOT__addr_shift 
                                             << 4U)) 
                                           | ((((IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__dut_io3_in) 
                                                << 3U) 
                                               | ((IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__dut_io2_in) 
                                                  << 2U)) 
                                              | (((IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__dut_io1_in) 
                                                  << 1U) 
                                                 | (IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__dut_io0_in))))));
                    } else {
                        __Vdly__tb_xip_qspi_axi_top__DOT__u_model__DOT__out_byte 
                            = vlSelfRef.tb_xip_qspi_axi_top__DOT__u_model__DOT__mem
                            [((0xfeU & (vlSelfRef.tb_xip_qspi_axi_top__DOT__u_model__DOT__addr_shift 
                                        << 1U)) | (IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__dut_io0_in))];
                        vlSelfRef.tb_xip_qspi_axi_top__DOT__u_model__DOT__next_addr_byte 
                            = (0xffU & ((IData)(1U) 
                                        + ((0xfeU & 
                                            (vlSelfRef.tb_xip_qspi_axi_top__DOT__u_model__DOT__addr_shift 
                                             << 1U)) 
                                           | (IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__dut_io0_in))));
                    }
                } else {
                    __Vdly__tb_xip_qspi_axi_top__DOT__u_model__DOT__phase = 2U;
                    __Vdly__tb_xip_qspi_axi_top__DOT__u_model__DOT__bitcnt = 0U;
                }
            } else {
                __Vdly__tb_xip_qspi_axi_top__DOT__u_model__DOT__bitcnt 
                    = (0x7ffU & ((IData)(1U) + (IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_model__DOT__bitcnt)));
            }
        } else {
            vlSelfRef.tb_xip_qspi_axi_top__DOT__u_model__DOT__opcode 
                = ((0xfeU & ((IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_model__DOT__opcode) 
                             << 1U)) | (IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__dut_io0_in));
            if ((7U == (IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_model__DOT__bitcnt))) {
                __Vdly__tb_xip_qspi_axi_top__DOT__u_model__DOT__phase = 1U;
                __Vdly__tb_xip_qspi_axi_top__DOT__u_model__DOT__bitcnt = 0U;
            } else {
                __Vdly__tb_xip_qspi_axi_top__DOT__u_model__DOT__bitcnt 
                    = (0x7ffU & ((IData)(1U) + (IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_model__DOT__bitcnt)));
            }
        }
    } else {
        __Vdly__tb_xip_qspi_axi_top__DOT__u_model__DOT__phase = 0U;
        __Vdly__tb_xip_qspi_axi_top__DOT__u_model__DOT__bitcnt = 0U;
        __Vdly__tb_xip_qspi_axi_top__DOT__u_model__DOT__nibblecnt = 0U;
    }
    vlSelfRef.tb_xip_qspi_axi_top__DOT__u_model__DOT__in_byte_acc 
        = __Vdly__tb_xip_qspi_axi_top__DOT__u_model__DOT__in_byte_acc;
    vlSelfRef.tb_xip_qspi_axi_top__DOT__u_model__DOT__nibblecnt 
        = __Vdly__tb_xip_qspi_axi_top__DOT__u_model__DOT__nibblecnt;
    vlSelfRef.tb_xip_qspi_axi_top__DOT__u_model__DOT__bitcnt 
        = __Vdly__tb_xip_qspi_axi_top__DOT__u_model__DOT__bitcnt;
    vlSelfRef.tb_xip_qspi_axi_top__DOT__u_model__DOT__addr_shift 
        = __Vdly__tb_xip_qspi_axi_top__DOT__u_model__DOT__addr_shift;
    vlSelfRef.tb_xip_qspi_axi_top__DOT__u_model__DOT__out_byte 
        = __Vdly__tb_xip_qspi_axi_top__DOT__u_model__DOT__out_byte;
    vlSelfRef.tb_xip_qspi_axi_top__DOT__u_model__DOT__phase 
        = __Vdly__tb_xip_qspi_axi_top__DOT__u_model__DOT__phase;
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
}

VL_INLINE_OPT void Vtb_xip_qspi_axi_top___024root___nba_comb__TOP__0(Vtb_xip_qspi_axi_top___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_xip_qspi_axi_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_xip_qspi_axi_top___024root___nba_comb__TOP__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_axi_slave__DOT__r_hs 
        = ((IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__AXI_RREADY) 
           & (1U == (IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_axi_slave__DOT__read_state)));
    vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_axi_slave__DOT__b_hs 
        = ((IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__AXI_BREADY) 
           & (3U == (IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_axi_slave__DOT__state)));
    vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_axi_slave__DOT__aw_hs 
        = (((0U == (IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_axi_slave__DOT__state)) 
            | (2U == (IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_axi_slave__DOT__state))) 
           & (IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__AXI_AWVALID));
    vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_axi_slave__DOT__w_hs 
        = (((0U == (IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_axi_slave__DOT__state)) 
            | (1U == (IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_axi_slave__DOT__state))) 
           & (IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__AXI_WVALID));
    vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_axi_slave__DOT__ar_hs 
        = ((0U == (IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_axi_slave__DOT__read_state)) 
           & (IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__AXI_ARVALID));
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
    vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_axi_slave__DOT____VdfgRegularize_h3a287cbd_0_1 
        = ((IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_axi_slave__DOT__do_write) 
           & ((0xcU == vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_axi_slave__DOT__eff_addr) 
              & (IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_axi_slave__DOT__eff_strb)));
    vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_axi_slave__DOT____VdfgRegularize_h3a287cbd_0_0 
        = ((IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_axi_slave__DOT__do_write) 
           & (0U == vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_axi_slave__DOT__eff_addr));
    vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__int_a_start 
        = ((IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_axi_slave__DOT____VdfgRegularize_h3a287cbd_0_0) 
           & (vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_axi_slave__DOT__eff_data 
              >> 0x15U));
    vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__int_m_start = 0U;
    vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__int_m_tx_data = 0U;
    vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__int_m_num_bytes = 0U;
    vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__int_m_addr = 0U;
    if ((0U == (IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_arbiter__DOT__grant))) {
        if (vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__int_a_start) {
            vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__int_m_start 
                = vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__int_a_start;
            vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__int_m_tx_data 
                = (0xffU & vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_axi_slave__DOT__reg_tx_data);
            vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__int_m_num_bytes 
                = vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_axi_slave__DOT__reg_num_bytes;
            vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__int_m_addr 
                = vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_axi_slave__DOT__reg_addr;
        } else if (vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__int_x_start) {
            vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__int_m_start 
                = vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__int_x_start;
            vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__int_m_num_bytes = 4U;
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
        vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__int_m_addr 
            = vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_axi_slave__DOT__reg_addr;
    } else if ((2U == (IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_arbiter__DOT__grant))) {
        vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__int_m_start 
            = vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__int_x_start;
        vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__int_m_num_bytes = 4U;
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

VL_INLINE_OPT void Vtb_xip_qspi_axi_top___024root___nba_sequent__TOP__3(Vtb_xip_qspi_axi_top___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_xip_qspi_axi_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_xip_qspi_axi_top___024root___nba_sequent__TOP__3\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_cdc__DOT__u_txreq_sync__DOT__toggle_src 
        = vlSelfRef.__Vdly__tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_cdc__DOT__u_txreq_sync__DOT__toggle_src;
    vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_cdc__DOT__u_rxvalid_sync__DOT__toggle_src 
        = vlSelfRef.__Vdly__tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_cdc__DOT__u_rxvalid_sync__DOT__toggle_src;
    vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_cdc__DOT__u_done_sync__DOT__toggle_src 
        = vlSelfRef.__Vdly__tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_cdc__DOT__u_done_sync__DOT__toggle_src;
    if (vlSelfRef.tb_xip_qspi_axi_top__DOT__qclk_rst) {
        vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_cdc__DOT__rx_data_hold = 0U;
        vlSelfRef.__Vdly__tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_qspi_engine__DOT__phase = 0U;
        vlSelfRef.__Vdly__tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_qspi_engine__DOT__bit_cnt = 0U;
        vlSelfRef.__Vdly__tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_qspi_engine__DOT__busy_r = 0U;
        vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_qspi_engine__DOT__error_r = 0U;
        vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_qspi_engine__DOT__ctrl = 0U;
    } else {
        if (vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__int_q_rx_valid) {
            vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_cdc__DOT__rx_data_hold 
                = vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_qspi_engine__DOT__in_byte;
        }
        if ((((IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_cdc__DOT__u_abort_sync__DOT__sync_ff2) 
              ^ (IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_cdc__DOT__u_abort_sync__DOT__sync_ff3)) 
             | (IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_qspi_engine__DOT__timeout_hit))) {
            vlSelfRef.__Vdly__tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_qspi_engine__DOT__busy_r = 0U;
            vlSelfRef.__Vdly__tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_qspi_engine__DOT__phase = 0U;
            vlSelfRef.__Vdly__tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_qspi_engine__DOT__bit_cnt = 0U;
            if (vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_qspi_engine__DOT__timeout_hit) {
                vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_qspi_engine__DOT__error_r = 1U;
            }
        } else if (vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_qspi_engine__DOT__busy_r) {
            if (((IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_qspi_engine__DOT__bit_cnt) 
                 == (IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_qspi_engine__DOT__phase_limit))) {
                if ((3U == (IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_qspi_engine__DOT__phase))) {
                    vlSelfRef.__Vdly__tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_qspi_engine__DOT__busy_r = 0U;
                    vlSelfRef.__Vdly__tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_qspi_engine__DOT__phase = 0U;
                    vlSelfRef.__Vdly__tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_qspi_engine__DOT__bit_cnt = 0U;
                } else {
                    vlSelfRef.__Vdly__tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_qspi_engine__DOT__phase 
                        = ((0U == (IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_qspi_engine__DOT__phase))
                            ? 1U : ((1U == (IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_qspi_engine__DOT__phase))
                                     ? ((0U < (0xffU 
                                               & (vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_qspi_engine__DOT__ctrl 
                                                  >> 0xdU)))
                                         ? 2U : 3U)
                                     : ((2U == (IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_qspi_engine__DOT__phase))
                                         ? 3U : 0U)));
                    vlSelfRef.__Vdly__tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_qspi_engine__DOT__bit_cnt = 0U;
                }
            } else {
                vlSelfRef.__Vdly__tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_qspi_engine__DOT__bit_cnt 
                    = (0xffffU & ((IData)(1U) + (IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_qspi_engine__DOT__bit_cnt)));
            }
        } else if (vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__int_q_start) {
            vlSelfRef.__Vdly__tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_qspi_engine__DOT__busy_r = 1U;
            vlSelfRef.__Vdly__tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_qspi_engine__DOT__phase = 0U;
            vlSelfRef.__Vdly__tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_qspi_engine__DOT__bit_cnt = 0U;
            vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_qspi_engine__DOT__error_r = 0U;
        }
        if (((~ (IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_qspi_engine__DOT__busy_r)) 
             & (IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__int_q_start))) {
            vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_qspi_engine__DOT__ctrl 
                = (0x7fffffU & vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__int_m_ctrl_cmd);
        }
    }
    vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_qspi_engine__DOT__in_byte 
        = vlSelfRef.__Vdly__tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_qspi_engine__DOT__in_byte;
    vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_qspi_engine__DOT__bit_cnt 
        = vlSelfRef.__Vdly__tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_qspi_engine__DOT__bit_cnt;
    vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_qspi_engine__DOT__phase 
        = vlSelfRef.__Vdly__tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_qspi_engine__DOT__phase;
    vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_cdc__DOT__u_abort_sync__DOT__sync_ff3 
        = ((1U & (~ (IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__qclk_rst))) 
           && (IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_cdc__DOT__u_abort_sync__DOT__sync_ff2));
    vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__int_q_start 
        = ((IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_cdc__DOT__u_start_sync__DOT__sync_ff2) 
           ^ (IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_cdc__DOT__u_start_sync__DOT__sync_ff3));
    vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_qspi_engine__DOT__busy_r 
        = vlSelfRef.__Vdly__tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_qspi_engine__DOT__busy_r;
    vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_cdc__DOT__u_abort_sync__DOT__sync_ff2 
        = ((1U & (~ (IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__qclk_rst))) 
           && (IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_cdc__DOT__u_abort_sync__DOT__sync_ff1));
    vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__int_q_rx_valid 
        = ((~ (vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_qspi_engine__DOT__ctrl 
               >> 0x16U)) & (IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_qspi_engine__DOT__byte_boundary_d1));
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
    if (vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_qspi_engine__DOT__busy_r) {
        vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_qspi_engine__DOT__timeout_hit 
            = (0x96U <= vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_qspi_engine__DOT__timeout_cnt);
        vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_qspi_engine__DOT____VdfgRegularize_h909204f5_0_0 
            = (3U == (IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_qspi_engine__DOT__phase));
        vlSelfRef.tb_xip_qspi_axi_top__DOT__dut_io3_oe = 0U;
        vlSelfRef.tb_xip_qspi_axi_top__DOT__dut_io2_oe = 0U;
        vlSelfRef.tb_xip_qspi_axi_top__DOT__dut_io1_oe = 0U;
        vlSelfRef.tb_xip_qspi_axi_top__DOT__dut_io0_oe = 0U;
        vlSelfRef.tb_xip_qspi_axi_top__DOT__dut_io3_out = 0U;
        vlSelfRef.tb_xip_qspi_axi_top__DOT__dut_io2_out = 0U;
        vlSelfRef.tb_xip_qspi_axi_top__DOT__dut_io1_out = 0U;
        vlSelfRef.tb_xip_qspi_axi_top__DOT__dut_io0_out = 0U;
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
                        vlSelfRef.tb_xip_qspi_axi_top__DOT__dut_io1_oe = 1U;
                        vlSelfRef.tb_xip_qspi_axi_top__DOT__dut_io1_out 
                            = (1U & (IData)((vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_qspi_engine__DOT__out_shift 
                                             >> 0x27U)));
                    } else if ((2U == (3U & (vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_qspi_engine__DOT__ctrl 
                                             >> 8U)))) {
                        vlSelfRef.tb_xip_qspi_axi_top__DOT__dut_io1_oe = 1U;
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
                                vlSelfRef.tb_xip_qspi_axi_top__DOT__dut_io3_oe = 1U;
                                vlSelfRef.tb_xip_qspi_axi_top__DOT__dut_io2_oe = 1U;
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
                            vlSelfRef.tb_xip_qspi_axi_top__DOT__dut_io1_oe = 1U;
                            vlSelfRef.tb_xip_qspi_axi_top__DOT__dut_io1_out 
                                = (1U & ((IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_qspi_engine__DOT__tx_shift_byte) 
                                         >> 7U));
                        } else if ((2U == (3U & (vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_qspi_engine__DOT__ctrl 
                                                 >> 0xaU)))) {
                            vlSelfRef.tb_xip_qspi_axi_top__DOT__dut_io1_oe = 1U;
                            vlSelfRef.tb_xip_qspi_axi_top__DOT__dut_io1_out 
                                = (1U & ((IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_qspi_engine__DOT__tx_shift_byte) 
                                         >> 5U));
                        }
                    }
                }
            }
        }
        if ((0U == (IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_qspi_engine__DOT__phase))) {
            vlSelfRef.tb_xip_qspi_axi_top__DOT__dut_io0_oe = 1U;
            vlSelfRef.tb_xip_qspi_axi_top__DOT__dut_io0_out 
                = (1U & (IData)((vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_qspi_engine__DOT__out_shift 
                                 >> 0x27U)));
        } else if ((1U == (IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_qspi_engine__DOT__phase))) {
            if ((0U == (3U & (vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_qspi_engine__DOT__ctrl 
                              >> 8U)))) {
                vlSelfRef.tb_xip_qspi_axi_top__DOT__dut_io0_oe = 1U;
                vlSelfRef.tb_xip_qspi_axi_top__DOT__dut_io0_out 
                    = (1U & (IData)((vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_qspi_engine__DOT__out_shift 
                                     >> 0x27U)));
            } else if ((1U == (3U & (vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_qspi_engine__DOT__ctrl 
                                     >> 8U)))) {
                vlSelfRef.tb_xip_qspi_axi_top__DOT__dut_io0_oe = 1U;
                vlSelfRef.tb_xip_qspi_axi_top__DOT__dut_io0_out 
                    = (1U & (IData)((vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_qspi_engine__DOT__out_shift 
                                     >> 0x26U)));
            } else if ((2U == (3U & (vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_qspi_engine__DOT__ctrl 
                                     >> 8U)))) {
                vlSelfRef.tb_xip_qspi_axi_top__DOT__dut_io0_oe = 1U;
                vlSelfRef.tb_xip_qspi_axi_top__DOT__dut_io0_out 
                    = (1U & (IData)((vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_qspi_engine__DOT__out_shift 
                                     >> 0x24U)));
            }
        } else if ((3U == (IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_qspi_engine__DOT__phase))) {
            if ((0x400000U & vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_qspi_engine__DOT__ctrl)) {
                if ((0U == (3U & (vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_qspi_engine__DOT__ctrl 
                                  >> 0xaU)))) {
                    vlSelfRef.tb_xip_qspi_axi_top__DOT__dut_io0_oe = 1U;
                    vlSelfRef.tb_xip_qspi_axi_top__DOT__dut_io0_out 
                        = (1U & ((IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_qspi_engine__DOT__tx_shift_byte) 
                                 >> 7U));
                } else if ((1U == (3U & (vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_qspi_engine__DOT__ctrl 
                                         >> 0xaU)))) {
                    vlSelfRef.tb_xip_qspi_axi_top__DOT__dut_io0_oe = 1U;
                    vlSelfRef.tb_xip_qspi_axi_top__DOT__dut_io0_out 
                        = (1U & ((IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_qspi_engine__DOT__tx_shift_byte) 
                                 >> 6U));
                } else if ((2U == (3U & (vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_qspi_engine__DOT__ctrl 
                                         >> 0xaU)))) {
                    vlSelfRef.tb_xip_qspi_axi_top__DOT__dut_io0_oe = 1U;
                    vlSelfRef.tb_xip_qspi_axi_top__DOT__dut_io0_out 
                        = (1U & ((IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_qspi_engine__DOT__tx_shift_byte) 
                                 >> 4U));
                }
            }
        }
    } else {
        vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_qspi_engine__DOT__timeout_hit = 0U;
        vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_qspi_engine__DOT____VdfgRegularize_h909204f5_0_0 = 0U;
        vlSelfRef.tb_xip_qspi_axi_top__DOT__dut_io3_oe = 0U;
        vlSelfRef.tb_xip_qspi_axi_top__DOT__dut_io2_oe = 0U;
        vlSelfRef.tb_xip_qspi_axi_top__DOT__dut_io1_oe = 0U;
        vlSelfRef.tb_xip_qspi_axi_top__DOT__dut_io0_oe = 0U;
        vlSelfRef.tb_xip_qspi_axi_top__DOT__dut_io3_out = 0U;
        vlSelfRef.tb_xip_qspi_axi_top__DOT__dut_io2_out = 0U;
        vlSelfRef.tb_xip_qspi_axi_top__DOT__dut_io1_out = 0U;
        vlSelfRef.tb_xip_qspi_axi_top__DOT__dut_io0_out = 0U;
    }
    vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_qspi_engine__DOT____VdfgRegularize_h909204f5_0_1 
        = ((IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_qspi_engine__DOT__bit_cnt) 
           == (IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_qspi_engine__DOT__phase_limit));
    vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_qspi_engine__DOT__byte_boundary 
        = ((IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_qspi_engine__DOT____VdfgRegularize_h909204f5_0_0) 
           & ((IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_qspi_engine__DOT__byte_bit_cnt) 
              == (0xfU & ((IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_qspi_engine__DOT__clocks_per_byte) 
                          - (IData)(1U)))));
    vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_cdc__DOT__u_abort_sync__DOT__sync_ff1 
        = ((1U & (~ (IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__qclk_rst))) 
           && (IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_cdc__DOT__u_abort_sync__DOT__toggle_src));
}

VL_INLINE_OPT void Vtb_xip_qspi_axi_top___024root___nba_comb__TOP__1(Vtb_xip_qspi_axi_top___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_xip_qspi_axi_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_xip_qspi_axi_top___024root___nba_comb__TOP__1\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__int_m_ctrl_cmd = 0U;
    if ((0U == (IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_arbiter__DOT__grant))) {
        if (vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__int_a_start) {
            vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__int_m_ctrl_cmd 
                = vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_axi_slave__DOT__reg_ctrl_cmd;
        } else if (vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__int_x_start) {
            vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__int_m_ctrl_cmd 
                = (0x200000U | (0x1fffffU & vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_axi_slave__DOT__reg_xip_cfg));
        }
    } else if ((1U == (IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_arbiter__DOT__grant))) {
        vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__int_m_ctrl_cmd 
            = vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_axi_slave__DOT__reg_ctrl_cmd;
    } else if ((2U == (IData)(vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_arbiter__DOT__grant))) {
        vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__int_m_ctrl_cmd 
            = (0x200000U | (0x1fffffU & vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_axi_slave__DOT__reg_xip_cfg));
    }
}

VL_INLINE_OPT void Vtb_xip_qspi_axi_top___024root___nba_comb__TOP__2(Vtb_xip_qspi_axi_top___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_xip_qspi_axi_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_xip_qspi_axi_top___024root___nba_comb__TOP__2\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
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
}

VL_INLINE_OPT void Vtb_xip_qspi_axi_top___024root___nba_sequent__TOP__4(Vtb_xip_qspi_axi_top___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_xip_qspi_axi_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_xip_qspi_axi_top___024root___nba_sequent__TOP__4\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_cdc__DOT__u_abort_sync__DOT__toggle_src 
        = vlSelfRef.__Vdly__tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_cdc__DOT__u_abort_sync__DOT__toggle_src;
}

void Vtb_xip_qspi_axi_top___024root___timing_resume(Vtb_xip_qspi_axi_top___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_xip_qspi_axi_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_xip_qspi_axi_top___024root___timing_resume\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VtrigSched_h694734a5__0.resume(
                                                   "@(posedge tb_xip_qspi_axi_top.ACLK)");
    }
    if ((4ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VtrigSched_ha0c0d2c3__0.resume(
                                                   "@(posedge tb_xip_qspi_axi_top.qclk)");
    }
    if ((0x20ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VtrigSched_h04146f10__0.resume(
                                                   "@(posedge tb_xip_qspi_axi_top.ARESETn)");
    }
    if ((0x10ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VdlySched.resume();
    }
}

void Vtb_xip_qspi_axi_top___024root___timing_commit(Vtb_xip_qspi_axi_top___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_xip_qspi_axi_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_xip_qspi_axi_top___024root___timing_commit\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((! (1ULL & vlSelfRef.__VactTriggered.word(0U)))) {
        vlSelfRef.__VtrigSched_h694734a5__0.commit(
                                                   "@(posedge tb_xip_qspi_axi_top.ACLK)");
    }
    if ((! (4ULL & vlSelfRef.__VactTriggered.word(0U)))) {
        vlSelfRef.__VtrigSched_ha0c0d2c3__0.commit(
                                                   "@(posedge tb_xip_qspi_axi_top.qclk)");
    }
    if ((! (0x20ULL & vlSelfRef.__VactTriggered.word(0U)))) {
        vlSelfRef.__VtrigSched_h04146f10__0.commit(
                                                   "@(posedge tb_xip_qspi_axi_top.ARESETn)");
    }
}

void Vtb_xip_qspi_axi_top___024root___eval_triggers__act(Vtb_xip_qspi_axi_top___024root* vlSelf);

bool Vtb_xip_qspi_axi_top___024root___eval_phase__act(Vtb_xip_qspi_axi_top___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_xip_qspi_axi_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_xip_qspi_axi_top___024root___eval_phase__act\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<6> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vtb_xip_qspi_axi_top___024root___eval_triggers__act(vlSelf);
    Vtb_xip_qspi_axi_top___024root___timing_commit(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        Vtb_xip_qspi_axi_top___024root___timing_resume(vlSelf);
        Vtb_xip_qspi_axi_top___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vtb_xip_qspi_axi_top___024root___eval_phase__nba(Vtb_xip_qspi_axi_top___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_xip_qspi_axi_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_xip_qspi_axi_top___024root___eval_phase__nba\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vtb_xip_qspi_axi_top___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_xip_qspi_axi_top___024root___dump_triggers__nba(Vtb_xip_qspi_axi_top___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_xip_qspi_axi_top___024root___dump_triggers__act(Vtb_xip_qspi_axi_top___024root* vlSelf);
#endif  // VL_DEBUG

void Vtb_xip_qspi_axi_top___024root___eval(Vtb_xip_qspi_axi_top___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_xip_qspi_axi_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_xip_qspi_axi_top___024root___eval\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            Vtb_xip_qspi_axi_top___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("tb_xip_qspi_axi_top.sv", 6, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelfRef.__VactIterCount))) {
#ifdef VL_DEBUG
                Vtb_xip_qspi_axi_top___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("tb_xip_qspi_axi_top.sv", 6, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (Vtb_xip_qspi_axi_top___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (Vtb_xip_qspi_axi_top___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vtb_xip_qspi_axi_top___024root___eval_debug_assertions(Vtb_xip_qspi_axi_top___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_xip_qspi_axi_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_xip_qspi_axi_top___024root___eval_debug_assertions\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG
