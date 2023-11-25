// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vysyx_23060096_npc__Syms.h"


VL_ATTR_COLD void Vysyx_23060096_npc___024root__trace_init_sub__TOP__0(Vysyx_23060096_npc___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_23060096_npc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_23060096_npc___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+36,"clk", false,-1);
    tracep->declBit(c+37,"rstn", false,-1);
    tracep->declBus(c+38,"inst", false,-1, 31,0);
    tracep->declBus(c+39,"pc", false,-1, 31,0);
    tracep->pushNamePrefix("ysyx_23060096_npc ");
    tracep->declBit(c+36,"clk", false,-1);
    tracep->declBit(c+37,"rstn", false,-1);
    tracep->declBus(c+38,"inst", false,-1, 31,0);
    tracep->declBus(c+39,"pc", false,-1, 31,0);
    tracep->declBus(c+55,"en", false,-1, 31,0);
    tracep->declBit(c+56,"clk_en", false,-1);
    tracep->declBus(c+57,"ExtOP", false,-1, 2,0);
    tracep->declBit(c+40,"RegWr", false,-1);
    tracep->declBit(c+1,"ALUAsrc", false,-1);
    tracep->declBus(c+2,"ALUBsrc", false,-1, 1,0);
    tracep->declBus(c+3,"Branch", false,-1, 2,0);
    tracep->declBus(c+4,"ALUctr", false,-1, 3,0);
    tracep->declBit(c+5,"MemtoReg", false,-1);
    tracep->declBit(c+58,"MemWr", false,-1);
    tracep->declBus(c+59,"MemOP", false,-1, 2,0);
    tracep->declBus(c+41,"imm", false,-1, 31,0);
    tracep->declBus(c+42,"rc1", false,-1, 31,0);
    tracep->declBus(c+43,"rc2", false,-1, 31,0);
    tracep->declBus(c+6,"src1", false,-1, 31,0);
    tracep->declBus(c+7,"src2", false,-1, 31,0);
    tracep->declBus(c+8,"out_data", false,-1, 31,0);
    tracep->pushNamePrefix("u_ContrGen ");
    tracep->declBit(c+36,"clk", false,-1);
    tracep->declBus(c+44,"op", false,-1, 6,0);
    tracep->declBus(c+45,"func3", false,-1, 2,0);
    tracep->declBus(c+46,"func7", false,-1, 6,0);
    tracep->declBus(c+57,"ExtOP", false,-1, 2,0);
    tracep->declBit(c+40,"RegWr", false,-1);
    tracep->declBit(c+1,"ALUAsrc", false,-1);
    tracep->declBus(c+2,"ALUBsrc", false,-1, 1,0);
    tracep->declBus(c+4,"ALUctr", false,-1, 3,0);
    tracep->declBus(c+3,"Branch", false,-1, 2,0);
    tracep->declBit(c+5,"MemtoReg", false,-1);
    tracep->declBit(c+58,"MemWr", false,-1);
    tracep->declBus(c+59,"MemOP", false,-1, 2,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_ImmGen ");
    tracep->declBit(c+36,"clk", false,-1);
    tracep->declBus(c+47,"inst", false,-1, 24,0);
    tracep->declBus(c+57,"ExtOP", false,-1, 2,0);
    tracep->declBus(c+41,"imm", false,-1, 31,0);
    tracep->declBus(c+41,"immI", false,-1, 31,0);
    tracep->declBus(c+48,"immU", false,-1, 31,0);
    tracep->declBus(c+49,"immS", false,-1, 31,0);
    tracep->declBus(c+50,"immB", false,-1, 31,0);
    tracep->declBus(c+51,"immJ", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_RegisterFile ");
    tracep->declBus(c+60,"ADDR_WIDTH", false,-1, 31,0);
    tracep->declBus(c+61,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBit(c+36,"clk", false,-1);
    tracep->declBit(c+37,"rstn", false,-1);
    tracep->declBus(c+52,"Ra", false,-1, 4,0);
    tracep->declBus(c+53,"Rb", false,-1, 4,0);
    tracep->declBus(c+8,"wdata", false,-1, 31,0);
    tracep->declBus(c+54,"waddr", false,-1, 4,0);
    tracep->declBit(c+40,"w_en", false,-1);
    tracep->declBus(c+42,"busA", false,-1, 31,0);
    tracep->declBus(c+43,"busB", false,-1, 31,0);
    for (int i = 0; i < 17; ++i) {
        tracep->declBus(c+18+i*1,"rf", true,(i+0), 31,0);
    }
    tracep->declBus(c+35,"i", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_alu ");
    tracep->declBus(c+6,"A", false,-1, 31,0);
    tracep->declBus(c+7,"B", false,-1, 31,0);
    tracep->declBus(c+4,"op", false,-1, 3,0);
    tracep->declBus(c+8,"out", false,-1, 31,0);
    tracep->declBit(c+9,"zero_add", false,-1);
    tracep->declBit(c+10,"zero_sub", false,-1);
    tracep->declBit(c+10,"zero_res", false,-1);
    tracep->declBit(c+11,"overflow", false,-1);
    tracep->declBit(c+12,"carry", false,-1);
    tracep->declBus(c+13,"res", false,-1, 31,0);
    tracep->declBus(c+13,"sub", false,-1, 31,0);
    tracep->declBus(c+14,"add", false,-1, 31,0);
    tracep->pushNamePrefix("u_add ");
    tracep->declBus(c+6,"A", false,-1, 31,0);
    tracep->declBus(c+7,"B", false,-1, 31,0);
    tracep->declBit(c+58,"op", false,-1);
    tracep->declBus(c+14,"result", false,-1, 31,0);
    tracep->declBit(c+9,"zero", false,-1);
    tracep->declBit(c+11,"overflow", false,-1);
    tracep->declBit(c+12,"carry", false,-1);
    tracep->declBus(c+7,"t_add_op", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_res ");
    tracep->declBus(c+6,"A", false,-1, 31,0);
    tracep->declBus(c+7,"B", false,-1, 31,0);
    tracep->declBit(c+62,"op", false,-1);
    tracep->declBus(c+13,"result", false,-1, 31,0);
    tracep->declBit(c+10,"zero", false,-1);
    tracep->declBit(c+15,"overflow", false,-1);
    tracep->declBit(c+16,"carry", false,-1);
    tracep->declBus(c+17,"t_add_op", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_sub ");
    tracep->declBus(c+6,"A", false,-1, 31,0);
    tracep->declBus(c+7,"B", false,-1, 31,0);
    tracep->declBit(c+62,"op", false,-1);
    tracep->declBus(c+13,"result", false,-1, 31,0);
    tracep->declBit(c+10,"zero", false,-1);
    tracep->declBit(c+15,"overflow", false,-1);
    tracep->declBit(c+16,"carry", false,-1);
    tracep->declBus(c+17,"t_add_op", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("u_pc ");
    tracep->declBit(c+36,"clk", false,-1);
    tracep->declBit(c+37,"rstn", false,-1);
    tracep->declBus(c+39,"pc", false,-1, 31,0);
    tracep->popNamePrefix(2);
}

VL_ATTR_COLD void Vysyx_23060096_npc___024root__trace_init_top(Vysyx_23060096_npc___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_23060096_npc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_23060096_npc___024root__trace_init_top\n"); );
    // Body
    Vysyx_23060096_npc___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vysyx_23060096_npc___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vysyx_23060096_npc___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vysyx_23060096_npc___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vysyx_23060096_npc___024root__trace_register(Vysyx_23060096_npc___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_23060096_npc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_23060096_npc___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&Vysyx_23060096_npc___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&Vysyx_23060096_npc___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&Vysyx_23060096_npc___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vysyx_23060096_npc___024root__trace_full_sub_0(Vysyx_23060096_npc___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vysyx_23060096_npc___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_23060096_npc___024root__trace_full_top_0\n"); );
    // Init
    Vysyx_23060096_npc___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vysyx_23060096_npc___024root*>(voidSelf);
    Vysyx_23060096_npc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vysyx_23060096_npc___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vysyx_23060096_npc___024root__trace_full_sub_0(Vysyx_23060096_npc___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_23060096_npc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_23060096_npc___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullBit(oldp+1,(vlSelf->ysyx_23060096_npc__DOT__ALUAsrc));
    bufp->fullCData(oldp+2,(vlSelf->ysyx_23060096_npc__DOT__ALUBsrc),2);
    bufp->fullCData(oldp+3,(vlSelf->ysyx_23060096_npc__DOT__Branch),3);
    bufp->fullCData(oldp+4,(vlSelf->ysyx_23060096_npc__DOT__ALUctr),4);
    bufp->fullBit(oldp+5,(vlSelf->ysyx_23060096_npc__DOT__MemtoReg));
    bufp->fullIData(oldp+6,(vlSelf->ysyx_23060096_npc__DOT__src1),32);
    bufp->fullIData(oldp+7,(vlSelf->ysyx_23060096_npc__DOT__src2),32);
    bufp->fullIData(oldp+8,(((4U & (IData)(vlSelf->ysyx_23060096_npc__DOT__ALUctr))
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
    bufp->fullBit(oldp+9,((1U & (~ (IData)((0U != vlSelf->ysyx_23060096_npc__DOT__u_alu__DOT__add))))));
    bufp->fullBit(oldp+10,((1U & (~ (IData)((0U != vlSelf->ysyx_23060096_npc__DOT__u_alu__DOT__res))))));
    bufp->fullBit(oldp+11,((((vlSelf->ysyx_23060096_npc__DOT__src1 
                              >> 0x1fU) == (vlSelf->ysyx_23060096_npc__DOT__src2 
                                            >> 0x1fU)) 
                            & ((vlSelf->ysyx_23060096_npc__DOT__u_alu__DOT__add 
                                >> 0x1fU) != (vlSelf->ysyx_23060096_npc__DOT__src1 
                                              >> 0x1fU)))));
    bufp->fullBit(oldp+12,((1U & (IData)((1ULL & (((QData)((IData)(vlSelf->ysyx_23060096_npc__DOT__src1)) 
                                                   + (QData)((IData)(vlSelf->ysyx_23060096_npc__DOT__src2))) 
                                                  >> 0x20U))))));
    bufp->fullIData(oldp+13,(vlSelf->ysyx_23060096_npc__DOT__u_alu__DOT__res),32);
    bufp->fullIData(oldp+14,(vlSelf->ysyx_23060096_npc__DOT__u_alu__DOT__add),32);
    bufp->fullBit(oldp+15,((((vlSelf->ysyx_23060096_npc__DOT__src1 
                              >> 0x1fU) == (1U & (~ 
                                                  (vlSelf->ysyx_23060096_npc__DOT__src2 
                                                   >> 0x1fU)))) 
                            & ((vlSelf->ysyx_23060096_npc__DOT__u_alu__DOT__res 
                                >> 0x1fU) != (vlSelf->ysyx_23060096_npc__DOT__src1 
                                              >> 0x1fU)))));
    bufp->fullBit(oldp+16,((1U & (IData)((1ULL & ((1ULL 
                                                   + 
                                                   ((QData)((IData)(vlSelf->ysyx_23060096_npc__DOT__src1)) 
                                                    + (QData)((IData)(
                                                                      (~ vlSelf->ysyx_23060096_npc__DOT__src2))))) 
                                                  >> 0x20U))))));
    bufp->fullIData(oldp+17,((~ vlSelf->ysyx_23060096_npc__DOT__src2)),32);
    bufp->fullIData(oldp+18,(vlSelf->ysyx_23060096_npc__DOT__u_RegisterFile__DOT__rf[0]),32);
    bufp->fullIData(oldp+19,(vlSelf->ysyx_23060096_npc__DOT__u_RegisterFile__DOT__rf[1]),32);
    bufp->fullIData(oldp+20,(vlSelf->ysyx_23060096_npc__DOT__u_RegisterFile__DOT__rf[2]),32);
    bufp->fullIData(oldp+21,(vlSelf->ysyx_23060096_npc__DOT__u_RegisterFile__DOT__rf[3]),32);
    bufp->fullIData(oldp+22,(vlSelf->ysyx_23060096_npc__DOT__u_RegisterFile__DOT__rf[4]),32);
    bufp->fullIData(oldp+23,(vlSelf->ysyx_23060096_npc__DOT__u_RegisterFile__DOT__rf[5]),32);
    bufp->fullIData(oldp+24,(vlSelf->ysyx_23060096_npc__DOT__u_RegisterFile__DOT__rf[6]),32);
    bufp->fullIData(oldp+25,(vlSelf->ysyx_23060096_npc__DOT__u_RegisterFile__DOT__rf[7]),32);
    bufp->fullIData(oldp+26,(vlSelf->ysyx_23060096_npc__DOT__u_RegisterFile__DOT__rf[8]),32);
    bufp->fullIData(oldp+27,(vlSelf->ysyx_23060096_npc__DOT__u_RegisterFile__DOT__rf[9]),32);
    bufp->fullIData(oldp+28,(vlSelf->ysyx_23060096_npc__DOT__u_RegisterFile__DOT__rf[10]),32);
    bufp->fullIData(oldp+29,(vlSelf->ysyx_23060096_npc__DOT__u_RegisterFile__DOT__rf[11]),32);
    bufp->fullIData(oldp+30,(vlSelf->ysyx_23060096_npc__DOT__u_RegisterFile__DOT__rf[12]),32);
    bufp->fullIData(oldp+31,(vlSelf->ysyx_23060096_npc__DOT__u_RegisterFile__DOT__rf[13]),32);
    bufp->fullIData(oldp+32,(vlSelf->ysyx_23060096_npc__DOT__u_RegisterFile__DOT__rf[14]),32);
    bufp->fullIData(oldp+33,(vlSelf->ysyx_23060096_npc__DOT__u_RegisterFile__DOT__rf[15]),32);
    bufp->fullIData(oldp+34,(vlSelf->ysyx_23060096_npc__DOT__u_RegisterFile__DOT__rf[16]),32);
    bufp->fullIData(oldp+35,(vlSelf->ysyx_23060096_npc__DOT__u_RegisterFile__DOT__i),32);
    bufp->fullBit(oldp+36,(vlSelf->clk));
    bufp->fullBit(oldp+37,(vlSelf->rstn));
    bufp->fullIData(oldp+38,(vlSelf->inst),32);
    bufp->fullIData(oldp+39,(vlSelf->pc),32);
    bufp->fullBit(oldp+40,((0x40U == (0x1feU & ((0x1f0U 
                                                 & (vlSelf->inst 
                                                    << 2U)) 
                                                | ((0xeU 
                                                    & (vlSelf->inst 
                                                       >> 0xbU)) 
                                                   | (1U 
                                                      & (vlSelf->inst 
                                                         >> 0x1eU))))))));
    bufp->fullIData(oldp+41,((((- (IData)((vlSelf->inst 
                                           >> 0x1fU))) 
                               << 0xcU) | (0xfffU & 
                                           (vlSelf->inst 
                                            >> 0x13U)))),32);
    bufp->fullIData(oldp+42,(((0x10U >= (0x1fU & (vlSelf->inst 
                                                  >> 0xfU)))
                               ? vlSelf->ysyx_23060096_npc__DOT__u_RegisterFile__DOT__rf
                              [(0x1fU & (vlSelf->inst 
                                         >> 0xfU))]
                               : 0U)),32);
    bufp->fullIData(oldp+43,(((0x10U >= (0x1fU & (vlSelf->inst 
                                                  >> 0x14U)))
                               ? vlSelf->ysyx_23060096_npc__DOT__u_RegisterFile__DOT__rf
                              [(0x1fU & (vlSelf->inst 
                                         >> 0x14U))]
                               : 0U)),32);
    bufp->fullCData(oldp+44,((0x7fU & vlSelf->inst)),7);
    bufp->fullCData(oldp+45,((7U & (vlSelf->inst >> 0xcU))),3);
    bufp->fullCData(oldp+46,((vlSelf->inst >> 0x19U)),7);
    bufp->fullIData(oldp+47,((vlSelf->inst >> 7U)),25);
    bufp->fullIData(oldp+48,((0xfffff000U & vlSelf->inst)),32);
    bufp->fullIData(oldp+49,((((- (IData)((vlSelf->inst 
                                           >> 0x1fU))) 
                               << 0xcU) | ((0xfe0U 
                                            & (vlSelf->inst 
                                               >> 0x14U)) 
                                           | (0x1fU 
                                              & (vlSelf->inst 
                                                 >> 7U))))),32);
    bufp->fullIData(oldp+50,((((- (IData)((vlSelf->inst 
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
    bufp->fullIData(oldp+51,((((- (IData)((vlSelf->inst 
                                           >> 0x1fU))) 
                               << 0x14U) | ((0xff000U 
                                             & vlSelf->inst) 
                                            | ((0x800U 
                                                & (vlSelf->inst 
                                                   >> 9U)) 
                                               | (0x7feU 
                                                  & (vlSelf->inst 
                                                     >> 0x14U)))))),32);
    bufp->fullCData(oldp+52,((0x1fU & (vlSelf->inst 
                                       >> 0xfU))),5);
    bufp->fullCData(oldp+53,((0x1fU & (vlSelf->inst 
                                       >> 0x14U))),5);
    bufp->fullCData(oldp+54,((0x1fU & (vlSelf->inst 
                                       >> 7U))),5);
    bufp->fullIData(oldp+55,(vlSelf->ysyx_23060096_npc__DOT__en),32);
    bufp->fullBit(oldp+56,(vlSelf->ysyx_23060096_npc__DOT__clk_en));
    bufp->fullCData(oldp+57,(0U),3);
    bufp->fullBit(oldp+58,(0U));
    bufp->fullCData(oldp+59,(vlSelf->ysyx_23060096_npc__DOT__MemOP),3);
    bufp->fullIData(oldp+60,(5U),32);
    bufp->fullIData(oldp+61,(0x20U),32);
    bufp->fullBit(oldp+62,(1U));
}
