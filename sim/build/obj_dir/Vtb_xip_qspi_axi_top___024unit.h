// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_xip_qspi_axi_top.h for the primary calling header

#ifndef VERILATED_VTB_XIP_QSPI_AXI_TOP___024UNIT_H_
#define VERILATED_VTB_XIP_QSPI_AXI_TOP___024UNIT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vtb_xip_qspi_axi_top__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_xip_qspi_axi_top___024unit final : public VerilatedModule {
  public:

    // INTERNAL VARIABLES
    Vtb_xip_qspi_axi_top__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtb_xip_qspi_axi_top___024unit(Vtb_xip_qspi_axi_top__Syms* symsp, const char* v__name);
    ~Vtb_xip_qspi_axi_top___024unit();
    VL_UNCOPYABLE(Vtb_xip_qspi_axi_top___024unit);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
