// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VLFSR.h for the primary calling header

#include "VLFSR___024root.h"
#include "VLFSR__Syms.h"

//==========

VL_INLINE_OPT void VLFSR___024root___sequent__TOP__1(VLFSR___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VLFSR__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VLFSR___024root___sequent__TOP__1\n"); );
    // Body
    vlSelf->LFSR__DOT__cnt = ((IData)(vlSelf->rst_n)
                               ? (((IData)(vlSelf->start) 
                                   & (~ (IData)(vlSelf->LFSR__DOT__start_r)))
                                   ? (IData)(vlSelf->seed)
                                   : (((IData)(vlSelf->LFSR__DOT__xor_bit) 
                                       << 7U) | (0x7fU 
                                                 & ((IData)(vlSelf->LFSR__DOT__cnt) 
                                                    >> 1U))))
                               : 0U);
    vlSelf->LFSR__DOT__xor_bit = (1U & VL_REDXOR_32(
                                                    (0x1dU 
                                                     & (IData)(vlSelf->LFSR__DOT__cnt))));
    vlSelf->dout = vlSelf->LFSR__DOT__cnt;
    vlSelf->LFSR__DOT__start_r = ((IData)(vlSelf->rst_n) 
                                  & (IData)(vlSelf->start));
}

VL_INLINE_OPT void VLFSR___024root___combo__TOP__3(VLFSR___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VLFSR__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VLFSR___024root___combo__TOP__3\n"); );
    // Body
    vlSelf->dout_vld = ((IData)(vlSelf->LFSR__DOT__start_r) 
                        & ((IData)(vlSelf->LFSR__DOT__cnt) 
                           == (IData)(vlSelf->seed)));
}

void VLFSR___024root___eval(VLFSR___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VLFSR__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VLFSR___024root___eval\n"); );
    // Body
    if ((((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk))) 
         | ((~ (IData)(vlSelf->rst_n)) & (IData)(vlSelf->__Vclklast__TOP__rst_n)))) {
        VLFSR___024root___sequent__TOP__1(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
    VLFSR___024root___combo__TOP__3(vlSelf);
    // Final
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
    vlSelf->__Vclklast__TOP__rst_n = vlSelf->rst_n;
}

QData VLFSR___024root___change_request_1(VLFSR___024root* vlSelf);

VL_INLINE_OPT QData VLFSR___024root___change_request(VLFSR___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VLFSR__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VLFSR___024root___change_request\n"); );
    // Body
    return (VLFSR___024root___change_request_1(vlSelf));
}

VL_INLINE_OPT QData VLFSR___024root___change_request_1(VLFSR___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VLFSR__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VLFSR___024root___change_request_1\n"); );
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void VLFSR___024root___eval_debug_assertions(VLFSR___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VLFSR__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VLFSR___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelf->rst_n & 0xfeU))) {
        Verilated::overWidthError("rst_n");}
    if (VL_UNLIKELY((vlSelf->start & 0xfeU))) {
        Verilated::overWidthError("start");}
}
#endif  // VL_DEBUG
