// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vysyx_23060096_RegisterFile.h for the primary calling header

#include "Vysyx_23060096_RegisterFile___024root.h"
#include "Vysyx_23060096_RegisterFile__Syms.h"

//==========

VL_INLINE_OPT void Vysyx_23060096_RegisterFile___024root___sequent__TOP__1(Vysyx_23060096_RegisterFile___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_23060096_RegisterFile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_23060096_RegisterFile___024root___sequent__TOP__1\n"); );
    // Variables
    CData/*0:0*/ __Vdlyvset__ysyx_23060096_RegisterFile__DOT__rf__v0;
    CData/*2:0*/ __Vdlyvdim0__ysyx_23060096_RegisterFile__DOT__rf__v20;
    CData/*0:0*/ __Vdlyvset__ysyx_23060096_RegisterFile__DOT__rf__v20;
    IData/*31:0*/ ysyx_23060096_RegisterFile__DOT____Vlvbound2;
    IData/*31:0*/ __Vdlyvval__ysyx_23060096_RegisterFile__DOT__rf__v20;
    // Body
    if ((1U & (~ (IData)(vlSelf->rstn)))) {
        vlSelf->ysyx_23060096_RegisterFile__DOT__i = 0x20U;
    }
    __Vdlyvset__ysyx_23060096_RegisterFile__DOT__rf__v0 = 0U;
    __Vdlyvset__ysyx_23060096_RegisterFile__DOT__rf__v20 = 0U;
    if ((1U & (~ (IData)(vlSelf->rstn)))) {
        __Vdlyvset__ysyx_23060096_RegisterFile__DOT__rf__v0 = 1U;
    }
    ysyx_23060096_RegisterFile__DOT____Vlvbound2 = 
        ((IData)(vlSelf->w_en) ? vlSelf->wdata : ((4U 
                                                   >= 
                                                   (7U 
                                                    & (IData)(vlSelf->waddr)))
                                                   ? 
                                                  vlSelf->ysyx_23060096_RegisterFile__DOT__rf
                                                  [
                                                  (7U 
                                                   & (IData)(vlSelf->waddr))]
                                                   : 0U));
    if ((4U >= (7U & (IData)(vlSelf->waddr)))) {
        __Vdlyvval__ysyx_23060096_RegisterFile__DOT__rf__v20 
            = ysyx_23060096_RegisterFile__DOT____Vlvbound2;
        __Vdlyvset__ysyx_23060096_RegisterFile__DOT__rf__v20 = 1U;
        __Vdlyvdim0__ysyx_23060096_RegisterFile__DOT__rf__v20 
            = (7U & (IData)(vlSelf->waddr));
    }
    if (__Vdlyvset__ysyx_23060096_RegisterFile__DOT__rf__v0) {
        vlSelf->ysyx_23060096_RegisterFile__DOT__rf[0U] = 0U;
        vlSelf->ysyx_23060096_RegisterFile__DOT__rf[1U] = 0U;
        vlSelf->ysyx_23060096_RegisterFile__DOT__rf[2U] = 0U;
        vlSelf->ysyx_23060096_RegisterFile__DOT__rf[3U] = 0U;
        vlSelf->ysyx_23060096_RegisterFile__DOT__rf[4U] = 0U;
        vlSelf->ysyx_23060096_RegisterFile__DOT__rf[0U] = 0U;
        vlSelf->ysyx_23060096_RegisterFile__DOT__rf[1U] = 0U;
        vlSelf->ysyx_23060096_RegisterFile__DOT__rf[2U] = 0U;
        vlSelf->ysyx_23060096_RegisterFile__DOT__rf[3U] = 0U;
        vlSelf->ysyx_23060096_RegisterFile__DOT__rf[4U] = 0U;
        vlSelf->ysyx_23060096_RegisterFile__DOT__rf[0U] = 0U;
        vlSelf->ysyx_23060096_RegisterFile__DOT__rf[1U] = 0U;
        vlSelf->ysyx_23060096_RegisterFile__DOT__rf[2U] = 0U;
        vlSelf->ysyx_23060096_RegisterFile__DOT__rf[3U] = 0U;
        vlSelf->ysyx_23060096_RegisterFile__DOT__rf[4U] = 0U;
        vlSelf->ysyx_23060096_RegisterFile__DOT__rf[0U] = 0U;
        vlSelf->ysyx_23060096_RegisterFile__DOT__rf[1U] = 0U;
        vlSelf->ysyx_23060096_RegisterFile__DOT__rf[2U] = 0U;
        vlSelf->ysyx_23060096_RegisterFile__DOT__rf[3U] = 0U;
        vlSelf->ysyx_23060096_RegisterFile__DOT__rf[4U] = 0U;
    }
    if (__Vdlyvset__ysyx_23060096_RegisterFile__DOT__rf__v20) {
        vlSelf->ysyx_23060096_RegisterFile__DOT__rf[__Vdlyvdim0__ysyx_23060096_RegisterFile__DOT__rf__v20] 
            = __Vdlyvval__ysyx_23060096_RegisterFile__DOT__rf__v20;
    }
}

