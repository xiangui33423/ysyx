// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vysyx_23060096_RegisterFile__Syms.h"


void Vysyx_23060096_RegisterFile___024root__traceInitSub0(Vysyx_23060096_RegisterFile___024root* vlSelf, VerilatedVcd* tracep) VL_ATTR_COLD;

void Vysyx_23060096_RegisterFile___024root__traceInitTop(Vysyx_23060096_RegisterFile___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_23060096_RegisterFile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        Vysyx_23060096_RegisterFile___024root__traceInitSub0(vlSelf, tracep);
    }
}

void Vysyx_23060096_RegisterFile___024root__traceInitSub0(Vysyx_23060096_RegisterFile___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_23060096_RegisterFile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    const int c = vlSymsp->__Vm_baseCode;
    if (false && tracep && c) {}  // Prevent unused
    // Body
    {
        tracep->declBit(c+19,"clk", false,-1);
        tracep->declBit(c+20,"rstn", false,-1);
        tracep->declBus(c+21,"wdata", false,-1, 31,0);
        tracep->declBus(c+22,"Ra", false,-1, 4,0);
        tracep->declBus(c+23,"Rb", false,-1, 4,0);
        tracep->declBus(c+24,"waddr", false,-1, 4,0);
        tracep->declBit(c+25,"w_en", false,-1);
        tracep->declBus(c+26,"busA", false,-1, 31,0);
        tracep->declBus(c+27,"busB", false,-1, 31,0);
        tracep->declBus(c+28,"ysyx_23060096_RegisterFile ADDR_WIDTH", false,-1, 31,0);
        tracep->declBus(c+29,"ysyx_23060096_RegisterFile DATA_WIDTH", false,-1, 31,0);
        tracep->declBit(c+19,"ysyx_23060096_RegisterFile clk", false,-1);
        tracep->declBit(c+20,"ysyx_23060096_RegisterFile rstn", false,-1);
        tracep->declBus(c+21,"ysyx_23060096_RegisterFile wdata", false,-1, 31,0);
        tracep->declBus(c+22,"ysyx_23060096_RegisterFile Ra", false,-1, 4,0);
        tracep->declBus(c+23,"ysyx_23060096_RegisterFile Rb", false,-1, 4,0);
        tracep->declBus(c+24,"ysyx_23060096_RegisterFile waddr", false,-1, 4,0);
        tracep->declBit(c+25,"ysyx_23060096_RegisterFile w_en", false,-1);
        tracep->declBus(c+26,"ysyx_23060096_RegisterFile busA", false,-1, 31,0);
        tracep->declBus(c+27,"ysyx_23060096_RegisterFile busB", false,-1, 31,0);
        {int i; for (i=0; i<17; i++) {
                tracep->declBus(c+1+i*1,"ysyx_23060096_RegisterFile rf", true,(i+0), 31,0);}}
        tracep->declBus(c+18,"ysyx_23060096_RegisterFile i", false,-1, 31,0);
    }
}

void Vysyx_23060096_RegisterFile___024root__traceFullTop0(void* voidSelf, VerilatedVcd* tracep) VL_ATTR_COLD;
void Vysyx_23060096_RegisterFile___024root__traceChgTop0(void* voidSelf, VerilatedVcd* tracep);
void Vysyx_23060096_RegisterFile___024root__traceCleanup(void* voidSelf, VerilatedVcd* /*unused*/);

void Vysyx_23060096_RegisterFile___024root__traceRegister(Vysyx_23060096_RegisterFile___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_23060096_RegisterFile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        tracep->addFullCb(&Vysyx_23060096_RegisterFile___024root__traceFullTop0, vlSelf);
        tracep->addChgCb(&Vysyx_23060096_RegisterFile___024root__traceChgTop0, vlSelf);
        tracep->addCleanupCb(&Vysyx_23060096_RegisterFile___024root__traceCleanup, vlSelf);
    }
}

