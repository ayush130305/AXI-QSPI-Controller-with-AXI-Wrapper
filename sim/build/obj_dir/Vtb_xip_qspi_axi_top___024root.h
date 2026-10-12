// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_xip_qspi_axi_top.h for the primary calling header

#ifndef VERILATED_VTB_XIP_QSPI_AXI_TOP___024ROOT_H_
#define VERILATED_VTB_XIP_QSPI_AXI_TOP___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vtb_xip_qspi_axi_top__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_xip_qspi_axi_top___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        CData/*0:0*/ tb_xip_qspi_axi_top__DOT__ACLK;
        CData/*0:0*/ tb_xip_qspi_axi_top__DOT__qclk;
        CData/*0:0*/ tb_xip_qspi_axi_top__DOT__ARESETn;
        CData/*0:0*/ tb_xip_qspi_axi_top__DOT__qclk_rst;
        CData/*0:0*/ tb_xip_qspi_axi_top__DOT__AXI_AWVALID;
        CData/*3:0*/ tb_xip_qspi_axi_top__DOT__AXI_WSTRB;
        CData/*0:0*/ tb_xip_qspi_axi_top__DOT__AXI_WVALID;
        CData/*0:0*/ tb_xip_qspi_axi_top__DOT__AXI_BREADY;
        CData/*0:0*/ tb_xip_qspi_axi_top__DOT__AXI_ARVALID;
        CData/*0:0*/ tb_xip_qspi_axi_top__DOT__AXI_RREADY;
        CData/*0:0*/ tb_xip_qspi_axi_top__DOT__XIP_ARVALID;
        CData/*0:0*/ tb_xip_qspi_axi_top__DOT__XIP_ARREADY;
        CData/*0:0*/ tb_xip_qspi_axi_top__DOT__XIP_RVALID;
        CData/*0:0*/ tb_xip_qspi_axi_top__DOT__XIP_RREADY;
        CData/*0:0*/ tb_xip_qspi_axi_top__DOT__dut_io0_out;
        CData/*0:0*/ tb_xip_qspi_axi_top__DOT__dut_io0_oe;
        CData/*0:0*/ tb_xip_qspi_axi_top__DOT__dut_io0_in;
        CData/*0:0*/ tb_xip_qspi_axi_top__DOT__dut_io1_out;
        CData/*0:0*/ tb_xip_qspi_axi_top__DOT__dut_io1_oe;
        CData/*0:0*/ tb_xip_qspi_axi_top__DOT__dut_io1_in;
        CData/*0:0*/ tb_xip_qspi_axi_top__DOT__dut_io2_out;
        CData/*0:0*/ tb_xip_qspi_axi_top__DOT__dut_io2_oe;
        CData/*0:0*/ tb_xip_qspi_axi_top__DOT__dut_io2_in;
        CData/*0:0*/ tb_xip_qspi_axi_top__DOT__dut_io3_out;
        CData/*0:0*/ tb_xip_qspi_axi_top__DOT__dut_io3_oe;
        CData/*0:0*/ tb_xip_qspi_axi_top__DOT__dut_io3_in;
        CData/*0:0*/ tb_xip_qspi_axi_top__DOT__fm_io0_out;
        CData/*0:0*/ tb_xip_qspi_axi_top__DOT__fm_io0_oe;
        CData/*0:0*/ tb_xip_qspi_axi_top__DOT__fm_io1_out;
        CData/*0:0*/ tb_xip_qspi_axi_top__DOT__fm_io1_oe;
        CData/*0:0*/ tb_xip_qspi_axi_top__DOT__fm_io2_out;
        CData/*0:0*/ tb_xip_qspi_axi_top__DOT__fm_io2_oe;
        CData/*0:0*/ tb_xip_qspi_axi_top__DOT__fm_io3_out;
        CData/*0:0*/ tb_xip_qspi_axi_top__DOT__fm_io3_oe;
        CData/*0:0*/ tb_xip_qspi_axi_top__DOT__fm_written_valid;
        CData/*7:0*/ tb_xip_qspi_axi_top__DOT__fm_written_byte;
        CData/*1:0*/ tb_xip_qspi_axi_top__DOT__unnamedblk1__DOT__rresp;
        CData/*1:0*/ tb_xip_qspi_axi_top__DOT__unnamedblk1__DOT__unnamedblk2__DOT__ax_resp;
        CData/*1:0*/ tb_xip_qspi_axi_top__DOT__unnamedblk1__DOT__unnamedblk2__DOT__xp_resp;
        CData/*1:0*/ tb_xip_qspi_axi_top__DOT__unnamedblk1__DOT__unnamedblk3__DOT__xip_resp;
        CData/*1:0*/ tb_xip_qspi_axi_top__DOT__unnamedblk1__DOT__unnamedblk4__DOT__xip_resp;
        CData/*1:0*/ tb_xip_qspi_axi_top__DOT__unnamedblk1__DOT__unnamedblk4__DOT__status_resp;
        CData/*1:0*/ tb_xip_qspi_axi_top__DOT__unnamedblk1__DOT__unnamedblk5__DOT__xip_resp;
        CData/*1:0*/ tb_xip_qspi_axi_top__DOT__unnamedblk1__DOT__unnamedblk6__DOT__xip_resp;
        CData/*1:0*/ tb_xip_qspi_axi_top__DOT__unnamedblk1__DOT__unnamedblk7__DOT__xip_resp;
        CData/*1:0*/ tb_xip_qspi_axi_top__DOT__unnamedblk1__DOT__unnamedblk8__DOT__xip_resp;
        CData/*0:0*/ tb_xip_qspi_axi_top__DOT__unnamedblk1__DOT__unnamedblk8__DOT__all_ok;
        CData/*0:0*/ tb_xip_qspi_axi_top__DOT__u_dut__DOT__int_a_start;
        CData/*0:0*/ tb_xip_qspi_axi_top__DOT__u_dut__DOT__int_a_error;
        CData/*0:0*/ tb_xip_qspi_axi_top__DOT__u_dut__DOT__int_x_start;
        CData/*0:0*/ tb_xip_qspi_axi_top__DOT__u_dut__DOT__int_x_busy;
        CData/*0:0*/ tb_xip_qspi_axi_top__DOT__u_dut__DOT__int_m_start;
        CData/*7:0*/ tb_xip_qspi_axi_top__DOT__u_dut__DOT__int_m_tx_data;
        CData/*0:0*/ tb_xip_qspi_axi_top__DOT__u_dut__DOT__int_m_tx_req;
        CData/*7:0*/ tb_xip_qspi_axi_top__DOT__u_dut__DOT__int_m_rx_data;
        CData/*0:0*/ tb_xip_qspi_axi_top__DOT__u_dut__DOT__int_m_rx_valid;
        CData/*0:0*/ tb_xip_qspi_axi_top__DOT__u_dut__DOT__int_q_start;
        CData/*7:0*/ tb_xip_qspi_axi_top__DOT__u_dut__DOT__int_q_tx_data;
        CData/*0:0*/ tb_xip_qspi_axi_top__DOT__u_dut__DOT__int_q_rx_valid;
        CData/*1:0*/ tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_axi_slave__DOT__state;
        CData/*0:0*/ tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_axi_slave__DOT__aw_hs;
        CData/*0:0*/ tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_axi_slave__DOT__w_hs;
        CData/*0:0*/ tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_axi_slave__DOT__b_hs;
        CData/*0:0*/ tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_axi_slave__DOT__ar_hs;
    };
    struct {
        CData/*0:0*/ tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_axi_slave__DOT__r_hs;
        CData/*3:0*/ tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_axi_slave__DOT__w_strb_latched;
        CData/*0:0*/ tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_axi_slave__DOT__do_write;
        CData/*3:0*/ tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_axi_slave__DOT__eff_strb;
        CData/*1:0*/ tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_axi_slave__DOT__read_state;
        CData/*0:0*/ tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_axi_slave__DOT__done_latched;
        CData/*0:0*/ tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_axi_slave__DOT__tx_ready_latched;
        CData/*0:0*/ tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_axi_slave__DOT__rx_ready_latched;
        CData/*0:0*/ tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_axi_slave__DOT__error_latched;
        CData/*0:0*/ tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_axi_slave__DOT__qspi_error_d1;
        CData/*0:0*/ tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_axi_slave__DOT____VdfgRegularize_h3a287cbd_0_0;
        CData/*0:0*/ tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_axi_slave__DOT____VdfgRegularize_h3a287cbd_0_1;
        CData/*2:0*/ tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_xip_slave__DOT__state;
        CData/*2:0*/ tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_xip_slave__DOT__byte_count;
        CData/*0:0*/ tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_xip_slave__DOT__fetch_error;
        CData/*0:0*/ tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_xip_slave__DOT__engine_busy_seen;
        CData/*3:0*/ tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_xip_slave__DOT__drain_cnt;
        CData/*0:0*/ tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_xip_slave__DOT__x_rx_valid_d1;
        CData/*1:0*/ tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_arbiter__DOT__grant;
        CData/*0:0*/ tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_arbiter__DOT__busy_seen;
        CData/*3:0*/ tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_arbiter__DOT__drain_cnt;
        CData/*0:0*/ tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_arbiter__DOT__route_to_reg;
        CData/*0:0*/ tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_arbiter__DOT__route_to_xip;
        CData/*0:0*/ tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_cdc__DOT__error_ff1;
        CData/*0:0*/ tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_cdc__DOT__error_ff2;
        CData/*0:0*/ tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_cdc__DOT__busy_ff1;
        CData/*0:0*/ tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_cdc__DOT__busy_ff2;
        CData/*7:0*/ tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_cdc__DOT__tx_data_hold;
        CData/*0:0*/ tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_cdc__DOT__tx_data_ready;
        CData/*7:0*/ tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_cdc__DOT__rx_data_hold;
        CData/*0:0*/ tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_cdc__DOT__u_start_sync__DOT__toggle_src;
        CData/*0:0*/ tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_cdc__DOT__u_start_sync__DOT__sync_ff1;
        CData/*0:0*/ tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_cdc__DOT__u_start_sync__DOT__sync_ff2;
        CData/*0:0*/ tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_cdc__DOT__u_start_sync__DOT__sync_ff3;
        CData/*0:0*/ tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_cdc__DOT__u_abort_sync__DOT__toggle_src;
        CData/*0:0*/ tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_cdc__DOT__u_abort_sync__DOT__sync_ff1;
        CData/*0:0*/ tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_cdc__DOT__u_abort_sync__DOT__sync_ff2;
        CData/*0:0*/ tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_cdc__DOT__u_abort_sync__DOT__sync_ff3;
        CData/*0:0*/ tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_cdc__DOT__u_done_sync__DOT__toggle_src;
        CData/*0:0*/ tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_cdc__DOT__u_done_sync__DOT__sync_ff1;
        CData/*0:0*/ tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_cdc__DOT__u_done_sync__DOT__sync_ff2;
        CData/*0:0*/ tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_cdc__DOT__u_done_sync__DOT__sync_ff3;
        CData/*0:0*/ tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_cdc__DOT__u_txreq_sync__DOT__toggle_src;
        CData/*0:0*/ tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_cdc__DOT__u_txreq_sync__DOT__sync_ff1;
        CData/*0:0*/ tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_cdc__DOT__u_txreq_sync__DOT__sync_ff2;
        CData/*0:0*/ tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_cdc__DOT__u_txreq_sync__DOT__sync_ff3;
        CData/*0:0*/ tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_cdc__DOT__u_rxvalid_sync__DOT__toggle_src;
        CData/*0:0*/ tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_cdc__DOT__u_rxvalid_sync__DOT__sync_ff1;
        CData/*0:0*/ tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_cdc__DOT__u_rxvalid_sync__DOT__sync_ff2;
        CData/*0:0*/ tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_cdc__DOT__u_rxvalid_sync__DOT__sync_ff3;
        CData/*0:0*/ tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_cdc__DOT__u_tx_ready_sync__DOT__toggle_src;
        CData/*0:0*/ tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_cdc__DOT__u_tx_ready_sync__DOT__sync_ff1;
        CData/*0:0*/ tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_cdc__DOT__u_tx_ready_sync__DOT__sync_ff2;
        CData/*0:0*/ tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_cdc__DOT__u_tx_ready_sync__DOT__sync_ff3;
        CData/*1:0*/ tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_qspi_engine__DOT__phase;
        CData/*0:0*/ tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_qspi_engine__DOT__busy_r;
        CData/*0:0*/ tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_qspi_engine__DOT__timeout_hit;
        CData/*0:0*/ tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_qspi_engine__DOT__error_r;
        CData/*7:0*/ tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_qspi_engine__DOT__tx_shift_byte;
        CData/*7:0*/ tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_qspi_engine__DOT__in_byte;
        CData/*3:0*/ tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_qspi_engine__DOT__clocks_per_byte;
        CData/*3:0*/ tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_qspi_engine__DOT__byte_bit_cnt;
        CData/*0:0*/ tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_qspi_engine__DOT__byte_boundary;
        CData/*0:0*/ tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_qspi_engine__DOT__byte_boundary_d1;
    };
    struct {
        CData/*0:0*/ tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_qspi_engine__DOT____VdfgRegularize_h909204f5_0_0;
        CData/*0:0*/ tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_qspi_engine__DOT____VdfgRegularize_h909204f5_0_1;
        CData/*1:0*/ tb_xip_qspi_axi_top__DOT__u_model__DOT__phase;
        CData/*7:0*/ tb_xip_qspi_axi_top__DOT__u_model__DOT__opcode;
        CData/*7:0*/ tb_xip_qspi_axi_top__DOT__u_model__DOT__out_byte;
        CData/*7:0*/ tb_xip_qspi_axi_top__DOT__u_model__DOT__next_addr_byte;
        CData/*3:0*/ tb_xip_qspi_axi_top__DOT__u_model__DOT__nibblecnt;
        CData/*3:0*/ tb_xip_qspi_axi_top__DOT__u_model__DOT__clocks_per_byte;
        CData/*7:0*/ tb_xip_qspi_axi_top__DOT__u_model__DOT__in_byte_acc;
        CData/*0:0*/ tb_xip_qspi_axi_top__DOT__u_model__DOT__dec_dir;
        CData/*1:0*/ tb_xip_qspi_axi_top__DOT__u_model__DOT__dec_data_lines;
        CData/*1:0*/ tb_xip_qspi_axi_top__DOT__u_model__DOT__dec_addr_lines;
        CData/*7:0*/ tb_xip_qspi_axi_top__DOT__u_model__DOT__dec_dummy_cycles;
        CData/*7:0*/ tb_xip_qspi_axi_top__DOT__u_model__DOT__dec_addr_bytes;
        CData/*1:0*/ __Vfunc_tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_qspi_engine__DOT__lines_per_clock__27__lw;
        CData/*1:0*/ __Vfunc_tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_qspi_engine__DOT__lines_per_clock__28__lw;
        CData/*1:0*/ __Vfunc_tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_qspi_engine__DOT__lines_per_clock__30__lw;
        CData/*1:0*/ __Vfunc_tb_xip_qspi_axi_top__DOT__u_model__DOT__lpc__32__w;
        CData/*0:0*/ __Vdly__tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_cdc__DOT__u_abort_sync__DOT__toggle_src;
        CData/*1:0*/ __Vdly__tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_qspi_engine__DOT__phase;
        CData/*0:0*/ __Vdly__tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_qspi_engine__DOT__busy_r;
        CData/*7:0*/ __Vdly__tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_qspi_engine__DOT__in_byte;
        CData/*0:0*/ __Vdly__tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_cdc__DOT__u_done_sync__DOT__toggle_src;
        CData/*0:0*/ __Vdly__tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_cdc__DOT__u_txreq_sync__DOT__toggle_src;
        CData/*0:0*/ __Vdly__tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_cdc__DOT__u_rxvalid_sync__DOT__toggle_src;
        CData/*0:0*/ __VstlFirstIteration;
        CData/*0:0*/ __Vtrigprevexpr___TOP__tb_xip_qspi_axi_top__DOT__ACLK__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__tb_xip_qspi_axi_top__DOT__ARESETn__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__tb_xip_qspi_axi_top__DOT__qclk__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__tb_xip_qspi_axi_top__DOT__qclk_rst__0;
        CData/*0:0*/ __VactContinue;
        SData/*15:0*/ tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_qspi_engine__DOT__bit_cnt;
        SData/*15:0*/ tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_qspi_engine__DOT__phase_limit;
        SData/*15:0*/ tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_qspi_engine__DOT__addr_clocks;
        SData/*15:0*/ tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_qspi_engine__DOT__data_clocks;
        SData/*10:0*/ tb_xip_qspi_axi_top__DOT__u_model__DOT__bitcnt;
        SData/*15:0*/ __Vdly__tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_qspi_engine__DOT__bit_cnt;
        IData/*31:0*/ tb_xip_qspi_axi_top__DOT__AXI_AWADDR;
        IData/*31:0*/ tb_xip_qspi_axi_top__DOT__AXI_WDATA;
        IData/*31:0*/ tb_xip_qspi_axi_top__DOT__AXI_ARADDR;
        IData/*31:0*/ tb_xip_qspi_axi_top__DOT__XIP_ARADDR;
        IData/*31:0*/ tb_xip_qspi_axi_top__DOT__pass_count;
        IData/*31:0*/ tb_xip_qspi_axi_top__DOT__fail_count;
        IData/*31:0*/ tb_xip_qspi_axi_top__DOT__unnamedblk1__DOT__rdata;
        IData/*31:0*/ tb_xip_qspi_axi_top__DOT__unnamedblk1__DOT__xip_cfg_val;
        IData/*31:0*/ tb_xip_qspi_axi_top__DOT__unnamedblk1__DOT__unnamedblk2__DOT__ax_data;
        IData/*31:0*/ tb_xip_qspi_axi_top__DOT__unnamedblk1__DOT__unnamedblk2__DOT__xp_data;
        IData/*31:0*/ tb_xip_qspi_axi_top__DOT__unnamedblk1__DOT__unnamedblk3__DOT__xip_data;
        IData/*31:0*/ tb_xip_qspi_axi_top__DOT__unnamedblk1__DOT__unnamedblk3__DOT__abort_ctrl_cmd;
        IData/*31:0*/ tb_xip_qspi_axi_top__DOT__unnamedblk1__DOT__unnamedblk4__DOT__slow_xip_cfg;
        IData/*31:0*/ tb_xip_qspi_axi_top__DOT__unnamedblk1__DOT__unnamedblk4__DOT__xip_data;
        IData/*31:0*/ tb_xip_qspi_axi_top__DOT__unnamedblk1__DOT__unnamedblk4__DOT__status_val;
        IData/*31:0*/ tb_xip_qspi_axi_top__DOT__unnamedblk1__DOT__unnamedblk5__DOT__xip_data;
        IData/*31:0*/ tb_xip_qspi_axi_top__DOT__unnamedblk1__DOT__unnamedblk6__DOT__dual_xip_cfg;
        IData/*31:0*/ tb_xip_qspi_axi_top__DOT__unnamedblk1__DOT__unnamedblk6__DOT__xip_data;
        IData/*31:0*/ tb_xip_qspi_axi_top__DOT__unnamedblk1__DOT__unnamedblk7__DOT__quad_xip_cfg;
        IData/*31:0*/ tb_xip_qspi_axi_top__DOT__unnamedblk1__DOT__unnamedblk7__DOT__xip_data;
        IData/*31:0*/ tb_xip_qspi_axi_top__DOT__unnamedblk1__DOT__unnamedblk8__DOT__normal_xip_cfg;
        IData/*31:0*/ tb_xip_qspi_axi_top__DOT__unnamedblk1__DOT__unnamedblk8__DOT__xip_data;
        IData/*31:0*/ tb_xip_qspi_axi_top__DOT__unnamedblk1__DOT__unnamedblk8__DOT__base_addr;
        IData/*31:0*/ tb_xip_qspi_axi_top__DOT__unnamedblk1__DOT__unnamedblk8__DOT__expected;
        IData/*31:0*/ tb_xip_qspi_axi_top__DOT__unnamedblk1__DOT__unnamedblk8__DOT__unnamedblk9__DOT__i;
        IData/*31:0*/ tb_xip_qspi_axi_top__DOT__u_dut__DOT__int_m_ctrl_cmd;
        IData/*31:0*/ tb_xip_qspi_axi_top__DOT__u_dut__DOT__int_m_addr;
    };
    struct {
        IData/*31:0*/ tb_xip_qspi_axi_top__DOT__u_dut__DOT__int_m_num_bytes;
        IData/*31:0*/ tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_axi_slave__DOT__reg_ctrl_cmd;
        IData/*31:0*/ tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_axi_slave__DOT__reg_addr;
        IData/*31:0*/ tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_axi_slave__DOT__reg_num_bytes;
        IData/*31:0*/ tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_axi_slave__DOT__reg_tx_data;
        IData/*31:0*/ tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_axi_slave__DOT__reg_xip_cfg;
        IData/*31:0*/ tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_axi_slave__DOT__aw_addr_latched;
        IData/*31:0*/ tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_axi_slave__DOT__w_data_latched;
        IData/*31:0*/ tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_axi_slave__DOT__ar_addr_latched;
        IData/*31:0*/ tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_axi_slave__DOT__eff_addr;
        IData/*31:0*/ tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_axi_slave__DOT__eff_data;
        IData/*31:0*/ tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_axi_slave__DOT__unnamedblk1__DOT__i;
        IData/*31:0*/ tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_axi_slave__DOT__unnamedblk2__DOT__i;
        IData/*31:0*/ tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_axi_slave__DOT__unnamedblk3__DOT__i;
        IData/*31:0*/ tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_axi_slave__DOT__unnamedblk4__DOT__i;
        IData/*31:0*/ tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_axi_slave__DOT__unnamedblk5__DOT__i;
        IData/*31:0*/ tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_xip_slave__DOT__ar_addr_latched;
        IData/*31:0*/ tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_xip_slave__DOT__assemble_reg;
        IData/*22:0*/ tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_qspi_engine__DOT__ctrl;
        IData/*31:0*/ tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_qspi_engine__DOT__addr_lat;
        IData/*31:0*/ tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_qspi_engine__DOT__num_bytes_lat;
        IData/*31:0*/ tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_qspi_engine__DOT__timeout_cnt;
        IData/*31:0*/ tb_xip_qspi_axi_top__DOT__u_model__DOT__addr_shift;
        IData/*31:0*/ tb_xip_qspi_axi_top__DOT__u_model__DOT__unnamedblk1__DOT__i;
        IData/*31:0*/ __Vfunc_tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_qspi_engine__DOT__lines_per_clock__27__Vfuncout;
        IData/*31:0*/ __Vfunc_tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_qspi_engine__DOT__lines_per_clock__28__Vfuncout;
        IData/*31:0*/ __Vfunc_tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_qspi_engine__DOT__lines_per_clock__30__Vfuncout;
        IData/*31:0*/ __Vfunc_tb_xip_qspi_axi_top__DOT__u_model__DOT__lpc__32__Vfuncout;
        IData/*31:0*/ __VactIterCount;
        QData/*39:0*/ tb_xip_qspi_axi_top__DOT__u_dut__DOT__u_qspi_engine__DOT__out_shift;
        VlUnpacked<CData/*7:0*/, 256> tb_xip_qspi_axi_top__DOT__u_model__DOT__mem;
        VlUnpacked<CData/*0:0*/, 10> __Vm_traceActivity;
    };
    VlDelayScheduler __VdlySched;
    VlTriggerScheduler __VtrigSched_h694734a5__0;
    VlTriggerScheduler __VtrigSched_ha0c0d2c3__0;
    VlTriggerScheduler __VtrigSched_h04146f10__0;
    VlForkSync __Vfork_2__sync;
    VlForkSync __Vfork_3__sync;
    VlForkSync __Vfork_4__sync;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<6> __VactTriggered;
    VlTriggerVec<6> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vtb_xip_qspi_axi_top__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtb_xip_qspi_axi_top___024root(Vtb_xip_qspi_axi_top__Syms* symsp, const char* v__name);
    ~Vtb_xip_qspi_axi_top___024root();
    VL_UNCOPYABLE(Vtb_xip_qspi_axi_top___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
