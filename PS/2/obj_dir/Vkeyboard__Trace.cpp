// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vkeyboard__Syms.h"


void Vkeyboard___024root__traceChgSub0(Vkeyboard___024root* vlSelf, VerilatedVcd* tracep);

void Vkeyboard___024root__traceChgTop0(void* voidSelf, VerilatedVcd* tracep) {
    Vkeyboard___024root* const __restrict vlSelf = static_cast<Vkeyboard___024root*>(voidSelf);
    Vkeyboard__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    {
        Vkeyboard___024root__traceChgSub0((&vlSymsp->TOP), tracep);
    }
}

void Vkeyboard___024root__traceChgSub0(Vkeyboard___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vkeyboard__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode + 1);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
            tracep->chgCData(oldp+0,(vlSelf->keyboard__DOT__data),8);
            tracep->chgSData(oldp+1,(vlSelf->keyboard__DOT__buffer),10);
            tracep->chgCData(oldp+2,(vlSelf->keyboard__DOT__count),4);
        }
        tracep->chgBit(oldp+3,(vlSelf->clk));
        tracep->chgBit(oldp+4,(vlSelf->rst_n));
        tracep->chgBit(oldp+5,(vlSelf->ps2_data));
        tracep->chgBit(oldp+6,(vlSelf->ps2_clk));
        tracep->chgCData(oldp+7,(vlSelf->out),8);
        tracep->chgBit(oldp+8,(vlSelf->en));
        tracep->chgCData(oldp+9,(vlSelf->keyboard__DOT__ps2_clk_sync),3);
        tracep->chgBit(oldp+10,((IData)((4U == (6U 
                                                & (IData)(vlSelf->keyboard__DOT__ps2_clk_sync))))));
    }
}

void Vkeyboard___024root__traceCleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    Vkeyboard___024root* const __restrict vlSelf = static_cast<Vkeyboard___024root*>(voidSelf);
    Vkeyboard__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        vlSymsp->__Vm_activity = false;
        vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
        vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    }
}
