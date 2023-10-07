// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vbarrel_shift__Syms.h"


void Vbarrel_shift___024root__traceInitSub0(Vbarrel_shift___024root* vlSelf, VerilatedVcd* tracep) VL_ATTR_COLD;

void Vbarrel_shift___024root__traceInitTop(Vbarrel_shift___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vbarrel_shift__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        Vbarrel_shift___024root__traceInitSub0(vlSelf, tracep);
    }
}

void Vbarrel_shift___024root__traceInitSub0(Vbarrel_shift___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vbarrel_shift__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    const int c = vlSymsp->__Vm_baseCode;
    if (false && tracep && c) {}  // Prevent unused
    // Body
    {
        tracep->declBus(c+1,"din", false,-1, 7,0);
        tracep->declBus(c+2,"shamt", false,-1, 2,0);
        tracep->declBit(c+3,"dir", false,-1);
        tracep->declBit(c+4,"op", false,-1);
        tracep->declBus(c+5,"dout", false,-1, 7,0);
        tracep->declBus(c+1,"barrel_shift din", false,-1, 7,0);
        tracep->declBus(c+2,"barrel_shift shamt", false,-1, 2,0);
        tracep->declBit(c+3,"barrel_shift dir", false,-1);
        tracep->declBit(c+4,"barrel_shift op", false,-1);
        tracep->declBus(c+5,"barrel_shift dout", false,-1, 7,0);
        tracep->declBus(c+6,"barrel_shift Q", false,-1, 7,0);
    }
}

void Vbarrel_shift___024root__traceFullTop0(void* voidSelf, VerilatedVcd* tracep) VL_ATTR_COLD;
void Vbarrel_shift___024root__traceChgTop0(void* voidSelf, VerilatedVcd* tracep);
void Vbarrel_shift___024root__traceCleanup(void* voidSelf, VerilatedVcd* /*unused*/);

void Vbarrel_shift___024root__traceRegister(Vbarrel_shift___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vbarrel_shift__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        tracep->addFullCb(&Vbarrel_shift___024root__traceFullTop0, vlSelf);
        tracep->addChgCb(&Vbarrel_shift___024root__traceChgTop0, vlSelf);
        tracep->addCleanupCb(&Vbarrel_shift___024root__traceCleanup, vlSelf);
    }
}

void Vbarrel_shift___024root__traceFullSub0(Vbarrel_shift___024root* vlSelf, VerilatedVcd* tracep) VL_ATTR_COLD;

void Vbarrel_shift___024root__traceFullTop0(void* voidSelf, VerilatedVcd* tracep) {
    Vbarrel_shift___024root* const __restrict vlSelf = static_cast<Vbarrel_shift___024root*>(voidSelf);
    Vbarrel_shift__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        Vbarrel_shift___024root__traceFullSub0((&vlSymsp->TOP), tracep);
    }
}

void Vbarrel_shift___024root__traceFullSub0(Vbarrel_shift___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vbarrel_shift__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->fullCData(oldp+1,(vlSelf->din),8);
        tracep->fullCData(oldp+2,(vlSelf->shamt),3);
        tracep->fullBit(oldp+3,(vlSelf->dir));
        tracep->fullBit(oldp+4,(vlSelf->op));
        tracep->fullCData(oldp+5,(vlSelf->dout),8);
        tracep->fullCData(oldp+6,(vlSelf->barrel_shift__DOT__Q),8);
    }
}
