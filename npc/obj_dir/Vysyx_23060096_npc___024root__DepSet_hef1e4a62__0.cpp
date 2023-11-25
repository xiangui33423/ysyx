// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vysyx_23060096_npc.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vysyx_23060096_npc___024root.h"

void Vysyx_23060096_npc___024root___ico_sequent__TOP__0(Vysyx_23060096_npc___024root* vlSelf);

void Vysyx_23060096_npc___024root___eval_ico(Vysyx_23060096_npc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_23060096_npc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_23060096_npc___024root___eval_ico\n"); );
    // Body
    if (vlSelf->__VicoTriggered.at(0U)) {
        Vysyx_23060096_npc___024root___ico_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
}

void Vysyx_23060096_npc___024root___eval_act(Vysyx_23060096_npc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_23060096_npc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_23060096_npc___024root___eval_act\n"); );
}

VL_INLINE_OPT void Vysyx_23060096_npc___024root___nba_sequent__TOP__0(Vysyx_23060096_npc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_23060096_npc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_23060096_npc___024root___nba_sequent__TOP__0\n"); );
    // Init
    CData/*4:0*/ __Vdlyvdim0__ysyx_23060096_npc__DOT__u_RegisterFile__DOT__rf__v0;
    __Vdlyvdim0__ysyx_23060096_npc__DOT__u_RegisterFile__DOT__rf__v0 = 0;
    IData/*31:0*/ __Vdlyvval__ysyx_23060096_npc__DOT__u_RegisterFile__DOT__rf__v0;
    __Vdlyvval__ysyx_23060096_npc__DOT__u_RegisterFile__DOT__rf__v0 = 0;
    CData/*0:0*/ __Vdlyvset__ysyx_23060096_npc__DOT__u_RegisterFile__DOT__rf__v0;
    __Vdlyvset__ysyx_23060096_npc__DOT__u_RegisterFile__DOT__rf__v0 = 0;
    CData/*0:0*/ __Vdlyvset__ysyx_23060096_npc__DOT__u_RegisterFile__DOT__rf__v1;
    __Vdlyvset__ysyx_23060096_npc__DOT__u_RegisterFile__DOT__rf__v1 = 0;
    // Body
    __Vdlyvset__ysyx_23060096_npc__DOT__u_RegisterFile__DOT__rf__v0 = 0U;
    __Vdlyvset__ysyx_23060096_npc__DOT__u_RegisterFile__DOT__rf__v1 = 0U;
    if ((1U & (~ (IData)(vlSelf->rstn)))) {
        vlSelf->ysyx_23060096_npc__DOT__u_RegisterFile__DOT__i = 0x20U;
    }
    if (vlSelf->rstn) {
        vlSelf->pc = ((IData)(4U) + vlSelf->pc);
        if ((0x40U == (0x1feU & ((0x1f0U & (vlSelf->inst 
                                            << 2U)) 
                                 | ((0xeU & (vlSelf->inst 
                                             >> 0xbU)) 
                                    | (1U & (vlSelf->inst 
                                             >> 0x1eU))))))) {
            vlSelf->ysyx_23060096_npc__DOT__u_RegisterFile__DOT____Vlvbound_h06a0cbe9__0 
                = ((4U & (IData)(vlSelf->ysyx_23060096_npc__DOT__ALUctr))
                    ? ((2U & (IData)(vlSelf->ysyx_23060096_npc__DOT__ALUctr))
                        ? ((1U & (IData)(vlSelf->ysyx_23060096_npc__DOT__ALUctr))
                            ? ((0U != vlSelf->ysyx_23060096_npc__DOT__u_alu__DOT__res)
                                ? 0U : 1U) : ((8U & vlSelf->ysyx_23060096_npc__DOT__u_alu__DOT__res)
                                               ? 1U
                                               : 0U))
                        : ((1U & (IData)(vlSelf->ysyx_23060096_npc__DOT__ALUctr))
                            ? (vlSelf->ysyx_23060096_npc__DOT__src1 
                               ^ vlSelf->ysyx_23060096_npc__DOT__src2)
                            : (vlSelf->ysyx_23060096_npc__DOT__src1 
                               | vlSelf->ysyx_23060096_npc__DOT__src2)))
                    : ((2U & (IData)(vlSelf->ysyx_23060096_npc__DOT__ALUctr))
                        ? ((1U & (IData)(vlSelf->ysyx_23060096_npc__DOT__ALUctr))
                            ? (vlSelf->ysyx_23060096_npc__DOT__src1 
                               & vlSelf->ysyx_23060096_npc__DOT__src2)
                            : (~ vlSelf->ysyx_23060096_npc__DOT__src1))
                        : ((1U & (IData)(vlSelf->ysyx_23060096_npc__DOT__ALUctr))
                            ? vlSelf->ysyx_23060096_npc__DOT__u_alu__DOT__res
                            : vlSelf->ysyx_23060096_npc__DOT__u_alu__DOT__add)));
            if ((0x10U >= (0x1fU & (vlSelf->inst >> 7U)))) {
                __Vdlyvval__ysyx_23060096_npc__DOT__u_RegisterFile__DOT__rf__v0 
                    = vlSelf->ysyx_23060096_npc__DOT__u_RegisterFile__DOT____Vlvbound_h06a0cbe9__0;
                __Vdlyvset__ysyx_23060096_npc__DOT__u_RegisterFile__DOT__rf__v0 = 1U;
                __Vdlyvdim0__ysyx_23060096_npc__DOT__u_RegisterFile__DOT__rf__v0 
                    = (0x1fU & (vlSelf->inst >> 7U));
            }
        }
    } else {
        vlSelf->pc = 0x80000000U;
        __Vdlyvset__ysyx_23060096_npc__DOT__u_RegisterFile__DOT__rf__v1 = 1U;
    }
    if (__Vdlyvset__ysyx_23060096_npc__DOT__u_RegisterFile__DOT__rf__v0) {
        vlSelf->ysyx_23060096_npc__DOT__u_RegisterFile__DOT__rf[__Vdlyvdim0__ysyx_23060096_npc__DOT__u_RegisterFile__DOT__rf__v0] 
            = __Vdlyvval__ysyx_23060096_npc__DOT__u_RegisterFile__DOT__rf__v0;
    }
    if (__Vdlyvset__ysyx_23060096_npc__DOT__u_RegisterFile__DOT__rf__v1) {
        vlSelf->ysyx_23060096_npc__DOT__u_RegisterFile__DOT__rf[0U] = 0U;
        vlSelf->ysyx_23060096_npc__DOT__u_RegisterFile__DOT__rf[1U] = 0U;
        vlSelf->ysyx_23060096_npc__DOT__u_RegisterFile__DOT__rf[2U] = 0U;
        vlSelf->ysyx_23060096_npc__DOT__u_RegisterFile__DOT__rf[3U] = 0U;
        vlSelf->ysyx_23060096_npc__DOT__u_RegisterFile__DOT__rf[4U] = 0U;
        vlSelf->ysyx_23060096_npc__DOT__u_RegisterFile__DOT__rf[5U] = 0U;
        vlSelf->ysyx_23060096_npc__DOT__u_RegisterFile__DOT__rf[6U] = 0U;
        vlSelf->ysyx_23060096_npc__DOT__u_RegisterFile__DOT__rf[7U] = 0U;
        vlSelf->ysyx_23060096_npc__DOT__u_RegisterFile__DOT__rf[8U] = 0U;
        vlSelf->ysyx_23060096_npc__DOT__u_RegisterFile__DOT__rf[9U] = 0U;
        vlSelf->ysyx_23060096_npc__DOT__u_RegisterFile__DOT__rf[0xaU] = 0U;
        vlSelf->ysyx_23060096_npc__DOT__u_RegisterFile__DOT__rf[0xbU] = 0U;
        vlSelf->ysyx_23060096_npc__DOT__u_RegisterFile__DOT__rf[0xcU] = 0U;
        vlSelf->ysyx_23060096_npc__DOT__u_RegisterFile__DOT__rf[0xdU] = 0U;
        vlSelf->ysyx_23060096_npc__DOT__u_RegisterFile__DOT__rf[0xeU] = 0U;
        vlSelf->ysyx_23060096_npc__DOT__u_RegisterFile__DOT__rf[0xfU] = 0U;
        vlSelf->ysyx_23060096_npc__DOT__u_RegisterFile__DOT__rf[0x10U] = 0U;
    }
}

VL_INLINE_OPT void Vysyx_23060096_npc___024root___nba_sequent__TOP__1(Vysyx_23060096_npc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_23060096_npc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_23060096_npc___024root___nba_sequent__TOP__1\n"); );
    // Body
    if ((0U == (IData)(vlSelf->ysyx_23060096_npc__DOT__ALUBsrc))) {
        vlSelf->ysyx_23060096_npc__DOT__src2 = ((0x10U 
                                                 >= 
                                                 (0x1fU 
                                                  & (vlSelf->inst 
                                                     >> 0x14U)))
                                                 ? 
                                                vlSelf->ysyx_23060096_npc__DOT__u_RegisterFile__DOT__rf
                                                [(0x1fU 
                                                  & (vlSelf->inst 
                                                     >> 0x14U))]
                                                 : 0U);
    } else if ((1U == (IData)(vlSelf->ysyx_23060096_npc__DOT__ALUBsrc))) {
        vlSelf->ysyx_23060096_npc__DOT__src2 = (((- (IData)(
                                                            (vlSelf->inst 
                                                             >> 0x1fU))) 
                                                 << 0xcU) 
                                                | (0xfffU 
                                                   & (vlSelf->inst 
                                                      >> 0x13U)));
    } else if ((2U == (IData)(vlSelf->ysyx_23060096_npc__DOT__ALUBsrc))) {
        vlSelf->ysyx_23060096_npc__DOT__src2 = 4U;
    }
    vlSelf->ysyx_23060096_npc__DOT__src1 = ((IData)(vlSelf->ysyx_23060096_npc__DOT__ALUAsrc)
                                             ? vlSelf->pc
                                             : ((0x10U 
                                                 >= 
                                                 (0x1fU 
                                                  & (vlSelf->inst 
                                                     >> 0xfU)))
                                                 ? 
                                                vlSelf->ysyx_23060096_npc__DOT__u_RegisterFile__DOT__rf
                                                [(0x1fU 
                                                  & (vlSelf->inst 
                                                     >> 0xfU))]
                                                 : 0U));
    vlSelf->ysyx_23060096_npc__DOT__u_alu__DOT__add 
        = (vlSelf->ysyx_23060096_npc__DOT__src1 + vlSelf->ysyx_23060096_npc__DOT__src2);
    vlSelf->ysyx_23060096_npc__DOT__u_alu__DOT__res 
        = ((IData)(1U) + (vlSelf->ysyx_23060096_npc__DOT__src1 
                          + (~ vlSelf->ysyx_23060096_npc__DOT__src2)));
}

void Vysyx_23060096_npc___024root___eval_nba(Vysyx_23060096_npc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_23060096_npc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_23060096_npc___024root___eval_nba\n"); );
    // Body
    if (vlSelf->__VnbaTriggered.at(0U)) {
        Vysyx_23060096_npc___024root___nba_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[2U] = 1U;
        Vysyx_23060096_npc___024root___nba_sequent__TOP__1(vlSelf);
    }
}

void Vysyx_23060096_npc___024root___eval_triggers__ico(Vysyx_23060096_npc___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vysyx_23060096_npc___024root___dump_triggers__ico(Vysyx_23060096_npc___024root* vlSelf);
#endif  // VL_DEBUG
void Vysyx_23060096_npc___024root___eval_triggers__act(Vysyx_23060096_npc___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vysyx_23060096_npc___024root___dump_triggers__act(Vysyx_23060096_npc___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vysyx_23060096_npc___024root___dump_triggers__nba(Vysyx_23060096_npc___024root* vlSelf);
#endif  // VL_DEBUG

void Vysyx_23060096_npc___024root___eval(Vysyx_23060096_npc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_23060096_npc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_23060096_npc___024root___eval\n"); );
    // Init
    CData/*0:0*/ __VicoContinue;
    VlTriggerVec<1> __VpreTriggered;
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    vlSelf->__VicoIterCount = 0U;
    __VicoContinue = 1U;
    while (__VicoContinue) {
        __VicoContinue = 0U;
        Vysyx_23060096_npc___024root___eval_triggers__ico(vlSelf);
        if (vlSelf->__VicoTriggered.any()) {
            __VicoContinue = 1U;
            if (VL_UNLIKELY((0x64U < vlSelf->__VicoIterCount))) {
#ifdef VL_DEBUG
                Vysyx_23060096_npc___024root___dump_triggers__ico(vlSelf);
#endif
                VL_FATAL_MT("vsrc/ysyx_23060096_npc.v", 3, "", "Input combinational region did not converge.");
            }
            vlSelf->__VicoIterCount = ((IData)(1U) 
                                       + vlSelf->__VicoIterCount);
            Vysyx_23060096_npc___024root___eval_ico(vlSelf);
        }
    }
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        __VnbaContinue = 0U;
        vlSelf->__VnbaTriggered.clear();
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            vlSelf->__VactContinue = 0U;
            Vysyx_23060096_npc___024root___eval_triggers__act(vlSelf);
            if (vlSelf->__VactTriggered.any()) {
                vlSelf->__VactContinue = 1U;
                if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                    Vysyx_23060096_npc___024root___dump_triggers__act(vlSelf);
#endif
                    VL_FATAL_MT("vsrc/ysyx_23060096_npc.v", 3, "", "Active region did not converge.");
                }
                vlSelf->__VactIterCount = ((IData)(1U) 
                                           + vlSelf->__VactIterCount);
                __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
                vlSelf->__VnbaTriggered.set(vlSelf->__VactTriggered);
                Vysyx_23060096_npc___024root___eval_act(vlSelf);
            }
        }
        if (vlSelf->__VnbaTriggered.any()) {
            __VnbaContinue = 1U;
            if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
                Vysyx_23060096_npc___024root___dump_triggers__nba(vlSelf);
#endif
                VL_FATAL_MT("vsrc/ysyx_23060096_npc.v", 3, "", "NBA region did not converge.");
            }
            __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
            Vysyx_23060096_npc___024root___eval_nba(vlSelf);
        }
    }
}

#ifdef VL_DEBUG
void Vysyx_23060096_npc___024root___eval_debug_assertions(Vysyx_23060096_npc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_23060096_npc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_23060096_npc___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelf->rstn & 0xfeU))) {
        Verilated::overWidthError("rstn");}
}
#endif  // VL_DEBUG
