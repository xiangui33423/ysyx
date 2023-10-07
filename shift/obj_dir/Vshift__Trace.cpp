// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vshift__Syms.h"


void Vshift___024root__traceChgSub0(Vshift___024root* vlSelf, VerilatedVcd* tracep);

void Vshift___024root__traceChgTop0(void* voidSelf, VerilatedVcd* tracep) {
    Vshift___024root* const __restrict vlSelf = static_cast<Vshift___024root*>(voidSelf);
    Vshift__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    {
        Vshift___024root__traceChgSub0((&vlSymsp->TOP), tracep);
    }
}

void Vshift___024root__traceChgSub0(Vshift___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vshift__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode + 1);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->chgCData(oldp+0,(vlSelf->din),8);
        tracep->chgBit(oldp+1,(vlSelf->rst_n));
        tracep->chgBit(oldp+2,(vlSelf->clk));
        tracep->chgCData(oldp+3,(vlSelf->op),3);
        tracep->chgCData(oldp+4,(vlSelf->dout),8);
        tracep->chgCData(oldp+5,(vlSelf->shift__DOT__Q),8);
    }
}

void Vshift___024root__traceCleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VlUnpacked<CData/*0:0*/, 1> __Vm_traceActivity;
    Vshift___024root* const __restrict vlSelf = static_cast<Vshift___024root*>(voidSelf);
    Vshift__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        vlSymsp->__Vm_activity = false;
        __Vm_traceActivity[0U] = 0U;
    }
}
