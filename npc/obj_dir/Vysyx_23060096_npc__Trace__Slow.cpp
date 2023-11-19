// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vysyx_23060096_npc__Syms.h"


void Vysyx_23060096_npc___024root__traceInitSub0(Vysyx_23060096_npc___024root* vlSelf, VerilatedVcd* tracep) VL_ATTR_COLD;

void Vysyx_23060096_npc___024root__traceInitTop(Vysyx_23060096_npc___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_23060096_npc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        Vysyx_23060096_npc___024root__traceInitSub0(vlSelf, tracep);
    }
}

void Vysyx_23060096_npc___024root__traceInitSub0(Vysyx_23060096_npc___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_23060096_npc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    const int c = vlSymsp->__Vm_baseCode;
    if (false && tracep && c) {}  // Prevent unused
    // Body
    {
        tracep->declBit(c+40,"clk", false,-1);
        tracep->declBit(c+41,"rstn", false,-1);
        tracep->declBus(c+42,"inst", false,-1, 31,0);
        tracep->declBus(c+43,"pc", false,-1, 31,0);
        tracep->declBit(c+40,"ysyx_23060096_npc clk", false,-1);
        tracep->declBit(c+41,"ysyx_23060096_npc rstn", false,-1);
        tracep->declBus(c+42,"ysyx_23060096_npc inst", false,-1, 31,0);
        tracep->declBus(c+43,"ysyx_23060096_npc pc", false,-1, 31,0);
        tracep->declBit(c+1,"ysyx_23060096_npc en", false,-1);
        tracep->declBit(c+59,"ysyx_23060096_npc clk_en", false,-1);
        tracep->declBus(c+60,"ysyx_23060096_npc ExtOP", false,-1, 2,0);
        tracep->declBit(c+44,"ysyx_23060096_npc RegWr", false,-1);
        tracep->declBit(c+2,"ysyx_23060096_npc ALUAsrc", false,-1);
        tracep->declBus(c+3,"ysyx_23060096_npc ALUBsrc", false,-1, 1,0);
        tracep->declBus(c+4,"ysyx_23060096_npc Branch", false,-1, 2,0);
        tracep->declBus(c+5,"ysyx_23060096_npc ALUctr", false,-1, 3,0);
        tracep->declBit(c+6,"ysyx_23060096_npc MemtoReg", false,-1);
        tracep->declBit(c+61,"ysyx_23060096_npc MemWr", false,-1);
        tracep->declBus(c+62,"ysyx_23060096_npc MemOP", false,-1, 2,0);
        tracep->declBus(c+45,"ysyx_23060096_npc imm", false,-1, 31,0);
        tracep->declBus(c+46,"ysyx_23060096_npc rc1", false,-1, 31,0);
        tracep->declBus(c+47,"ysyx_23060096_npc rc2", false,-1, 31,0);
        tracep->declBus(c+7,"ysyx_23060096_npc src1", false,-1, 31,0);
        tracep->declBus(c+8,"ysyx_23060096_npc src2", false,-1, 31,0);
        tracep->declBus(c+9,"ysyx_23060096_npc out_data", false,-1, 31,0);
        tracep->declBit(c+59,"ysyx_23060096_npc u_pc clk", false,-1);
        tracep->declBit(c+41,"ysyx_23060096_npc u_pc rstn", false,-1);
        tracep->declBus(c+43,"ysyx_23060096_npc u_pc pc", false,-1, 31,0);
        tracep->declBit(c+59,"ysyx_23060096_npc u_ContrGen clk", false,-1);
        tracep->declBus(c+48,"ysyx_23060096_npc u_ContrGen op", false,-1, 6,0);
        tracep->declBus(c+49,"ysyx_23060096_npc u_ContrGen func3", false,-1, 2,0);
        tracep->declBus(c+50,"ysyx_23060096_npc u_ContrGen func7", false,-1, 6,0);
        tracep->declBus(c+60,"ysyx_23060096_npc u_ContrGen ExtOP", false,-1, 2,0);
        tracep->declBit(c+44,"ysyx_23060096_npc u_ContrGen RegWr", false,-1);
        tracep->declBit(c+2,"ysyx_23060096_npc u_ContrGen ALUAsrc", false,-1);
        tracep->declBus(c+3,"ysyx_23060096_npc u_ContrGen ALUBsrc", false,-1, 1,0);
        tracep->declBus(c+5,"ysyx_23060096_npc u_ContrGen ALUctr", false,-1, 3,0);
        tracep->declBus(c+4,"ysyx_23060096_npc u_ContrGen Branch", false,-1, 2,0);
        tracep->declBit(c+6,"ysyx_23060096_npc u_ContrGen MemtoReg", false,-1);
        tracep->declBit(c+61,"ysyx_23060096_npc u_ContrGen MemWr", false,-1);
        tracep->declBus(c+62,"ysyx_23060096_npc u_ContrGen MemOP", false,-1, 2,0);
        tracep->declBit(c+59,"ysyx_23060096_npc u_ImmGen clk", false,-1);
        tracep->declBus(c+51,"ysyx_23060096_npc u_ImmGen inst", false,-1, 24,0);
        tracep->declBus(c+60,"ysyx_23060096_npc u_ImmGen ExtOP", false,-1, 2,0);
        tracep->declBus(c+45,"ysyx_23060096_npc u_ImmGen imm", false,-1, 31,0);
        tracep->declBus(c+45,"ysyx_23060096_npc u_ImmGen immI", false,-1, 31,0);
        tracep->declBus(c+52,"ysyx_23060096_npc u_ImmGen immU", false,-1, 31,0);
        tracep->declBus(c+53,"ysyx_23060096_npc u_ImmGen immS", false,-1, 31,0);
        tracep->declBus(c+54,"ysyx_23060096_npc u_ImmGen immB", false,-1, 31,0);
        tracep->declBus(c+55,"ysyx_23060096_npc u_ImmGen immJ", false,-1, 31,0);
        tracep->declBus(c+63,"ysyx_23060096_npc u_RegisterFile ADDR_WIDTH", false,-1, 31,0);
        tracep->declBus(c+64,"ysyx_23060096_npc u_RegisterFile DATA_WIDTH", false,-1, 31,0);
        tracep->declBit(c+40,"ysyx_23060096_npc u_RegisterFile clk", false,-1);
        tracep->declBit(c+41,"ysyx_23060096_npc u_RegisterFile rstn", false,-1);
        tracep->declBus(c+56,"ysyx_23060096_npc u_RegisterFile Ra", false,-1, 4,0);
        tracep->declBus(c+57,"ysyx_23060096_npc u_RegisterFile Rb", false,-1, 4,0);
        tracep->declBus(c+9,"ysyx_23060096_npc u_RegisterFile wdata", false,-1, 31,0);
        tracep->declBus(c+58,"ysyx_23060096_npc u_RegisterFile waddr", false,-1, 4,0);
        tracep->declBit(c+44,"ysyx_23060096_npc u_RegisterFile w_en", false,-1);
        tracep->declBus(c+46,"ysyx_23060096_npc u_RegisterFile busA", false,-1, 31,0);
        tracep->declBus(c+47,"ysyx_23060096_npc u_RegisterFile busB", false,-1, 31,0);
        {int i; for (i=0; i<17; i++) {
                tracep->declBus(c+22+i*1,"ysyx_23060096_npc u_RegisterFile rf", true,(i+0), 31,0);}}
        tracep->declBus(c+39,"ysyx_23060096_npc u_RegisterFile i", false,-1, 31,0);
        tracep->declBus(c+7,"ysyx_23060096_npc u_alu A", false,-1, 31,0);
        tracep->declBus(c+8,"ysyx_23060096_npc u_alu B", false,-1, 31,0);
        tracep->declBus(c+5,"ysyx_23060096_npc u_alu op", false,-1, 3,0);
        tracep->declBus(c+9,"ysyx_23060096_npc u_alu out", false,-1, 31,0);
        tracep->declBit(c+10,"ysyx_23060096_npc u_alu zero_add", false,-1);
        tracep->declBit(c+11,"ysyx_23060096_npc u_alu zero_sub", false,-1);
        tracep->declBit(c+12,"ysyx_23060096_npc u_alu zero_res", false,-1);
        tracep->declBit(c+13,"ysyx_23060096_npc u_alu overflow", false,-1);
        tracep->declBit(c+14,"ysyx_23060096_npc u_alu carry", false,-1);
        tracep->declBus(c+15,"ysyx_23060096_npc u_alu res", false,-1, 31,0);
        tracep->declBus(c+16,"ysyx_23060096_npc u_alu sub", false,-1, 31,0);
        tracep->declBus(c+17,"ysyx_23060096_npc u_alu add", false,-1, 31,0);
        tracep->declBus(c+7,"ysyx_23060096_npc u_alu u_add A", false,-1, 31,0);
        tracep->declBus(c+8,"ysyx_23060096_npc u_alu u_add B", false,-1, 31,0);
        tracep->declBit(c+61,"ysyx_23060096_npc u_alu u_add op", false,-1);
        tracep->declBus(c+17,"ysyx_23060096_npc u_alu u_add result", false,-1, 31,0);
        tracep->declBit(c+10,"ysyx_23060096_npc u_alu u_add zero", false,-1);
        tracep->declBit(c+13,"ysyx_23060096_npc u_alu u_add overflow", false,-1);
        tracep->declBit(c+14,"ysyx_23060096_npc u_alu u_add carry", false,-1);
        tracep->declBus(c+8,"ysyx_23060096_npc u_alu u_add t_add_op", false,-1, 31,0);
        tracep->declBus(c+7,"ysyx_23060096_npc u_alu u_sub A", false,-1, 31,0);
        tracep->declBus(c+8,"ysyx_23060096_npc u_alu u_sub B", false,-1, 31,0);
        tracep->declBit(c+65,"ysyx_23060096_npc u_alu u_sub op", false,-1);
        tracep->declBus(c+16,"ysyx_23060096_npc u_alu u_sub result", false,-1, 31,0);
        tracep->declBit(c+11,"ysyx_23060096_npc u_alu u_sub zero", false,-1);
        tracep->declBit(c+18,"ysyx_23060096_npc u_alu u_sub overflow", false,-1);
        tracep->declBit(c+19,"ysyx_23060096_npc u_alu u_sub carry", false,-1);
        tracep->declBus(c+20,"ysyx_23060096_npc u_alu u_sub t_add_op", false,-1, 31,0);
        tracep->declBus(c+7,"ysyx_23060096_npc u_alu u_res A", false,-1, 31,0);
        tracep->declBus(c+8,"ysyx_23060096_npc u_alu u_res B", false,-1, 31,0);
        tracep->declBit(c+65,"ysyx_23060096_npc u_alu u_res op", false,-1);
        tracep->declBus(c+15,"ysyx_23060096_npc u_alu u_res result", false,-1, 31,0);
        tracep->declBit(c+12,"ysyx_23060096_npc u_alu u_res zero", false,-1);
        tracep->declBit(c+21,"ysyx_23060096_npc u_alu u_res overflow", false,-1);
        tracep->declBit(c+19,"ysyx_23060096_npc u_alu u_res carry", false,-1);
        tracep->declBus(c+20,"ysyx_23060096_npc u_alu u_res t_add_op", false,-1, 31,0);
    }
}

