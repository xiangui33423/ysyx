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
    CData/*4:0*/ __Vdlyvdim0__ysyx_23060096_RegisterFile__DOT__rf__v0;
    CData/*0:0*/ __Vdlyvset__ysyx_23060096_RegisterFile__DOT__rf__v0;
    CData/*0:0*/ __Vdlyvset__ysyx_23060096_RegisterFile__DOT__rf__v1;
    IData/*31:0*/ __Vdlyvval__ysyx_23060096_RegisterFile__DOT__rf__v0;
    // Body
    if ((1U & (~ (IData)(vlSelf->rstn)))) {
        vlSelf->ysyx_23060096_RegisterFile__DOT__i = 0x20U;
    }
    __Vdlyvset__ysyx_23060096_RegisterFile__DOT__rf__v0 = 0U;
    __Vdlyvset__ysyx_23060096_RegisterFile__DOT__rf__v1 = 0U;
    if (vlSelf->rstn) {
        if (vlSelf->w_en) {
            vlSelf->ysyx_23060096_RegisterFile__DOT____Vlvbound1 
                = vlSelf->wdata;
            if ((0x10U >= (IData)(vlSelf->waddr))) {
                __Vdlyvval__ysyx_23060096_RegisterFile__DOT__rf__v0 
                    = vlSelf->ysyx_23060096_RegisterFile__DOT____Vlvbound1;
                __Vdlyvset__ysyx_23060096_RegisterFile__DOT__rf__v0 = 1U;
                __Vdlyvdim0__ysyx_23060096_RegisterFile__DOT__rf__v0 
                    = vlSelf->waddr;
            }
        }
    } else {
        __Vdlyvset__ysyx_23060096_RegisterFile__DOT__rf__v1 = 1U;
    }
    if (__Vdlyvset__ysyx_23060096_RegisterFile__DOT__rf__v0) {
        vlSelf->ysyx_23060096_RegisterFile__DOT__rf[__Vdlyvdim0__ysyx_23060096_RegisterFile__DOT__rf__v0] 
            = __Vdlyvval__ysyx_23060096_RegisterFile__DOT__rf__v0;
    }
    if (__Vdlyvset__ysyx_23060096_RegisterFile__DOT__rf__v1) {
        vlSelf->ysyx_23060096_RegisterFile__DOT__rf[0U] = 0U;
        vlSelf->ysyx_23060096_RegisterFile__DOT__rf[1U] = 0U;
        vlSelf->ysyx_23060096_RegisterFile__DOT__rf[2U] = 0U;
        vlSelf->ysyx_23060096_RegisterFile__DOT__rf[3U] = 0U;
        vlSelf->ysyx_23060096_RegisterFile__DOT__rf[4U] = 0U;
        vlSelf->ysyx_23060096_RegisterFile__DOT__rf[5U] = 0U;
        vlSelf->ysyx_23060096_RegisterFile__DOT__rf[6U] = 0U;
        vlSelf->ysyx_23060096_RegisterFile__DOT__rf[7U] = 0U;
        vlSelf->ysyx_23060096_RegisterFile__DOT__rf[8U] = 0U;
        vlSelf->ysyx_23060096_RegisterFile__DOT__rf[9U] = 0U;
        vlSelf->ysyx_23060096_RegisterFile__DOT__rf[0xaU] = 0U;
        vlSelf->ysyx_23060096_RegisterFile__DOT__rf[0xbU] = 0U;
        vlSelf->ysyx_23060096_RegisterFile__DOT__rf[0xcU] = 0U;
        vlSelf->ysyx_23060096_RegisterFile__DOT__rf[0xdU] = 0U;
        vlSelf->ysyx_23060096_RegisterFile__DOT__rf[0xeU] = 0U;
        vlSelf->ysyx_23060096_RegisterFile__DOT__rf[0xfU] = 0U;
        vlSelf->ysyx_23060096_RegisterFile__DOT__rf[0x10U] = 0U;
    }
}

VL_INLINE_OPT void Vysyx_23060096_RegisterFile___024root___settle__TOP__2(Vysyx_23060096_RegisterFile___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_23060096_RegisterFile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_23060096_RegisterFile___024root___settle__TOP__2\n"); );
    // Body
    vlSelf->busA = ((0x10U >= (IData)(vlSelf->Ra)) ? 
                    vlSelf->ysyx_23060096_RegisterFile__DOT__rf
                    [vlSelf->Ra] : 0U);
    vlSelf->busB = ((0x10U >= (IData)(vlSelf->Rb)) ? 
                    vlSelf->ysyx_23060096_RegisterFile__DOT__rf
                    [vlSelf->Rb] : 0U);
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
