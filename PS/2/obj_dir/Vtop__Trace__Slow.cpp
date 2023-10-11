// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtop__Syms.h"


void Vtop___024root__traceInitSub0(Vtop___024root* vlSelf, VerilatedVcd* tracep) VL_ATTR_COLD;

void Vtop___024root__traceInitTop(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        Vtop___024root__traceInitSub0(vlSelf, tracep);
    }
}

void Vtop___024root__traceInitSub0(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    const int c = vlSymsp->__Vm_baseCode;
    if (false && tracep && c) {}  // Prevent unused
    // Body
    {
        tracep->declBit(c+129,"clk", false,-1);
        tracep->declBit(c+130,"rst_n", false,-1);
        tracep->declBit(c+131,"ps2_clk", false,-1);
        tracep->declBit(c+132,"ps2_data", false,-1);
        tracep->declBus(c+133,"counter1", false,-1, 7,0);
        tracep->declBus(c+134,"counter2", false,-1, 7,0);
        tracep->declBus(c+135,"ascii1", false,-1, 7,0);
        tracep->declBus(c+136,"ascii2", false,-1, 7,0);
        tracep->declBus(c+137,"key1", false,-1, 7,0);
        tracep->declBus(c+138,"key2", false,-1, 7,0);
        tracep->declBit(c+129,"top clk", false,-1);
        tracep->declBit(c+130,"top rst_n", false,-1);
        tracep->declBit(c+131,"top ps2_clk", false,-1);
        tracep->declBit(c+132,"top ps2_data", false,-1);
        tracep->declBus(c+133,"top counter1", false,-1, 7,0);
        tracep->declBus(c+134,"top counter2", false,-1, 7,0);
        tracep->declBus(c+135,"top ascii1", false,-1, 7,0);
        tracep->declBus(c+136,"top ascii2", false,-1, 7,0);
        tracep->declBus(c+137,"top key1", false,-1, 7,0);
        tracep->declBus(c+138,"top key2", false,-1, 7,0);
        tracep->declBus(c+118,"top data", false,-1, 7,0);
        tracep->declBit(c+119,"top en", false,-1);
        tracep->declBit(c+129,"top u_keyboard clk", false,-1);
        tracep->declBit(c+130,"top u_keyboard rst_n", false,-1);
        tracep->declBit(c+132,"top u_keyboard ps2_data", false,-1);
        tracep->declBit(c+131,"top u_keyboard ps2_clk", false,-1);
        tracep->declBus(c+118,"top u_keyboard out", false,-1, 7,0);
        tracep->declBit(c+119,"top u_keyboard en", false,-1);
        tracep->declBit(c+140,"top u_keyboard ready", false,-1);
        tracep->declBus(c+118,"top u_keyboard data", false,-1, 7,0);
        tracep->declBus(c+120,"top u_keyboard buffer", false,-1, 9,0);
        tracep->declBus(c+121,"top u_keyboard count", false,-1, 3,0);
        tracep->declBus(c+122,"top u_keyboard ps2_clk_sync", false,-1, 2,0);
        tracep->declBit(c+123,"top u_keyboard sampling", false,-1);
        tracep->declBus(c+118,"top u_produce data", false,-1, 7,0);
        tracep->declBit(c+129,"top u_produce clk", false,-1);
        tracep->declBit(c+130,"top u_produce rst_n", false,-1);
        tracep->declBit(c+119,"top u_produce en", false,-1);
        tracep->declBus(c+133,"top u_produce counter1", false,-1, 7,0);
        tracep->declBus(c+134,"top u_produce counter2", false,-1, 7,0);
        tracep->declBus(c+135,"top u_produce ascii1", false,-1, 7,0);
        tracep->declBus(c+136,"top u_produce ascii2", false,-1, 7,0);
        tracep->declBus(c+137,"top u_produce key1", false,-1, 7,0);
        tracep->declBus(c+138,"top u_produce key2", false,-1, 7,0);
        tracep->declBus(c+110,"top u_produce state", false,-1, 2,0);
        tracep->declBus(c+111,"top u_produce counter", false,-1, 7,0);
        tracep->declBus(c+112,"top u_produce tmp", false,-1, 7,0);
        tracep->declBus(c+113,"top u_produce buffer", false,-1, 7,0);
        tracep->declBus(c+114,"top u_produce last_state", false,-1, 2,0);
        tracep->declBus(c+125,"top u_produce addr1", false,-1, 4,0);
        tracep->declBus(c+126,"top u_produce addr2", false,-1, 4,0);
        tracep->declBit(c+129,"top u_produce u_rom_counter1 clk", false,-1);
        tracep->declBit(c+130,"top u_produce u_rom_counter1 rst_n", false,-1);
        tracep->declBus(c+115,"top u_produce u_rom_counter1 addr", false,-1, 4,0);
        tracep->declBus(c+133,"top u_produce u_rom_counter1 seg", false,-1, 7,0);
        {int i; for (i=0; i<17; i++) {
                tracep->declBus(c+1+i*1,"top u_produce u_rom_counter1 rom", true,(i+0), 7,0);}}
        tracep->declBus(c+18,"top u_produce u_rom_counter1 i", false,-1, 31,0);
        tracep->declBit(c+129,"top u_produce u_rom_counter2 clk", false,-1);
        tracep->declBit(c+130,"top u_produce u_rom_counter2 rst_n", false,-1);
        tracep->declBus(c+116,"top u_produce u_rom_counter2 addr", false,-1, 4,0);
        tracep->declBus(c+134,"top u_produce u_rom_counter2 seg", false,-1, 7,0);
        {int i; for (i=0; i<17; i++) {
                tracep->declBus(c+19+i*1,"top u_produce u_rom_counter2 rom", true,(i+0), 7,0);}}
        tracep->declBus(c+36,"top u_produce u_rom_counter2 i", false,-1, 31,0);
        tracep->declBit(c+129,"top u_produce u_rom_ascii1 clk", false,-1);
        tracep->declBit(c+130,"top u_produce u_rom_ascii1 rst_n", false,-1);
        tracep->declBus(c+125,"top u_produce u_rom_ascii1 addr", false,-1, 4,0);
        tracep->declBus(c+135,"top u_produce u_rom_ascii1 seg", false,-1, 7,0);
        {int i; for (i=0; i<17; i++) {
                tracep->declBus(c+37+i*1,"top u_produce u_rom_ascii1 rom", true,(i+0), 7,0);}}
        tracep->declBus(c+54,"top u_produce u_rom_ascii1 i", false,-1, 31,0);
        tracep->declBit(c+129,"top u_produce u_rom_ascii2 clk", false,-1);
        tracep->declBit(c+130,"top u_produce u_rom_ascii2 rst_n", false,-1);
        tracep->declBus(c+126,"top u_produce u_rom_ascii2 addr", false,-1, 4,0);
        tracep->declBus(c+136,"top u_produce u_rom_ascii2 seg", false,-1, 7,0);
        {int i; for (i=0; i<17; i++) {
                tracep->declBus(c+55+i*1,"top u_produce u_rom_ascii2 rom", true,(i+0), 7,0);}}
        tracep->declBus(c+72,"top u_produce u_rom_ascii2 i", false,-1, 31,0);
        tracep->declBit(c+129,"top u_produce u_fsm clk", false,-1);
        tracep->declBit(c+130,"top u_produce u_fsm rst_n", false,-1);
        tracep->declBus(c+118,"top u_produce u_fsm data", false,-1, 7,0);
        tracep->declBit(c+119,"top u_produce u_fsm en", false,-1);
        tracep->declBus(c+110,"top u_produce u_fsm state", false,-1, 2,0);
        tracep->declBus(c+141,"top u_produce u_fsm IDLE", false,-1, 2,0);
        tracep->declBus(c+142,"top u_produce u_fsm ON", false,-1, 2,0);
        tracep->declBus(c+143,"top u_produce u_fsm OFF", false,-1, 2,0);
        tracep->declBus(c+144,"top u_produce u_fsm WAIT", false,-1, 2,0);
        tracep->declBus(c+139,"top u_produce u_fsm next_state", false,-1, 2,0);
        tracep->declBus(c+110,"top u_produce u_fsm current_state", false,-1, 2,0);
        tracep->declBit(c+129,"top u_produce u_ascii clk", false,-1);
        tracep->declBit(c+130,"top u_produce u_ascii rst_n", false,-1);
        tracep->declBus(c+118,"top u_produce u_ascii data", false,-1, 7,0);
        tracep->declBus(c+137,"top u_produce u_ascii seg1", false,-1, 7,0);
        tracep->declBus(c+138,"top u_produce u_ascii seg2", false,-1, 7,0);
        tracep->declBus(c+73,"top u_produce u_ascii i", false,-1, 31,0);
        tracep->declBus(c+124,"top u_produce u_ascii lut_out", false,-1, 7,0);
        tracep->declBus(c+145,"top u_produce u_ascii addr", false,-1, 7,0);
        tracep->declBus(c+112,"top u_produce u_ascii tmp", false,-1, 7,0);
        tracep->declBus(c+117,"top u_produce u_ascii buffer", false,-1, 7,0);
        tracep->declBus(c+127,"top u_produce u_ascii addr1", false,-1, 4,0);
        tracep->declBus(c+128,"top u_produce u_ascii addr2", false,-1, 4,0);
        tracep->declBit(c+129,"top u_produce u_ascii u_rom1 clk", false,-1);
        tracep->declBit(c+130,"top u_produce u_ascii u_rom1 rst_n", false,-1);
        tracep->declBus(c+127,"top u_produce u_ascii u_rom1 addr", false,-1, 4,0);
        tracep->declBus(c+137,"top u_produce u_ascii u_rom1 seg", false,-1, 7,0);
        {int i; for (i=0; i<17; i++) {
                tracep->declBus(c+74+i*1,"top u_produce u_ascii u_rom1 rom", true,(i+0), 7,0);}}
        tracep->declBus(c+91,"top u_produce u_ascii u_rom1 i", false,-1, 31,0);
        tracep->declBit(c+129,"top u_produce u_ascii u_rom2 clk", false,-1);
        tracep->declBit(c+130,"top u_produce u_ascii u_rom2 rst_n", false,-1);
        tracep->declBus(c+128,"top u_produce u_ascii u_rom2 addr", false,-1, 4,0);
        tracep->declBus(c+138,"top u_produce u_ascii u_rom2 seg", false,-1, 7,0);
        {int i; for (i=0; i<17; i++) {
                tracep->declBus(c+92+i*1,"top u_produce u_ascii u_rom2 rom", true,(i+0), 7,0);}}
        tracep->declBus(c+109,"top u_produce u_ascii u_rom2 i", false,-1, 31,0);
    }
}

