// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vadder__Syms.h"


void Vadder___024root__traceInitSub0(Vadder___024root* vlSelf, VerilatedVcd* tracep) VL_ATTR_COLD;

void Vadder___024root__traceInitTop(Vadder___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vadder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        Vadder___024root__traceInitSub0(vlSelf, tracep);
    }
}

void Vadder___024root__traceInitSub0(Vadder___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vadder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    const int c = vlSymsp->__Vm_baseCode;
    if (false && tracep && c) {}  // Prevent unused
    // Body
    {
        tracep->declBus(c+1,"A", false,-1, 3,0);
        tracep->declBus(c+2,"B", false,-1, 3,0);
        tracep->declBit(c+3,"op", false,-1);
        tracep->declBus(c+4,"result", false,-1, 3,0);
        tracep->declBit(c+5,"zero", false,-1);
        tracep->declBit(c+6,"overflow", false,-1);
        tracep->declBit(c+7,"carry", false,-1);
        tracep->declBus(c+1,"adder A", false,-1, 3,0);
        tracep->declBus(c+2,"adder B", false,-1, 3,0);
        tracep->declBit(c+3,"adder op", false,-1);
        tracep->declBus(c+4,"adder result", false,-1, 3,0);
        tracep->declBit(c+5,"adder zero", false,-1);
        tracep->declBit(c+6,"adder overflow", false,-1);
        tracep->declBit(c+7,"adder carry", false,-1);
        tracep->declBus(c+8,"adder t_add_op", false,-1, 3,0);
    }
}

void Vadder___024root__traceFullTop0(void* voidSelf, VerilatedVcd* tracep) VL_ATTR_COLD;
void Vadder___024root__traceChgTop0(void* voidSelf, VerilatedVcd* tracep);
void Vadder___024root__traceCleanup(void* voidSelf, VerilatedVcd* /*unused*/);

void Vadder___024root__traceRegister(Vadder___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vadder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        tracep->addFullCb(&Vadder___024root__traceFullTop0, vlSelf);
        tracep->addChgCb(&Vadder___024root__traceChgTop0, vlSelf);
        tracep->addCleanupCb(&Vadder___024root__traceCleanup, vlSelf);
    }
}

void Vadder___024root__traceFullSub0(Vadder___024root* vlSelf, VerilatedVcd* tracep) VL_ATTR_COLD;

void Vadder___024root__traceFullTop0(void* voidSelf, VerilatedVcd* tracep) {
    Vadder___024root* const __restrict vlSelf = static_cast<Vadder___024root*>(voidSelf);
    Vadder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        Vadder___024root__traceFullSub0((&vlSymsp->TOP), tracep);
    }
}

void Vadder___024root__traceFullSub0(Vadder___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vadder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->fullCData(oldp+1,(vlSelf->A),4);
        tracep->fullCData(oldp+2,(vlSelf->B),4);
        tracep->fullBit(oldp+3,(vlSelf->op));
        tracep->fullCData(oldp+4,(vlSelf->result),4);
        tracep->fullBit(oldp+5,(vlSelf->zero));
        tracep->fullBit(oldp+6,(vlSelf->overflow));
        tracep->fullBit(oldp+7,(vlSelf->carry));
        tracep->fullCData(oldp+8,(vlSelf->adder__DOT__t_add_op),4);
    }
}
