// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vdecoder.h for the primary calling header

#include "Vdecoder___024root.h"
#include "Vdecoder__Syms.h"

//==========


void Vdecoder___024root___ctor_var_reset(Vdecoder___024root* vlSelf);

Vdecoder___024root::Vdecoder___024root(const char* _vcname__)
    : VerilatedModule(_vcname__)
 {
    // Reset structure values
    Vdecoder___024root___ctor_var_reset(this);
}

void Vdecoder___024root::__Vconfigure(Vdecoder__Syms* _vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->vlSymsp = _vlSymsp;
}

Vdecoder___024root::~Vdecoder___024root() {
}

void Vdecoder___024root___eval_initial(Vdecoder___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdecoder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdecoder___024root___eval_initial\n"); );
}

void Vdecoder___024root___combo__TOP__1(Vdecoder___024root* vlSelf);

void Vdecoder___024root___eval_settle(Vdecoder___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdecoder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdecoder___024root___eval_settle\n"); );
    // Body
    Vdecoder___024root___combo__TOP__1(vlSelf);
}

void Vdecoder___024root___final(Vdecoder___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdecoder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdecoder___024root___final\n"); );
}

void Vdecoder___024root___ctor_var_reset(Vdecoder___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdecoder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdecoder___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->x = VL_RAND_RESET_I(3);
    vlSelf->en = VL_RAND_RESET_I(1);
    vlSelf->y = VL_RAND_RESET_I(7);
}
