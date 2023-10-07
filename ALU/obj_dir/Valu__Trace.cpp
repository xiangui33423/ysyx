// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Valu__Syms.h"


void Valu___024root__traceChgSub0(Valu___024root* vlSelf, VerilatedVcd* tracep);

void Valu___024root__traceChgTop0(void* voidSelf, VerilatedVcd* tracep) {
    Valu___024root* const __restrict vlSelf = static_cast<Valu___024root*>(voidSelf);
    Valu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    {
        Valu___024root__traceChgSub0((&vlSymsp->TOP), tracep);
    }
}

void Valu___024root__traceChgSub0(Valu___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Valu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode + 1);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
            tracep->chgBit(oldp+0,((1U & (~ (IData)(
                                                    (0U 
                                                     != (IData)(vlSelf->alu__DOT__add)))))));
            tracep->chgBit(oldp+1,((1U & (~ (IData)(
                                                    (0U 
                                                     != (IData)(vlSelf->alu__DOT__res)))))));
            tracep->chgCData(oldp+2,(vlSelf->alu__DOT__res),4);
            tracep->chgCData(oldp+3,(vlSelf->alu__DOT__add),4);
        }
        tracep->chgCData(oldp+4,(vlSelf->A),4);
        tracep->chgCData(oldp+5,(vlSelf->B),4);
        tracep->chgCData(oldp+6,(vlSelf->op),3);
        tracep->chgCData(oldp+7,(vlSelf->out),4);
        tracep->chgBit(oldp+8,((((1U & ((IData)(vlSelf->A) 
                                        >> 3U)) == 
                                 (1U & ((IData)(vlSelf->B) 
                                        >> 3U))) & 
                                ((1U & ((IData)(vlSelf->alu__DOT__add) 
                                        >> 3U)) != 
                                 (1U & ((IData)(vlSelf->A) 
                                        >> 3U))))));
        tracep->chgBit(oldp+9,((1U & (((IData)(vlSelf->A) 
                                       + (IData)(vlSelf->B)) 
                                      >> 4U))));
        tracep->chgBit(oldp+10,((((1U & ((IData)(vlSelf->A) 
                                         >> 3U)) == 
                                  (1U & (~ ((IData)(vlSelf->B) 
                                            >> 3U)))) 
                                 & ((1U & ((IData)(vlSelf->alu__DOT__res) 
                                           >> 3U)) 
                                    != (1U & ((IData)(vlSelf->A) 
                                              >> 3U))))));
        tracep->chgBit(oldp+11,((1U & (((IData)(1U) 
                                        + ((IData)(vlSelf->A) 
                                           + (0xfU 
                                              & (~ (IData)(vlSelf->B))))) 
                                       >> 4U))));
        tracep->chgCData(oldp+12,((0xfU & (~ (IData)(vlSelf->B)))),4);
    }
}

void Valu___024root__traceCleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    Valu___024root* const __restrict vlSelf = static_cast<Valu___024root*>(voidSelf);
    Valu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        vlSymsp->__Vm_activity = false;
        vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
        vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    }
}
