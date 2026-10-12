// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VTB_XIP_QSPI_AXI_TOP__SYMS_H_
#define VERILATED_VTB_XIP_QSPI_AXI_TOP__SYMS_H_  // guard

#include "verilated.h"
#include "verilated_vcd_c.h"

// INCLUDE MODEL CLASS

#include "Vtb_xip_qspi_axi_top.h"

// INCLUDE MODULE CLASSES
#include "Vtb_xip_qspi_axi_top___024root.h"
#include "Vtb_xip_qspi_axi_top___024unit.h"

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES)Vtb_xip_qspi_axi_top__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vtb_xip_qspi_axi_top* const __Vm_modelp;
    bool __Vm_dumping = false;  // Dumping is active
    VerilatedMutex __Vm_dumperMutex;  // Protect __Vm_dumperp
    VerilatedVcdC* __Vm_dumperp VL_GUARDED_BY(__Vm_dumperMutex) = nullptr;  /// Trace class for $dump*
    bool __Vm_activity = false;  ///< Used by trace routines to determine change occurred
    uint32_t __Vm_baseCode = 0;  ///< Used by trace routines when tracing multiple models
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vtb_xip_qspi_axi_top___024root TOP;

    // CONSTRUCTORS
    Vtb_xip_qspi_axi_top__Syms(VerilatedContext* contextp, const char* namep, Vtb_xip_qspi_axi_top* modelp);
    ~Vtb_xip_qspi_axi_top__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
    void _traceDump();
    void _traceDumpOpen();
    void _traceDumpClose();
};

#endif  // guard
