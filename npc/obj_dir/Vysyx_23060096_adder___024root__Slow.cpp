// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vysyx_23060096_adder.h for the primary calling header

#include "Vysyx_23060096_adder___024root.h"
#include "Vysyx_23060096_adder__Syms.h"

//==========


void Vysyx_23060096_adder___024root___ctor_var_reset(Vysyx_23060096_adder___024root* vlSelf);

Vysyx_23060096_adder___024root::Vysyx_23060096_adder___024root(const char* _vcname__)
    : VerilatedModule(_vcname__)
 {
    // Reset structure values
    Vysyx_23060096_adder___024root___ctor_var_reset(this);
}

void Vysyx_23060096_adder___024root::__Vconfigure(Vysyx_23060096_adder__Syms* _vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->vlSymsp = _vlSymsp;
}

Vysyx_23060096_adder___024root::~Vysyx_23060096_adder___024root() {
}

void Vysyx_23060096_adder___024root___settle__TOP__3(Vysyx_23060096_adder___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_23060096_adder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_23060096_adder___024root___settle__TOP__3\n"); );
    // Body
    vlSelf->ysyx_23060096_alu__DOT__add = (0xfU & ((IData)(vlSelf->A) 
                                                   + (IData)(vlSelf->B)));
    vlSelf->ysyx_23060096_alu__DOT__res = (0xfU & ((IData)(1U) 
                                                   + 
                                                   ((IData)(vlSelf->A) 
                                                    + 
                                                    (~ (IData)(vlSelf->B)))));
    vlSelf->ysyx_23060096_MuxKeyInternal__DOT__pair_list[0U] 
        = (3U & (IData)(vlSelf->lut));
    vlSelf->ysyx_23060096_MuxKeyInternal__DOT__pair_list[1U] 
        = (3U & ((IData)(vlSelf->lut) >> 2U));
    vlSelf->ysyx_23060096_pc__02Epc = vlSelf->ysyx_23060096_pc__DOT__pc_next;
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
    vlSelf->ysyx_23060096_alu__02Eout = (0xfU & ((4U 
                                                  & (IData)(vlSelf->op))
                                                  ? 
                                                 ((2U 
                                                   & (IData)(vlSelf->op))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelf->op))
                                                    ? 
                                                   ((0U 
                                                     != (IData)(vlSelf->ysyx_23060096_alu__DOT__res))
                                                     ? 0U
                                                     : 1U)
                                                    : 
                                                   ((8U 
                                                     & (IData)(vlSelf->ysyx_23060096_alu__DOT__res))
                                                     ? 1U
                                                     : 0U))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelf->op))
                                                    ? 
                                                   ((IData)(vlSelf->A) 
                                                    ^ (IData)(vlSelf->B))
                                                    : 
                                                   ((IData)(vlSelf->A) 
                                                    | (IData)(vlSelf->B))))
                                                  : 
                                                 ((2U 
                                                   & (IData)(vlSelf->op))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelf->op))
                                                    ? 
                                                   ((IData)(vlSelf->A) 
                                                    & (IData)(vlSelf->B))
                                                    : 
                                                   (~ (IData)(vlSelf->A)))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelf->op))
                                                    ? (IData)(vlSelf->ysyx_23060096_alu__DOT__res)
                                                    : (IData)(vlSelf->ysyx_23060096_alu__DOT__add)))));
    vlSelf->ysyx_23060096_MuxKeyInternal__DOT__data_list[0U] 
        = (1U & vlSelf->ysyx_23060096_MuxKeyInternal__DOT__pair_list
           [0U]);
    vlSelf->ysyx_23060096_MuxKeyInternal__DOT__data_list[1U] 
        = (1U & vlSelf->ysyx_23060096_MuxKeyInternal__DOT__pair_list
           [1U]);
    vlSelf->ysyx_23060096_MuxKeyInternal__DOT__key_list[0U] 
        = (1U & (vlSelf->ysyx_23060096_MuxKeyInternal__DOT__pair_list
                 [0U] >> 1U));
    vlSelf->ysyx_23060096_MuxKeyInternal__DOT__key_list[1U] 
        = (1U & (vlSelf->ysyx_23060096_MuxKeyInternal__DOT__pair_list
                 [1U] >> 1U));
    vlSelf->ysyx_23060096_MuxKeyInternal__DOT__hit 
        = ((IData)(vlSelf->key) == vlSelf->ysyx_23060096_MuxKeyInternal__DOT__key_list
           [0U]);
    vlSelf->ysyx_23060096_MuxKeyInternal__DOT__hit 
        = ((IData)(vlSelf->ysyx_23060096_MuxKeyInternal__DOT__hit) 
           | ((IData)(vlSelf->key) == vlSelf->ysyx_23060096_MuxKeyInternal__DOT__key_list
              [1U]));
    vlSelf->ysyx_23060096_MuxKeyInternal__DOT__lut_out 
        = (((IData)(vlSelf->key) == vlSelf->ysyx_23060096_MuxKeyInternal__DOT__key_list
            [0U]) & vlSelf->ysyx_23060096_MuxKeyInternal__DOT__data_list
           [0U]);
    vlSelf->ysyx_23060096_MuxKeyInternal__DOT__lut_out 
        = ((IData)(vlSelf->ysyx_23060096_MuxKeyInternal__DOT__lut_out) 
           | (((IData)(vlSelf->key) == vlSelf->ysyx_23060096_MuxKeyInternal__DOT__key_list
               [1U]) & vlSelf->ysyx_23060096_MuxKeyInternal__DOT__data_list
              [1U]));
    vlSelf->ysyx_23060096_MuxKeyInternal__02Eout = vlSelf->ysyx_23060096_MuxKeyInternal__DOT__lut_out;
}

