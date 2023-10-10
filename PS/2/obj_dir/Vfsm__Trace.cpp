// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vfsm__Syms.h"


void Vfsm___024root__traceChgSub0(Vfsm___024root* vlSelf, VerilatedVcd* tracep);

void Vfsm___024root__traceChgTop0(void* voidSelf, VerilatedVcd* tracep) {
    Vfsm___024root* const __restrict vlSelf = static_cast<Vfsm___024root*>(voidSelf);
    Vfsm__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    {
        Vfsm___024root__traceChgSub0((&vlSymsp->TOP), tracep);
    }
}

void Vfsm___024root__traceChgSub0(Vfsm___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vfsm__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode + 1);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->chgBit(oldp+0,(vlSelf->clk));
        tracep->chgBit(oldp+1,(vlSelf->rst_n));
        tracep->chgCData(oldp+2,(vlSelf->data),8);
        tracep->chgBit(oldp+3,(vlSelf->en));
        tracep->chgCData(oldp+4,(vlSelf->state),3);
        tracep->chgCData(oldp+5,(((4U & (IData)(vlSelf->fsm__DOT__current_state))
                                   ? 0U : ((2U & (IData)(vlSelf->fsm__DOT__current_state))
                                            ? ((1U 
                                                & (IData)(vlSelf->fsm__DOT__current_state))
                                                ? 0U
                                                : ((IData)(vlSelf->en)
                                                    ? 4U
                                                    : 2U))
                                            : ((1U 
                                                & (IData)(vlSelf->fsm__DOT__current_state))
                                                ? (
                                                   (0xf0U 
                                                    == (IData)(vlSelf->data))
                                                    ? 2U
                                                    : 1U)
                                                : (
                                                   ((0xfU 
                                                     != (IData)(vlSelf->data)) 
                                                    & (IData)(vlSelf->en))
                                                    ? 1U
                                                    : 0U))))),3);
        tracep->chgCData(oldp+6,(vlSelf->fsm__DOT__current_state),3);
    }
}

void Vfsm___024root__traceCleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VlUnpacked<CData/*0:0*/, 1> __Vm_traceActivity;
    Vfsm___024root* const __restrict vlSelf = static_cast<Vfsm___024root*>(voidSelf);
    Vfsm__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        vlSymsp->__Vm_activity = false;
        __Vm_traceActivity[0U] = 0U;
    }
}
