// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Valu.h for the primary calling header

#include "Valu___024root.h"
#include "Valu__Syms.h"

//==========

VL_INLINE_OPT void Valu___024root___combo__TOP__1(Valu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Valu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu___024root___combo__TOP__1\n"); );
    // Body
    vlSelf->alu__DOT__add = (0xfU & ((IData)(vlSelf->A) 
                                     + (IData)(vlSelf->B)));
    vlSelf->alu__DOT__res = (0xfU & ((IData)(1U) + 
                                     ((IData)(vlSelf->A) 
                                      + (~ (IData)(vlSelf->B)))));
    vlSelf->out = (0xfU & ((4U & (IData)(vlSelf->op))
                            ? ((2U & (IData)(vlSelf->op))
                                ? ((1U & (IData)(vlSelf->op))
                                    ? ((0U != (IData)(vlSelf->alu__DOT__res))
                                        ? 0U : 1U) : 
                                   ((8U & (IData)(vlSelf->alu__DOT__res))
                                     ? 1U : 0U)) : 
                               ((1U & (IData)(vlSelf->op))
                                 ? ((IData)(vlSelf->A) 
                                    ^ (IData)(vlSelf->B))
                                 : ((IData)(vlSelf->A) 
                                    | (IData)(vlSelf->B))))
                            : ((2U & (IData)(vlSelf->op))
                                ? ((1U & (IData)(vlSelf->op))
                                    ? ((IData)(vlSelf->A) 
                                       & (IData)(vlSelf->B))
                                    : (~ (IData)(vlSelf->A)))
                                : ((1U & (IData)(vlSelf->op))
                                    ? (IData)(vlSelf->alu__DOT__res)
                                    : (IData)(vlSelf->alu__DOT__add)))));
}

void Valu___024root___eval(Valu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Valu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu___024root___eval\n"); );
    // Body
    Valu___024root___combo__TOP__1(vlSelf);
    vlSelf->__Vm_traceActivity[1U] = 1U;
}

QData Valu___024root___change_request_1(Valu___024root* vlSelf);

VL_INLINE_OPT QData Valu___024root___change_request(Valu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Valu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu___024root___change_request\n"); );
    // Body
    return (Valu___024root___change_request_1(vlSelf));
}

VL_INLINE_OPT QData Valu___024root___change_request_1(Valu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Valu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu___024root___change_request_1\n"); );
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void Valu___024root___eval_debug_assertions(Valu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Valu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->A & 0xf0U))) {
        Verilated::overWidthError("A");}
    if (VL_UNLIKELY((vlSelf->B & 0xf0U))) {
        Verilated::overWidthError("B");}
    if (VL_UNLIKELY((vlSelf->op & 0xf8U))) {
        Verilated::overWidthError("op");}
}
#endif  // VL_DEBUG
