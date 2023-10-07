// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vadder.h for the primary calling header

#include "Vadder___024root.h"
#include "Vadder__Syms.h"

//==========

VL_INLINE_OPT void Vadder___024root___combo__TOP__1(Vadder___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vadder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vadder___024root___combo__TOP__1\n"); );
    // Body
    vlSelf->adder__DOT__t_add_op = (0xfU & ((- (IData)((IData)(vlSelf->op))) 
                                            ^ (IData)(vlSelf->B)));
    vlSelf->carry = (1U & ((((IData)(vlSelf->A) + (IData)(vlSelf->adder__DOT__t_add_op)) 
                            + (IData)(vlSelf->op)) 
                           >> 4U));
    vlSelf->result = (0xfU & (((IData)(vlSelf->A) + (IData)(vlSelf->adder__DOT__t_add_op)) 
                              + (IData)(vlSelf->op)));
    vlSelf->zero = (1U & (~ (IData)((0U != (IData)(vlSelf->result)))));
    vlSelf->overflow = (((1U & ((IData)(vlSelf->A) 
                                >> 3U)) == (1U & ((IData)(vlSelf->adder__DOT__t_add_op) 
                                                  >> 3U))) 
                        & ((1U & ((IData)(vlSelf->result) 
                                  >> 3U)) != (1U & 
                                              ((IData)(vlSelf->A) 
                                               >> 3U))));
}

void Vadder___024root___eval(Vadder___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vadder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vadder___024root___eval\n"); );
    // Body
    Vadder___024root___combo__TOP__1(vlSelf);
}

QData Vadder___024root___change_request_1(Vadder___024root* vlSelf);

VL_INLINE_OPT QData Vadder___024root___change_request(Vadder___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vadder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vadder___024root___change_request\n"); );
    // Body
    return (Vadder___024root___change_request_1(vlSelf));
}

VL_INLINE_OPT QData Vadder___024root___change_request_1(Vadder___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vadder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vadder___024root___change_request_1\n"); );
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void Vadder___024root___eval_debug_assertions(Vadder___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vadder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vadder___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->A & 0xf0U))) {
        Verilated::overWidthError("A");}
    if (VL_UNLIKELY((vlSelf->B & 0xf0U))) {
        Verilated::overWidthError("B");}
    if (VL_UNLIKELY((vlSelf->op & 0xfeU))) {
        Verilated::overWidthError("op");}
}
#endif  // VL_DEBUG
