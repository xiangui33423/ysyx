// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vysyx_23060096_ImmGen.h for the primary calling header

#include "Vysyx_23060096_ImmGen___024root.h"
#include "Vysyx_23060096_ImmGen__Syms.h"

//==========

VL_INLINE_OPT void Vysyx_23060096_ImmGen___024root___combo__TOP__1(Vysyx_23060096_ImmGen___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_23060096_ImmGen__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_23060096_ImmGen___024root___combo__TOP__1\n"); );
    // Body
    vlSelf->ysyx_23060096_ImmGen__DOT__immI = (((- (IData)(
                                                           (1U 
                                                            & (vlSelf->inst 
                                                               >> 0x18U)))) 
                                                << 0xcU) 
                                               | (0xfffU 
                                                  & (vlSelf->inst 
                                                     >> 0xcU)));
    vlSelf->imm = ((4U & (IData)(vlSelf->ExtOP)) ? 
                   ((2U & (IData)(vlSelf->ExtOP)) ? vlSelf->ysyx_23060096_ImmGen__DOT__immI
                     : ((1U & (IData)(vlSelf->ExtOP))
                         ? vlSelf->ysyx_23060096_ImmGen__DOT__immI
                         : (((- (IData)((1U & (vlSelf->inst 
                                               >> 0x18U)))) 
                             << 0x14U) | ((0xff000U 
                                           & (vlSelf->inst 
                                              << 7U)) 
                                          | ((0x800U 
                                              & (vlSelf->inst 
                                                 >> 2U)) 
                                             | (0x7feU 
                                                & (vlSelf->inst 
                                                   >> 0xdU)))))))
                    : ((2U & (IData)(vlSelf->ExtOP))
                        ? ((1U & (IData)(vlSelf->ExtOP))
                            ? (((- (IData)((1U & (vlSelf->inst 
                                                  >> 0x18U)))) 
                                << 0xcU) | ((0x800U 
                                             & (vlSelf->inst 
                                                << 0xbU)) 
                                            | ((0x7e0U 
                                                & (vlSelf->inst 
                                                   >> 0xdU)) 
                                               | (0x1eU 
                                                  & vlSelf->inst))))
                            : (((- (IData)((1U & (vlSelf->inst 
                                                  >> 0x18U)))) 
                                << 0xcU) | ((0xfe0U 
                                             & (vlSelf->inst 
                                                >> 0xdU)) 
                                            | (0x1fU 
                                               & vlSelf->inst))))
                        : ((1U & (IData)(vlSelf->ExtOP))
                            ? (0xfffff000U & (vlSelf->inst 
                                              << 7U))
                            : vlSelf->ysyx_23060096_ImmGen__DOT__immI)));
}

void Vysyx_23060096_ImmGen___024root___eval(Vysyx_23060096_ImmGen___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_23060096_ImmGen__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_23060096_ImmGen___024root___eval\n"); );
    // Body
    Vysyx_23060096_ImmGen___024root___combo__TOP__1(vlSelf);
}

QData Vysyx_23060096_ImmGen___024root___change_request_1(Vysyx_23060096_ImmGen___024root* vlSelf);

VL_INLINE_OPT QData Vysyx_23060096_ImmGen___024root___change_request(Vysyx_23060096_ImmGen___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_23060096_ImmGen__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_23060096_ImmGen___024root___change_request\n"); );
    // Body
    return (Vysyx_23060096_ImmGen___024root___change_request_1(vlSelf));
}

VL_INLINE_OPT QData Vysyx_23060096_ImmGen___024root___change_request_1(Vysyx_23060096_ImmGen___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_23060096_ImmGen__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_23060096_ImmGen___024root___change_request_1\n"); );
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void Vysyx_23060096_ImmGen___024root___eval_debug_assertions(Vysyx_23060096_ImmGen___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_23060096_ImmGen__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_23060096_ImmGen___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelf->rstn & 0xfeU))) {
        Verilated::overWidthError("rstn");}
    if (VL_UNLIKELY((vlSelf->inst & 0xfe000000U))) {
        Verilated::overWidthError("inst");}
    if (VL_UNLIKELY((vlSelf->ExtOP & 0xf8U))) {
        Verilated::overWidthError("ExtOP");}
}
#endif  // VL_DEBUG
