// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vysyx_23060096_npc__Syms.h"


void Vysyx_23060096_npc___024root__trace_chg_sub_0(Vysyx_23060096_npc___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vysyx_23060096_npc___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_23060096_npc___024root__trace_chg_top_0\n"); );
    // Init
    Vysyx_23060096_npc___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vysyx_23060096_npc___024root*>(voidSelf);
    Vysyx_23060096_npc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vysyx_23060096_npc___024root__trace_chg_sub_0((&vlSymsp->TOP), bufp);
}

void Vysyx_23060096_npc___024root__trace_chg_sub_0(Vysyx_23060096_npc___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_23060096_npc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_23060096_npc___024root__trace_chg_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        bufp->chgBit(oldp+0,(vlSelf->ysyx_23060096_npc__DOT__ALUAsrc));
        bufp->chgCData(oldp+1,(vlSelf->ysyx_23060096_npc__DOT__ALUBsrc),2);
        bufp->chgCData(oldp+2,(vlSelf->ysyx_23060096_npc__DOT__Branch),3);
        bufp->chgCData(oldp+3,(vlSelf->ysyx_23060096_npc__DOT__ALUctr),4);
        bufp->chgBit(oldp+4,(vlSelf->ysyx_23060096_npc__DOT__MemtoReg));
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[1U] 
                     | vlSelf->__Vm_traceActivity[2U]))) {
        bufp->chgIData(oldp+5,(vlSelf->ysyx_23060096_npc__DOT__src1),32);
        bufp->chgIData(oldp+6,(vlSelf->ysyx_23060096_npc__DOT__src2),32);
        bufp->chgIData(oldp+7,(((4U & (IData)(vlSelf->ysyx_23060096_npc__DOT__ALUctr))
                                 ? ((2U & (IData)(vlSelf->ysyx_23060096_npc__DOT__ALUctr))
                                     ? ((1U & (IData)(vlSelf->ysyx_23060096_npc__DOT__ALUctr))
                                         ? ((0U != vlSelf->ysyx_23060096_npc__DOT__u_alu__DOT__res)
                                             ? 0U : 1U)
                                         : ((8U & vlSelf->ysyx_23060096_npc__DOT__u_alu__DOT__res)
                                             ? 1U : 0U))
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
                                         : vlSelf->ysyx_23060096_npc__DOT__u_alu__DOT__add)))),32);
        bufp->chgBit(oldp+8,((1U & (~ (IData)((0U != vlSelf->ysyx_23060096_npc__DOT__u_alu__DOT__add))))));
        bufp->chgBit(oldp+9,((1U & (~ (IData)((0U != vlSelf->ysyx_23060096_npc__DOT__u_alu__DOT__res))))));
        bufp->chgBit(oldp+10,((((vlSelf->ysyx_23060096_npc__DOT__src1 
                                 >> 0x1fU) == (vlSelf->ysyx_23060096_npc__DOT__src2 
                                               >> 0x1fU)) 
                               & ((vlSelf->ysyx_23060096_npc__DOT__u_alu__DOT__add 
                                   >> 0x1fU) != (vlSelf->ysyx_23060096_npc__DOT__src1 
                                                 >> 0x1fU)))));
        bufp->chgBit(oldp+11,((1U & (IData)((1ULL & 
                                             (((QData)((IData)(vlSelf->ysyx_23060096_npc__DOT__src1)) 
                                               + (QData)((IData)(vlSelf->ysyx_23060096_npc__DOT__src2))) 
                                              >> 0x20U))))));
        bufp->chgIData(oldp+12,(vlSelf->ysyx_23060096_npc__DOT__u_alu__DOT__res),32);
        bufp->chgIData(oldp+13,(vlSelf->ysyx_23060096_npc__DOT__u_alu__DOT__add),32);
        bufp->chgBit(oldp+14,((((vlSelf->ysyx_23060096_npc__DOT__src1 
                                 >> 0x1fU) == (1U & 
                                               (~ (vlSelf->ysyx_23060096_npc__DOT__src2 
                                                   >> 0x1fU)))) 
                               & ((vlSelf->ysyx_23060096_npc__DOT__u_alu__DOT__res 
                                   >> 0x1fU) != (vlSelf->ysyx_23060096_npc__DOT__src1 
                                                 >> 0x1fU)))));
        bufp->chgBit(oldp+15,((1U & (IData)((1ULL & 
                                             ((1ULL 
                                               + ((QData)((IData)(vlSelf->ysyx_23060096_npc__DOT__src1)) 
                                                  + (QData)((IData)(
                                                                    (~ vlSelf->ysyx_23060096_npc__DOT__src2))))) 
                                              >> 0x20U))))));
        bufp->chgIData(oldp+16,((~ vlSelf->ysyx_23060096_npc__DOT__src2)),32);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
        bufp->chgIData(oldp+17,(vlSelf->ysyx_23060096_npc__DOT__u_RegisterFile__DOT__rf[0]),32);
        bufp->chgIData(oldp+18,(vlSelf->ysyx_23060096_npc__DOT__u_RegisterFile__DOT__rf[1]),32);
        bufp->chgIData(oldp+19,(vlSelf->ysyx_23060096_npc__DOT__u_RegisterFile__DOT__rf[2]),32);
        bufp->chgIData(oldp+20,(vlSelf->ysyx_23060096_npc__DOT__u_RegisterFile__DOT__rf[3]),32);
        bufp->chgIData(oldp+21,(vlSelf->ysyx_23060096_npc__DOT__u_RegisterFile__DOT__rf[4]),32);
        bufp->chgIData(oldp+22,(vlSelf->ysyx_23060096_npc__DOT__u_RegisterFile__DOT__rf[5]),32);
        bufp->chgIData(oldp+23,(vlSelf->ysyx_23060096_npc__DOT__u_RegisterFile__DOT__rf[6]),32);
        bufp->chgIData(oldp+24,(vlSelf->ysyx_23060096_npc__DOT__u_RegisterFile__DOT__rf[7]),32);
        bufp->chgIData(oldp+25,(vlSelf->ysyx_23060096_npc__DOT__u_RegisterFile__DOT__rf[8]),32);
        bufp->chgIData(oldp+26,(vlSelf->ysyx_23060096_npc__DOT__u_RegisterFile__DOT__rf[9]),32);
        bufp->chgIData(oldp+27,(vlSelf->ysyx_23060096_npc__DOT__u_RegisterFile__DOT__rf[10]),32);
        bufp->chgIData(oldp+28,(vlSelf->ysyx_23060096_npc__DOT__u_RegisterFile__DOT__rf[11]),32);
        bufp->chgIData(oldp+29,(vlSelf->ysyx_23060096_npc__DOT__u_RegisterFile__DOT__rf[12]),32);
        bufp->chgIData(oldp+30,(vlSelf->ysyx_23060096_npc__DOT__u_RegisterFile__DOT__rf[13]),32);
        bufp->chgIData(oldp+31,(vlSelf->ysyx_23060096_npc__DOT__u_RegisterFile__DOT__rf[14]),32);
        bufp->chgIData(oldp+32,(vlSelf->ysyx_23060096_npc__DOT__u_RegisterFile__DOT__rf[15]),32);
        bufp->chgIData(oldp+33,(vlSelf->ysyx_23060096_npc__DOT__u_RegisterFile__DOT__rf[16]),32);
        bufp->chgIData(oldp+34,(vlSelf->ysyx_23060096_npc__DOT__u_RegisterFile__DOT__i),32);
    }
    bufp->chgBit(oldp+35,(vlSelf->clk));
    bufp->chgBit(oldp+36,(vlSelf->rstn));
    bufp->chgIData(oldp+37,(vlSelf->inst),32);
    bufp->chgIData(oldp+38,(vlSelf->pc),32);
    bufp->chgBit(oldp+39,((0x40U == (0x1feU & ((0x1f0U 
                                                & (vlSelf->inst 
                                                   << 2U)) 
                                               | ((0xeU 
                                                   & (vlSelf->inst 
                                                      >> 0xbU)) 
                                                  | (1U 
                                                     & (vlSelf->inst 
                                                        >> 0x1eU))))))));
    bufp->chgIData(oldp+40,((((- (IData)((vlSelf->inst 
                                          >> 0x1fU))) 
                              << 0xcU) | (0xfffU & 
                                          (vlSelf->inst 
                                           >> 0x13U)))),32);
    bufp->chgIData(oldp+41,(((0x10U >= (0x1fU & (vlSelf->inst 
                                                 >> 0xfU)))
                              ? vlSelf->ysyx_23060096_npc__DOT__u_RegisterFile__DOT__rf
                             [(0x1fU & (vlSelf->inst 
                                        >> 0xfU))] : 0U)),32);
    bufp->chgIData(oldp+42,(((0x10U >= (0x1fU & (vlSelf->inst 
                                                 >> 0x14U)))
                              ? vlSelf->ysyx_23060096_npc__DOT__u_RegisterFile__DOT__rf
                             [(0x1fU & (vlSelf->inst 
                                        >> 0x14U))]
                              : 0U)),32);
    bufp->chgCData(oldp+43,((0x7fU & vlSelf->inst)),7);
    bufp->chgCData(oldp+44,((7U & (vlSelf->inst >> 0xcU))),3);
    bufp->chgCData(oldp+45,((vlSelf->inst >> 0x19U)),7);
    bufp->chgIData(oldp+46,((vlSelf->inst >> 7U)),25);
    bufp->chgIData(oldp+47,((0xfffff000U & vlSelf->inst)),32);
    bufp->chgIData(oldp+48,((((- (IData)((vlSelf->inst 
                                          >> 0x1fU))) 
                              << 0xcU) | ((0xfe0U & 
                                           (vlSelf->inst 
                                            >> 0x14U)) 
                                          | (0x1fU 
                                             & (vlSelf->inst 
                                                >> 7U))))),32);
    bufp->chgIData(oldp+49,((((- (IData)((vlSelf->inst 
                                          >> 0x1fU))) 
                              << 0xcU) | ((0x800U & 
                                           (vlSelf->inst 
                                            << 4U)) 
                                          | ((0x7e0U 
                                              & (vlSelf->inst 
                                                 >> 0x14U)) 
                                             | (0x1eU 
                                                & (vlSelf->inst 
                                                   >> 7U)))))),32);
    bufp->chgIData(oldp+50,((((- (IData)((vlSelf->inst 
                                          >> 0x1fU))) 
                              << 0x14U) | ((0xff000U 
                                            & vlSelf->inst) 
                                           | ((0x800U 
                                               & (vlSelf->inst 
                                                  >> 9U)) 
                                              | (0x7feU 
                                                 & (vlSelf->inst 
                                                    >> 0x14U)))))),32);
    bufp->chgCData(oldp+51,((0x1fU & (vlSelf->inst 
                                      >> 0xfU))),5);
    bufp->chgCData(oldp+52,((0x1fU & (vlSelf->inst 
                                      >> 0x14U))),5);
    bufp->chgCData(oldp+53,((0x1fU & (vlSelf->inst 
                                      >> 7U))),5);
}

void Vysyx_23060096_npc___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_23060096_npc___024root__trace_cleanup\n"); );
    // Init
    Vysyx_23060096_npc___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vysyx_23060096_npc___024root*>(voidSelf);
    Vysyx_23060096_npc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
}
