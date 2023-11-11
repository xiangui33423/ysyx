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
            tracep->chgCData(oldp+0,(vlSelf->ysyx_23060096_RegisterFile__DOT__rf[0]),5);
            tracep->chgCData(oldp+1,(vlSelf->ysyx_23060096_RegisterFile__DOT__rf[1]),5);
            tracep->chgCData(oldp+2,(vlSelf->ysyx_23060096_RegisterFile__DOT__rf[2]),5);
            tracep->chgCData(oldp+3,(vlSelf->ysyx_23060096_RegisterFile__DOT__rf[3]),5);
            tracep->chgCData(oldp+4,(vlSelf->ysyx_23060096_RegisterFile__DOT__rf[4]),5);
            tracep->chgCData(oldp+5,(vlSelf->ysyx_23060096_RegisterFile__DOT__rf[5]),5);
            tracep->chgCData(oldp+6,(vlSelf->ysyx_23060096_RegisterFile__DOT__rf[6]),5);
            tracep->chgCData(oldp+7,(vlSelf->ysyx_23060096_RegisterFile__DOT__rf[7]),5);
            tracep->chgCData(oldp+8,(vlSelf->ysyx_23060096_RegisterFile__DOT__rf[8]),5);
            tracep->chgCData(oldp+9,(vlSelf->ysyx_23060096_RegisterFile__DOT__rf[9]),5);
            tracep->chgCData(oldp+10,(vlSelf->ysyx_23060096_RegisterFile__DOT__rf[10]),5);
            tracep->chgCData(oldp+11,(vlSelf->ysyx_23060096_RegisterFile__DOT__rf[11]),5);
            tracep->chgCData(oldp+12,(vlSelf->ysyx_23060096_RegisterFile__DOT__rf[12]),5);
            tracep->chgCData(oldp+13,(vlSelf->ysyx_23060096_RegisterFile__DOT__rf[13]),5);
            tracep->chgCData(oldp+14,(vlSelf->ysyx_23060096_RegisterFile__DOT__rf[14]),5);
            tracep->chgCData(oldp+15,(vlSelf->ysyx_23060096_RegisterFile__DOT__rf[15]),5);
            tracep->chgCData(oldp+16,(vlSelf->ysyx_23060096_RegisterFile__DOT__rf[16]),5);
            tracep->chgCData(oldp+17,(vlSelf->ysyx_23060096_RegisterFile__DOT__rf[17]),5);
            tracep->chgCData(oldp+18,(vlSelf->ysyx_23060096_RegisterFile__DOT__rf[18]),5);
            tracep->chgCData(oldp+19,(vlSelf->ysyx_23060096_RegisterFile__DOT__rf[19]),5);
            tracep->chgCData(oldp+20,(vlSelf->ysyx_23060096_RegisterFile__DOT__rf[20]),5);
            tracep->chgCData(oldp+21,(vlSelf->ysyx_23060096_RegisterFile__DOT__rf[21]),5);
            tracep->chgCData(oldp+22,(vlSelf->ysyx_23060096_RegisterFile__DOT__rf[22]),5);
            tracep->chgCData(oldp+23,(vlSelf->ysyx_23060096_RegisterFile__DOT__rf[23]),5);
            tracep->chgCData(oldp+24,(vlSelf->ysyx_23060096_RegisterFile__DOT__rf[24]),5);
            tracep->chgCData(oldp+25,(vlSelf->ysyx_23060096_RegisterFile__DOT__rf[25]),5);
            tracep->chgCData(oldp+26,(vlSelf->ysyx_23060096_RegisterFile__DOT__rf[26]),5);
            tracep->chgCData(oldp+27,(vlSelf->ysyx_23060096_RegisterFile__DOT__rf[27]),5);
            tracep->chgCData(oldp+28,(vlSelf->ysyx_23060096_RegisterFile__DOT__rf[28]),5);
            tracep->chgCData(oldp+29,(vlSelf->ysyx_23060096_RegisterFile__DOT__rf[29]),5);
            tracep->chgCData(oldp+30,(vlSelf->ysyx_23060096_RegisterFile__DOT__rf[30]),5);
            tracep->chgCData(oldp+31,(vlSelf->ysyx_23060096_RegisterFile__DOT__rf[31]),5);
            tracep->chgIData(oldp+32,(vlSelf->ysyx_23060096_RegisterFile__DOT__i),32);
        }
        tracep->chgBit(oldp+33,(vlSelf->clk));
        tracep->chgBit(oldp+34,(vlSelf->rstn));
        tracep->chgCData(oldp+35,(vlSelf->wdata),5);
        tracep->chgIData(oldp+36,(vlSelf->Ra),32);
        tracep->chgIData(oldp+37,(vlSelf->Rb),32);
        tracep->chgIData(oldp+38,(vlSelf->waddr),32);
        tracep->chgBit(oldp+39,(vlSelf->w_en));
        tracep->chgCData(oldp+40,(vlSelf->busA),5);
        tracep->chgCData(oldp+41,(vlSelf->busB),5);
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
