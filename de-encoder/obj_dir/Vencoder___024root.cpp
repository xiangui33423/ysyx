// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vencoder.h for the primary calling header

#include "Vencoder___024root.h"
#include "Vencoder__Syms.h"

//==========

extern const VlUnpacked<CData/*2:0*/, 512> Vencoder__ConstPool__TABLE_2ab4c310_0;
extern const VlUnpacked<CData/*0:0*/, 512> Vencoder__ConstPool__TABLE_d484eecf_0;
extern const VlUnpacked<CData/*2:0*/, 512> Vencoder__ConstPool__TABLE_4c2bd713_0;
extern const VlUnpacked<IData/*31:0*/, 512> Vencoder__ConstPool__TABLE_508ee21b_0;

VL_INLINE_OPT void Vencoder___024root___combo__TOP__1(Vencoder___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vencoder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vencoder___024root___combo__TOP__1\n"); );
    // Variables
    SData/*8:0*/ __Vtableidx1;
    // Body
    __Vtableidx1 = (((IData)(vlSelf->x) << 1U) | (IData)(vlSelf->en));
    vlSelf->y = Vencoder__ConstPool__TABLE_2ab4c310_0
        [__Vtableidx1];
    vlSelf->tur = Vencoder__ConstPool__TABLE_d484eecf_0
        [__Vtableidx1];
    if ((4U & Vencoder__ConstPool__TABLE_4c2bd713_0
         [__Vtableidx1])) {
        vlSelf->encoder__DOT__i = Vencoder__ConstPool__TABLE_508ee21b_0
            [__Vtableidx1];
    }
}

void Vencoder___024root___eval(Vencoder___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vencoder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vencoder___024root___eval\n"); );
    // Body
    Vencoder___024root___combo__TOP__1(vlSelf);
}

QData Vencoder___024root___change_request_1(Vencoder___024root* vlSelf);

VL_INLINE_OPT QData Vencoder___024root___change_request(Vencoder___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vencoder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vencoder___024root___change_request\n"); );
    // Body
    return (Vencoder___024root___change_request_1(vlSelf));
}

VL_INLINE_OPT QData Vencoder___024root___change_request_1(Vencoder___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vencoder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vencoder___024root___change_request_1\n"); );
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void Vencoder___024root___eval_debug_assertions(Vencoder___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vencoder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vencoder___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->en & 0xfeU))) {
        Verilated::overWidthError("en");}
}
#endif  // VL_DEBUG
