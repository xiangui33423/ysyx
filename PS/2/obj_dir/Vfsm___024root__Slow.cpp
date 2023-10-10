// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vfsm.h for the primary calling header

#include "Vfsm___024root.h"
#include "Vfsm__Syms.h"

//==========


void Vfsm___024root___ctor_var_reset(Vfsm___024root* vlSelf);

Vfsm___024root::Vfsm___024root(const char* _vcname__)
    : VerilatedModule(_vcname__)
 {
    // Reset structure values
    Vfsm___024root___ctor_var_reset(this);
}

void Vfsm___024root::__Vconfigure(Vfsm__Syms* _vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->vlSymsp = _vlSymsp;
}

Vfsm___024root::~Vfsm___024root() {
}

void Vfsm___024root___settle__TOP__2(Vfsm___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vfsm__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfsm___024root___settle__TOP__2\n"); );
    // Body
    vlSelf->state = vlSelf->fsm__DOT__current_state;
    vlSelf->fsm__DOT__next_state = ((4U & (IData)(vlSelf->fsm__DOT__current_state))
                                     ? 0U : ((2U & (IData)(vlSelf->fsm__DOT__current_state))
                                              ? ((1U 
                                                  & (IData)(vlSelf->fsm__DOT__current_state))
                                                  ? 0U
                                                  : 
                                                 ((IData)(vlSelf->en)
                                                   ? 4U
                                                   : 2U))
                                              : ((1U 
                                                  & (IData)(vlSelf->fsm__DOT__current_state))
                                                  ? 
                                                 ((0xf0U 
                                                   == (IData)(vlSelf->data))
                                                   ? 2U
                                                   : 1U)
                                                  : 
                                                 (((0xfU 
                                                    != (IData)(vlSelf->data)) 
                                                   & (IData)(vlSelf->en))
                                                   ? 1U
                                                   : 0U))));
}

void Vfsm___024root___eval_initial(Vfsm___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vfsm__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfsm___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
    vlSelf->__Vclklast__TOP__rst_n = vlSelf->rst_n;
}

void Vfsm___024root___eval_settle(Vfsm___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vfsm__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfsm___024root___eval_settle\n"); );
    // Body
    Vfsm___024root___settle__TOP__2(vlSelf);
}

void Vfsm___024root___final(Vfsm___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vfsm__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfsm___024root___final\n"); );
}

void Vfsm___024root___ctor_var_reset(Vfsm___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vfsm__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfsm___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->rst_n = VL_RAND_RESET_I(1);
    vlSelf->data = VL_RAND_RESET_I(8);
    vlSelf->en = VL_RAND_RESET_I(1);
    vlSelf->state = VL_RAND_RESET_I(3);
    vlSelf->fsm__DOT__next_state = VL_RAND_RESET_I(3);
    vlSelf->fsm__DOT__current_state = VL_RAND_RESET_I(3);
}
