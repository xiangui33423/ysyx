// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Valu__Syms.h"


void Valu___024root__traceInitSub0(Valu___024root* vlSelf, VerilatedVcd* tracep) VL_ATTR_COLD;

void Valu___024root__traceInitTop(Valu___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Valu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        Valu___024root__traceInitSub0(vlSelf, tracep);
    }
}

void Valu___024root__traceInitSub0(Valu___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Valu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    const int c = vlSymsp->__Vm_baseCode;
    if (false && tracep && c) {}  // Prevent unused
    // Body
    {
        tracep->declBus(c+5,"A", false,-1, 3,0);
        tracep->declBus(c+6,"B", false,-1, 3,0);
        tracep->declBus(c+7,"op", false,-1, 2,0);
        tracep->declBus(c+8,"out", false,-1, 3,0);
        tracep->declBus(c+5,"alu A", false,-1, 3,0);
        tracep->declBus(c+6,"alu B", false,-1, 3,0);
        tracep->declBus(c+7,"alu op", false,-1, 2,0);
        tracep->declBus(c+8,"alu out", false,-1, 3,0);
        tracep->declBit(c+1,"alu zero_add", false,-1);
        tracep->declBit(c+2,"alu zero_sub", false,-1);
        tracep->declBit(c+2,"alu zero_res", false,-1);
        tracep->declBit(c+9,"alu overflow", false,-1);
        tracep->declBit(c+10,"alu carry", false,-1);
        tracep->declBus(c+3,"alu res", false,-1, 3,0);
        tracep->declBus(c+3,"alu sub", false,-1, 3,0);
        tracep->declBus(c+4,"alu add", false,-1, 3,0);
        tracep->declBus(c+5,"alu u_add A", false,-1, 3,0);
        tracep->declBus(c+6,"alu u_add B", false,-1, 3,0);
        tracep->declBit(c+14,"alu u_add op", false,-1);
        tracep->declBus(c+4,"alu u_add result", false,-1, 3,0);
        tracep->declBit(c+1,"alu u_add zero", false,-1);
        tracep->declBit(c+9,"alu u_add overflow", false,-1);
        tracep->declBit(c+10,"alu u_add carry", false,-1);
        tracep->declBus(c+6,"alu u_add t_add_op", false,-1, 3,0);
        tracep->declBus(c+5,"alu u_sub A", false,-1, 3,0);
        tracep->declBus(c+6,"alu u_sub B", false,-1, 3,0);
        tracep->declBit(c+15,"alu u_sub op", false,-1);
        tracep->declBus(c+3,"alu u_sub result", false,-1, 3,0);
        tracep->declBit(c+2,"alu u_sub zero", false,-1);
        tracep->declBit(c+11,"alu u_sub overflow", false,-1);
        tracep->declBit(c+12,"alu u_sub carry", false,-1);
        tracep->declBus(c+13,"alu u_sub t_add_op", false,-1, 3,0);
        tracep->declBus(c+5,"alu u_res A", false,-1, 3,0);
        tracep->declBus(c+6,"alu u_res B", false,-1, 3,0);
        tracep->declBit(c+15,"alu u_res op", false,-1);
        tracep->declBus(c+3,"alu u_res result", false,-1, 3,0);
        tracep->declBit(c+2,"alu u_res zero", false,-1);
        tracep->declBit(c+11,"alu u_res overflow", false,-1);
        tracep->declBit(c+12,"alu u_res carry", false,-1);
        tracep->declBus(c+13,"alu u_res t_add_op", false,-1, 3,0);
    }
}

void Valu___024root__traceFullTop0(void* voidSelf, VerilatedVcd* tracep) VL_ATTR_COLD;
void Valu___024root__traceChgTop0(void* voidSelf, VerilatedVcd* tracep);
void Valu___024root__traceCleanup(void* voidSelf, VerilatedVcd* /*unused*/);

void Valu___024root__traceRegister(Valu___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Valu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        tracep->addFullCb(&Valu___024root__traceFullTop0, vlSelf);
        tracep->addChgCb(&Valu___024root__traceChgTop0, vlSelf);
        tracep->addCleanupCb(&Valu___024root__traceCleanup, vlSelf);
    }
}

void Valu___024root__traceFullSub0(Valu___024root* vlSelf, VerilatedVcd* tracep) VL_ATTR_COLD;

void Valu___024root__traceFullTop0(void* voidSelf, VerilatedVcd* tracep) {
    Valu___024root* const __restrict vlSelf = static_cast<Valu___024root*>(voidSelf);
    Valu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        Valu___024root__traceFullSub0((&vlSymsp->TOP), tracep);
    }
}

void Valu___024root__traceFullSub0(Valu___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Valu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->fullBit(oldp+1,((1U & (~ (IData)((0U 
                                                  != (IData)(vlSelf->alu__DOT__add)))))));
        tracep->fullBit(oldp+2,((1U & (~ (IData)((0U 
                                                  != (IData)(vlSelf->alu__DOT__res)))))));
        tracep->fullCData(oldp+3,(vlSelf->alu__DOT__res),4);
        tracep->fullCData(oldp+4,(vlSelf->alu__DOT__add),4);
        tracep->fullCData(oldp+5,(vlSelf->A),4);
        tracep->fullCData(oldp+6,(vlSelf->B),4);
        tracep->fullCData(oldp+7,(vlSelf->op),3);
        tracep->fullCData(oldp+8,(vlSelf->out),4);
        tracep->fullBit(oldp+9,((((1U & ((IData)(vlSelf->A) 
                                         >> 3U)) == 
                                  (1U & ((IData)(vlSelf->B) 
                                         >> 3U))) & 
                                 ((1U & ((IData)(vlSelf->alu__DOT__add) 
                                         >> 3U)) != 
                                  (1U & ((IData)(vlSelf->A) 
                                         >> 3U))))));
        tracep->fullBit(oldp+10,((1U & (((IData)(vlSelf->A) 
                                         + (IData)(vlSelf->B)) 
                                        >> 4U))));
        tracep->fullBit(oldp+11,((((1U & ((IData)(vlSelf->A) 
                                          >> 3U)) == 
                                   (1U & (~ ((IData)(vlSelf->B) 
                                             >> 3U)))) 
                                  & ((1U & ((IData)(vlSelf->alu__DOT__res) 
                                            >> 3U)) 
                                     != (1U & ((IData)(vlSelf->A) 
                                               >> 3U))))));
        tracep->fullBit(oldp+12,((1U & (((IData)(1U) 
                                         + ((IData)(vlSelf->A) 
                                            + (0xfU 
                                               & (~ (IData)(vlSelf->B))))) 
                                        >> 4U))));
        tracep->fullCData(oldp+13,((0xfU & (~ (IData)(vlSelf->B)))),4);
        tracep->fullBit(oldp+14,(0U));
        tracep->fullBit(oldp+15,(1U));
    }
}
