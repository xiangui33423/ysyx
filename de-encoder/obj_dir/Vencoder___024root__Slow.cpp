// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vencoder.h for the primary calling header

#include "Vencoder___024root.h"
#include "Vencoder__Syms.h"

//==========


void Vencoder___024root___ctor_var_reset(Vencoder___024root* vlSelf);

Vencoder___024root::Vencoder___024root(const char* _vcname__)
    : VerilatedModule(_vcname__)
 {
    // Reset structure values
    Vencoder___024root___ctor_var_reset(this);
}

void Vencoder___024root::__Vconfigure(Vencoder__Syms* _vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->vlSymsp = _vlSymsp;
}

Vencoder___024root::~Vencoder___024root() {
}

void Vencoder___024root___eval_initial(Vencoder___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vencoder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vencoder___024root___eval_initial\n"); );
}

void Vencoder___024root___combo__TOP__1(Vencoder___024root* vlSelf);

void Vencoder___024root___eval_settle(Vencoder___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vencoder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vencoder___024root___eval_settle\n"); );
    // Body
    Vencoder___024root___combo__TOP__1(vlSelf);
}

void Vencoder___024root___final(Vencoder___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vencoder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vencoder___024root___final\n"); );
}

void Vencoder___024root___ctor_var_reset(Vencoder___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vencoder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vencoder___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->x = VL_RAND_RESET_I(8);
    vlSelf->en = VL_RAND_RESET_I(1);
    vlSelf->y = VL_RAND_RESET_I(3);
    vlSelf->tur = VL_RAND_RESET_I(1);
    vlSelf->encoder__DOT__i = VL_RAND_RESET_I(32);
}
