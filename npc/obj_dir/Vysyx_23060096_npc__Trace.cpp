// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vysyx_23060096_npc__Syms.h"


void Vysyx_23060096_npc___024root__traceChgSub0(Vysyx_23060096_npc___024root* vlSelf, VerilatedVcd* tracep);

void Vysyx_23060096_npc___024root__traceChgTop0(void* voidSelf, VerilatedVcd* tracep) {
    Vysyx_23060096_npc___024root* const __restrict vlSelf = static_cast<Vysyx_23060096_npc___024root*>(voidSelf);
    Vysyx_23060096_npc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    {
        Vysyx_23060096_npc___024root__traceChgSub0((&vlSymsp->TOP), tracep);
    }
}

void Vysyx_23060096_npc___024root__traceChgSub0(Vysyx_23060096_npc___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_23060096_npc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode + 1);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
            tracep->chgIData(oldp+0,(vlSelf->ysyx_23060096_npc__DOT__src1),32);
            tracep->chgIData(oldp+1,(vlSelf->ysyx_23060096_npc__DOT__src2),32);
            tracep->chgIData(oldp+2,(((4U & (IData)(vlSelf->ysyx_23060096_npc__DOT__ALUctr))
                                       ? ((2U & (IData)(vlSelf->ysyx_23060096_npc__DOT__ALUctr))
                                           ? ((1U & (IData)(vlSelf->ysyx_23060096_npc__DOT__ALUctr))
                                               ? ((0U 
                                                   != vlSelf->ysyx_23060096_npc__DOT__u_alu__DOT__res)
                                                   ? 0U
                                                   : 1U)
                                               : ((8U 
                                                   & vlSelf->ysyx_23060096_npc__DOT__u_alu__DOT__res)
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
                                               : vlSelf->ysyx_23060096_npc__DOT__u_alu__DOT__add)))),32);
            tracep->chgIData(oldp+3,(vlSelf->ysyx_23060096_npc__DOT__u_ImmGen__DOT__immI),32);
            tracep->chgBit(oldp+4,((1U & (~ (IData)(
                                                    (0U 
                                                     != vlSelf->ysyx_23060096_npc__DOT__u_alu__DOT__add))))));
            tracep->chgBit(oldp+5,((1U & (~ (IData)(
                                                    (0U 
                                                     != vlSelf->ysyx_23060096_npc__DOT__u_alu__DOT__sub))))));
            tracep->chgBit(oldp+6,((1U & (~ (IData)(
                                                    (0U 
                                                     != vlSelf->ysyx_23060096_npc__DOT__u_alu__DOT__res))))));
            tracep->chgBit(oldp+7,((((vlSelf->ysyx_23060096_npc__DOT__src1 
                                      >> 0x1fU) == 
                                     (vlSelf->ysyx_23060096_npc__DOT__src2 
                                      >> 0x1fU)) & 
                                    ((vlSelf->ysyx_23060096_npc__DOT__u_alu__DOT__add 
                                      >> 0x1fU) != 
                                     (vlSelf->ysyx_23060096_npc__DOT__src1 
                                      >> 0x1fU)))));
            tracep->chgBit(oldp+8,((1U & (IData)((1ULL 
                                                  & (((QData)((IData)(vlSelf->ysyx_23060096_npc__DOT__src1)) 
                                                      + (QData)((IData)(vlSelf->ysyx_23060096_npc__DOT__src2))) 
                                                     >> 0x20U))))));
            tracep->chgIData(oldp+9,(vlSelf->ysyx_23060096_npc__DOT__u_alu__DOT__res),32);
            tracep->chgIData(oldp+10,(vlSelf->ysyx_23060096_npc__DOT__u_alu__DOT__sub),32);
            tracep->chgIData(oldp+11,(vlSelf->ysyx_23060096_npc__DOT__u_alu__DOT__add),32);
            tracep->chgBit(oldp+12,((((vlSelf->ysyx_23060096_npc__DOT__src1 
                                       >> 0x1fU) == 
                                      (1U & (~ (vlSelf->ysyx_23060096_npc__DOT__src2 
                                                >> 0x1fU)))) 
                                     & ((vlSelf->ysyx_23060096_npc__DOT__u_alu__DOT__sub 
                                         >> 0x1fU) 
                                        != (vlSelf->ysyx_23060096_npc__DOT__src1 
                                            >> 0x1fU)))));
            tracep->chgBit(oldp+13,((1U & (IData)((1ULL 
                                                   & ((1ULL 
                                                       + 
                                                       ((QData)((IData)(vlSelf->ysyx_23060096_npc__DOT__src1)) 
                                                        + (QData)((IData)(
                                                                          (~ vlSelf->ysyx_23060096_npc__DOT__src2))))) 
                                                      >> 0x20U))))));
            tracep->chgIData(oldp+14,((~ vlSelf->ysyx_23060096_npc__DOT__src2)),32);
            tracep->chgBit(oldp+15,((((vlSelf->ysyx_23060096_npc__DOT__src1 
                                       >> 0x1fU) == 
                                      (1U & (~ (vlSelf->ysyx_23060096_npc__DOT__src2 
                                                >> 0x1fU)))) 
                                     & ((vlSelf->ysyx_23060096_npc__DOT__u_alu__DOT__res 
                                         >> 0x1fU) 
                                        != (vlSelf->ysyx_23060096_npc__DOT__src1 
                                            >> 0x1fU)))));
        }
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
            tracep->chgIData(oldp+16,(vlSelf->ysyx_23060096_npc__DOT__u_pc__DOT__pc_next),32);
            tracep->chgIData(oldp+17,(vlSelf->ysyx_23060096_npc__DOT__u_RegisterFile__DOT__rf[0]),32);
            tracep->chgIData(oldp+18,(vlSelf->ysyx_23060096_npc__DOT__u_RegisterFile__DOT__rf[1]),32);
            tracep->chgIData(oldp+19,(vlSelf->ysyx_23060096_npc__DOT__u_RegisterFile__DOT__rf[2]),32);
            tracep->chgIData(oldp+20,(vlSelf->ysyx_23060096_npc__DOT__u_RegisterFile__DOT__rf[3]),32);
            tracep->chgIData(oldp+21,(vlSelf->ysyx_23060096_npc__DOT__u_RegisterFile__DOT__rf[4]),32);
            tracep->chgIData(oldp+22,(vlSelf->ysyx_23060096_npc__DOT__u_RegisterFile__DOT__rf[5]),32);
            tracep->chgIData(oldp+23,(vlSelf->ysyx_23060096_npc__DOT__u_RegisterFile__DOT__rf[6]),32);
            tracep->chgIData(oldp+24,(vlSelf->ysyx_23060096_npc__DOT__u_RegisterFile__DOT__rf[7]),32);
            tracep->chgIData(oldp+25,(vlSelf->ysyx_23060096_npc__DOT__u_RegisterFile__DOT__rf[8]),32);
            tracep->chgIData(oldp+26,(vlSelf->ysyx_23060096_npc__DOT__u_RegisterFile__DOT__rf[9]),32);
            tracep->chgIData(oldp+27,(vlSelf->ysyx_23060096_npc__DOT__u_RegisterFile__DOT__rf[10]),32);
            tracep->chgIData(oldp+28,(vlSelf->ysyx_23060096_npc__DOT__u_RegisterFile__DOT__rf[11]),32);
            tracep->chgIData(oldp+29,(vlSelf->ysyx_23060096_npc__DOT__u_RegisterFile__DOT__rf[12]),32);
            tracep->chgIData(oldp+30,(vlSelf->ysyx_23060096_npc__DOT__u_RegisterFile__DOT__rf[13]),32);
            tracep->chgIData(oldp+31,(vlSelf->ysyx_23060096_npc__DOT__u_RegisterFile__DOT__rf[14]),32);
            tracep->chgIData(oldp+32,(vlSelf->ysyx_23060096_npc__DOT__u_RegisterFile__DOT__rf[15]),32);
            tracep->chgIData(oldp+33,(vlSelf->ysyx_23060096_npc__DOT__u_RegisterFile__DOT__rf[16]),32);
            tracep->chgIData(oldp+34,(vlSelf->ysyx_23060096_npc__DOT__u_RegisterFile__DOT__i),32);
        }
        tracep->chgBit(oldp+35,(vlSelf->clk));
        tracep->chgBit(oldp+36,(vlSelf->rstn));
        tracep->chgIData(oldp+37,(vlSelf->inst),32);
        tracep->chgIData(oldp+38,(vlSelf->pc),32);
        tracep->chgIData(oldp+39,(((4U & (IData)(vlSelf->ysyx_23060096_npc__DOT__ExtOP))
                                    ? ((2U & (IData)(vlSelf->ysyx_23060096_npc__DOT__ExtOP))
                                        ? vlSelf->ysyx_23060096_npc__DOT__u_ImmGen__DOT__immI
                                        : ((1U & (IData)(vlSelf->ysyx_23060096_npc__DOT__ExtOP))
                                            ? vlSelf->ysyx_23060096_npc__DOT__u_ImmGen__DOT__immI
                                            : (((- (IData)(
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
                                    : ((2U & (IData)(vlSelf->ysyx_23060096_npc__DOT__ExtOP))
                                        ? ((1U & (IData)(vlSelf->ysyx_23060096_npc__DOT__ExtOP))
                                            ? (((- (IData)(
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
                                            : (((- (IData)(
                                                           (vlSelf->inst 
                                                            >> 0x1fU))) 
                                                << 0xcU) 
                                               | ((0xfe0U 
                                                   & (vlSelf->inst 
                                                      >> 0x14U)) 
                                                  | (0x1fU 
                                                     & (vlSelf->inst 
                                                        >> 7U)))))
                                        : ((1U & (IData)(vlSelf->ysyx_23060096_npc__DOT__ExtOP))
                                            ? (0xfffff000U 
                                               & vlSelf->inst)
                                            : vlSelf->ysyx_23060096_npc__DOT__u_ImmGen__DOT__immI)))),32);
        tracep->chgIData(oldp+40,(((0x10U >= (0x1fU 
                                              & (vlSelf->inst 
                                                 >> 0xfU)))
                                    ? vlSelf->ysyx_23060096_npc__DOT__u_RegisterFile__DOT__rf
                                   [(0x1fU & (vlSelf->inst 
                                              >> 0xfU))]
                                    : 0U)),32);
        tracep->chgIData(oldp+41,(((0x10U >= (0x1fU 
                                              & (vlSelf->inst 
                                                 >> 0x14U)))
                                    ? vlSelf->ysyx_23060096_npc__DOT__u_RegisterFile__DOT__rf
                                   [(0x1fU & (vlSelf->inst 
                                              >> 0x14U))]
                                    : 0U)),32);
        tracep->chgCData(oldp+42,((0x7fU & vlSelf->inst)),7);
        tracep->chgCData(oldp+43,((7U & (vlSelf->inst 
                                         >> 0xcU))),3);
        tracep->chgCData(oldp+44,((vlSelf->inst >> 0x19U)),7);
        tracep->chgIData(oldp+45,((vlSelf->inst >> 7U)),25);
        tracep->chgIData(oldp+46,((0xfffff000U & vlSelf->inst)),32);
        tracep->chgIData(oldp+47,((((- (IData)((vlSelf->inst 
                                                >> 0x1fU))) 
                                    << 0xcU) | ((0xfe0U 
                                                 & (vlSelf->inst 
                                                    >> 0x14U)) 
                                                | (0x1fU 
                                                   & (vlSelf->inst 
                                                      >> 7U))))),32);
        tracep->chgIData(oldp+48,((((- (IData)((vlSelf->inst 
                                                >> 0x1fU))) 
                                    << 0xcU) | ((0x800U 
                                                 & (vlSelf->inst 
                                                    << 4U)) 
                                                | ((0x7e0U 
                                                    & (vlSelf->inst 
                                                       >> 0x14U)) 
                                                   | (0x1eU 
                                                      & (vlSelf->inst 
                                                         >> 7U)))))),32);
        tracep->chgIData(oldp+49,((((- (IData)((vlSelf->inst 
                                                >> 0x1fU))) 
                                    << 0x14U) | ((0xff000U 
                                                  & vlSelf->inst) 
                                                 | ((0x800U 
                                                     & (vlSelf->inst 
                                                        >> 9U)) 
                                                    | (0x7feU 
                                                       & (vlSelf->inst 
                                                          >> 0x14U)))))),32);
        tracep->chgCData(oldp+50,((0x1fU & (vlSelf->inst 
                                            >> 0xfU))),5);
        tracep->chgCData(oldp+51,((0x1fU & (vlSelf->inst 
                                            >> 0x14U))),5);
        tracep->chgCData(oldp+52,((0x1fU & (vlSelf->inst 
                                            >> 7U))),5);
    }
}

void Vysyx_23060096_npc___024root__traceCleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    Vysyx_23060096_npc___024root* const __restrict vlSelf = static_cast<Vysyx_23060096_npc___024root*>(voidSelf);
    Vysyx_23060096_npc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        vlSymsp->__Vm_activity = false;
        vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
        vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
        vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
    }
}
