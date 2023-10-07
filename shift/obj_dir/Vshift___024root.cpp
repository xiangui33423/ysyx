// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vshift.h for the primary calling header

#include "Vshift___024root.h"
#include "Vshift__Syms.h"

//==========

VL_INLINE_OPT void Vshift___024root___sequent__TOP__1(Vshift___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vshift__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vshift___024root___sequent__TOP__1\n"); );
    // Variables
    CData/*7:0*/ __Vdly__shift__DOT__Q;
    // Body
    __Vdly__shift__DOT__Q = vlSelf->shift__DOT__Q;
    if ((1U == (IData)(vlSelf->op))) {
        __Vdly__shift__DOT__Q = vlSelf->din;
    } else if ((2U == (IData)(vlSelf->op))) {
        __Vdly__shift__DOT__Q = (0x7fU & ((IData)(vlSelf->shift__DOT__Q) 
                                          >> 1U));
    } else if ((3U == (IData)(vlSelf->op))) {
        __Vdly__shift__DOT__Q = (0xfeU & ((IData)(vlSelf->shift__DOT__Q) 
                                          << 1U));
    } else if ((4U == (IData)(vlSelf->op))) {
        __Vdly__shift__DOT__Q = ((0x80U & (IData)(vlSelf->shift__DOT__Q)) 
                                 | (0x7fU & ((IData)(vlSelf->shift__DOT__Q) 
                                             >> 1U)));
    } else if ((6U == (IData)(vlSelf->op))) {
        __Vdly__shift__DOT__Q = ((0x80U & ((IData)(vlSelf->shift__DOT__Q) 
                                           << 7U)) 
                                 | (0x7fU & ((IData)(vlSelf->shift__DOT__Q) 
                                             >> 1U)));
    } else if ((7U == (IData)(vlSelf->op))) {
        __Vdly__shift__DOT__Q = ((0xfeU & ((IData)(vlSelf->shift__DOT__Q) 
                                           << 1U)) 
                                 | (1U & ((IData)(vlSelf->shift__DOT__Q) 
                                          >> 7U)));
    } else if ((5U == (IData)(vlSelf->op))) {
        __Vdly__shift__DOT__Q = ((0x80U & ((IData)(vlSelf->din) 
                                           << 7U)) 
                                 | (0x7fU & ((IData)(vlSelf->shift__DOT__Q) 
                                             >> 1U)));
    }
    vlSelf->shift__DOT__Q = __Vdly__shift__DOT__Q;
}

VL_INLINE_OPT void Vshift___024root___settle__TOP__2(Vshift___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vshift__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vshift___024root___settle__TOP__2\n"); );
    // Body
    vlSelf->dout = (((IData)(vlSelf->rst_n) | (0U != (IData)(vlSelf->op)))
                     ? (0xffU & (IData)(vlSelf->shift__DOT__Q))
                     : 0U);
}

void Vshift___024root___eval(Vshift___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vshift__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vshift___024root___eval\n"); );
    // Body
    if ((((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk))) 
         | ((~ (IData)(vlSelf->rst_n)) & (IData)(vlSelf->__Vclklast__TOP__rst_n)))) {
        Vshift___024root___sequent__TOP__1(vlSelf);
    }
    Vshift___024root___settle__TOP__2(vlSelf);
    // Final
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
    vlSelf->__Vclklast__TOP__rst_n = vlSelf->rst_n;
}

QData Vshift___024root___change_request_1(Vshift___024root* vlSelf);

VL_INLINE_OPT QData Vshift___024root___change_request(Vshift___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vshift__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vshift___024root___change_request\n"); );
    // Body
    return (Vshift___024root___change_request_1(vlSelf));
}

VL_INLINE_OPT QData Vshift___024root___change_request_1(Vshift___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vshift__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vshift___024root___change_request_1\n"); );
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void Vshift___024root___eval_debug_assertions(Vshift___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vshift__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vshift___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->rst_n & 0xfeU))) {
        Verilated::overWidthError("rst_n");}
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelf->op & 0xf8U))) {
        Verilated::overWidthError("op");}
}
#endif  // VL_DEBUG
