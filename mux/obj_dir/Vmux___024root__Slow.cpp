// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmux.h for the primary calling header

#include "Vmux___024root.h"
#include "Vmux__Syms.h"

//==========


void Vmux___024root___ctor_var_reset(Vmux___024root* vlSelf);

Vmux___024root::Vmux___024root(const char* _vcname__)
    : VerilatedModule(_vcname__)
 {
    // Reset structure values
    Vmux___024root___ctor_var_reset(this);
}

void Vmux___024root::__Vconfigure(Vmux__Syms* _vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->vlSymsp = _vlSymsp;
}

Vmux___024root::~Vmux___024root() {
}

void Vmux___024root___eval_initial(Vmux___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmux__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmux___024root___eval_initial\n"); );
}

void Vmux___024root___combo__TOP__1(Vmux___024root* vlSelf);

void Vmux___024root___eval_settle(Vmux___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmux__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmux___024root___eval_settle\n"); );
    // Body
    Vmux___024root___combo__TOP__1(vlSelf);
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
}

void Vmux___024root___final(Vmux___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmux__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmux___024root___final\n"); );
}

void Vmux___024root___ctor_var_reset(Vmux___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmux__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmux___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->A = VL_RAND_RESET_I(2);
    vlSelf->B = VL_RAND_RESET_I(2);
    vlSelf->C = VL_RAND_RESET_I(2);
    vlSelf->D = VL_RAND_RESET_I(2);
    vlSelf->Y = VL_RAND_RESET_I(2);
    vlSelf->out = VL_RAND_RESET_I(2);
    vlSelf->mux__DOT__lut = VL_RAND_RESET_I(16);
    for (int __Vi0=0; __Vi0<4; ++__Vi0) {
        vlSelf->mux__DOT__pair_list[__Vi0] = VL_RAND_RESET_I(4);
    }
    for (int __Vi0=0; __Vi0<4; ++__Vi0) {
        vlSelf->mux__DOT__key_list[__Vi0] = VL_RAND_RESET_I(2);
    }
    for (int __Vi0=0; __Vi0<4; ++__Vi0) {
        vlSelf->mux__DOT__data_list[__Vi0] = VL_RAND_RESET_I(2);
    }
    vlSelf->mux__DOT__lut_out = VL_RAND_RESET_I(2);
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }
}