void Vysyx_23060096_npc___024root__traceFullTop0(void* voidSelf, VerilatedVcd* tracep) VL_ATTR_COLD;
void Vysyx_23060096_npc___024root__traceChgTop0(void* voidSelf, VerilatedVcd* tracep);
void Vysyx_23060096_npc___024root__traceCleanup(void* voidSelf, VerilatedVcd* /*unused*/);

void Vysyx_23060096_npc___024root__traceRegister(Vysyx_23060096_npc___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_23060096_npc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        tracep->addFullCb(&Vysyx_23060096_npc___024root__traceFullTop0, vlSelf);
        tracep->addChgCb(&Vysyx_23060096_npc___024root__traceChgTop0, vlSelf);
        tracep->addCleanupCb(&Vysyx_23060096_npc___024root__traceCleanup, vlSelf);
    }
}

void Vysyx_23060096_npc___024root__traceFullSub0(Vysyx_23060096_npc___024root* vlSelf, VerilatedVcd* tracep) VL_ATTR_COLD;

void Vysyx_23060096_npc___024root__traceFullTop0(void* voidSelf, VerilatedVcd* tracep) {
    Vysyx_23060096_npc___024root* const __restrict vlSelf = static_cast<Vysyx_23060096_npc___024root*>(voidSelf);
    Vysyx_23060096_npc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        Vysyx_23060096_npc___024root__traceFullSub0((&vlSymsp->TOP), tracep);
    }
}

