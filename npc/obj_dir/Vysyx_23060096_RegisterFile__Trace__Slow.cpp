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
        tracep->declBit(c+34,"clk", false,-1);
        tracep->declBit(c+35,"rstn", false,-1);
        tracep->declBus(c+36,"wdata", false,-1, 4,0);
        tracep->declBus(c+37,"Ra", false,-1, 31,0);
        tracep->declBus(c+38,"Rb", false,-1, 31,0);
        tracep->declBus(c+39,"waddr", false,-1, 31,0);
        tracep->declBit(c+40,"w_en", false,-1);
        tracep->declBus(c+41,"busA", false,-1, 4,0);
        tracep->declBus(c+42,"busB", false,-1, 4,0);
        tracep->declBus(c+43,"ysyx_23060096_RegisterFile ADDR_WIDTH", false,-1, 31,0);
        tracep->declBus(c+44,"ysyx_23060096_RegisterFile DATA_WIDTH", false,-1, 31,0);
        tracep->declBit(c+34,"ysyx_23060096_RegisterFile clk", false,-1);
        tracep->declBit(c+35,"ysyx_23060096_RegisterFile rstn", false,-1);
        tracep->declBus(c+36,"ysyx_23060096_RegisterFile wdata", false,-1, 4,0);
        tracep->declBus(c+37,"ysyx_23060096_RegisterFile Ra", false,-1, 31,0);
        tracep->declBus(c+38,"ysyx_23060096_RegisterFile Rb", false,-1, 31,0);
        tracep->declBus(c+39,"ysyx_23060096_RegisterFile waddr", false,-1, 31,0);
        tracep->declBit(c+40,"ysyx_23060096_RegisterFile w_en", false,-1);
        tracep->declBus(c+41,"ysyx_23060096_RegisterFile busA", false,-1, 4,0);
        tracep->declBus(c+42,"ysyx_23060096_RegisterFile busB", false,-1, 4,0);
        {int i; for (i=0; i<32; i++) {
                tracep->declBus(c+1+i*1,"ysyx_23060096_RegisterFile rf", true,(i+0), 4,0);}}
        tracep->declBus(c+33,"ysyx_23060096_RegisterFile i", false,-1, 31,0);
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
        tracep->fullCData(oldp+1,(vlSelf->ysyx_23060096_RegisterFile__DOT__rf[0]),5);
        tracep->fullCData(oldp+2,(vlSelf->ysyx_23060096_RegisterFile__DOT__rf[1]),5);
        tracep->fullCData(oldp+3,(vlSelf->ysyx_23060096_RegisterFile__DOT__rf[2]),5);
        tracep->fullCData(oldp+4,(vlSelf->ysyx_23060096_RegisterFile__DOT__rf[3]),5);
        tracep->fullCData(oldp+5,(vlSelf->ysyx_23060096_RegisterFile__DOT__rf[4]),5);
        tracep->fullCData(oldp+6,(vlSelf->ysyx_23060096_RegisterFile__DOT__rf[5]),5);
        tracep->fullCData(oldp+7,(vlSelf->ysyx_23060096_RegisterFile__DOT__rf[6]),5);
        tracep->fullCData(oldp+8,(vlSelf->ysyx_23060096_RegisterFile__DOT__rf[7]),5);
        tracep->fullCData(oldp+9,(vlSelf->ysyx_23060096_RegisterFile__DOT__rf[8]),5);
        tracep->fullCData(oldp+10,(vlSelf->ysyx_23060096_RegisterFile__DOT__rf[9]),5);
        tracep->fullCData(oldp+11,(vlSelf->ysyx_23060096_RegisterFile__DOT__rf[10]),5);
        tracep->fullCData(oldp+12,(vlSelf->ysyx_23060096_RegisterFile__DOT__rf[11]),5);
        tracep->fullCData(oldp+13,(vlSelf->ysyx_23060096_RegisterFile__DOT__rf[12]),5);
        tracep->fullCData(oldp+14,(vlSelf->ysyx_23060096_RegisterFile__DOT__rf[13]),5);
        tracep->fullCData(oldp+15,(vlSelf->ysyx_23060096_RegisterFile__DOT__rf[14]),5);
        tracep->fullCData(oldp+16,(vlSelf->ysyx_23060096_RegisterFile__DOT__rf[15]),5);
        tracep->fullCData(oldp+17,(vlSelf->ysyx_23060096_RegisterFile__DOT__rf[16]),5);
        tracep->fullCData(oldp+18,(vlSelf->ysyx_23060096_RegisterFile__DOT__rf[17]),5);
        tracep->fullCData(oldp+19,(vlSelf->ysyx_23060096_RegisterFile__DOT__rf[18]),5);
        tracep->fullCData(oldp+20,(vlSelf->ysyx_23060096_RegisterFile__DOT__rf[19]),5);
        tracep->fullCData(oldp+21,(vlSelf->ysyx_23060096_RegisterFile__DOT__rf[20]),5);
        tracep->fullCData(oldp+22,(vlSelf->ysyx_23060096_RegisterFile__DOT__rf[21]),5);
        tracep->fullCData(oldp+23,(vlSelf->ysyx_23060096_RegisterFile__DOT__rf[22]),5);
        tracep->fullCData(oldp+24,(vlSelf->ysyx_23060096_RegisterFile__DOT__rf[23]),5);
        tracep->fullCData(oldp+25,(vlSelf->ysyx_23060096_RegisterFile__DOT__rf[24]),5);
        tracep->fullCData(oldp+26,(vlSelf->ysyx_23060096_RegisterFile__DOT__rf[25]),5);
        tracep->fullCData(oldp+27,(vlSelf->ysyx_23060096_RegisterFile__DOT__rf[26]),5);
        tracep->fullCData(oldp+28,(vlSelf->ysyx_23060096_RegisterFile__DOT__rf[27]),5);
        tracep->fullCData(oldp+29,(vlSelf->ysyx_23060096_RegisterFile__DOT__rf[28]),5);
        tracep->fullCData(oldp+30,(vlSelf->ysyx_23060096_RegisterFile__DOT__rf[29]),5);
        tracep->fullCData(oldp+31,(vlSelf->ysyx_23060096_RegisterFile__DOT__rf[30]),5);
        tracep->fullCData(oldp+32,(vlSelf->ysyx_23060096_RegisterFile__DOT__rf[31]),5);
        tracep->fullIData(oldp+33,(vlSelf->ysyx_23060096_RegisterFile__DOT__i),32);
        tracep->fullBit(oldp+34,(vlSelf->clk));
        tracep->fullBit(oldp+35,(vlSelf->rstn));
        tracep->fullCData(oldp+36,(vlSelf->wdata),5);
        tracep->fullIData(oldp+37,(vlSelf->Ra),32);
        tracep->fullIData(oldp+38,(vlSelf->Rb),32);
        tracep->fullIData(oldp+39,(vlSelf->waddr),32);
        tracep->fullBit(oldp+40,(vlSelf->w_en));
        tracep->fullCData(oldp+41,(vlSelf->busA),5);
        tracep->fullCData(oldp+42,(vlSelf->busB),5);
        tracep->fullIData(oldp+43,(0x20U),32);
        tracep->fullIData(oldp+44,(5U),32);
    }
}
