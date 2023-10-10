// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vfsm.h for the primary calling header

#include "Vfsm___024root.h"
#include "Vfsm__Syms.h"

//==========

VL_INLINE_OPT void Vfsm___024root___sequent__TOP__1(Vfsm___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vfsm__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfsm___024root___sequent__TOP__1\n"); );
    // Body
    vlSelf->fsm__DOT__current_state = ((IData)(vlSelf->rst_n)
                                        ? (IData)(vlSelf->fsm__DOT__next_state)
                                        : 0U);
    vlSelf->state = vlSelf->fsm__DOT__current_state;
}

VL_INLINE_OPT void Vfsm___024root___combo__TOP__3(Vfsm___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vfsm__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfsm___024root___combo__TOP__3\n"); );
    // Body
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

void Vfsm___024root___eval(Vfsm___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vfsm__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfsm___024root___eval\n"); );
    // Body
    if ((((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk))) 
         | ((~ (IData)(vlSelf->rst_n)) & (IData)(vlSelf->__Vclklast__TOP__rst_n)))) {
        Vfsm___024root___sequent__TOP__1(vlSelf);
    }
    Vfsm___024root___combo__TOP__3(vlSelf);
    // Final
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
    vlSelf->__Vclklast__TOP__rst_n = vlSelf->rst_n;
}

QData Vfsm___024root___change_request_1(Vfsm___024root* vlSelf);

VL_INLINE_OPT QData Vfsm___024root___change_request(Vfsm___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vfsm__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfsm___024root___change_request\n"); );
    // Body
    return (Vfsm___024root___change_request_1(vlSelf));
}

VL_INLINE_OPT QData Vfsm___024root___change_request_1(Vfsm___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vfsm__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfsm___024root___change_request_1\n"); );
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void Vfsm___024root___eval_debug_assertions(Vfsm___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vfsm__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfsm___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelf->rst_n & 0xfeU))) {
        Verilated::overWidthError("rst_n");}
    if (VL_UNLIKELY((vlSelf->en & 0xfeU))) {
        Verilated::overWidthError("en");}
}
#endif  // VL_DEBUG
