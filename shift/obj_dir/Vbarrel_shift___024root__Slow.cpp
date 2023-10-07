// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vbarrel_shift.h for the primary calling header

#include "Vbarrel_shift___024root.h"
#include "Vbarrel_shift__Syms.h"

//==========


void Vbarrel_shift___024root___ctor_var_reset(Vbarrel_shift___024root* vlSelf);

Vbarrel_shift___024root::Vbarrel_shift___024root(const char* _vcname__)
    : VerilatedModule(_vcname__)
 {
    // Reset structure values
    Vbarrel_shift___024root___ctor_var_reset(this);
}

void Vbarrel_shift___024root::__Vconfigure(Vbarrel_shift__Syms* _vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->vlSymsp = _vlSymsp;
}

Vbarrel_shift___024root::~Vbarrel_shift___024root() {
}

void Vbarrel_shift___024root___eval_initial(Vbarrel_shift___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vbarrel_shift__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbarrel_shift___024root___eval_initial\n"); );
}

void Vbarrel_shift___024root___combo__TOP__1(Vbarrel_shift___024root* vlSelf);

void Vbarrel_shift___024root___eval_settle(Vbarrel_shift___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vbarrel_shift__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbarrel_shift___024root___eval_settle\n"); );
    // Body
    Vbarrel_shift___024root___combo__TOP__1(vlSelf);
}

void Vbarrel_shift___024root___final(Vbarrel_shift___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vbarrel_shift__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbarrel_shift___024root___final\n"); );
}

void Vbarrel_shift___024root___ctor_var_reset(Vbarrel_shift___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vbarrel_shift__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbarrel_shift___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->din = VL_RAND_RESET_I(8);
    vlSelf->shamt = VL_RAND_RESET_I(3);
    vlSelf->dir = VL_RAND_RESET_I(1);
    vlSelf->op = VL_RAND_RESET_I(1);
    vlSelf->dout = VL_RAND_RESET_I(8);
    vlSelf->barrel_shift__DOT__Q = VL_RAND_RESET_I(8);
}
