// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vdecoder.h for the primary calling header

#include "Vdecoder___024root.h"
#include "Vdecoder__Syms.h"

//==========

extern const VlUnpacked<CData/*6:0*/, 16> Vdecoder__ConstPool__TABLE_864226f5_0;

VL_INLINE_OPT void Vdecoder___024root___combo__TOP__1(Vdecoder___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdecoder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdecoder___024root___combo__TOP__1\n"); );
    // Variables
    CData/*3:0*/ __Vtableidx1;
    // Body
    __Vtableidx1 = (((IData)(vlSelf->x) << 1U) | (IData)(vlSelf->en));
    vlSelf->y = Vdecoder__ConstPool__TABLE_864226f5_0
        [__Vtableidx1];
}

void Vdecoder___024root___eval(Vdecoder___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdecoder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdecoder___024root___eval\n"); );
    // Body
    Vdecoder___024root___combo__TOP__1(vlSelf);
}

QData Vdecoder___024root___change_request_1(Vdecoder___024root* vlSelf);

VL_INLINE_OPT QData Vdecoder___024root___change_request(Vdecoder___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdecoder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdecoder___024root___change_request\n"); );
    // Body
    return (Vdecoder___024root___change_request_1(vlSelf));
}

VL_INLINE_OPT QData Vdecoder___024root___change_request_1(Vdecoder___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdecoder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdecoder___024root___change_request_1\n"); );
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void Vdecoder___024root___eval_debug_assertions(Vdecoder___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdecoder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdecoder___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->x & 0xf8U))) {
        Verilated::overWidthError("x");}
    if (VL_UNLIKELY((vlSelf->en & 0xfeU))) {
        Verilated::overWidthError("en");}
}
#endif  // VL_DEBUG
