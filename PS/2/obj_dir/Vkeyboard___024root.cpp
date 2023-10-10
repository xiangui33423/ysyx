// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vkeyboard.h for the primary calling header

#include "Vkeyboard___024root.h"
#include "Vkeyboard__Syms.h"

//==========

VL_INLINE_OPT void Vkeyboard___024root___sequent__TOP__1(Vkeyboard___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vkeyboard__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vkeyboard___024root___sequent__TOP__1\n"); );
    // Body
    vlSelf->keyboard__DOT__ps2_clk_sync = ((6U & ((IData)(vlSelf->keyboard__DOT__ps2_clk_sync) 
                                                  << 1U)) 
                                           | (IData)(vlSelf->ps2_clk));
}

VL_INLINE_OPT void Vkeyboard___024root___sequent__TOP__2(Vkeyboard___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vkeyboard__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vkeyboard___024root___sequent__TOP__2\n"); );
    // Variables
    CData/*0:0*/ __Vdly__en;
    CData/*3:0*/ __Vdly__keyboard__DOT__count;
    // Body
    __Vdly__keyboard__DOT__count = vlSelf->keyboard__DOT__count;
    __Vdly__en = vlSelf->en;
    if (vlSelf->rst_n) {
        if ((IData)((4U == (6U & (IData)(vlSelf->keyboard__DOT__ps2_clk_sync))))) {
            if ((0xaU == (IData)(vlSelf->keyboard__DOT__count))) {
                if ((((~ (IData)(vlSelf->keyboard__DOT__buffer)) 
                      & (IData)(vlSelf->ps2_data)) 
                     & VL_REDXOR_32((0x1ffU & ((IData)(vlSelf->keyboard__DOT__buffer) 
                                               >> 1U))))) {
                    vlSelf->keyboard__DOT__data = (0xffU 
                                                   & ((IData)(vlSelf->keyboard__DOT__buffer) 
                                                      >> 1U));
                    __Vdly__en = 1U;
                }
                __Vdly__keyboard__DOT__count = 0U;
            } else {
                vlSelf->keyboard__DOT____Vlvbound1 
                    = vlSelf->ps2_data;
                if ((9U >= (IData)(vlSelf->keyboard__DOT__count))) {
                    vlSelf->keyboard__DOT__buffer = 
                        (((~ ((IData)(1U) << (IData)(vlSelf->keyboard__DOT__count))) 
                          & (IData)(vlSelf->keyboard__DOT__buffer)) 
                         | (0x3ffU & ((IData)(vlSelf->keyboard__DOT____Vlvbound1) 
                                      << (IData)(vlSelf->keyboard__DOT__count))));
                }
                __Vdly__keyboard__DOT__count = (0xfU 
                                                & ((IData)(1U) 
                                                   + (IData)(vlSelf->keyboard__DOT__count)));
            }
        } else if (vlSelf->en) {
            vlSelf->keyboard__DOT__buffer = 0U;
            __Vdly__en = 0U;
        }
    } else {
        vlSelf->keyboard__DOT__buffer = 0U;
        __Vdly__keyboard__DOT__count = 0U;
        __Vdly__en = 0U;
    }
    vlSelf->en = __Vdly__en;
    vlSelf->keyboard__DOT__count = __Vdly__keyboard__DOT__count;
    vlSelf->out = vlSelf->keyboard__DOT__data;
}

void Vkeyboard___024root___eval(Vkeyboard___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vkeyboard__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vkeyboard___024root___eval\n"); );
    // Body
    if (((~ (IData)(vlSelf->clk)) & (IData)(vlSelf->__Vclklast__TOP__clk))) {
        Vkeyboard___024root___sequent__TOP__1(vlSelf);
    }
    if (((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk)))) {
        Vkeyboard___024root___sequent__TOP__2(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
    // Final
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
}

QData Vkeyboard___024root___change_request_1(Vkeyboard___024root* vlSelf);

VL_INLINE_OPT QData Vkeyboard___024root___change_request(Vkeyboard___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vkeyboard__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vkeyboard___024root___change_request\n"); );
    // Body
    return (Vkeyboard___024root___change_request_1(vlSelf));
}

VL_INLINE_OPT QData Vkeyboard___024root___change_request_1(Vkeyboard___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vkeyboard__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vkeyboard___024root___change_request_1\n"); );
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void Vkeyboard___024root___eval_debug_assertions(Vkeyboard___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vkeyboard__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vkeyboard___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelf->rst_n & 0xfeU))) {
        Verilated::overWidthError("rst_n");}
    if (VL_UNLIKELY((vlSelf->ps2_data & 0xfeU))) {
        Verilated::overWidthError("ps2_data");}
    if (VL_UNLIKELY((vlSelf->ps2_clk & 0xfeU))) {
        Verilated::overWidthError("ps2_clk");}
}
#endif  // VL_DEBUG
