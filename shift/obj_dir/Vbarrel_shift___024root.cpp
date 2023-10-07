// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vbarrel_shift.h for the primary calling header

#include "Vbarrel_shift___024root.h"
#include "Vbarrel_shift__Syms.h"

//==========

VL_INLINE_OPT void Vbarrel_shift___024root___combo__TOP__1(Vbarrel_shift___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vbarrel_shift__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbarrel_shift___024root___combo__TOP__1\n"); );
    // Body
    if (vlSelf->op) {
        if (vlSelf->dir) {
            vlSelf->barrel_shift__DOT__Q = ((1U & (IData)(vlSelf->shamt))
                                             ? (0xfeU 
                                                & ((IData)(vlSelf->din) 
                                                   << 1U))
                                             : (IData)(vlSelf->din));
            vlSelf->barrel_shift__DOT__Q = ((2U & (IData)(vlSelf->shamt))
                                             ? (0xfcU 
                                                & ((IData)(vlSelf->barrel_shift__DOT__Q) 
                                                   << 2U))
                                             : (IData)(vlSelf->barrel_shift__DOT__Q));
            vlSelf->barrel_shift__DOT__Q = ((4U & (IData)(vlSelf->shamt))
                                             ? (0xf0U 
                                                & ((IData)(vlSelf->barrel_shift__DOT__Q) 
                                                   << 4U))
                                             : (IData)(vlSelf->barrel_shift__DOT__Q));
        } else {
            vlSelf->barrel_shift__DOT__Q = ((1U & (IData)(vlSelf->shamt))
                                             ? ((0x80U 
                                                 & (IData)(vlSelf->din)) 
                                                | (0x7fU 
                                                   & ((IData)(vlSelf->din) 
                                                      >> 1U)))
                                             : (IData)(vlSelf->din));
            vlSelf->barrel_shift__DOT__Q = ((2U & (IData)(vlSelf->shamt))
                                             ? ((0xc0U 
                                                 & ((- (IData)(
                                                               (1U 
                                                                & ((IData)(vlSelf->barrel_shift__DOT__Q) 
                                                                   >> 7U)))) 
                                                    << 6U)) 
                                                | (0x3fU 
                                                   & ((IData)(vlSelf->barrel_shift__DOT__Q) 
                                                      >> 2U)))
                                             : (IData)(vlSelf->barrel_shift__DOT__Q));
            vlSelf->barrel_shift__DOT__Q = ((4U & (IData)(vlSelf->shamt))
                                             ? ((0xf0U 
                                                 & ((- (IData)(
                                                               (1U 
                                                                & ((IData)(vlSelf->barrel_shift__DOT__Q) 
                                                                   >> 7U)))) 
                                                    << 4U)) 
                                                | (0xfU 
                                                   & ((IData)(vlSelf->barrel_shift__DOT__Q) 
                                                      >> 4U)))
                                             : (IData)(vlSelf->barrel_shift__DOT__Q));
        }
    } else if (vlSelf->dir) {
        vlSelf->barrel_shift__DOT__Q = ((1U & (IData)(vlSelf->shamt))
                                         ? (0xfeU & 
                                            ((IData)(vlSelf->din) 
                                             << 1U))
                                         : (IData)(vlSelf->din));
        vlSelf->barrel_shift__DOT__Q = ((2U & (IData)(vlSelf->shamt))
                                         ? (0xfcU & 
                                            ((IData)(vlSelf->barrel_shift__DOT__Q) 
                                             << 2U))
                                         : (IData)(vlSelf->barrel_shift__DOT__Q));
        vlSelf->barrel_shift__DOT__Q = ((4U & (IData)(vlSelf->shamt))
                                         ? (0xf0U & 
                                            ((IData)(vlSelf->barrel_shift__DOT__Q) 
                                             << 4U))
                                         : (IData)(vlSelf->barrel_shift__DOT__Q));
    } else {
        vlSelf->barrel_shift__DOT__Q = ((1U & (IData)(vlSelf->shamt))
                                         ? (0x7fU & 
                                            ((IData)(vlSelf->din) 
                                             >> 1U))
                                         : (IData)(vlSelf->din));
        vlSelf->barrel_shift__DOT__Q = ((2U & (IData)(vlSelf->shamt))
                                         ? (0x3fU & 
                                            ((IData)(vlSelf->barrel_shift__DOT__Q) 
                                             >> 2U))
                                         : (IData)(vlSelf->barrel_shift__DOT__Q));
        vlSelf->barrel_shift__DOT__Q = ((4U & (IData)(vlSelf->shamt))
                                         ? (0xfU & 
                                            ((IData)(vlSelf->barrel_shift__DOT__Q) 
                                             >> 4U))
                                         : (IData)(vlSelf->barrel_shift__DOT__Q));
    }
    vlSelf->dout = vlSelf->barrel_shift__DOT__Q;
}

void Vbarrel_shift___024root___eval(Vbarrel_shift___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vbarrel_shift__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbarrel_shift___024root___eval\n"); );
    // Body
    Vbarrel_shift___024root___combo__TOP__1(vlSelf);
}

QData Vbarrel_shift___024root___change_request_1(Vbarrel_shift___024root* vlSelf);

VL_INLINE_OPT QData Vbarrel_shift___024root___change_request(Vbarrel_shift___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vbarrel_shift__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbarrel_shift___024root___change_request\n"); );
    // Body
    return (Vbarrel_shift___024root___change_request_1(vlSelf));
}

VL_INLINE_OPT QData Vbarrel_shift___024root___change_request_1(Vbarrel_shift___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vbarrel_shift__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbarrel_shift___024root___change_request_1\n"); );
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void Vbarrel_shift___024root___eval_debug_assertions(Vbarrel_shift___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vbarrel_shift__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbarrel_shift___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->shamt & 0xf8U))) {
        Verilated::overWidthError("shamt");}
    if (VL_UNLIKELY((vlSelf->dir & 0xfeU))) {
        Verilated::overWidthError("dir");}
    if (VL_UNLIKELY((vlSelf->op & 0xfeU))) {
        Verilated::overWidthError("op");}
}
#endif  // VL_DEBUG