void Vysyx_23060096_RegisterFile___024root__traceFullSub0(Vysyx_23060096_RegisterFile___024root* vlSelf, VerilatedVcd* tracep) VL_ATTR_COLD;

void Vysyx_23060096_RegisterFile___024root__traceFullTop0(void* voidSelf, VerilatedVcd* tracep) {
    Vysyx_23060096_RegisterFile___024root* const __restrict vlSelf = static_cast<Vysyx_23060096_RegisterFile___024root*>(voidSelf);
    Vysyx_23060096_RegisterFile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        Vysyx_23060096_RegisterFile___024root__traceFullSub0((&vlSymsp->TOP), tracep);
    }
}

void Vysyx_23060096_RegisterFile___024root__traceFullSub0(Vysyx_23060096_RegisterFile___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_23060096_RegisterFile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->fullIData(oldp+1,(vlSelf->ysyx_23060096_RegisterFile__DOT__rf[0]),32);
        tracep->fullIData(oldp+2,(vlSelf->ysyx_23060096_RegisterFile__DOT__rf[1]),32);
        tracep->fullIData(oldp+3,(vlSelf->ysyx_23060096_RegisterFile__DOT__rf[2]),32);
        tracep->fullIData(oldp+4,(vlSelf->ysyx_23060096_RegisterFile__DOT__rf[3]),32);
        tracep->fullIData(oldp+5,(vlSelf->ysyx_23060096_RegisterFile__DOT__rf[4]),32);
        tracep->fullIData(oldp+6,(vlSelf->ysyx_23060096_RegisterFile__DOT__rf[5]),32);
        tracep->fullIData(oldp+7,(vlSelf->ysyx_23060096_RegisterFile__DOT__rf[6]),32);
        tracep->fullIData(oldp+8,(vlSelf->ysyx_23060096_RegisterFile__DOT__rf[7]),32);
        tracep->fullIData(oldp+9,(vlSelf->ysyx_23060096_RegisterFile__DOT__rf[8]),32);
        tracep->fullIData(oldp+10,(vlSelf->ysyx_23060096_RegisterFile__DOT__rf[9]),32);
        tracep->fullIData(oldp+11,(vlSelf->ysyx_23060096_RegisterFile__DOT__rf[10]),32);
        tracep->fullIData(oldp+12,(vlSelf->ysyx_23060096_RegisterFile__DOT__rf[11]),32);
        tracep->fullIData(oldp+13,(vlSelf->ysyx_23060096_RegisterFile__DOT__rf[12]),32);
        tracep->fullIData(oldp+14,(vlSelf->ysyx_23060096_RegisterFile__DOT__rf[13]),32);
        tracep->fullIData(oldp+15,(vlSelf->ysyx_23060096_RegisterFile__DOT__rf[14]),32);
        tracep->fullIData(oldp+16,(vlSelf->ysyx_23060096_RegisterFile__DOT__rf[15]),32);
        tracep->fullIData(oldp+17,(vlSelf->ysyx_23060096_RegisterFile__DOT__rf[16]),32);
        tracep->fullIData(oldp+18,(vlSelf->ysyx_23060096_RegisterFile__DOT__i),32);
        tracep->fullBit(oldp+19,(vlSelf->clk));
        tracep->fullBit(oldp+20,(vlSelf->rstn));
        tracep->fullIData(oldp+21,(vlSelf->wdata),32);
        tracep->fullCData(oldp+22,(vlSelf->Ra),5);
        tracep->fullCData(oldp+23,(vlSelf->Rb),5);
        tracep->fullCData(oldp+24,(vlSelf->waddr),5);
        tracep->fullBit(oldp+25,(vlSelf->w_en));
        tracep->fullIData(oldp+26,(vlSelf->busA),32);
        tracep->fullIData(oldp+27,(vlSelf->busB),32);
        tracep->fullIData(oldp+28,(5U),32);
        tracep->fullIData(oldp+29,(0x20U),32);
    }
}
