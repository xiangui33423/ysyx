// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vencoder__Syms.h"


void Vencoder___024root__traceInitSub0(Vencoder___024root* vlSelf, VerilatedVcd* tracep) VL_ATTR_COLD;

void Vencoder___024root__traceInitTop(Vencoder___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vencoder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        Vencoder___024root__traceInitSub0(vlSelf, tracep);
    }
}

void Vencoder___024root__traceInitSub0(Vencoder___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vencoder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    const int c = vlSymsp->__Vm_baseCode;
    if (false && tracep && c) {}  // Prevent unused
    // Body
    {
        tracep->declBus(c+1,"x", false,-1, 7,0);
        tracep->declBit(c+2,"en", false,-1);
        tracep->declBus(c+3,"y", false,-1, 2,0);
        tracep->declBit(c+4,"tur", false,-1);
        tracep->declBus(c+1,"encoder x", false,-1, 7,0);
        tracep->declBit(c+2,"encoder en", false,-1);
        tracep->declBus(c+3,"encoder y", false,-1, 2,0);
        tracep->declBit(c+4,"encoder tur", false,-1);
        tracep->declBus(c+5,"encoder i", false,-1, 31,0);
    }
}

void Vencoder___024root__traceFullTop0(void* voidSelf, VerilatedVcd* tracep) VL_ATTR_COLD;
void Vencoder___024root__traceChgTop0(void* voidSelf, VerilatedVcd* tracep);
void Vencoder___024root__traceCleanup(void* voidSelf, VerilatedVcd* /*unused*/);

void Vencoder___024root__traceRegister(Vencoder___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vencoder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        tracep->addFullCb(&Vencoder___024root__traceFullTop0, vlSelf);
        tracep->addChgCb(&Vencoder___024root__traceChgTop0, vlSelf);
        tracep->addCleanupCb(&Vencoder___024root__traceCleanup, vlSelf);
    }
}

void Vencoder___024root__traceFullSub0(Vencoder___024root* vlSelf, VerilatedVcd* tracep) VL_ATTR_COLD;

void Vencoder___024root__traceFullTop0(void* voidSelf, VerilatedVcd* tracep) {
    Vencoder___024root* const __restrict vlSelf = static_cast<Vencoder___024root*>(voidSelf);
    Vencoder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        Vencoder___024root__traceFullSub0((&vlSymsp->TOP), tracep);
    }
}

void Vencoder___024root__traceFullSub0(Vencoder___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vencoder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->fullCData(oldp+1,(vlSelf->x),8);
        tracep->fullBit(oldp+2,(vlSelf->en));
        tracep->fullCData(oldp+3,(vlSelf->y),3);
        tracep->fullBit(oldp+4,(vlSelf->tur));
        tracep->fullIData(oldp+5,(vlSelf->encoder__DOT__i),32);
    }
}
