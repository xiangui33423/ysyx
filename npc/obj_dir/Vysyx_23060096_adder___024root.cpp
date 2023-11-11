// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vysyx_23060096_adder.h for the primary calling header

#include "Vysyx_23060096_adder___024root.h"
#include "Vysyx_23060096_adder__Syms.h"

//==========

VL_INLINE_OPT void Vysyx_23060096_adder___024root___sequent__TOP__1(Vysyx_23060096_adder___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_23060096_adder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_23060096_adder___024root___sequent__TOP__1\n"); );
    // Body
    if (vlSelf->rst) {
        vlSelf->dout = 0U;
    } else if (vlSelf->wen) {
        vlSelf->dout = vlSelf->din;
    }
}

VL_INLINE_OPT void Vysyx_23060096_adder___024root___combo__TOP__2(Vysyx_23060096_adder___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_23060096_adder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_23060096_adder___024root___combo__TOP__2\n"); );
    // Body
    vlSelf->ysyx_23060096_alu__DOT__add = (0xfU & ((IData)(vlSelf->A) 
                                                   + (IData)(vlSelf->B)));
    vlSelf->ysyx_23060096_alu__DOT__res = (0xfU & ((IData)(1U) 
                                                   + 
                                                   ((IData)(vlSelf->A) 
                                                    + 
                                                    (~ (IData)(vlSelf->B)))));
    vlSelf->out = (0xfU & ((4U & (IData)(vlSelf->op))
                            ? ((2U & (IData)(vlSelf->op))
                                ? ((1U & (IData)(vlSelf->op))
                                    ? ((0U != (IData)(vlSelf->ysyx_23060096_alu__DOT__res))
                                        ? 0U : 1U) : 
                                   ((8U & (IData)(vlSelf->ysyx_23060096_alu__DOT__res))
                                     ? 1U : 0U)) : 
                               ((1U & (IData)(vlSelf->op))
                                 ? ((IData)(vlSelf->A) 
                                    ^ (IData)(vlSelf->B))
                                 : ((IData)(vlSelf->A) 
                                    | (IData)(vlSelf->B))))
                            : ((2U & (IData)(vlSelf->op))
                                ? ((1U & (IData)(vlSelf->op))
                                    ? ((IData)(vlSelf->A) 
                                       & (IData)(vlSelf->B))
                                    : (~ (IData)(vlSelf->A)))
                                : ((1U & (IData)(vlSelf->op))
                                    ? (IData)(vlSelf->ysyx_23060096_alu__DOT__res)
                                    : (IData)(vlSelf->ysyx_23060096_alu__DOT__add)))));
}

VL_INLINE_OPT void Vysyx_23060096_adder___024root___sequent__TOP__4(Vysyx_23060096_adder___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_23060096_adder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_23060096_adder___024root___sequent__TOP__4\n"); );
    // Variables
    CData/*0:0*/ __Vdlyvset__ysyx_23060096_PCreg__DOT__inst_reg__v0;
    // Body
    __Vdlyvset__ysyx_23060096_PCreg__DOT__inst_reg__v0 = 0U;
    if ((1U & (~ (IData)(vlSelf->rst_n)))) {
        __Vdlyvset__ysyx_23060096_PCreg__DOT__inst_reg__v0 = 1U;
    }
    if (__Vdlyvset__ysyx_23060096_PCreg__DOT__inst_reg__v0) {
        vlSelf->ysyx_23060096_PCreg__DOT__inst_reg[0x80000000U] = 0xf00093U;
    }
}

VL_INLINE_OPT void Vysyx_23060096_adder___024root___sequent__TOP__5(Vysyx_23060096_adder___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_23060096_adder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_23060096_adder___024root___sequent__TOP__5\n"); );
    // Body
    vlSelf->ysyx_23060096_pc__DOT__pc_next = ((IData)(vlSelf->ysyx_23060096_pc__02Erstn)
                                               ? ((IData)(4U) 
                                                  + vlSelf->ysyx_23060096_pc__DOT__pc_next)
                                               : 0x80000000U);
    vlSelf->ysyx_23060096_pc__02Epc = vlSelf->ysyx_23060096_pc__DOT__pc_next;
}

