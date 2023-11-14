// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vysyx_23060096_npc.h for the primary calling header

#include "Vysyx_23060096_npc___024root.h"
#include "Vysyx_23060096_npc__Syms.h"

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

void Vysyx_23060096_npc___024root___settle__TOP__2(Vysyx_23060096_npc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_23060096_npc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_23060096_npc___024root___settle__TOP__2\n"); );
    // Body
    vlSelf->ysyx_23060096_npc__DOT__u_ImmGen__DOT__immI 
        = (((- (IData)((vlSelf->inst >> 0x1fU))) << 0xcU) 
           | (0xfffU & (vlSelf->inst >> 0x13U)));
    vlSelf->pc = vlSelf->ysyx_23060096_npc__DOT__u_pc__DOT__pc_next;
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
        vlSelf->ysyx_23060096_npc__DOT__src2 = ((4U 
                                                 & (IData)(vlSelf->ysyx_23060096_npc__DOT__ExtOP))
                                                 ? 
                                                ((2U 
                                                  & (IData)(vlSelf->ysyx_23060096_npc__DOT__ExtOP))
                                                  ? vlSelf->ysyx_23060096_npc__DOT__u_ImmGen__DOT__immI
                                                  : 
                                                 ((1U 
                                                   & (IData)(vlSelf->ysyx_23060096_npc__DOT__ExtOP))
                                                   ? vlSelf->ysyx_23060096_npc__DOT__u_ImmGen__DOT__immI
                                                   : 
                                                  (((- (IData)(
                                                               (vlSelf->inst 
                                                                >> 0x1fU))) 
                                                    << 0x14U) 
                                                   | ((0xff000U 
                                                       & vlSelf->inst) 
                                                      | ((0x800U 
                                                          & (vlSelf->inst 
                                                             >> 9U)) 
                                                         | (0x7feU 
                                                            & (vlSelf->inst 
                                                               >> 0x14U)))))))
                                                 : 
                                                ((2U 
                                                  & (IData)(vlSelf->ysyx_23060096_npc__DOT__ExtOP))
                                                  ? 
                                                 ((1U 
                                                   & (IData)(vlSelf->ysyx_23060096_npc__DOT__ExtOP))
                                                   ? 
                                                  (((- (IData)(
                                                               (vlSelf->inst 
                                                                >> 0x1fU))) 
                                                    << 0xcU) 
                                                   | ((0x800U 
                                                       & (vlSelf->inst 
                                                          << 4U)) 
                                                      | ((0x7e0U 
                                                          & (vlSelf->inst 
                                                             >> 0x14U)) 
                                                         | (0x1eU 
                                                            & (vlSelf->inst 
                                                               >> 7U)))))
                                                   : 
                                                  (((- (IData)(
                                                               (vlSelf->inst 
                                                                >> 0x1fU))) 
                                                    << 0xcU) 
                                                   | ((0xfe0U 
                                                       & (vlSelf->inst 
                                                          >> 0x14U)) 
                                                      | (0x1fU 
                                                         & (vlSelf->inst 
                                                            >> 7U)))))
                                                  : 
                                                 ((1U 
                                                   & (IData)(vlSelf->ysyx_23060096_npc__DOT__ExtOP))
                                                   ? 
                                                  (0xfffff000U 
                                                   & vlSelf->inst)
                                                   : vlSelf->ysyx_23060096_npc__DOT__u_ImmGen__DOT__immI)));
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
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
}

void Vysyx_23060096_npc___024root___eval_settle(Vysyx_23060096_npc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_23060096_npc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_23060096_npc___024root___eval_settle\n"); );
    // Body
    Vysyx_23060096_npc___024root___settle__TOP__2(vlSelf);
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
    vlSelf->ysyx_23060096_npc__DOT__ExtOP = 0;
    vlSelf->ysyx_23060096_npc__DOT__RegWr = 0;
    vlSelf->ysyx_23060096_npc__DOT__ALUAsrc = 0;
    vlSelf->ysyx_23060096_npc__DOT__ALUBsrc = 0;
    vlSelf->ysyx_23060096_npc__DOT__Branch = 0;
    vlSelf->ysyx_23060096_npc__DOT__ALUctr = 0;
    vlSelf->ysyx_23060096_npc__DOT__MemtoReg = 0;
    vlSelf->ysyx_23060096_npc__DOT__MemWr = 0;
    vlSelf->ysyx_23060096_npc__DOT__MemOP = 0;
    vlSelf->ysyx_23060096_npc__DOT__src1 = 0;
    vlSelf->ysyx_23060096_npc__DOT__src2 = 0;
    vlSelf->ysyx_23060096_npc__DOT__u_pc__DOT__pc_next = 0;
    vlSelf->ysyx_23060096_npc__DOT__u_ImmGen__DOT__immI = 0;
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
