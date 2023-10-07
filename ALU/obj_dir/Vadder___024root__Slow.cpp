// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vadder.h for the primary calling header

#include "Vadder___024root.h"
#include "Vadder__Syms.h"

//==========


void Vadder___024root___ctor_var_reset(Vadder___024root* vlSelf);

Vadder___024root::Vadder___024root(const char* _vcname__)
    : VerilatedModule(_vcname__)
 {
    // Reset structure values
    Vadder___024root___ctor_var_reset(this);
}

void Vadder___024root::__Vconfigure(Vadder__Syms* _vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->vlSymsp = _vlSymsp;
}

Vadder___024root::~Vadder___024root() {
}

void Vadder___024root___eval_initial(Vadder___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vadder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vadder___024root___eval_initial\n"); );
}

void Vadder___024root___combo__TOP__1(Vadder___024root* vlSelf);

void Vadder___024root___eval_settle(Vadder___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vadder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vadder___024root___eval_settle\n"); );
    // Body
    Vadder___024root___combo__TOP__1(vlSelf);
}

void Vadder___024root___final(Vadder___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vadder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vadder___024root___final\n"); );
}

void Vadder___024root___ctor_var_reset(Vadder___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vadder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vadder___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->A = VL_RAND_RESET_I(4);
    vlSelf->B = VL_RAND_RESET_I(4);
    vlSelf->op = VL_RAND_RESET_I(1);
    vlSelf->result = VL_RAND_RESET_I(4);
    vlSelf->zero = VL_RAND_RESET_I(1);
    vlSelf->overflow = VL_RAND_RESET_I(1);
    vlSelf->carry = VL_RAND_RESET_I(1);
    vlSelf->adder__DOT__t_add_op = VL_RAND_RESET_I(4);
}