void Vysyx_23060096_adder___024root___eval_initial(Vysyx_23060096_adder___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_23060096_adder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_23060096_adder___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vclklast__TOP__ysyx_23060096_Reg__02Eclk 
        = vlSelf->ysyx_23060096_Reg__02Eclk;
    vlSelf->__Vclklast__TOP__ysyx_23060096_PCreg__02Eclk 
        = vlSelf->ysyx_23060096_PCreg__02Eclk;
    vlSelf->__Vclklast__TOP__ysyx_23060096_pc__02Eclk 
        = vlSelf->ysyx_23060096_pc__02Eclk;
    vlSelf->__Vclklast__TOP__ysyx_23060096_RegisterFile__02Eclk 
        = vlSelf->ysyx_23060096_RegisterFile__02Eclk;
}

void Vysyx_23060096_adder___024root___eval_settle(Vysyx_23060096_adder___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_23060096_adder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_23060096_adder___024root___eval_settle\n"); );
    // Body
    Vysyx_23060096_adder___024root___settle__TOP__3(vlSelf);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
}

void Vysyx_23060096_adder___024root___final(Vysyx_23060096_adder___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_23060096_adder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_23060096_adder___024root___final\n"); );
}

void Vysyx_23060096_adder___024root___ctor_var_reset(Vysyx_23060096_adder___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_23060096_adder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_23060096_adder___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->ysyx_23060096_MuxKeyInternal__02Eout = 0;
    vlSelf->key = 0;
    vlSelf->default_out = 0;
    vlSelf->lut = 0;
    vlSelf->ysyx_23060096_npc__02Eclk = 0;
    vlSelf->ysyx_23060096_npc__02Erstn = 0;
    vlSelf->ysyx_23060096_npc__02Einst = 0;
    vlSelf->ysyx_23060096_npc__02Epc = 0;
    vlSelf->ysyx_23060096_PCreg__02Eclk = 0;
    vlSelf->rst_n = 0;
    vlSelf->ysyx_23060096_PCreg__02Epc = 0;
    vlSelf->ysyx_23060096_PCreg__02Einst = 0;
    vlSelf->ysyx_23060096_pc__02Eclk = 0;
    vlSelf->ysyx_23060096_pc__02Erstn = 0;
    vlSelf->ysyx_23060096_pc__02Epc = 0;
    vlSelf->ysyx_23060096_RegisterFile__02Eclk = 0;
    vlSelf->ysyx_23060096_RegisterFile__02Erstn = 0;
    vlSelf->wdata = 0;
    vlSelf->Ra = 0;
    vlSelf->Rb = 0;
    vlSelf->waddr = 0;
    vlSelf->w_en = 0;
    vlSelf->busA = 0;
    vlSelf->busB = 0;
    vlSelf->ysyx_23060096_Reg__02Eclk = 0;
    vlSelf->rst = 0;
    vlSelf->din = 0;
    vlSelf->dout = 0;
    vlSelf->wen = 0;
    vlSelf->A = 0;
    vlSelf->B = 0;
    vlSelf->op = 0;
    vlSelf->ysyx_23060096_alu__02Eout = 0;
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->ysyx_23060096_MuxKeyInternal__DOT__pair_list[__Vi0] = 0;
    }
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->ysyx_23060096_MuxKeyInternal__DOT__key_list[__Vi0] = 0;
    }
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->ysyx_23060096_MuxKeyInternal__DOT__data_list[__Vi0] = 0;
    }
    vlSelf->ysyx_23060096_MuxKeyInternal__DOT__lut_out = 0;
    vlSelf->ysyx_23060096_MuxKeyInternal__DOT__hit = 0;
    for (int __Vi0=0; __Vi0<-2147483647; ++__Vi0) {
        vlSelf->ysyx_23060096_PCreg__DOT__inst_reg[__Vi0] = 0;
    }
    vlSelf->ysyx_23060096_pc__DOT__pc_next = 0;
    for (int __Vi0=0; __Vi0<17; ++__Vi0) {
        vlSelf->ysyx_23060096_RegisterFile__DOT__rf[__Vi0] = 0;
    }
    vlSelf->ysyx_23060096_RegisterFile__DOT__i = 0;
    vlSelf->ysyx_23060096_RegisterFile__DOT____Vlvbound1 = 0;
    vlSelf->ysyx_23060096_alu__DOT__res = 0;
    vlSelf->ysyx_23060096_alu__DOT__add = 0;
    for (int __Vi0=0; __Vi0<4; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