void Vysyx_23060096_npc___024root__traceFullSub0(Vysyx_23060096_npc___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_23060096_npc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->fullBit(oldp+1,(vlSelf->ysyx_23060096_npc__DOT__en));
        tracep->fullBit(oldp+2,(vlSelf->ysyx_23060096_npc__DOT__ALUAsrc));
        tracep->fullCData(oldp+3,(vlSelf->ysyx_23060096_npc__DOT__ALUBsrc),2);
        tracep->fullCData(oldp+4,(vlSelf->ysyx_23060096_npc__DOT__Branch),3);
        tracep->fullCData(oldp+5,(vlSelf->ysyx_23060096_npc__DOT__ALUctr),4);
        tracep->fullBit(oldp+6,(vlSelf->ysyx_23060096_npc__DOT__MemtoReg));
        tracep->fullIData(oldp+7,(vlSelf->ysyx_23060096_npc__DOT__src1),32);
        tracep->fullIData(oldp+8,(vlSelf->ysyx_23060096_npc__DOT__src2),32);
        tracep->fullIData(oldp+9,(((4U & (IData)(vlSelf->ysyx_23060096_npc__DOT__ALUctr))
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
        tracep->fullBit(oldp+10,((1U & (~ (IData)((0U 
                                                   != vlSelf->ysyx_23060096_npc__DOT__u_alu__DOT__add))))));
        tracep->fullBit(oldp+11,((1U & (~ (IData)((0U 
                                                   != vlSelf->ysyx_23060096_npc__DOT__u_alu__DOT__sub))))));
        tracep->fullBit(oldp+12,((1U & (~ (IData)((0U 
                                                   != vlSelf->ysyx_23060096_npc__DOT__u_alu__DOT__res))))));
        tracep->fullBit(oldp+13,((((vlSelf->ysyx_23060096_npc__DOT__src1 
                                    >> 0x1fU) == (vlSelf->ysyx_23060096_npc__DOT__src2 
                                                  >> 0x1fU)) 
                                  & ((vlSelf->ysyx_23060096_npc__DOT__u_alu__DOT__add 
                                      >> 0x1fU) != 
                                     (vlSelf->ysyx_23060096_npc__DOT__src1 
                                      >> 0x1fU)))));
        tracep->fullBit(oldp+14,((1U & (IData)((1ULL 
                                                & (((QData)((IData)(vlSelf->ysyx_23060096_npc__DOT__src1)) 
                                                    + (QData)((IData)(vlSelf->ysyx_23060096_npc__DOT__src2))) 
                                                   >> 0x20U))))));
        tracep->fullIData(oldp+15,(vlSelf->ysyx_23060096_npc__DOT__u_alu__DOT__res),32);
        tracep->fullIData(oldp+16,(vlSelf->ysyx_23060096_npc__DOT__u_alu__DOT__sub),32);
        tracep->fullIData(oldp+17,(vlSelf->ysyx_23060096_npc__DOT__u_alu__DOT__add),32);
        tracep->fullBit(oldp+18,((((vlSelf->ysyx_23060096_npc__DOT__src1 
                                    >> 0x1fU) == (1U 
                                                  & (~ 
                                                     (vlSelf->ysyx_23060096_npc__DOT__src2 
                                                      >> 0x1fU)))) 
                                  & ((vlSelf->ysyx_23060096_npc__DOT__u_alu__DOT__sub 
                                      >> 0x1fU) != 
                                     (vlSelf->ysyx_23060096_npc__DOT__src1 
                                      >> 0x1fU)))));
        tracep->fullBit(oldp+19,((1U & (IData)((1ULL 
                                                & ((1ULL 
                                                    + 
                                                    ((QData)((IData)(vlSelf->ysyx_23060096_npc__DOT__src1)) 
                                                     + (QData)((IData)(
                                                                       (~ vlSelf->ysyx_23060096_npc__DOT__src2))))) 
                                                   >> 0x20U))))));
        tracep->fullIData(oldp+20,((~ vlSelf->ysyx_23060096_npc__DOT__src2)),32);
        tracep->fullBit(oldp+21,((((vlSelf->ysyx_23060096_npc__DOT__src1 
                                    >> 0x1fU) == (1U 
                                                  & (~ 
                                                     (vlSelf->ysyx_23060096_npc__DOT__src2 
                                                      >> 0x1fU)))) 
                                  & ((vlSelf->ysyx_23060096_npc__DOT__u_alu__DOT__res 
                                      >> 0x1fU) != 
                                     (vlSelf->ysyx_23060096_npc__DOT__src1 
                                      >> 0x1fU)))));
        tracep->fullIData(oldp+22,(vlSelf->ysyx_23060096_npc__DOT__u_RegisterFile__DOT__rf[0]),32);
        tracep->fullIData(oldp+23,(vlSelf->ysyx_23060096_npc__DOT__u_RegisterFile__DOT__rf[1]),32);
        tracep->fullIData(oldp+24,(vlSelf->ysyx_23060096_npc__DOT__u_RegisterFile__DOT__rf[2]),32);
        tracep->fullIData(oldp+25,(vlSelf->ysyx_23060096_npc__DOT__u_RegisterFile__DOT__rf[3]),32);
        tracep->fullIData(oldp+26,(vlSelf->ysyx_23060096_npc__DOT__u_RegisterFile__DOT__rf[4]),32);
        tracep->fullIData(oldp+27,(vlSelf->ysyx_23060096_npc__DOT__u_RegisterFile__DOT__rf[5]),32);
        tracep->fullIData(oldp+28,(vlSelf->ysyx_23060096_npc__DOT__u_RegisterFile__DOT__rf[6]),32);
        tracep->fullIData(oldp+29,(vlSelf->ysyx_23060096_npc__DOT__u_RegisterFile__DOT__rf[7]),32);
        tracep->fullIData(oldp+30,(vlSelf->ysyx_23060096_npc__DOT__u_RegisterFile__DOT__rf[8]),32);
        tracep->fullIData(oldp+31,(vlSelf->ysyx_23060096_npc__DOT__u_RegisterFile__DOT__rf[9]),32);
        tracep->fullIData(oldp+32,(vlSelf->ysyx_23060096_npc__DOT__u_RegisterFile__DOT__rf[10]),32);
        tracep->fullIData(oldp+33,(vlSelf->ysyx_23060096_npc__DOT__u_RegisterFile__DOT__rf[11]),32);
        tracep->fullIData(oldp+34,(vlSelf->ysyx_23060096_npc__DOT__u_RegisterFile__DOT__rf[12]),32);
        tracep->fullIData(oldp+35,(vlSelf->ysyx_23060096_npc__DOT__u_RegisterFile__DOT__rf[13]),32);
        tracep->fullIData(oldp+36,(vlSelf->ysyx_23060096_npc__DOT__u_RegisterFile__DOT__rf[14]),32);
        tracep->fullIData(oldp+37,(vlSelf->ysyx_23060096_npc__DOT__u_RegisterFile__DOT__rf[15]),32);
        tracep->fullIData(oldp+38,(vlSelf->ysyx_23060096_npc__DOT__u_RegisterFile__DOT__rf[16]),32);
        tracep->fullIData(oldp+39,(vlSelf->ysyx_23060096_npc__DOT__u_RegisterFile__DOT__i),32);
        tracep->fullBit(oldp+40,(vlSelf->clk));
        tracep->fullBit(oldp+41,(vlSelf->rstn));
        tracep->fullIData(oldp+42,(vlSelf->inst),32);
        tracep->fullIData(oldp+43,(vlSelf->pc),32);
        tracep->fullBit(oldp+44,((0x40U == (0x1feU 
                                            & ((0x1f0U 
                                                & (vlSelf->inst 
                                                   << 2U)) 
                                               | ((0xeU 
                                                   & (vlSelf->inst 
                                                      >> 0xbU)) 
                                                  | (1U 
                                                     & (vlSelf->inst 
                                                        >> 0x1eU))))))));
        tracep->fullIData(oldp+45,((((- (IData)((vlSelf->inst 
                                                 >> 0x1fU))) 
                                     << 0xcU) | (0xfffU 
                                                 & (vlSelf->inst 
                                                    >> 0x13U)))),32);
        tracep->fullIData(oldp+46,(((0x10U >= (0x1fU 
                                               & (vlSelf->inst 
                                                  >> 0xfU)))
                                     ? vlSelf->ysyx_23060096_npc__DOT__u_RegisterFile__DOT__rf
                                    [(0x1fU & (vlSelf->inst 
                                               >> 0xfU))]
                                     : 0U)),32);
        tracep->fullIData(oldp+47,(((0x10U >= (0x1fU 
                                               & (vlSelf->inst 
                                                  >> 0x14U)))
                                     ? vlSelf->ysyx_23060096_npc__DOT__u_RegisterFile__DOT__rf
                                    [(0x1fU & (vlSelf->inst 
                                               >> 0x14U))]
                                     : 0U)),32);
        tracep->fullCData(oldp+48,((0x7fU & vlSelf->inst)),7);
        tracep->fullCData(oldp+49,((7U & (vlSelf->inst 
                                          >> 0xcU))),3);
        tracep->fullCData(oldp+50,((vlSelf->inst >> 0x19U)),7);
        tracep->fullIData(oldp+51,((vlSelf->inst >> 7U)),25);
        tracep->fullIData(oldp+52,((0xfffff000U & vlSelf->inst)),32);
        tracep->fullIData(oldp+53,((((- (IData)((vlSelf->inst 
                                                 >> 0x1fU))) 
                                     << 0xcU) | ((0xfe0U 
                                                  & (vlSelf->inst 
                                                     >> 0x14U)) 
                                                 | (0x1fU 
                                                    & (vlSelf->inst 
                                                       >> 7U))))),32);
        tracep->fullIData(oldp+54,((((- (IData)((vlSelf->inst 
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
        tracep->fullIData(oldp+55,((((- (IData)((vlSelf->inst 
                                                 >> 0x1fU))) 
                                     << 0x14U) | ((0xff000U 
                                                   & vlSelf->inst) 
                                                  | ((0x800U 
                                                      & (vlSelf->inst 
                                                         >> 9U)) 
                                                     | (0x7feU 
                                                        & (vlSelf->inst 
                                                           >> 0x14U)))))),32);
        tracep->fullCData(oldp+56,((0x1fU & (vlSelf->inst 
                                             >> 0xfU))),5);
        tracep->fullCData(oldp+57,((0x1fU & (vlSelf->inst 
                                             >> 0x14U))),5);
        tracep->fullCData(oldp+58,((0x1fU & (vlSelf->inst 
                                             >> 7U))),5);
        tracep->fullBit(oldp+59,(vlSelf->ysyx_23060096_npc__DOT__clk_en));
        tracep->fullCData(oldp+60,(0U),3);
        tracep->fullBit(oldp+61,(0U));
        tracep->fullCData(oldp+62,(vlSelf->ysyx_23060096_npc__DOT__MemOP),3);
        tracep->fullIData(oldp+63,(5U),32);
        tracep->fullIData(oldp+64,(0x20U),32);
        tracep->fullBit(oldp+65,(1U));
    }
}
