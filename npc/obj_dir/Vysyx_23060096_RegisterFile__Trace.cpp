// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vysyx_23060096_RegisterFile__Syms.h"


void Vysyx_23060096_RegisterFile___024root__traceChgSub0(Vysyx_23060096_RegisterFile___024root* vlSelf, VerilatedVcd* tracep);

void Vysyx_23060096_RegisterFile___024root__traceChgTop0(void* voidSelf, VerilatedVcd* tracep) {
    Vysyx_23060096_RegisterFile___024root* const __restrict vlSelf = static_cast<Vysyx_23060096_RegisterFile___024root*>(voidSelf);
    Vysyx_23060096_RegisterFile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    {
        Vysyx_23060096_RegisterFile___024root__traceChgSub0((&vlSymsp->TOP), tracep);
    }
}

void Vysyx_23060096_RegisterFile___024root__traceChgSub0(Vysyx_23060096_RegisterFile___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_23060096_RegisterFile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode + 1);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
            tracep->chgIData(oldp+0,(vlSelf->ysyx_23060096_RegisterFile__DOT__rf[0]),32);
            tracep->chgIData(oldp+1,(vlSelf->ysyx_23060096_RegisterFile__DOT__rf[1]),32);
            tracep->chgIData(oldp+2,(vlSelf->ysyx_23060096_RegisterFile__DOT__rf[2]),32);
            tracep->chgIData(oldp+3,(vlSelf->ysyx_23060096_RegisterFile__DOT__rf[3]),32);
            tracep->chgIData(oldp+4,(vlSelf->ysyx_23060096_RegisterFile__DOT__rf[4]),32);
            tracep->chgIData(oldp+5,(vlSelf->ysyx_23060096_RegisterFile__DOT__i),32);
        }
        tracep->chgBit(oldp+6,(vlSelf->clk));
        tracep->chgBit(oldp+7,(vlSelf->rstn));
        tracep->chgIData(oldp+8,(vlSelf->wdata),32);
        tracep->chgCData(oldp+9,(vlSelf->Ra),5);
        tracep->chgCData(oldp+10,(vlSelf->Rb),5);
        tracep->chgCData(oldp+11,(vlSelf->waddr),5);
        tracep->chgBit(oldp+12,(vlSelf->w_en));
        tracep->chgIData(oldp+13,(vlSelf->busA),32);
        tracep->chgIData(oldp+14,(vlSelf->busB),32);
    }
}

void Vysyx_23060096_RegisterFile___024root__traceCleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    Vysyx_23060096_RegisterFile___024root* const __restrict vlSelf = static_cast<Vysyx_23060096_RegisterFile___024root*>(voidSelf);
    Vysyx_23060096_RegisterFile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        vlSymsp->__Vm_activity = false;
        vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
        vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    }
}
