// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vshift.h for the primary calling header

#include "Vshift___024root.h"
#include "Vshift__Syms.h"

//==========


void Vshift___024root___ctor_var_reset(Vshift___024root* vlSelf);

Vshift___024root::Vshift___024root(const char* _vcname__)
    : VerilatedModule(_vcname__)
 {
    // Reset structure values
    Vshift___024root___ctor_var_reset(this);
}

void Vshift___024root::__Vconfigure(Vshift__Syms* _vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->vlSymsp = _vlSymsp;
}

Vshift___024root::~Vshift___024root() {
}

void Vshift___024root___eval_initial(Vshift___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vshift__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vshift___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
    vlSelf->__Vclklast__TOP__rst_n = vlSelf->rst_n;
}

void Vshift___024root___settle__TOP__2(Vshift___024root* vlSelf);

void Vshift___024root___eval_settle(Vshift___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vshift__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vshift___024root___eval_settle\n"); );
    // Body
    Vshift___024root___settle__TOP__2(vlSelf);
}

void Vshift___024root___final(Vshift___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vshift__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vshift___024root___final\n"); );
}

void Vshift___024root___ctor_var_reset(Vshift___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vshift__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vshift___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->din = VL_RAND_RESET_I(8);
    vlSelf->rst_n = VL_RAND_RESET_I(1);
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->op = VL_RAND_RESET_I(3);
    vlSelf->dout = VL_RAND_RESET_I(8);
    vlSelf->shift__DOT__Q = VL_RAND_RESET_I(8);
    vlSelf->shift__DOT__i = VL_RAND_RESET_I(32);
}
