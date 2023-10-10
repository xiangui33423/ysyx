// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vfsm__Syms.h"


void Vfsm___024root__traceInitSub0(Vfsm___024root* vlSelf, VerilatedVcd* tracep) VL_ATTR_COLD;

void Vfsm___024root__traceInitTop(Vfsm___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vfsm__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        Vfsm___024root__traceInitSub0(vlSelf, tracep);
    }
}

void Vfsm___024root__traceInitSub0(Vfsm___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vfsm__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    const int c = vlSymsp->__Vm_baseCode;
    if (false && tracep && c) {}  // Prevent unused
    // Body
    {
        tracep->declBit(c+1,"clk", false,-1);
        tracep->declBit(c+2,"rst_n", false,-1);
        tracep->declBus(c+3,"data", false,-1, 7,0);
        tracep->declBit(c+4,"en", false,-1);
        tracep->declBus(c+5,"state", false,-1, 2,0);
        tracep->declBit(c+1,"fsm clk", false,-1);
        tracep->declBit(c+2,"fsm rst_n", false,-1);
        tracep->declBus(c+3,"fsm data", false,-1, 7,0);
        tracep->declBit(c+4,"fsm en", false,-1);
        tracep->declBus(c+5,"fsm state", false,-1, 2,0);
        tracep->declBus(c+8,"fsm IDLE", false,-1, 2,0);
        tracep->declBus(c+9,"fsm ON", false,-1, 2,0);
        tracep->declBus(c+10,"fsm OFF", false,-1, 2,0);
        tracep->declBus(c+11,"fsm WAIT", false,-1, 2,0);
        tracep->declBus(c+6,"fsm next_state", false,-1, 2,0);
        tracep->declBus(c+7,"fsm current_state", false,-1, 2,0);
    }
}

void Vfsm___024root__traceFullTop0(void* voidSelf, VerilatedVcd* tracep) VL_ATTR_COLD;
void Vfsm___024root__traceChgTop0(void* voidSelf, VerilatedVcd* tracep);
void Vfsm___024root__traceCleanup(void* voidSelf, VerilatedVcd* /*unused*/);

void Vfsm___024root__traceRegister(Vfsm___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vfsm__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        tracep->addFullCb(&Vfsm___024root__traceFullTop0, vlSelf);
        tracep->addChgCb(&Vfsm___024root__traceChgTop0, vlSelf);
        tracep->addCleanupCb(&Vfsm___024root__traceCleanup, vlSelf);
    }
}

void Vfsm___024root__traceFullSub0(Vfsm___024root* vlSelf, VerilatedVcd* tracep) VL_ATTR_COLD;

void Vfsm___024root__traceFullTop0(void* voidSelf, VerilatedVcd* tracep) {
    Vfsm___024root* const __restrict vlSelf = static_cast<Vfsm___024root*>(voidSelf);
    Vfsm__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        Vfsm___024root__traceFullSub0((&vlSymsp->TOP), tracep);
    }
}

void Vfsm___024root__traceFullSub0(Vfsm___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vfsm__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->fullBit(oldp+1,(vlSelf->clk));
        tracep->fullBit(oldp+2,(vlSelf->rst_n));
        tracep->fullCData(oldp+3,(vlSelf->data),8);
        tracep->fullBit(oldp+4,(vlSelf->en));
        tracep->fullCData(oldp+5,(vlSelf->state),3);
        tracep->fullCData(oldp+6,(((4U & (IData)(vlSelf->fsm__DOT__current_state))
                                    ? 0U : ((2U & (IData)(vlSelf->fsm__DOT__current_state))
                                             ? ((1U 
                                                 & (IData)(vlSelf->fsm__DOT__current_state))
                                                 ? 0U
                                                 : 
                                                ((IData)(vlSelf->en)
                                                  ? 4U
                                                  : 2U))
                                             : ((1U 
                                                 & (IData)(vlSelf->fsm__DOT__current_state))
                                                 ? 
                                                ((0xf0U 
                                                  == (IData)(vlSelf->data))
                                                  ? 2U
                                                  : 1U)
                                                 : 
                                                (((0xfU 
                                                   != (IData)(vlSelf->data)) 
                                                  & (IData)(vlSelf->en))
                                                  ? 1U
                                                  : 0U))))),3);
        tracep->fullCData(oldp+7,(vlSelf->fsm__DOT__current_state),3);
        tracep->fullCData(oldp+8,(0U),3);
        tracep->fullCData(oldp+9,(1U),3);
        tracep->fullCData(oldp+10,(2U),3);
        tracep->fullCData(oldp+11,(4U),3);
    }
}