VL_INLINE_OPT void Vysyx_23060096_RegisterFile___024root___settle__TOP__2(Vysyx_23060096_RegisterFile___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_23060096_RegisterFile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_23060096_RegisterFile___024root___settle__TOP__2\n"); );
    // Body
    vlSelf->busA = ((4U >= (7U & (IData)(vlSelf->Ra)))
                     ? vlSelf->ysyx_23060096_RegisterFile__DOT__rf
                    [(7U & (IData)(vlSelf->Ra))] : 0U);
    vlSelf->busB = ((4U >= (7U & (IData)(vlSelf->Rb)))
                     ? vlSelf->ysyx_23060096_RegisterFile__DOT__rf
                    [(7U & (IData)(vlSelf->Rb))] : 0U);
}

void Vysyx_23060096_RegisterFile___024root___eval(Vysyx_23060096_RegisterFile___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_23060096_RegisterFile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_23060096_RegisterFile___024root___eval\n"); );
    // Body
    if (((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk)))) {
        Vysyx_23060096_RegisterFile___024root___sequent__TOP__1(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
    Vysyx_23060096_RegisterFile___024root___settle__TOP__2(vlSelf);
    // Final
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
}

QData Vysyx_23060096_RegisterFile___024root___change_request_1(Vysyx_23060096_RegisterFile___024root* vlSelf);

VL_INLINE_OPT QData Vysyx_23060096_RegisterFile___024root___change_request(Vysyx_23060096_RegisterFile___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_23060096_RegisterFile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_23060096_RegisterFile___024root___change_request\n"); );
    // Body
    return (Vysyx_23060096_RegisterFile___024root___change_request_1(vlSelf));
}

VL_INLINE_OPT QData Vysyx_23060096_RegisterFile___024root___change_request_1(Vysyx_23060096_RegisterFile___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_23060096_RegisterFile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_23060096_RegisterFile___024root___change_request_1\n"); );
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void Vysyx_23060096_RegisterFile___024root___eval_debug_assertions(Vysyx_23060096_RegisterFile___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_23060096_RegisterFile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_23060096_RegisterFile___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelf->rstn & 0xfeU))) {
        Verilated::overWidthError("rstn");}
    if (VL_UNLIKELY((vlSelf->Ra & 0xe0U))) {
        Verilated::overWidthError("Ra");}
    if (VL_UNLIKELY((vlSelf->Rb & 0xe0U))) {
        Verilated::overWidthError("Rb");}
    if (VL_UNLIKELY((vlSelf->waddr & 0xe0U))) {
        Verilated::overWidthError("waddr");}
    if (VL_UNLIKELY((vlSelf->w_en & 0xfeU))) {
        Verilated::overWidthError("w_en");}
}
#endif  // VL_DEBUG
