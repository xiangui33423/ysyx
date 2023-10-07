// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vdecoder__Syms.h"


void Vdecoder___024root__traceChgSub0(Vdecoder___024root* vlSelf, VerilatedVcd* tracep);

void Vdecoder___024root__traceChgTop0(void* voidSelf, VerilatedVcd* tracep) {
    Vdecoder___024root* const __restrict vlSelf = static_cast<Vdecoder___024root*>(voidSelf);
    Vdecoder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    {
        Vdecoder___024root__traceChgSub0((&vlSymsp->TOP), tracep);
    }
}

void Vdecoder___024root__traceChgSub0(Vdecoder___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vdecoder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode + 1);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->chgCData(oldp+0,(vlSelf->x),3);
        tracep->chgBit(oldp+1,(vlSelf->en));
        tracep->chgCData(oldp+2,(vlSelf->y),7);
    }
}

void Vdecoder___024root__traceCleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VlUnpacked<CData/*0:0*/, 1> __Vm_traceActivity;
    Vdecoder___024root* const __restrict vlSelf = static_cast<Vdecoder___024root*>(voidSelf);
    Vdecoder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        vlSymsp->__Vm_activity = false;
        __Vm_traceActivity[0U] = 0U;
    }
}
