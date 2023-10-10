// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vrom_ascii__Syms.h"


void Vrom_ascii___024root__traceInitSub0(Vrom_ascii___024root* vlSelf, VerilatedVcd* tracep) VL_ATTR_COLD;

void Vrom_ascii___024root__traceInitTop(Vrom_ascii___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vrom_ascii__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        Vrom_ascii___024root__traceInitSub0(vlSelf, tracep);
    }
}

void Vrom_ascii___024root__traceInitSub0(Vrom_ascii___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vrom_ascii__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    const int c = vlSymsp->__Vm_baseCode;
    if (false && tracep && c) {}  // Prevent unused
    // Body
    {
        tracep->declBit(c+41,"clk", false,-1);
        tracep->declBit(c+42,"rst_n", false,-1);
        tracep->declBus(c+43,"data", false,-1, 7,0);
        tracep->declBus(c+44,"seg1", false,-1, 7,0);
        tracep->declBus(c+45,"seg2", false,-1, 7,0);
        tracep->declBit(c+41,"rom_ascii clk", false,-1);
        tracep->declBit(c+42,"rom_ascii rst_n", false,-1);
        tracep->declBus(c+43,"rom_ascii data", false,-1, 7,0);
        tracep->declBus(c+44,"rom_ascii seg1", false,-1, 7,0);
        tracep->declBus(c+45,"rom_ascii seg2", false,-1, 7,0);
        tracep->declBus(c+1,"rom_ascii i", false,-1, 31,0);
        tracep->declBus(c+38,"rom_ascii lut_out", false,-1, 7,0);
        tracep->declBus(c+48,"rom_ascii addr", false,-1, 7,0);
        tracep->declBus(c+46,"rom_ascii tmp", false,-1, 7,0);
        tracep->declBus(c+47,"rom_ascii buffer", false,-1, 7,0);
        tracep->declBus(c+39,"rom_ascii addr1", false,-1, 4,0);
        tracep->declBus(c+40,"rom_ascii addr2", false,-1, 4,0);
        tracep->declBit(c+41,"rom_ascii u_rom1 clk", false,-1);
        tracep->declBit(c+42,"rom_ascii u_rom1 rst_n", false,-1);
        tracep->declBus(c+39,"rom_ascii u_rom1 addr", false,-1, 4,0);
        tracep->declBus(c+44,"rom_ascii u_rom1 seg", false,-1, 7,0);
        {int i; for (i=0; i<17; i++) {
                tracep->declBus(c+2+i*1,"rom_ascii u_rom1 rom", true,(i+0), 7,0);}}
        tracep->declBus(c+19,"rom_ascii u_rom1 i", false,-1, 31,0);
        tracep->declBit(c+41,"rom_ascii u_rom2 clk", false,-1);
        tracep->declBit(c+42,"rom_ascii u_rom2 rst_n", false,-1);
        tracep->declBus(c+40,"rom_ascii u_rom2 addr", false,-1, 4,0);
        tracep->declBus(c+45,"rom_ascii u_rom2 seg", false,-1, 7,0);
        {int i; for (i=0; i<17; i++) {
                tracep->declBus(c+20+i*1,"rom_ascii u_rom2 rom", true,(i+0), 7,0);}}
        tracep->declBus(c+37,"rom_ascii u_rom2 i", false,-1, 31,0);
    }
}

void Vrom_ascii___024root__traceFullTop0(void* voidSelf, VerilatedVcd* tracep) VL_ATTR_COLD;
void Vrom_ascii___024root__traceChgTop0(void* voidSelf, VerilatedVcd* tracep);
void Vrom_ascii___024root__traceCleanup(void* voidSelf, VerilatedVcd* /*unused*/);

void Vrom_ascii___024root__traceRegister(Vrom_ascii___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vrom_ascii__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        tracep->addFullCb(&Vrom_ascii___024root__traceFullTop0, vlSelf);
        tracep->addChgCb(&Vrom_ascii___024root__traceChgTop0, vlSelf);
        tracep->addCleanupCb(&Vrom_ascii___024root__traceCleanup, vlSelf);
    }
}

void Vrom_ascii___024root__traceFullSub0(Vrom_ascii___024root* vlSelf, VerilatedVcd* tracep) VL_ATTR_COLD;

void Vrom_ascii___024root__traceFullTop0(void* voidSelf, VerilatedVcd* tracep) {
    Vrom_ascii___024root* const __restrict vlSelf = static_cast<Vrom_ascii___024root*>(voidSelf);
    Vrom_ascii__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        Vrom_ascii___024root__traceFullSub0((&vlSymsp->TOP), tracep);
    }
}

