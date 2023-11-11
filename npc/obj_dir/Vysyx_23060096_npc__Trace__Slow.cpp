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
        tracep->declBit(c+1,"clk", false,-1);
        tracep->declBit(c+2,"rstn", false,-1);
        tracep->declBus(c+3,"inst", false,-1, 31,0);
        tracep->declBus(c+4,"pc", false,-1, 31,0);
        tracep->declBit(c+1,"ysyx_23060096_npc clk", false,-1);
        tracep->declBit(c+2,"ysyx_23060096_npc rstn", false,-1);
        tracep->declBus(c+3,"ysyx_23060096_npc inst", false,-1, 31,0);
        tracep->declBus(c+4,"ysyx_23060096_npc pc", false,-1, 31,0);
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
        tracep->fullBit(oldp+1,(vlSelf->clk));
        tracep->fullBit(oldp+2,(vlSelf->rstn));
        tracep->fullIData(oldp+3,(vlSelf->inst),32);
        tracep->fullIData(oldp+4,(vlSelf->pc),32);
    }
}
