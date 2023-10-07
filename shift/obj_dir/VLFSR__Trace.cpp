// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VLFSR__Syms.h"


void VLFSR___024root__traceChgSub0(VLFSR___024root* vlSelf, VerilatedVcd* tracep);

void VLFSR___024root__traceChgTop0(void* voidSelf, VerilatedVcd* tracep) {
    VLFSR___024root* const __restrict vlSelf = static_cast<VLFSR___024root*>(voidSelf);
    VLFSR__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    {
        VLFSR___024root__traceChgSub0((&vlSymsp->TOP), tracep);
    }
}

void VLFSR___024root__traceChgSub0(VLFSR___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VLFSR__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode + 1);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
            tracep->chgCData(oldp+0,(vlSelf->LFSR__DOT__cnt),8);
            tracep->chgBit(oldp+1,(vlSelf->LFSR__DOT__start_r));
            tracep->chgBit(oldp+2,((1U & VL_REDXOR_32(
                                                      (0x1dU 
                                                       & (IData)(vlSelf->LFSR__DOT__cnt))))));
        }
        tracep->chgBit(oldp+3,(vlSelf->clk));
        tracep->chgBit(oldp+4,(vlSelf->rst_n));
        tracep->chgCData(oldp+5,(vlSelf->seed),8);
        tracep->chgBit(oldp+6,(vlSelf->start));
        tracep->chgCData(oldp+7,(vlSelf->dout),8);
        tracep->chgBit(oldp+8,(vlSelf->dout_vld));
        tracep->chgBit(oldp+9,(((IData)(vlSelf->start) 
                                & (~ (IData)(vlSelf->LFSR__DOT__start_r)))));
    }
}

void VLFSR___024root__traceCleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VLFSR___024root* const __restrict vlSelf = static_cast<VLFSR___024root*>(voidSelf);
    VLFSR__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        vlSymsp->__Vm_activity = false;
        vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
        vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    }
}
