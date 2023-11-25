// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vysyx_23060096_npc.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vysyx_23060096_npc__Syms.h"
#include "Vysyx_23060096_npc___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vysyx_23060096_npc___024root___dump_triggers__ico(Vysyx_23060096_npc___024root* vlSelf);
#endif  // VL_DEBUG

void Vysyx_23060096_npc___024root___eval_triggers__ico(Vysyx_23060096_npc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_23060096_npc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_23060096_npc___024root___eval_triggers__ico\n"); );
    // Body
    vlSelf->__VicoTriggered.at(0U) = (0U == vlSelf->__VicoIterCount);
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vysyx_23060096_npc___024root___dump_triggers__ico(vlSelf);
    }
#endif
}

void Vysyx_23060096_npc___024unit____Vdpiimwrap_ebreak_TOP____024unit(IData/*31:0*/ inst);

VL_INLINE_OPT void Vysyx_23060096_npc___024root___ico_sequent__TOP__0(Vysyx_23060096_npc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_23060096_npc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_23060096_npc___024root___ico_sequent__TOP__0\n"); );
    // Body
    Vysyx_23060096_npc___024unit____Vdpiimwrap_ebreak_TOP____024unit(vlSelf->inst);
    if ((0x40U == (0x1feU & ((0x1f0U & (vlSelf->inst 
                                        << 2U)) | (
                                                   (0xeU 
                                                    & (vlSelf->inst 
                                                       >> 0xbU)) 
                                                   | (1U 
                                                      & (vlSelf->inst 
                                                         >> 0x1eU))))))) {
        vlSelf->ysyx_23060096_npc__DOT__Branch = 0U;
        vlSelf->ysyx_23060096_npc__DOT__MemtoReg = 0U;
        vlSelf->ysyx_23060096_npc__DOT__ALUctr = 0U;
        vlSelf->ysyx_23060096_npc__DOT__ALUBsrc = 1U;
        vlSelf->ysyx_23060096_npc__DOT__ALUAsrc = 0U;
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
    vlSelf->ysyx_23060096_npc__DOT__u_alu__DOT__res 
        = ((IData)(1U) + (vlSelf->ysyx_23060096_npc__DOT__src1 
                          + (~ vlSelf->ysyx_23060096_npc__DOT__src2)));
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vysyx_23060096_npc___024root___dump_triggers__act(Vysyx_23060096_npc___024root* vlSelf);
#endif  // VL_DEBUG

void Vysyx_23060096_npc___024root___eval_triggers__act(Vysyx_23060096_npc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_23060096_npc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_23060096_npc___024root___eval_triggers__act\n"); );
    // Body
    vlSelf->__VactTriggered.at(0U) = ((~ (IData)(vlSelf->clk)) 
                                      & (IData)(vlSelf->__Vtrigrprev__TOP__clk));
    vlSelf->__Vtrigrprev__TOP__clk = vlSelf->clk;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vysyx_23060096_npc___024root___dump_triggers__act(vlSelf);
    }
#endif
}