VL_INLINE_OPT void Vysyx_23060096_adder___024root___sequent__TOP__6(Vysyx_23060096_adder___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_23060096_adder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_23060096_adder___024root___sequent__TOP__6\n"); );
    // Variables
    CData/*4:0*/ __Vdlyvdim0__ysyx_23060096_RegisterFile__DOT__rf__v0;
    CData/*0:0*/ __Vdlyvset__ysyx_23060096_RegisterFile__DOT__rf__v0;
    CData/*0:0*/ __Vdlyvset__ysyx_23060096_RegisterFile__DOT__rf__v1;
    IData/*31:0*/ __Vdlyvval__ysyx_23060096_RegisterFile__DOT__rf__v0;
    // Body
    if ((1U & (~ (IData)(vlSelf->ysyx_23060096_RegisterFile__02Erstn)))) {
        vlSelf->ysyx_23060096_RegisterFile__DOT__i = 0x20U;
    }
    __Vdlyvset__ysyx_23060096_RegisterFile__DOT__rf__v0 = 0U;
    __Vdlyvset__ysyx_23060096_RegisterFile__DOT__rf__v1 = 0U;
    if (vlSelf->ysyx_23060096_RegisterFile__02Erstn) {
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

VL_INLINE_OPT void Vysyx_23060096_adder___024root___combo__TOP__7(Vysyx_23060096_adder___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_23060096_adder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_23060096_adder___024root___combo__TOP__7\n"); );
    // Body
    vlSelf->ysyx_23060096_PCreg__02Einst = ((0x80000000U 
                                             >= ((IData)(0x80000000U) 
                                                 + 
                                                 (1U 
                                                  & ((vlSelf->ysyx_23060096_PCreg__02Epc 
                                                      - (IData)(0x80000000U)) 
                                                     >> 2U))))
                                             ? vlSelf->ysyx_23060096_PCreg__DOT__inst_reg
                                            [((IData)(0x80000000U) 
                                              + (1U 
                                                 & ((vlSelf->ysyx_23060096_PCreg__02Epc 
                                                     - (IData)(0x80000000U)) 
                                                    >> 2U)))]
                                             : 0U);
    vlSelf->busA = ((0x10U >= (IData)(vlSelf->Ra)) ? 
                    vlSelf->ysyx_23060096_RegisterFile__DOT__rf
                    [vlSelf->Ra] : 0U);
    vlSelf->busB = ((0x10U >= (IData)(vlSelf->Rb)) ? 
                    vlSelf->ysyx_23060096_RegisterFile__DOT__rf
                    [vlSelf->Rb] : 0U);
}

void Vysyx_23060096_adder___024root___eval(Vysyx_23060096_adder___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_23060096_adder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_23060096_adder___024root___eval\n"); );
    // Body
    if (((IData)(vlSelf->ysyx_23060096_Reg__02Eclk) 
         & (~ (IData)(vlSelf->__Vclklast__TOP__ysyx_23060096_Reg__02Eclk)))) {
        Vysyx_23060096_adder___024root___sequent__TOP__1(vlSelf);
    }
    Vysyx_23060096_adder___024root___combo__TOP__2(vlSelf);
    vlSelf->__Vm_traceActivity[1U] = 1U;
    if (((IData)(vlSelf->ysyx_23060096_PCreg__02Eclk) 
         & (~ (IData)(vlSelf->__Vclklast__TOP__ysyx_23060096_PCreg__02Eclk)))) {
        Vysyx_23060096_adder___024root___sequent__TOP__4(vlSelf);
        vlSelf->__Vm_traceActivity[2U] = 1U;
    }
    if (((IData)(vlSelf->ysyx_23060096_pc__02Eclk) 
         & (~ (IData)(vlSelf->__Vclklast__TOP__ysyx_23060096_pc__02Eclk)))) {
        Vysyx_23060096_adder___024root___sequent__TOP__5(vlSelf);
    }
    if (((IData)(vlSelf->ysyx_23060096_RegisterFile__02Eclk) 
         & (~ (IData)(vlSelf->__Vclklast__TOP__ysyx_23060096_RegisterFile__02Eclk)))) {
        Vysyx_23060096_adder___024root___sequent__TOP__6(vlSelf);
        vlSelf->__Vm_traceActivity[3U] = 1U;
    }
    Vysyx_23060096_adder___024root___combo__TOP__7(vlSelf);
    // Final
    vlSelf->__Vclklast__TOP__ysyx_23060096_Reg__02Eclk 
        = vlSelf->ysyx_23060096_Reg__02Eclk;
    vlSelf->__Vclklast__TOP__ysyx_23060096_PCreg__02Eclk 
        = vlSelf->ysyx_23060096_PCreg__02Eclk;
    vlSelf->__Vclklast__TOP__ysyx_23060096_pc__02Eclk 
        = vlSelf->ysyx_23060096_pc__02Eclk;
    vlSelf->__Vclklast__TOP__ysyx_23060096_RegisterFile__02Eclk 
        = vlSelf->ysyx_23060096_RegisterFile__02Eclk;
}

QData Vysyx_23060096_adder___024root___change_request_1(Vysyx_23060096_adder___024root* vlSelf);

VL_INLINE_OPT QData Vysyx_23060096_adder___024root___change_request(Vysyx_23060096_adder___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_23060096_adder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_23060096_adder___024root___change_request\n"); );
    // Body
    return (Vysyx_23060096_adder___024root___change_request_1(vlSelf));
}

VL_INLINE_OPT QData Vysyx_23060096_adder___024root___change_request_1(Vysyx_23060096_adder___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_23060096_adder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_23060096_adder___024root___change_request_1\n"); );
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void Vysyx_23060096_adder___024root___eval_debug_assertions(Vysyx_23060096_adder___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_23060096_adder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_23060096_adder___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->ysyx_23060096_npc__02Eclk 
                     & 0xfeU))) {
        Verilated::overWidthError("ysyx_23060096_npc.clk");}
    if (VL_UNLIKELY((vlSelf->ysyx_23060096_npc__02Erstn 
                     & 0xfeU))) {
        Verilated::overWidthError("ysyx_23060096_npc.rstn");}
    if (VL_UNLIKELY((vlSelf->ysyx_23060096_PCreg__02Eclk 
                     & 0xfeU))) {
        Verilated::overWidthError("ysyx_23060096_PCreg.clk");}
    if (VL_UNLIKELY((vlSelf->rst_n & 0xfeU))) {
        Verilated::overWidthError("rst_n");}
    if (VL_UNLIKELY((vlSelf->ysyx_23060096_pc__02Eclk 
                     & 0xfeU))) {
        Verilated::overWidthError("ysyx_23060096_pc.clk");}
    if (VL_UNLIKELY((vlSelf->ysyx_23060096_pc__02Erstn 
                     & 0xfeU))) {
        Verilated::overWidthError("ysyx_23060096_pc.rstn");}
    if (VL_UNLIKELY((vlSelf->ysyx_23060096_RegisterFile__02Eclk 
                     & 0xfeU))) {
        Verilated::overWidthError("ysyx_23060096_RegisterFile.clk");}
    if (VL_UNLIKELY((vlSelf->ysyx_23060096_RegisterFile__02Erstn 
                     & 0xfeU))) {
        Verilated::overWidthError("ysyx_23060096_RegisterFile.rstn");}
    if (VL_UNLIKELY((vlSelf->Ra & 0xe0U))) {
        Verilated::overWidthError("Ra");}
    if (VL_UNLIKELY((vlSelf->Rb & 0xe0U))) {
        Verilated::overWidthError("Rb");}
    if (VL_UNLIKELY((vlSelf->waddr & 0xe0U))) {
        Verilated::overWidthError("waddr");}
    if (VL_UNLIKELY((vlSelf->w_en & 0xfeU))) {
        Verilated::overWidthError("w_en");}
    if (VL_UNLIKELY((vlSelf->ysyx_23060096_Reg__02Eclk 
                     & 0xfeU))) {
        Verilated::overWidthError("ysyx_23060096_Reg.clk");}
    if (VL_UNLIKELY((vlSelf->rst & 0xfeU))) {
        Verilated::overWidthError("rst");}
    if (VL_UNLIKELY((vlSelf->din & 0xfeU))) {
        Verilated::overWidthError("din");}
    if (VL_UNLIKELY((vlSelf->wen & 0xfeU))) {
        Verilated::overWidthError("wen");}
    if (VL_UNLIKELY((vlSelf->A & 0xf0U))) {
        Verilated::overWidthError("A");}
    if (VL_UNLIKELY((vlSelf->B & 0xf0U))) {
        Verilated::overWidthError("B");}
    if (VL_UNLIKELY((vlSelf->op & 0xf8U))) {
        Verilated::overWidthError("op");}
}
#endif  // VL_DEBUG
