// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vkeyboard.h for the primary calling header

#include "Vkeyboard___024root.h"
#include "Vkeyboard__Syms.h"

//==========


void Vkeyboard___024root___ctor_var_reset(Vkeyboard___024root* vlSelf);

Vkeyboard___024root::Vkeyboard___024root(const char* _vcname__)
    : VerilatedModule(_vcname__)
 {
    // Reset structure values
    Vkeyboard___024root___ctor_var_reset(this);
}

void Vkeyboard___024root::__Vconfigure(Vkeyboard__Syms* _vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->vlSymsp = _vlSymsp;
}

Vkeyboard___024root::~Vkeyboard___024root() {
}

void Vkeyboard___024root___settle__TOP__3(Vkeyboard___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vkeyboard__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vkeyboard___024root___settle__TOP__3\n"); );
    // Body
    vlSelf->out = vlSelf->keyboard__DOT__data;
}

void Vkeyboard___024root___eval_initial(Vkeyboard___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vkeyboard__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vkeyboard___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
}

void Vkeyboard___024root___eval_settle(Vkeyboard___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vkeyboard__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vkeyboard___024root___eval_settle\n"); );
    // Body
    Vkeyboard___024root___settle__TOP__3(vlSelf);
}

void Vkeyboard___024root___final(Vkeyboard___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vkeyboard__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vkeyboard___024root___final\n"); );
}

void Vkeyboard___024root___ctor_var_reset(Vkeyboard___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vkeyboard__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vkeyboard___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->rst_n = VL_RAND_RESET_I(1);
    vlSelf->ps2_data = VL_RAND_RESET_I(1);
    vlSelf->ps2_clk = VL_RAND_RESET_I(1);
    vlSelf->out = VL_RAND_RESET_I(8);
    vlSelf->en = VL_RAND_RESET_I(1);
    vlSelf->keyboard__DOT__ready = VL_RAND_RESET_I(1);
    vlSelf->keyboard__DOT__data = VL_RAND_RESET_I(8);
    vlSelf->keyboard__DOT__buffer = VL_RAND_RESET_I(10);
    vlSelf->keyboard__DOT__count = VL_RAND_RESET_I(4);
    vlSelf->keyboard__DOT__ps2_clk_sync = VL_RAND_RESET_I(3);
    vlSelf->keyboard__DOT____Vlvbound1 = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }
}
