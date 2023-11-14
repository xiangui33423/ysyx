// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vysyx_23060096_npc.h for the primary calling header

#include "Vysyx_23060096_npc___024root.h"
#include "Vysyx_23060096_npc__Syms.h"

//==========

VL_INLINE_OPT void Vysyx_23060096_npc___024root___combo__TOP__1(Vysyx_23060096_npc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_23060096_npc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_23060096_npc___024root___combo__TOP__1\n"); );
    // Body
    if ((0x40U == (0x1feU & ((0x1f0U & (vlSelf->inst 
                                        << 2U)) | (
                                                   (0xeU 
                                                    & (vlSelf->inst 
                                                       >> 0xbU)) 
                                                   | (1U 
                                                      & (vlSelf->inst 
                                                         >> 0x1eU))))))) {
        vlSelf->ysyx_23060096_npc__DOT__Branch = 0U;
    }
    if ((0x40U == (0x1feU & ((0x1f0U & (vlSelf->inst 
                                        << 2U)) | (
                                                   (0xeU 
                                                    & (vlSelf->inst 
                                                       >> 0xbU)) 
                                                   | (1U 
                                                      & (vlSelf->inst 
                                                         >> 0x1eU))))))) {
        vlSelf->ysyx_23060096_npc__DOT__MemtoReg = 0U;
    }
    if ((0x40U == (0x1feU & ((0x1f0U & (vlSelf->inst 
                                        << 2U)) | (
                                                   (0xeU 
                                                    & (vlSelf->inst 
                                                       >> 0xbU)) 
                                                   | (1U 
                                                      & (vlSelf->inst 
                                                         >> 0x1eU))))))) {
        vlSelf->ysyx_23060096_npc__DOT__MemWr = 0U;
    }
    if ((0x40U == (0x1feU & ((0x1f0U & (vlSelf->inst 
                                        << 2U)) | (
                                                   (0xeU 
                                                    & (vlSelf->inst 
                                                       >> 0xbU)) 
                                                   | (1U 
                                                      & (vlSelf->inst 
                                                         >> 0x1eU))))))) {
        vlSelf->ysyx_23060096_npc__DOT__ALUBsrc = 1U;
    }
    if ((0x40U == (0x1feU & ((0x1f0U & (vlSelf->inst 
                                        << 2U)) | (
                                                   (0xeU 
                                                    & (vlSelf->inst 
                                                       >> 0xbU)) 
                                                   | (1U 
                                                      & (vlSelf->inst 
                                                         >> 0x1eU))))))) {
        vlSelf->ysyx_23060096_npc__DOT__ALUAsrc = 0U;
    }
}