void Vtop___024root__traceFullTop0(void* voidSelf, VerilatedVcd* tracep) VL_ATTR_COLD;
void Vtop___024root__traceChgTop0(void* voidSelf, VerilatedVcd* tracep);
void Vtop___024root__traceCleanup(void* voidSelf, VerilatedVcd* /*unused*/);

void Vtop___024root__traceRegister(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        tracep->addFullCb(&Vtop___024root__traceFullTop0, vlSelf);
        tracep->addChgCb(&Vtop___024root__traceChgTop0, vlSelf);
        tracep->addCleanupCb(&Vtop___024root__traceCleanup, vlSelf);
    }
}

void Vtop___024root__traceFullSub0(Vtop___024root* vlSelf, VerilatedVcd* tracep) VL_ATTR_COLD;

void Vtop___024root__traceFullTop0(void* voidSelf, VerilatedVcd* tracep) {
    Vtop___024root* const __restrict vlSelf = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        Vtop___024root__traceFullSub0((&vlSymsp->TOP), tracep);
    }
}

void Vtop___024root__traceFullSub0(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->fullCData(oldp+1,(vlSelf->top__DOT__u_produce__DOT__u_rom_counter1__DOT__rom[0]),8);
        tracep->fullCData(oldp+2,(vlSelf->top__DOT__u_produce__DOT__u_rom_counter1__DOT__rom[1]),8);
        tracep->fullCData(oldp+3,(vlSelf->top__DOT__u_produce__DOT__u_rom_counter1__DOT__rom[2]),8);
        tracep->fullCData(oldp+4,(vlSelf->top__DOT__u_produce__DOT__u_rom_counter1__DOT__rom[3]),8);
        tracep->fullCData(oldp+5,(vlSelf->top__DOT__u_produce__DOT__u_rom_counter1__DOT__rom[4]),8);
        tracep->fullCData(oldp+6,(vlSelf->top__DOT__u_produce__DOT__u_rom_counter1__DOT__rom[5]),8);
        tracep->fullCData(oldp+7,(vlSelf->top__DOT__u_produce__DOT__u_rom_counter1__DOT__rom[6]),8);
        tracep->fullCData(oldp+8,(vlSelf->top__DOT__u_produce__DOT__u_rom_counter1__DOT__rom[7]),8);
        tracep->fullCData(oldp+9,(vlSelf->top__DOT__u_produce__DOT__u_rom_counter1__DOT__rom[8]),8);
        tracep->fullCData(oldp+10,(vlSelf->top__DOT__u_produce__DOT__u_rom_counter1__DOT__rom[9]),8);
        tracep->fullCData(oldp+11,(vlSelf->top__DOT__u_produce__DOT__u_rom_counter1__DOT__rom[10]),8);
        tracep->fullCData(oldp+12,(vlSelf->top__DOT__u_produce__DOT__u_rom_counter1__DOT__rom[11]),8);
        tracep->fullCData(oldp+13,(vlSelf->top__DOT__u_produce__DOT__u_rom_counter1__DOT__rom[12]),8);
        tracep->fullCData(oldp+14,(vlSelf->top__DOT__u_produce__DOT__u_rom_counter1__DOT__rom[13]),8);
        tracep->fullCData(oldp+15,(vlSelf->top__DOT__u_produce__DOT__u_rom_counter1__DOT__rom[14]),8);
        tracep->fullCData(oldp+16,(vlSelf->top__DOT__u_produce__DOT__u_rom_counter1__DOT__rom[15]),8);
        tracep->fullCData(oldp+17,(vlSelf->top__DOT__u_produce__DOT__u_rom_counter1__DOT__rom[16]),8);
        tracep->fullIData(oldp+18,(vlSelf->top__DOT__u_produce__DOT__u_rom_counter1__DOT__i),32);
        tracep->fullCData(oldp+19,(vlSelf->top__DOT__u_produce__DOT__u_rom_counter2__DOT__rom[0]),8);
        tracep->fullCData(oldp+20,(vlSelf->top__DOT__u_produce__DOT__u_rom_counter2__DOT__rom[1]),8);
        tracep->fullCData(oldp+21,(vlSelf->top__DOT__u_produce__DOT__u_rom_counter2__DOT__rom[2]),8);
        tracep->fullCData(oldp+22,(vlSelf->top__DOT__u_produce__DOT__u_rom_counter2__DOT__rom[3]),8);
        tracep->fullCData(oldp+23,(vlSelf->top__DOT__u_produce__DOT__u_rom_counter2__DOT__rom[4]),8);
        tracep->fullCData(oldp+24,(vlSelf->top__DOT__u_produce__DOT__u_rom_counter2__DOT__rom[5]),8);
        tracep->fullCData(oldp+25,(vlSelf->top__DOT__u_produce__DOT__u_rom_counter2__DOT__rom[6]),8);
        tracep->fullCData(oldp+26,(vlSelf->top__DOT__u_produce__DOT__u_rom_counter2__DOT__rom[7]),8);
        tracep->fullCData(oldp+27,(vlSelf->top__DOT__u_produce__DOT__u_rom_counter2__DOT__rom[8]),8);
        tracep->fullCData(oldp+28,(vlSelf->top__DOT__u_produce__DOT__u_rom_counter2__DOT__rom[9]),8);
        tracep->fullCData(oldp+29,(vlSelf->top__DOT__u_produce__DOT__u_rom_counter2__DOT__rom[10]),8);
        tracep->fullCData(oldp+30,(vlSelf->top__DOT__u_produce__DOT__u_rom_counter2__DOT__rom[11]),8);
        tracep->fullCData(oldp+31,(vlSelf->top__DOT__u_produce__DOT__u_rom_counter2__DOT__rom[12]),8);
        tracep->fullCData(oldp+32,(vlSelf->top__DOT__u_produce__DOT__u_rom_counter2__DOT__rom[13]),8);
        tracep->fullCData(oldp+33,(vlSelf->top__DOT__u_produce__DOT__u_rom_counter2__DOT__rom[14]),8);
        tracep->fullCData(oldp+34,(vlSelf->top__DOT__u_produce__DOT__u_rom_counter2__DOT__rom[15]),8);
        tracep->fullCData(oldp+35,(vlSelf->top__DOT__u_produce__DOT__u_rom_counter2__DOT__rom[16]),8);
        tracep->fullIData(oldp+36,(vlSelf->top__DOT__u_produce__DOT__u_rom_counter2__DOT__i),32);
        tracep->fullCData(oldp+37,(vlSelf->top__DOT__u_produce__DOT__u_rom_ascii1__DOT__rom[0]),8);
        tracep->fullCData(oldp+38,(vlSelf->top__DOT__u_produce__DOT__u_rom_ascii1__DOT__rom[1]),8);
        tracep->fullCData(oldp+39,(vlSelf->top__DOT__u_produce__DOT__u_rom_ascii1__DOT__rom[2]),8);
        tracep->fullCData(oldp+40,(vlSelf->top__DOT__u_produce__DOT__u_rom_ascii1__DOT__rom[3]),8);
        tracep->fullCData(oldp+41,(vlSelf->top__DOT__u_produce__DOT__u_rom_ascii1__DOT__rom[4]),8);
        tracep->fullCData(oldp+42,(vlSelf->top__DOT__u_produce__DOT__u_rom_ascii1__DOT__rom[5]),8);
        tracep->fullCData(oldp+43,(vlSelf->top__DOT__u_produce__DOT__u_rom_ascii1__DOT__rom[6]),8);
        tracep->fullCData(oldp+44,(vlSelf->top__DOT__u_produce__DOT__u_rom_ascii1__DOT__rom[7]),8);
        tracep->fullCData(oldp+45,(vlSelf->top__DOT__u_produce__DOT__u_rom_ascii1__DOT__rom[8]),8);
        tracep->fullCData(oldp+46,(vlSelf->top__DOT__u_produce__DOT__u_rom_ascii1__DOT__rom[9]),8);
        tracep->fullCData(oldp+47,(vlSelf->top__DOT__u_produce__DOT__u_rom_ascii1__DOT__rom[10]),8);
        tracep->fullCData(oldp+48,(vlSelf->top__DOT__u_produce__DOT__u_rom_ascii1__DOT__rom[11]),8);
        tracep->fullCData(oldp+49,(vlSelf->top__DOT__u_produce__DOT__u_rom_ascii1__DOT__rom[12]),8);
        tracep->fullCData(oldp+50,(vlSelf->top__DOT__u_produce__DOT__u_rom_ascii1__DOT__rom[13]),8);
        tracep->fullCData(oldp+51,(vlSelf->top__DOT__u_produce__DOT__u_rom_ascii1__DOT__rom[14]),8);
        tracep->fullCData(oldp+52,(vlSelf->top__DOT__u_produce__DOT__u_rom_ascii1__DOT__rom[15]),8);
        tracep->fullCData(oldp+53,(vlSelf->top__DOT__u_produce__DOT__u_rom_ascii1__DOT__rom[16]),8);
        tracep->fullIData(oldp+54,(vlSelf->top__DOT__u_produce__DOT__u_rom_ascii1__DOT__i),32);
        tracep->fullCData(oldp+55,(vlSelf->top__DOT__u_produce__DOT__u_rom_ascii2__DOT__rom[0]),8);
        tracep->fullCData(oldp+56,(vlSelf->top__DOT__u_produce__DOT__u_rom_ascii2__DOT__rom[1]),8);
        tracep->fullCData(oldp+57,(vlSelf->top__DOT__u_produce__DOT__u_rom_ascii2__DOT__rom[2]),8);
        tracep->fullCData(oldp+58,(vlSelf->top__DOT__u_produce__DOT__u_rom_ascii2__DOT__rom[3]),8);
        tracep->fullCData(oldp+59,(vlSelf->top__DOT__u_produce__DOT__u_rom_ascii2__DOT__rom[4]),8);
        tracep->fullCData(oldp+60,(vlSelf->top__DOT__u_produce__DOT__u_rom_ascii2__DOT__rom[5]),8);
        tracep->fullCData(oldp+61,(vlSelf->top__DOT__u_produce__DOT__u_rom_ascii2__DOT__rom[6]),8);
        tracep->fullCData(oldp+62,(vlSelf->top__DOT__u_produce__DOT__u_rom_ascii2__DOT__rom[7]),8);
        tracep->fullCData(oldp+63,(vlSelf->top__DOT__u_produce__DOT__u_rom_ascii2__DOT__rom[8]),8);
        tracep->fullCData(oldp+64,(vlSelf->top__DOT__u_produce__DOT__u_rom_ascii2__DOT__rom[9]),8);
        tracep->fullCData(oldp+65,(vlSelf->top__DOT__u_produce__DOT__u_rom_ascii2__DOT__rom[10]),8);
        tracep->fullCData(oldp+66,(vlSelf->top__DOT__u_produce__DOT__u_rom_ascii2__DOT__rom[11]),8);
        tracep->fullCData(oldp+67,(vlSelf->top__DOT__u_produce__DOT__u_rom_ascii2__DOT__rom[12]),8);
        tracep->fullCData(oldp+68,(vlSelf->top__DOT__u_produce__DOT__u_rom_ascii2__DOT__rom[13]),8);
        tracep->fullCData(oldp+69,(vlSelf->top__DOT__u_produce__DOT__u_rom_ascii2__DOT__rom[14]),8);
        tracep->fullCData(oldp+70,(vlSelf->top__DOT__u_produce__DOT__u_rom_ascii2__DOT__rom[15]),8);
        tracep->fullCData(oldp+71,(vlSelf->top__DOT__u_produce__DOT__u_rom_ascii2__DOT__rom[16]),8);
        tracep->fullIData(oldp+72,(vlSelf->top__DOT__u_produce__DOT__u_rom_ascii2__DOT__i),32);
        tracep->fullIData(oldp+73,(vlSelf->top__DOT__u_produce__DOT__u_ascii__DOT__i),32);
        tracep->fullCData(oldp+74,(vlSelf->top__DOT__u_produce__DOT__u_ascii__DOT__u_rom1__DOT__rom[0]),8);
        tracep->fullCData(oldp+75,(vlSelf->top__DOT__u_produce__DOT__u_ascii__DOT__u_rom1__DOT__rom[1]),8);
        tracep->fullCData(oldp+76,(vlSelf->top__DOT__u_produce__DOT__u_ascii__DOT__u_rom1__DOT__rom[2]),8);
        tracep->fullCData(oldp+77,(vlSelf->top__DOT__u_produce__DOT__u_ascii__DOT__u_rom1__DOT__rom[3]),8);
        tracep->fullCData(oldp+78,(vlSelf->top__DOT__u_produce__DOT__u_ascii__DOT__u_rom1__DOT__rom[4]),8);
        tracep->fullCData(oldp+79,(vlSelf->top__DOT__u_produce__DOT__u_ascii__DOT__u_rom1__DOT__rom[5]),8);
        tracep->fullCData(oldp+80,(vlSelf->top__DOT__u_produce__DOT__u_ascii__DOT__u_rom1__DOT__rom[6]),8);
        tracep->fullCData(oldp+81,(vlSelf->top__DOT__u_produce__DOT__u_ascii__DOT__u_rom1__DOT__rom[7]),8);
        tracep->fullCData(oldp+82,(vlSelf->top__DOT__u_produce__DOT__u_ascii__DOT__u_rom1__DOT__rom[8]),8);
        tracep->fullCData(oldp+83,(vlSelf->top__DOT__u_produce__DOT__u_ascii__DOT__u_rom1__DOT__rom[9]),8);
        tracep->fullCData(oldp+84,(vlSelf->top__DOT__u_produce__DOT__u_ascii__DOT__u_rom1__DOT__rom[10]),8);
        tracep->fullCData(oldp+85,(vlSelf->top__DOT__u_produce__DOT__u_ascii__DOT__u_rom1__DOT__rom[11]),8);
        tracep->fullCData(oldp+86,(vlSelf->top__DOT__u_produce__DOT__u_ascii__DOT__u_rom1__DOT__rom[12]),8);
        tracep->fullCData(oldp+87,(vlSelf->top__DOT__u_produce__DOT__u_ascii__DOT__u_rom1__DOT__rom[13]),8);
        tracep->fullCData(oldp+88,(vlSelf->top__DOT__u_produce__DOT__u_ascii__DOT__u_rom1__DOT__rom[14]),8);
        tracep->fullCData(oldp+89,(vlSelf->top__DOT__u_produce__DOT__u_ascii__DOT__u_rom1__DOT__rom[15]),8);
        tracep->fullCData(oldp+90,(vlSelf->top__DOT__u_produce__DOT__u_ascii__DOT__u_rom1__DOT__rom[16]),8);
        tracep->fullIData(oldp+91,(vlSelf->top__DOT__u_produce__DOT__u_ascii__DOT__u_rom1__DOT__i),32);
        tracep->fullCData(oldp+92,(vlSelf->top__DOT__u_produce__DOT__u_ascii__DOT__u_rom2__DOT__rom[0]),8);
        tracep->fullCData(oldp+93,(vlSelf->top__DOT__u_produce__DOT__u_ascii__DOT__u_rom2__DOT__rom[1]),8);
        tracep->fullCData(oldp+94,(vlSelf->top__DOT__u_produce__DOT__u_ascii__DOT__u_rom2__DOT__rom[2]),8);
        tracep->fullCData(oldp+95,(vlSelf->top__DOT__u_produce__DOT__u_ascii__DOT__u_rom2__DOT__rom[3]),8);
        tracep->fullCData(oldp+96,(vlSelf->top__DOT__u_produce__DOT__u_ascii__DOT__u_rom2__DOT__rom[4]),8);
        tracep->fullCData(oldp+97,(vlSelf->top__DOT__u_produce__DOT__u_ascii__DOT__u_rom2__DOT__rom[5]),8);
        tracep->fullCData(oldp+98,(vlSelf->top__DOT__u_produce__DOT__u_ascii__DOT__u_rom2__DOT__rom[6]),8);
        tracep->fullCData(oldp+99,(vlSelf->top__DOT__u_produce__DOT__u_ascii__DOT__u_rom2__DOT__rom[7]),8);
        tracep->fullCData(oldp+100,(vlSelf->top__DOT__u_produce__DOT__u_ascii__DOT__u_rom2__DOT__rom[8]),8);
        tracep->fullCData(oldp+101,(vlSelf->top__DOT__u_produce__DOT__u_ascii__DOT__u_rom2__DOT__rom[9]),8);
        tracep->fullCData(oldp+102,(vlSelf->top__DOT__u_produce__DOT__u_ascii__DOT__u_rom2__DOT__rom[10]),8);
        tracep->fullCData(oldp+103,(vlSelf->top__DOT__u_produce__DOT__u_ascii__DOT__u_rom2__DOT__rom[11]),8);
        tracep->fullCData(oldp+104,(vlSelf->top__DOT__u_produce__DOT__u_ascii__DOT__u_rom2__DOT__rom[12]),8);
        tracep->fullCData(oldp+105,(vlSelf->top__DOT__u_produce__DOT__u_ascii__DOT__u_rom2__DOT__rom[13]),8);
        tracep->fullCData(oldp+106,(vlSelf->top__DOT__u_produce__DOT__u_ascii__DOT__u_rom2__DOT__rom[14]),8);
        tracep->fullCData(oldp+107,(vlSelf->top__DOT__u_produce__DOT__u_ascii__DOT__u_rom2__DOT__rom[15]),8);
        tracep->fullCData(oldp+108,(vlSelf->top__DOT__u_produce__DOT__u_ascii__DOT__u_rom2__DOT__rom[16]),8);
        tracep->fullIData(oldp+109,(vlSelf->top__DOT__u_produce__DOT__u_ascii__DOT__u_rom2__DOT__i),32);
        tracep->fullCData(oldp+110,(vlSelf->top__DOT__u_produce__DOT__u_fsm__DOT__current_state),3);
        tracep->fullCData(oldp+111,(vlSelf->top__DOT__u_produce__DOT__counter),8);
        tracep->fullCData(oldp+112,(vlSelf->top__DOT__u_produce__DOT__tmp),8);
        tracep->fullCData(oldp+113,(vlSelf->top__DOT__u_produce__DOT__buffer),8);
        tracep->fullCData(oldp+114,(vlSelf->top__DOT__u_produce__DOT__last_state),3);
        tracep->fullCData(oldp+115,((0xfU & ((IData)(vlSelf->top__DOT__u_produce__DOT__counter) 
                                             >> 4U))),5);
        tracep->fullCData(oldp+116,((0xfU & (IData)(vlSelf->top__DOT__u_produce__DOT__counter))),5);
        tracep->fullCData(oldp+117,(vlSelf->top__DOT__u_produce__DOT__u_ascii__DOT__buffer),8);
        tracep->fullCData(oldp+118,(vlSelf->top__DOT__u_keyboard__DOT__data),8);
        tracep->fullBit(oldp+119,(vlSelf->top__DOT__en));
        tracep->fullSData(oldp+120,(vlSelf->top__DOT__u_keyboard__DOT__buffer),10);
        tracep->fullCData(oldp+121,(vlSelf->top__DOT__u_keyboard__DOT__count),4);
        tracep->fullCData(oldp+122,(vlSelf->top__DOT__u_keyboard__DOT__ps2_clk_sync),3);
        tracep->fullBit(oldp+123,((IData)((4U == (6U 
                                                  & (IData)(vlSelf->top__DOT__u_keyboard__DOT__ps2_clk_sync))))));
        tracep->fullCData(oldp+124,(vlSelf->top__DOT__u_produce__DOT__u_ascii__DOT__lut_out),8);
        tracep->fullCData(oldp+125,(vlSelf->top__DOT__u_produce__DOT__addr1),5);
        tracep->fullCData(oldp+126,(vlSelf->top__DOT__u_produce__DOT__addr2),5);
        tracep->fullCData(oldp+127,(vlSelf->top__DOT__u_produce__DOT__u_ascii__DOT__addr1),5);
        tracep->fullCData(oldp+128,(vlSelf->top__DOT__u_produce__DOT__u_ascii__DOT__addr2),5);
        tracep->fullBit(oldp+129,(vlSelf->clk));
        tracep->fullBit(oldp+130,(vlSelf->rst_n));
        tracep->fullBit(oldp+131,(vlSelf->ps2_clk));
        tracep->fullBit(oldp+132,(vlSelf->ps2_data));
        tracep->fullCData(oldp+133,(vlSelf->counter1),8);
        tracep->fullCData(oldp+134,(vlSelf->counter2),8);
        tracep->fullCData(oldp+135,(vlSelf->ascii1),8);
        tracep->fullCData(oldp+136,(vlSelf->ascii2),8);
        tracep->fullCData(oldp+137,(vlSelf->key1),8);
        tracep->fullCData(oldp+138,(vlSelf->key2),8);
        tracep->fullCData(oldp+139,(((4U & (IData)(vlSelf->top__DOT__u_produce__DOT__u_fsm__DOT__current_state))
                                      ? 0U : ((2U & (IData)(vlSelf->top__DOT__u_produce__DOT__u_fsm__DOT__current_state))
                                               ? ((1U 
                                                   & (IData)(vlSelf->top__DOT__u_produce__DOT__u_fsm__DOT__current_state))
                                                   ? 0U
                                                   : 
                                                  ((IData)(vlSelf->top__DOT__en)
                                                    ? 4U
                                                    : 2U))
                                               : ((1U 
                                                   & (IData)(vlSelf->top__DOT__u_produce__DOT__u_fsm__DOT__current_state))
                                                   ? 
                                                  ((0xf0U 
                                                    == (IData)(vlSelf->top__DOT__u_keyboard__DOT__data))
                                                    ? 2U
                                                    : 1U)
                                                   : 
                                                  (((0xfU 
                                                     != (IData)(vlSelf->top__DOT__u_keyboard__DOT__data)) 
                                                    & (IData)(vlSelf->top__DOT__en))
                                                    ? 1U
                                                    : 0U))))),3);
        tracep->fullBit(oldp+140,(vlSelf->top__DOT__u_keyboard__DOT__ready));
        tracep->fullCData(oldp+141,(0U),3);
        tracep->fullCData(oldp+142,(1U),3);
        tracep->fullCData(oldp+143,(2U),3);
        tracep->fullCData(oldp+144,(4U),3);
        tracep->fullCData(oldp+145,(vlSelf->top__DOT__u_produce__DOT__u_ascii__DOT__addr),8);
    }
}
