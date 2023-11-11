// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vysyx_23060096_ImmGen__Syms.h"


void Vysyx_23060096_ImmGen___024root__traceInitSub0(Vysyx_23060096_ImmGen___024root* vlSelf, VerilatedVcd* tracep) VL_ATTR_COLD;

void Vysyx_23060096_ImmGen___024root__traceInitTop(Vysyx_23060096_ImmGen___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_23060096_ImmGen__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        Vysyx_23060096_ImmGen___024root__traceInitSub0(vlSelf, tracep);
    }
}

void Vysyx_23060096_ImmGen___024root__traceInitSub0(Vysyx_23060096_ImmGen___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_23060096_ImmGen__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    const int c = vlSymsp->__Vm_baseCode;
    if (false && tracep && c) {}  // Prevent unused
    // Body
    {
        tracep->declBit(c+1,"clk", false,-1);
        tracep->declBit(c+2,"rstn", false,-1);
        tracep->declBus(c+3,"inst", false,-1, 24,0);
        tracep->declBus(c+4,"ExtOP", false,-1, 2,0);
        tracep->declBus(c+5,"imm", false,-1, 31,0);
        tracep->declBit(c+1,"ysyx_23060096_ImmGen clk", false,-1);
        tracep->declBit(c+2,"ysyx_23060096_ImmGen rstn", false,-1);
        tracep->declBus(c+3,"ysyx_23060096_ImmGen inst", false,-1, 24,0);
        tracep->declBus(c+4,"ysyx_23060096_ImmGen ExtOP", false,-1, 2,0);
        tracep->declBus(c+5,"ysyx_23060096_ImmGen imm", false,-1, 31,0);
        tracep->declBus(c+6,"ysyx_23060096_ImmGen immI", false,-1, 31,0);
        tracep->declBus(c+7,"ysyx_23060096_ImmGen immU", false,-1, 31,0);
        tracep->declBus(c+8,"ysyx_23060096_ImmGen immS", false,-1, 31,0);
        tracep->declBus(c+9,"ysyx_23060096_ImmGen immB", false,-1, 31,0);
        tracep->declBus(c+10,"ysyx_23060096_ImmGen immJ", false,-1, 31,0);
    }
}

void Vysyx_23060096_ImmGen___024root__traceFullTop0(void* voidSelf, VerilatedVcd* tracep) VL_ATTR_COLD;
void Vysyx_23060096_ImmGen___024root__traceChgTop0(void* voidSelf, VerilatedVcd* tracep);
void Vysyx_23060096_ImmGen___024root__traceCleanup(void* voidSelf, VerilatedVcd* /*unused*/);

void Vysyx_23060096_ImmGen___024root__traceRegister(Vysyx_23060096_ImmGen___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_23060096_ImmGen__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        tracep->addFullCb(&Vysyx_23060096_ImmGen___024root__traceFullTop0, vlSelf);
        tracep->addChgCb(&Vysyx_23060096_ImmGen___024root__traceChgTop0, vlSelf);
        tracep->addCleanupCb(&Vysyx_23060096_ImmGen___024root__traceCleanup, vlSelf);
    }
}

void Vysyx_23060096_ImmGen___024root__traceFullSub0(Vysyx_23060096_ImmGen___024root* vlSelf, VerilatedVcd* tracep) VL_ATTR_COLD;

void Vysyx_23060096_ImmGen___024root__traceFullTop0(void* voidSelf, VerilatedVcd* tracep) {
    Vysyx_23060096_ImmGen___024root* const __restrict vlSelf = static_cast<Vysyx_23060096_ImmGen___024root*>(voidSelf);
    Vysyx_23060096_ImmGen__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        Vysyx_23060096_ImmGen___024root__traceFullSub0((&vlSymsp->TOP), tracep);
    }
}

void Vysyx_23060096_ImmGen___024root__traceFullSub0(Vysyx_23060096_ImmGen___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_23060096_ImmGen__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->fullBit(oldp+1,(vlSelf->clk));
        tracep->fullBit(oldp+2,(vlSelf->rstn));
        tracep->fullIData(oldp+3,(vlSelf->inst),25);
        tracep->fullCData(oldp+4,(vlSelf->ExtOP),3);
        tracep->fullIData(oldp+5,(vlSelf->imm),32);
        tracep->fullIData(oldp+6,(vlSelf->ysyx_23060096_ImmGen__DOT__immI),32);
        tracep->fullIData(oldp+7,((0xfffff000U & (vlSelf->inst 
                                                  << 7U))),32);
        tracep->fullIData(oldp+8,((((- (IData)((1U 
                                                & (vlSelf->inst 
                                                   >> 0x18U)))) 
                                    << 0xcU) | ((0xfe0U 
                                                 & (vlSelf->inst 
                                                    >> 0xdU)) 
                                                | (0x1fU 
                                                   & vlSelf->inst)))),32);
        tracep->fullIData(oldp+9,((((- (IData)((1U 
                                                & (vlSelf->inst 
                                                   >> 0x18U)))) 
                                    << 0xcU) | ((0x800U 
                                                 & (vlSelf->inst 
                                                    << 0xbU)) 
                                                | ((0x7e0U 
                                                    & (vlSelf->inst 
                                                       >> 0xdU)) 
                                                   | (0x1eU 
                                                      & vlSelf->inst))))),32);
        tracep->fullIData(oldp+10,((((- (IData)((1U 
                                                 & (vlSelf->inst 
                                                    >> 0x18U)))) 
                                     << 0x14U) | ((0xff000U 
                                                   & (vlSelf->inst 
                                                      << 7U)) 
                                                  | ((0x800U 
                                                      & (vlSelf->inst 
                                                         >> 2U)) 
                                                     | (0x7feU 
                                                        & (vlSelf->inst 
                                                           >> 0xdU)))))),32);
    }
}
