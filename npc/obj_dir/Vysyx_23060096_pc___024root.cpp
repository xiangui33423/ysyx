// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vysyx_23060096_pc.h for the primary calling header

#include "Vysyx_23060096_pc___024root.h"
#include "Vysyx_23060096_pc__Syms.h"

//==========

VL_INLINE_OPT void Vysyx_23060096_pc___024root___sequent__TOP__1(Vysyx_23060096_pc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_23060096_pc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_23060096_pc___024root___sequent__TOP__1\n"); );
    // Body
    vlSelf->pc = ((IData)(vlSelf->rstn) ? ((IData)(4U) 
                                           + vlSelf->pc)
                   : 0x80000000U);
}

void Vysyx_23060096_pc___024root___eval(Vysyx_23060096_pc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_23060096_pc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_23060096_pc___024root___eval\n"); );
    // Body
    if (((~ (IData)(vlSelf->clk)) & (IData)(vlSelf->__Vclklast__TOP__clk))) {
        Vysyx_23060096_pc___024root___sequent__TOP__1(vlSelf);
    }
    // Final
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
}

QData Vysyx_23060096_pc___024root___change_request_1(Vysyx_23060096_pc___024root* vlSelf);

VL_INLINE_OPT QData Vysyx_23060096_pc___024root___change_request(Vysyx_23060096_pc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_23060096_pc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_23060096_pc___024root___change_request\n"); );
    // Body
    return (Vysyx_23060096_pc___024root___change_request_1(vlSelf));
}

VL_INLINE_OPT QData Vysyx_23060096_pc___024root___change_request_1(Vysyx_23060096_pc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_23060096_pc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_23060096_pc___024root___change_request_1\n"); );
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void Vysyx_23060096_pc___024root___eval_debug_assertions(Vysyx_23060096_pc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_23060096_pc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_23060096_pc___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelf->rstn & 0xfeU))) {
        Verilated::overWidthError("rstn");}
}
#endif  // VL_DEBUG