VL_INLINE_OPT void Vysyx_23060096_npc___024root___sequent__TOP__3(Vysyx_23060096_npc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_23060096_npc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_23060096_npc___024root___sequent__TOP__3\n"); );
    // Variables
    CData/*4:0*/ __Vdlyvdim0__ysyx_23060096_npc__DOT__u_RegisterFile__DOT__rf__v0;
    CData/*0:0*/ __Vdlyvset__ysyx_23060096_npc__DOT__u_RegisterFile__DOT__rf__v0;
    CData/*0:0*/ __Vdlyvset__ysyx_23060096_npc__DOT__u_RegisterFile__DOT__rf__v1;
    IData/*31:0*/ __Vdlyvval__ysyx_23060096_npc__DOT__u_RegisterFile__DOT__rf__v0;
    // Body
    if ((1U & (~ (IData)(vlSelf->rstn)))) {
        vlSelf->ysyx_23060096_npc__DOT__u_RegisterFile__DOT__i = 0x20U;
    }
    vlSelf->ysyx_23060096_npc__DOT__u_pc__DOT__pc_next 
        = ((IData)(vlSelf->rstn) ? ((IData)(4U) + vlSelf->ysyx_23060096_npc__DOT__u_pc__DOT__pc_next)
            : 0x80000000U);
    __Vdlyvset__ysyx_23060096_npc__DOT__u_RegisterFile__DOT__rf__v0 = 0U;
    __Vdlyvset__ysyx_23060096_npc__DOT__u_RegisterFile__DOT__rf__v1 = 0U;
    vlSelf->pc = vlSelf->ysyx_23060096_npc__DOT__u_pc__DOT__pc_next;
    if (vlSelf->rstn) {
        if (vlSelf->ysyx_23060096_npc__DOT__RegWr) {
            vlSelf->ysyx_23060096_npc__DOT__u_RegisterFile__DOT____Vlvbound1 
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
                            ? vlSelf->ysyx_23060096_npc__DOT__u_alu__DOT__sub
                            : vlSelf->ysyx_23060096_npc__DOT__u_alu__DOT__add)));
            if ((0x10U >= (0x1fU & (vlSelf->inst >> 7U)))) {
                __Vdlyvval__ysyx_23060096_npc__DOT__u_RegisterFile__DOT__rf__v0 
                    = vlSelf->ysyx_23060096_npc__DOT__u_RegisterFile__DOT____Vlvbound1;
                __Vdlyvset__ysyx_23060096_npc__DOT__u_RegisterFile__DOT__rf__v0 = 1U;
                __Vdlyvdim0__ysyx_23060096_npc__DOT__u_RegisterFile__DOT__rf__v0 
                    = (0x1fU & (vlSelf->inst >> 7U));
            }
        }
    } else {
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

VL_INLINE_OPT void Vysyx_23060096_npc___024root___combo__TOP__4(Vysyx_23060096_npc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_23060096_npc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_23060096_npc___024root___combo__TOP__4\n"); );
    // Body
    if ((0x40U == (0x1feU & ((0x1f0U & (vlSelf->inst 
                                        << 2U)) | (
                                                   (0xeU 
                                                    & (vlSelf->inst 
                                                       >> 0xbU)) 
                                                   | (1U 
                                                      & (vlSelf->inst 
                                                         >> 0x1eU))))))) {
        vlSelf->ysyx_23060096_npc__DOT__RegWr = 1U;
    }
    if ((0x40U == (0x1feU & ((0x1f0U & (vlSelf->inst 
                                        << 2U)) | (
                                                   (0xeU 
                                                    & (vlSelf->inst 
                                                       >> 0xbU)) 
                                                   | (1U 
                                                      & (vlSelf->inst 
                                                         >> 0x1eU))))))) {
        vlSelf->ysyx_23060096_npc__DOT__ALUctr = 0U;
    }
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
    vlSelf->ysyx_23060096_npc__DOT__u_alu__DOT__sub 
        = ((IData)(1U) + (vlSelf->ysyx_23060096_npc__DOT__src1 
                          + (~ vlSelf->ysyx_23060096_npc__DOT__src2)));
    vlSelf->ysyx_23060096_npc__DOT__u_alu__DOT__res 
        = ((IData)(1U) + (vlSelf->ysyx_23060096_npc__DOT__src1 
                          + (~ vlSelf->ysyx_23060096_npc__DOT__src2)));
}

void Vysyx_23060096_npc___024root___eval(Vysyx_23060096_npc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_23060096_npc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_23060096_npc___024root___eval\n"); );
    // Body
    Vysyx_23060096_npc___024root___combo__TOP__1(vlSelf);
    vlSelf->__Vm_traceActivity[1U] = 1U;
    if (((~ (IData)(vlSelf->clk)) & (IData)(vlSelf->__Vclklast__TOP__clk))) {
        Vysyx_23060096_npc___024root___sequent__TOP__3(vlSelf);
        vlSelf->__Vm_traceActivity[2U] = 1U;
    }
    Vysyx_23060096_npc___024root___combo__TOP__4(vlSelf);
    // Final
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
}

QData Vysyx_23060096_npc___024root___change_request_1(Vysyx_23060096_npc___024root* vlSelf);

VL_INLINE_OPT QData Vysyx_23060096_npc___024root___change_request(Vysyx_23060096_npc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_23060096_npc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_23060096_npc___024root___change_request\n"); );
    // Body
    return (Vysyx_23060096_npc___024root___change_request_1(vlSelf));
}

VL_INLINE_OPT QData Vysyx_23060096_npc___024root___change_request_1(Vysyx_23060096_npc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_23060096_npc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_23060096_npc___024root___change_request_1\n"); );
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
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
