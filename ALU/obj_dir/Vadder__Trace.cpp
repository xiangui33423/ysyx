// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vadder__Syms.h"


void Vadder___024root__traceChgSub0(Vadder___024root* vlSelf, VerilatedVcd* tracep);

void Vadder___024root__traceChgTop0(void* voidSelf, VerilatedVcd* tracep) {
    Vadder___024root* const __restrict vlSelf = static_cast<Vadder___024root*>(voidSelf);
    Vadder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    {
        Vadder___024root__traceChgSub0((&vlSymsp->TOP), tracep);
    }
}

void Vadder___024root__traceChgSub0(Vadder___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vadder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode + 1);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->chgCData(oldp+0,(vlSelf->A),4);
        tracep->chgCData(oldp+1,(vlSelf->B),4);
        tracep->chgBit(oldp+2,(vlSelf->op));
        tracep->chgCData(oldp+3,(vlSelf->result),4);
        tracep->chgBit(oldp+4,(vlSelf->zero));
        tracep->chgBit(oldp+5,(vlSelf->overflow));
        tracep->chgBit(oldp+6,(vlSelf->carry));
        tracep->chgCData(oldp+7,(vlSelf->adder__DOT__t_add_op),4);
    }
}

void Vadder___024root__traceCleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VlUnpacked<CData/*0:0*/, 1> __Vm_traceActivity;
    Vadder___024root* const __restrict vlSelf = static_cast<Vadder___024root*>(voidSelf);
    Vadder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        vlSymsp->__Vm_activity = false;
        __Vm_traceActivity[0U] = 0U;
    }
}
