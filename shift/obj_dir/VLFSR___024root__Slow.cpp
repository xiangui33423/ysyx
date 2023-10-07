// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VLFSR.h for the primary calling header

#include "VLFSR___024root.h"
#include "VLFSR__Syms.h"

//==========


void VLFSR___024root___ctor_var_reset(VLFSR___024root* vlSelf);

VLFSR___024root::VLFSR___024root(const char* _vcname__)
    : VerilatedModule(_vcname__)
 {
    // Reset structure values
    VLFSR___024root___ctor_var_reset(this);
}

void VLFSR___024root::__Vconfigure(VLFSR__Syms* _vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->vlSymsp = _vlSymsp;
}

VLFSR___024root::~VLFSR___024root() {
}

void VLFSR___024root___settle__TOP__2(VLFSR___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VLFSR__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VLFSR___024root___settle__TOP__2\n"); );
    // Body
    vlSelf->LFSR__DOT__xor_bit = (1U & VL_REDXOR_32(
                                                    (0x1dU 
                                                     & (IData)(vlSelf->LFSR__DOT__cnt))));
    vlSelf->dout = vlSelf->LFSR__DOT__cnt;
    vlSelf->dout_vld = ((IData)(vlSelf->LFSR__DOT__start_r) 
                        & ((IData)(vlSelf->LFSR__DOT__cnt) 
                           == (IData)(vlSelf->seed)));
}

void VLFSR___024root___eval_initial(VLFSR___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VLFSR__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VLFSR___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
    vlSelf->__Vclklast__TOP__rst_n = vlSelf->rst_n;
}

void VLFSR___024root___eval_settle(VLFSR___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VLFSR__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VLFSR___024root___eval_settle\n"); );
    // Body
    VLFSR___024root___settle__TOP__2(vlSelf);
}

void VLFSR___024root___final(VLFSR___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VLFSR__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VLFSR___024root___final\n"); );
}

void VLFSR___024root___ctor_var_reset(VLFSR___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VLFSR__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VLFSR___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->rst_n = VL_RAND_RESET_I(1);
    vlSelf->seed = VL_RAND_RESET_I(8);
    vlSelf->start = VL_RAND_RESET_I(1);
    vlSelf->dout = VL_RAND_RESET_I(8);
    vlSelf->dout_vld = VL_RAND_RESET_I(1);
    vlSelf->LFSR__DOT__cnt = VL_RAND_RESET_I(8);
    vlSelf->LFSR__DOT__start_r = VL_RAND_RESET_I(1);
    vlSelf->LFSR__DOT__xor_bit = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }
}
