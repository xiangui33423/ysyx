// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VLFSR__Syms.h"


void VLFSR___024root__traceInitSub0(VLFSR___024root* vlSelf, VerilatedVcd* tracep) VL_ATTR_COLD;

void VLFSR___024root__traceInitTop(VLFSR___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VLFSR__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        VLFSR___024root__traceInitSub0(vlSelf, tracep);
    }
}

void VLFSR___024root__traceInitSub0(VLFSR___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VLFSR__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    const int c = vlSymsp->__Vm_baseCode;
    if (false && tracep && c) {}  // Prevent unused
    // Body
    {
        tracep->declBit(c+4,"clk", false,-1);
        tracep->declBit(c+5,"rst_n", false,-1);
        tracep->declBus(c+6,"seed", false,-1, 7,0);
        tracep->declBit(c+7,"start", false,-1);
        tracep->declBus(c+8,"dout", false,-1, 7,0);
        tracep->declBit(c+9,"dout_vld", false,-1);
        tracep->declBit(c+4,"LFSR clk", false,-1);
        tracep->declBit(c+5,"LFSR rst_n", false,-1);
        tracep->declBus(c+6,"LFSR seed", false,-1, 7,0);
        tracep->declBit(c+7,"LFSR start", false,-1);
        tracep->declBus(c+8,"LFSR dout", false,-1, 7,0);
        tracep->declBit(c+9,"LFSR dout_vld", false,-1);
        tracep->declBus(c+1,"LFSR cnt", false,-1, 7,0);
        tracep->declBit(c+2,"LFSR start_r", false,-1);
        tracep->declBit(c+10,"LFSR start_pedge", false,-1);
        tracep->declBit(c+3,"LFSR xor_bit", false,-1);
    }
}

void VLFSR___024root__traceFullTop0(void* voidSelf, VerilatedVcd* tracep) VL_ATTR_COLD;
void VLFSR___024root__traceChgTop0(void* voidSelf, VerilatedVcd* tracep);
void VLFSR___024root__traceCleanup(void* voidSelf, VerilatedVcd* /*unused*/);

void VLFSR___024root__traceRegister(VLFSR___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VLFSR__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        tracep->addFullCb(&VLFSR___024root__traceFullTop0, vlSelf);
        tracep->addChgCb(&VLFSR___024root__traceChgTop0, vlSelf);
        tracep->addCleanupCb(&VLFSR___024root__traceCleanup, vlSelf);
    }
}

void VLFSR___024root__traceFullSub0(VLFSR___024root* vlSelf, VerilatedVcd* tracep) VL_ATTR_COLD;

void VLFSR___024root__traceFullTop0(void* voidSelf, VerilatedVcd* tracep) {
    VLFSR___024root* const __restrict vlSelf = static_cast<VLFSR___024root*>(voidSelf);
    VLFSR__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        VLFSR___024root__traceFullSub0((&vlSymsp->TOP), tracep);
    }
}

void VLFSR___024root__traceFullSub0(VLFSR___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VLFSR__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->fullCData(oldp+1,(vlSelf->LFSR__DOT__cnt),8);
        tracep->fullBit(oldp+2,(vlSelf->LFSR__DOT__start_r));
        tracep->fullBit(oldp+3,((1U & VL_REDXOR_32(
                                                   (0x1dU 
                                                    & (IData)(vlSelf->LFSR__DOT__cnt))))));
        tracep->fullBit(oldp+4,(vlSelf->clk));
        tracep->fullBit(oldp+5,(vlSelf->rst_n));
        tracep->fullCData(oldp+6,(vlSelf->seed),8);
        tracep->fullBit(oldp+7,(vlSelf->start));
        tracep->fullCData(oldp+8,(vlSelf->dout),8);
        tracep->fullBit(oldp+9,(vlSelf->dout_vld));
        tracep->fullBit(oldp+10,(((IData)(vlSelf->start) 
                                  & (~ (IData)(vlSelf->LFSR__DOT__start_r)))));
    }
}
