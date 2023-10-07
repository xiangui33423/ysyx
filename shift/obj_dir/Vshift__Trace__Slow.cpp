// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vshift__Syms.h"


void Vshift___024root__traceInitSub0(Vshift___024root* vlSelf, VerilatedVcd* tracep) VL_ATTR_COLD;

void Vshift___024root__traceInitTop(Vshift___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vshift__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        Vshift___024root__traceInitSub0(vlSelf, tracep);
    }
}

void Vshift___024root__traceInitSub0(Vshift___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vshift__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    const int c = vlSymsp->__Vm_baseCode;
    if (false && tracep && c) {}  // Prevent unused
    // Body
    {
        tracep->declBus(c+1,"din", false,-1, 7,0);
        tracep->declBit(c+2,"rst_n", false,-1);
        tracep->declBit(c+3,"clk", false,-1);
        tracep->declBus(c+4,"op", false,-1, 2,0);
        tracep->declBus(c+5,"dout", false,-1, 7,0);
        tracep->declBus(c+1,"shift din", false,-1, 7,0);
        tracep->declBit(c+2,"shift rst_n", false,-1);
        tracep->declBit(c+3,"shift clk", false,-1);
        tracep->declBus(c+4,"shift op", false,-1, 2,0);
        tracep->declBus(c+5,"shift dout", false,-1, 7,0);
        tracep->declBus(c+6,"shift Q", false,-1, 7,0);
        tracep->declBus(c+7,"shift i", false,-1, 31,0);
    }
}

void Vshift___024root__traceFullTop0(void* voidSelf, VerilatedVcd* tracep) VL_ATTR_COLD;
void Vshift___024root__traceChgTop0(void* voidSelf, VerilatedVcd* tracep);
void Vshift___024root__traceCleanup(void* voidSelf, VerilatedVcd* /*unused*/);

void Vshift___024root__traceRegister(Vshift___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vshift__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        tracep->addFullCb(&Vshift___024root__traceFullTop0, vlSelf);
        tracep->addChgCb(&Vshift___024root__traceChgTop0, vlSelf);
        tracep->addCleanupCb(&Vshift___024root__traceCleanup, vlSelf);
    }
}

void Vshift___024root__traceFullSub0(Vshift___024root* vlSelf, VerilatedVcd* tracep) VL_ATTR_COLD;

void Vshift___024root__traceFullTop0(void* voidSelf, VerilatedVcd* tracep) {
    Vshift___024root* const __restrict vlSelf = static_cast<Vshift___024root*>(voidSelf);
    Vshift__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        Vshift___024root__traceFullSub0((&vlSymsp->TOP), tracep);
    }
}

void Vshift___024root__traceFullSub0(Vshift___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vshift__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->fullCData(oldp+1,(vlSelf->din),8);
        tracep->fullBit(oldp+2,(vlSelf->rst_n));
        tracep->fullBit(oldp+3,(vlSelf->clk));
        tracep->fullCData(oldp+4,(vlSelf->op),3);
        tracep->fullCData(oldp+5,(vlSelf->dout),8);
        tracep->fullCData(oldp+6,(vlSelf->shift__DOT__Q),8);
        tracep->fullIData(oldp+7,(vlSelf->shift__DOT__i),32);
    }
}
