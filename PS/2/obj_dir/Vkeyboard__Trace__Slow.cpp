// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vkeyboard__Syms.h"


void Vkeyboard___024root__traceInitSub0(Vkeyboard___024root* vlSelf, VerilatedVcd* tracep) VL_ATTR_COLD;

void Vkeyboard___024root__traceInitTop(Vkeyboard___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vkeyboard__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        Vkeyboard___024root__traceInitSub0(vlSelf, tracep);
    }
}

void Vkeyboard___024root__traceInitSub0(Vkeyboard___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vkeyboard__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    const int c = vlSymsp->__Vm_baseCode;
    if (false && tracep && c) {}  // Prevent unused
    // Body
    {
        tracep->declBit(c+4,"clk", false,-1);
        tracep->declBit(c+5,"rst_n", false,-1);
        tracep->declBit(c+6,"ps2_data", false,-1);
        tracep->declBit(c+7,"ps2_clk", false,-1);
        tracep->declBus(c+8,"out", false,-1, 7,0);
        tracep->declBit(c+9,"en", false,-1);
        tracep->declBit(c+4,"keyboard clk", false,-1);
        tracep->declBit(c+5,"keyboard rst_n", false,-1);
        tracep->declBit(c+6,"keyboard ps2_data", false,-1);
        tracep->declBit(c+7,"keyboard ps2_clk", false,-1);
        tracep->declBus(c+8,"keyboard out", false,-1, 7,0);
        tracep->declBit(c+9,"keyboard en", false,-1);
        tracep->declBit(c+12,"keyboard ready", false,-1);
        tracep->declBus(c+1,"keyboard data", false,-1, 7,0);
        tracep->declBus(c+2,"keyboard buffer", false,-1, 9,0);
        tracep->declBus(c+3,"keyboard count", false,-1, 3,0);
        tracep->declBus(c+10,"keyboard ps2_clk_sync", false,-1, 2,0);
        tracep->declBit(c+11,"keyboard sampling", false,-1);
    }
}

void Vkeyboard___024root__traceFullTop0(void* voidSelf, VerilatedVcd* tracep) VL_ATTR_COLD;
void Vkeyboard___024root__traceChgTop0(void* voidSelf, VerilatedVcd* tracep);
void Vkeyboard___024root__traceCleanup(void* voidSelf, VerilatedVcd* /*unused*/);

void Vkeyboard___024root__traceRegister(Vkeyboard___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vkeyboard__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        tracep->addFullCb(&Vkeyboard___024root__traceFullTop0, vlSelf);
        tracep->addChgCb(&Vkeyboard___024root__traceChgTop0, vlSelf);
        tracep->addCleanupCb(&Vkeyboard___024root__traceCleanup, vlSelf);
    }
}

void Vkeyboard___024root__traceFullSub0(Vkeyboard___024root* vlSelf, VerilatedVcd* tracep) VL_ATTR_COLD;

void Vkeyboard___024root__traceFullTop0(void* voidSelf, VerilatedVcd* tracep) {
    Vkeyboard___024root* const __restrict vlSelf = static_cast<Vkeyboard___024root*>(voidSelf);
    Vkeyboard__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        Vkeyboard___024root__traceFullSub0((&vlSymsp->TOP), tracep);
    }
}

void Vkeyboard___024root__traceFullSub0(Vkeyboard___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vkeyboard__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->fullCData(oldp+1,(vlSelf->keyboard__DOT__data),8);
        tracep->fullSData(oldp+2,(vlSelf->keyboard__DOT__buffer),10);
        tracep->fullCData(oldp+3,(vlSelf->keyboard__DOT__count),4);
        tracep->fullBit(oldp+4,(vlSelf->clk));
        tracep->fullBit(oldp+5,(vlSelf->rst_n));
        tracep->fullBit(oldp+6,(vlSelf->ps2_data));
        tracep->fullBit(oldp+7,(vlSelf->ps2_clk));
        tracep->fullCData(oldp+8,(vlSelf->out),8);
        tracep->fullBit(oldp+9,(vlSelf->en));
        tracep->fullCData(oldp+10,(vlSelf->keyboard__DOT__ps2_clk_sync),3);
        tracep->fullBit(oldp+11,((IData)((4U == (6U 
                                                 & (IData)(vlSelf->keyboard__DOT__ps2_clk_sync))))));
        tracep->fullBit(oldp+12,(vlSelf->keyboard__DOT__ready));
    }
}
