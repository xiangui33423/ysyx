// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vysyx_23060096_npc.h for the primary calling header

#include "Vysyx_23060096_npc___024root.h"
#include "Vysyx_23060096_npc__Syms.h"

#include "verilated_dpi.h"

//==========


void Vysyx_23060096_npc___024root___ctor_var_reset(Vysyx_23060096_npc___024root* vlSelf);

Vysyx_23060096_npc___024root::Vysyx_23060096_npc___024root(const char* _vcname__)
    : VerilatedModule(_vcname__)
 {
    // Reset structure values
    Vysyx_23060096_npc___024root___ctor_var_reset(this);
}

void Vysyx_23060096_npc___024root::__Vconfigure(Vysyx_23060096_npc__Syms* _vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->vlSymsp = _vlSymsp;
}

Vysyx_23060096_npc___024root::~Vysyx_23060096_npc___024root() {
}

void Vysyx_23060096_npc___024root____Vdpiimwrap_ysyx_23060096_npc__DOT__ebreak_TOP(IData/*31:0*/ inst, IData/*31:0*/ &ebreak__Vfuncrtn);

void Vysyx_23060096_npc___024root___settle__TOP__3(Vysyx_23060096_npc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_23060096_npc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_23060096_npc___024root___settle__TOP__3\n"); );
    // Variables
    IData/*31:0*/ __Vtask_ysyx_23060096_npc__DOT__ebreak__0__Vfuncout;
    // Body
    Vysyx_23060096_npc___024root____Vdpiimwrap_ysyx_23060096_npc__DOT__ebreak_TOP(vlSelf->inst, __Vtask_ysyx_23060096_npc__DOT__ebreak__0__Vfuncout);
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

void Vysyx_23060096_npc___024root___eval_initial(Vysyx_23060096_npc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_23060096_npc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_23060096_npc___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vclklast__TOP__ysyx_23060096_npc__DOT__clk_en 
        = vlSelf->ysyx_23060096_npc__DOT__clk_en;
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
}

void Vysyx_23060096_npc___024root___eval_settle(Vysyx_23060096_npc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_23060096_npc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_23060096_npc___024root___eval_settle\n"); );
    // Body
    Vysyx_23060096_npc___024root___settle__TOP__3(vlSelf);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
}

void Vysyx_23060096_npc___024root___final(Vysyx_23060096_npc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_23060096_npc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_23060096_npc___024root___final\n"); );
}

void Vysyx_23060096_npc___024root___ctor_var_reset(Vysyx_23060096_npc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_23060096_npc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_23060096_npc___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clk = 0;
    vlSelf->rstn = 0;
    vlSelf->inst = 0;
    vlSelf->pc = 0;
    vlSelf->ysyx_23060096_npc__DOT__en = 0;
    vlSelf->ysyx_23060096_npc__DOT__clk_en = 0;
    vlSelf->ysyx_23060096_npc__DOT__ALUAsrc = 0;
    vlSelf->ysyx_23060096_npc__DOT__ALUBsrc = 0;
    vlSelf->ysyx_23060096_npc__DOT__Branch = 0;
    vlSelf->ysyx_23060096_npc__DOT__ALUctr = 0;
    vlSelf->ysyx_23060096_npc__DOT__MemtoReg = 0;
    vlSelf->ysyx_23060096_npc__DOT__MemOP = 0;
    vlSelf->ysyx_23060096_npc__DOT__src1 = 0;
    vlSelf->ysyx_23060096_npc__DOT__src2 = 0;
    for (int __Vi0=0; __Vi0<17; ++__Vi0) {
        vlSelf->ysyx_23060096_npc__DOT__u_RegisterFile__DOT__rf[__Vi0] = 0;
    }
    vlSelf->ysyx_23060096_npc__DOT__u_RegisterFile__DOT__i = 0;
    vlSelf->ysyx_23060096_npc__DOT__u_RegisterFile__DOT____Vlvbound1 = 0;
    vlSelf->ysyx_23060096_npc__DOT__u_alu__DOT__res = 0;
    vlSelf->ysyx_23060096_npc__DOT__u_alu__DOT__sub = 0;
    vlSelf->ysyx_23060096_npc__DOT__u_alu__DOT__add = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
