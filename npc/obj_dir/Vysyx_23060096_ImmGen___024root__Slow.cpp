// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vysyx_23060096_ImmGen.h for the primary calling header

#include "Vysyx_23060096_ImmGen___024root.h"
#include "Vysyx_23060096_ImmGen__Syms.h"

//==========


void Vysyx_23060096_ImmGen___024root___ctor_var_reset(Vysyx_23060096_ImmGen___024root* vlSelf);

Vysyx_23060096_ImmGen___024root::Vysyx_23060096_ImmGen___024root(const char* _vcname__)
    : VerilatedModule(_vcname__)
 {
    // Reset structure values
    Vysyx_23060096_ImmGen___024root___ctor_var_reset(this);
}

void Vysyx_23060096_ImmGen___024root::__Vconfigure(Vysyx_23060096_ImmGen__Syms* _vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->vlSymsp = _vlSymsp;
}

Vysyx_23060096_ImmGen___024root::~Vysyx_23060096_ImmGen___024root() {
}

void Vysyx_23060096_ImmGen___024root___eval_initial(Vysyx_23060096_ImmGen___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_23060096_ImmGen__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_23060096_ImmGen___024root___eval_initial\n"); );
}

void Vysyx_23060096_ImmGen___024root___combo__TOP__1(Vysyx_23060096_ImmGen___024root* vlSelf);

void Vysyx_23060096_ImmGen___024root___eval_settle(Vysyx_23060096_ImmGen___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_23060096_ImmGen__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_23060096_ImmGen___024root___eval_settle\n"); );
    // Body
    Vysyx_23060096_ImmGen___024root___combo__TOP__1(vlSelf);
}

void Vysyx_23060096_ImmGen___024root___final(Vysyx_23060096_ImmGen___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_23060096_ImmGen__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_23060096_ImmGen___024root___final\n"); );
}

void Vysyx_23060096_ImmGen___024root___ctor_var_reset(Vysyx_23060096_ImmGen___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_23060096_ImmGen__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_23060096_ImmGen___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clk = 0;
    vlSelf->rstn = 0;
    vlSelf->inst = 0;
    vlSelf->ExtOP = 0;
    vlSelf->imm = 0;
    vlSelf->ysyx_23060096_ImmGen__DOT__immI = 0;
}
