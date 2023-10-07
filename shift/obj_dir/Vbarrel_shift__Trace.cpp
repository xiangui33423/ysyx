// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vbarrel_shift__Syms.h"


void Vbarrel_shift___024root__traceChgSub0(Vbarrel_shift___024root* vlSelf, VerilatedVcd* tracep);

void Vbarrel_shift___024root__traceChgTop0(void* voidSelf, VerilatedVcd* tracep) {
    Vbarrel_shift___024root* const __restrict vlSelf = static_cast<Vbarrel_shift___024root*>(voidSelf);
    Vbarrel_shift__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    {
        Vbarrel_shift___024root__traceChgSub0((&vlSymsp->TOP), tracep);
    }
}

void Vbarrel_shift___024root__traceChgSub0(Vbarrel_shift___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vbarrel_shift__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode + 1);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->chgCData(oldp+0,(vlSelf->din),8);
        tracep->chgCData(oldp+1,(vlSelf->shamt),3);
        tracep->chgBit(oldp+2,(vlSelf->dir));
        tracep->chgBit(oldp+3,(vlSelf->op));
        tracep->chgCData(oldp+4,(vlSelf->dout),8);
        tracep->chgCData(oldp+5,(vlSelf->barrel_shift__DOT__Q),8);
    }
}

void Vbarrel_shift___024root__traceCleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VlUnpacked<CData/*0:0*/, 1> __Vm_traceActivity;
    Vbarrel_shift___024root* const __restrict vlSelf = static_cast<Vbarrel_shift___024root*>(voidSelf);
    Vbarrel_shift__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        vlSymsp->__Vm_activity = false;
        __Vm_traceActivity[0U] = 0U;
    }
}
