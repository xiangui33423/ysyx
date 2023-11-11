// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vysyx_23060096_RegisterFile.h for the primary calling header

#include "Vysyx_23060096_RegisterFile___024root.h"
#include "Vysyx_23060096_RegisterFile__Syms.h"

//==========


void Vysyx_23060096_RegisterFile___024root___ctor_var_reset(Vysyx_23060096_RegisterFile___024root* vlSelf);

Vysyx_23060096_RegisterFile___024root::Vysyx_23060096_RegisterFile___024root(const char* _vcname__)
    : VerilatedModule(_vcname__)
 {
    // Reset structure values
    Vysyx_23060096_RegisterFile___024root___ctor_var_reset(this);
}

void Vysyx_23060096_RegisterFile___024root::__Vconfigure(Vysyx_23060096_RegisterFile__Syms* _vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->vlSymsp = _vlSymsp;
}

Vysyx_23060096_RegisterFile___024root::~Vysyx_23060096_RegisterFile___024root() {
}

void Vysyx_23060096_RegisterFile___024root___eval_initial(Vysyx_23060096_RegisterFile___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_23060096_RegisterFile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_23060096_RegisterFile___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
}

void Vysyx_23060096_RegisterFile___024root___settle__TOP__2(Vysyx_23060096_RegisterFile___024root* vlSelf);

void Vysyx_23060096_RegisterFile___024root___eval_settle(Vysyx_23060096_RegisterFile___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_23060096_RegisterFile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_23060096_RegisterFile___024root___eval_settle\n"); );
    // Body
    Vysyx_23060096_RegisterFile___024root___settle__TOP__2(vlSelf);
}

void Vysyx_23060096_RegisterFile___024root___final(Vysyx_23060096_RegisterFile___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_23060096_RegisterFile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_23060096_RegisterFile___024root___final\n"); );
}

void Vysyx_23060096_RegisterFile___024root___ctor_var_reset(Vysyx_23060096_RegisterFile___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_23060096_RegisterFile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_23060096_RegisterFile___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clk = 0;
    vlSelf->rstn = 0;
    vlSelf->wdata = 0;
    vlSelf->Ra = 0;
    vlSelf->Rb = 0;
    vlSelf->waddr = 0;
    vlSelf->w_en = 0;
    vlSelf->busA = 0;
    vlSelf->busB = 0;
    for (int __Vi0=0; __Vi0<32; ++__Vi0) {
        vlSelf->ysyx_23060096_RegisterFile__DOT__rf[__Vi0] = 0;
    }
    vlSelf->ysyx_23060096_RegisterFile__DOT__i = 0;
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
