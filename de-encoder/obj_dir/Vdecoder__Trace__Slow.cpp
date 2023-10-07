// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vdecoder__Syms.h"


void Vdecoder___024root__traceInitSub0(Vdecoder___024root* vlSelf, VerilatedVcd* tracep) VL_ATTR_COLD;

void Vdecoder___024root__traceInitTop(Vdecoder___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vdecoder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        Vdecoder___024root__traceInitSub0(vlSelf, tracep);
    }
}

void Vdecoder___024root__traceInitSub0(Vdecoder___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vdecoder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    const int c = vlSymsp->__Vm_baseCode;
    if (false && tracep && c) {}  // Prevent unused
    // Body
    {
        tracep->declBus(c+1,"x", false,-1, 2,0);
        tracep->declBit(c+2,"en", false,-1);
        tracep->declBus(c+3,"y", false,-1, 6,0);
        tracep->declBus(c+1,"decoder x", false,-1, 2,0);
        tracep->declBit(c+2,"decoder en", false,-1);
        tracep->declBus(c+3,"decoder y", false,-1, 6,0);
    }
}

void Vdecoder___024root__traceFullTop0(void* voidSelf, VerilatedVcd* tracep) VL_ATTR_COLD;
void Vdecoder___024root__traceChgTop0(void* voidSelf, VerilatedVcd* tracep);
void Vdecoder___024root__traceCleanup(void* voidSelf, VerilatedVcd* /*unused*/);

void Vdecoder___024root__traceRegister(Vdecoder___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vdecoder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        tracep->addFullCb(&Vdecoder___024root__traceFullTop0, vlSelf);
        tracep->addChgCb(&Vdecoder___024root__traceChgTop0, vlSelf);
        tracep->addCleanupCb(&Vdecoder___024root__traceCleanup, vlSelf);
    }
}

void Vdecoder___024root__traceFullSub0(Vdecoder___024root* vlSelf, VerilatedVcd* tracep) VL_ATTR_COLD;

void Vdecoder___024root__traceFullTop0(void* voidSelf, VerilatedVcd* tracep) {
    Vdecoder___024root* const __restrict vlSelf = static_cast<Vdecoder___024root*>(voidSelf);
    Vdecoder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        Vdecoder___024root__traceFullSub0((&vlSymsp->TOP), tracep);
    }
}

void Vdecoder___024root__traceFullSub0(Vdecoder___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vdecoder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->fullCData(oldp+1,(vlSelf->x),3);
        tracep->fullBit(oldp+2,(vlSelf->en));
        tracep->fullCData(oldp+3,(vlSelf->y),7);
    }
}