void Vrom_ascii___024root__traceFullSub0(Vrom_ascii___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vrom_ascii__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->fullIData(oldp+1,(vlSelf->rom_ascii__DOT__i),32);
        tracep->fullCData(oldp+2,(vlSelf->rom_ascii__DOT__u_rom1__DOT__rom[0]),8);
        tracep->fullCData(oldp+3,(vlSelf->rom_ascii__DOT__u_rom1__DOT__rom[1]),8);
        tracep->fullCData(oldp+4,(vlSelf->rom_ascii__DOT__u_rom1__DOT__rom[2]),8);
        tracep->fullCData(oldp+5,(vlSelf->rom_ascii__DOT__u_rom1__DOT__rom[3]),8);
        tracep->fullCData(oldp+6,(vlSelf->rom_ascii__DOT__u_rom1__DOT__rom[4]),8);
        tracep->fullCData(oldp+7,(vlSelf->rom_ascii__DOT__u_rom1__DOT__rom[5]),8);
        tracep->fullCData(oldp+8,(vlSelf->rom_ascii__DOT__u_rom1__DOT__rom[6]),8);
        tracep->fullCData(oldp+9,(vlSelf->rom_ascii__DOT__u_rom1__DOT__rom[7]),8);
        tracep->fullCData(oldp+10,(vlSelf->rom_ascii__DOT__u_rom1__DOT__rom[8]),8);
        tracep->fullCData(oldp+11,(vlSelf->rom_ascii__DOT__u_rom1__DOT__rom[9]),8);
        tracep->fullCData(oldp+12,(vlSelf->rom_ascii__DOT__u_rom1__DOT__rom[10]),8);
        tracep->fullCData(oldp+13,(vlSelf->rom_ascii__DOT__u_rom1__DOT__rom[11]),8);
        tracep->fullCData(oldp+14,(vlSelf->rom_ascii__DOT__u_rom1__DOT__rom[12]),8);
        tracep->fullCData(oldp+15,(vlSelf->rom_ascii__DOT__u_rom1__DOT__rom[13]),8);
        tracep->fullCData(oldp+16,(vlSelf->rom_ascii__DOT__u_rom1__DOT__rom[14]),8);
        tracep->fullCData(oldp+17,(vlSelf->rom_ascii__DOT__u_rom1__DOT__rom[15]),8);
        tracep->fullCData(oldp+18,(vlSelf->rom_ascii__DOT__u_rom1__DOT__rom[16]),8);
        tracep->fullIData(oldp+19,(vlSelf->rom_ascii__DOT__u_rom1__DOT__i),32);
        tracep->fullCData(oldp+20,(vlSelf->rom_ascii__DOT__u_rom2__DOT__rom[0]),8);
        tracep->fullCData(oldp+21,(vlSelf->rom_ascii__DOT__u_rom2__DOT__rom[1]),8);
        tracep->fullCData(oldp+22,(vlSelf->rom_ascii__DOT__u_rom2__DOT__rom[2]),8);
        tracep->fullCData(oldp+23,(vlSelf->rom_ascii__DOT__u_rom2__DOT__rom[3]),8);
        tracep->fullCData(oldp+24,(vlSelf->rom_ascii__DOT__u_rom2__DOT__rom[4]),8);
        tracep->fullCData(oldp+25,(vlSelf->rom_ascii__DOT__u_rom2__DOT__rom[5]),8);
        tracep->fullCData(oldp+26,(vlSelf->rom_ascii__DOT__u_rom2__DOT__rom[6]),8);
        tracep->fullCData(oldp+27,(vlSelf->rom_ascii__DOT__u_rom2__DOT__rom[7]),8);
        tracep->fullCData(oldp+28,(vlSelf->rom_ascii__DOT__u_rom2__DOT__rom[8]),8);
        tracep->fullCData(oldp+29,(vlSelf->rom_ascii__DOT__u_rom2__DOT__rom[9]),8);
        tracep->fullCData(oldp+30,(vlSelf->rom_ascii__DOT__u_rom2__DOT__rom[10]),8);
        tracep->fullCData(oldp+31,(vlSelf->rom_ascii__DOT__u_rom2__DOT__rom[11]),8);
        tracep->fullCData(oldp+32,(vlSelf->rom_ascii__DOT__u_rom2__DOT__rom[12]),8);
        tracep->fullCData(oldp+33,(vlSelf->rom_ascii__DOT__u_rom2__DOT__rom[13]),8);
        tracep->fullCData(oldp+34,(vlSelf->rom_ascii__DOT__u_rom2__DOT__rom[14]),8);
        tracep->fullCData(oldp+35,(vlSelf->rom_ascii__DOT__u_rom2__DOT__rom[15]),8);
        tracep->fullCData(oldp+36,(vlSelf->rom_ascii__DOT__u_rom2__DOT__rom[16]),8);
        tracep->fullIData(oldp+37,(vlSelf->rom_ascii__DOT__u_rom2__DOT__i),32);
        tracep->fullCData(oldp+38,(vlSelf->rom_ascii__DOT__lut_out),8);
        tracep->fullCData(oldp+39,(vlSelf->rom_ascii__DOT__addr1),5);
        tracep->fullCData(oldp+40,(vlSelf->rom_ascii__DOT__addr2),5);
        tracep->fullBit(oldp+41,(vlSelf->clk));
        tracep->fullBit(oldp+42,(vlSelf->rst_n));
        tracep->fullCData(oldp+43,(vlSelf->data),8);
        tracep->fullCData(oldp+44,(vlSelf->seg1),8);
        tracep->fullCData(oldp+45,(vlSelf->seg2),8);
        tracep->fullCData(oldp+46,(vlSelf->rom_ascii__DOT__tmp),8);
        tracep->fullCData(oldp+47,(vlSelf->rom_ascii__DOT__buffer),8);
        tracep->fullCData(oldp+48,(vlSelf->rom_ascii__DOT__addr),8);
    }
}
