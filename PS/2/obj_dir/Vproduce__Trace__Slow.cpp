// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vproduce__Syms.h"


void Vproduce___024root__traceInitSub0(Vproduce___024root* vlSelf, VerilatedVcd* tracep) VL_ATTR_COLD;

void Vproduce___024root__traceInitTop(Vproduce___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vproduce__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        Vproduce___024root__traceInitSub0(vlSelf, tracep);
    }
}

void Vproduce___024root__traceInitSub0(Vproduce___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vproduce__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    const int c = vlSymsp->__Vm_baseCode;
    if (false && tracep && c) {}  // Prevent unused
    // Body
    {
        tracep->declBus(c+124,"data", false,-1, 7,0);
        tracep->declBit(c+125,"clk", false,-1);
        tracep->declBit(c+126,"rst_n", false,-1);
        tracep->declBit(c+127,"en", false,-1);
        tracep->declBus(c+128,"counter1", false,-1, 7,0);
        tracep->declBus(c+129,"counter2", false,-1, 7,0);
        tracep->declBus(c+130,"ascii1", false,-1, 7,0);
        tracep->declBus(c+131,"ascii2", false,-1, 7,0);
        tracep->declBus(c+132,"key1", false,-1, 7,0);
        tracep->declBus(c+133,"key2", false,-1, 7,0);
        tracep->declBus(c+124,"produce data", false,-1, 7,0);
        tracep->declBit(c+125,"produce clk", false,-1);
        tracep->declBit(c+126,"produce rst_n", false,-1);
        tracep->declBit(c+127,"produce en", false,-1);
        tracep->declBus(c+128,"produce counter1", false,-1, 7,0);
        tracep->declBus(c+129,"produce counter2", false,-1, 7,0);
        tracep->declBus(c+130,"produce ascii1", false,-1, 7,0);
        tracep->declBus(c+131,"produce ascii2", false,-1, 7,0);
        tracep->declBus(c+132,"produce key1", false,-1, 7,0);
        tracep->declBus(c+133,"produce key2", false,-1, 7,0);
        tracep->declBus(c+1,"produce state", false,-1, 2,0);
        tracep->declBus(c+2,"produce counter", false,-1, 7,0);
        tracep->declBus(c+3,"produce tmp", false,-1, 7,0);
        tracep->declBus(c+4,"produce buffer", false,-1, 7,0);
        tracep->declBus(c+5,"produce last_state", false,-1, 2,0);
        tracep->declBus(c+119,"produce addr1", false,-1, 4,0);
        tracep->declBus(c+120,"produce addr2", false,-1, 4,0);
        tracep->declBit(c+125,"produce u_rom_counter1 clk", false,-1);
        tracep->declBit(c+126,"produce u_rom_counter1 rst_n", false,-1);
        tracep->declBus(c+6,"produce u_rom_counter1 addr", false,-1, 4,0);
        tracep->declBus(c+128,"produce u_rom_counter1 seg", false,-1, 7,0);
        {int i; for (i=0; i<17; i++) {
                tracep->declBus(c+10+i*1,"produce u_rom_counter1 rom", true,(i+0), 7,0);}}
        tracep->declBus(c+27,"produce u_rom_counter1 i", false,-1, 31,0);
        tracep->declBit(c+125,"produce u_rom_counter2 clk", false,-1);
        tracep->declBit(c+126,"produce u_rom_counter2 rst_n", false,-1);
        tracep->declBus(c+7,"produce u_rom_counter2 addr", false,-1, 4,0);
        tracep->declBus(c+129,"produce u_rom_counter2 seg", false,-1, 7,0);
        {int i; for (i=0; i<17; i++) {
                tracep->declBus(c+28+i*1,"produce u_rom_counter2 rom", true,(i+0), 7,0);}}
        tracep->declBus(c+45,"produce u_rom_counter2 i", false,-1, 31,0);
        tracep->declBit(c+125,"produce u_rom_ascii1 clk", false,-1);
        tracep->declBit(c+126,"produce u_rom_ascii1 rst_n", false,-1);
        tracep->declBus(c+119,"produce u_rom_ascii1 addr", false,-1, 4,0);
        tracep->declBus(c+130,"produce u_rom_ascii1 seg", false,-1, 7,0);
        {int i; for (i=0; i<17; i++) {
                tracep->declBus(c+46+i*1,"produce u_rom_ascii1 rom", true,(i+0), 7,0);}}
        tracep->declBus(c+63,"produce u_rom_ascii1 i", false,-1, 31,0);
        tracep->declBit(c+125,"produce u_rom_ascii2 clk", false,-1);
        tracep->declBit(c+126,"produce u_rom_ascii2 rst_n", false,-1);
        tracep->declBus(c+120,"produce u_rom_ascii2 addr", false,-1, 4,0);
        tracep->declBus(c+131,"produce u_rom_ascii2 seg", false,-1, 7,0);
        {int i; for (i=0; i<17; i++) {
                tracep->declBus(c+64+i*1,"produce u_rom_ascii2 rom", true,(i+0), 7,0);}}
        tracep->declBus(c+81,"produce u_rom_ascii2 i", false,-1, 31,0);
        tracep->declBit(c+125,"produce u_fsm clk", false,-1);
        tracep->declBit(c+126,"produce u_fsm rst_n", false,-1);
        tracep->declBus(c+124,"produce u_fsm data", false,-1, 7,0);
        tracep->declBit(c+127,"produce u_fsm en", false,-1);
        tracep->declBus(c+1,"produce u_fsm state", false,-1, 2,0);
        tracep->declBus(c+135,"produce u_fsm IDLE", false,-1, 2,0);
        tracep->declBus(c+136,"produce u_fsm ON", false,-1, 2,0);
        tracep->declBus(c+137,"produce u_fsm OFF", false,-1, 2,0);
        tracep->declBus(c+138,"produce u_fsm WAIT", false,-1, 2,0);
        tracep->declBus(c+134,"produce u_fsm next_state", false,-1, 2,0);
        tracep->declBus(c+1,"produce u_fsm current_state", false,-1, 2,0);
        tracep->declBit(c+125,"produce u_ascii clk", false,-1);
        tracep->declBit(c+126,"produce u_ascii rst_n", false,-1);
        tracep->declBus(c+124,"produce u_ascii data", false,-1, 7,0);
        tracep->declBus(c+132,"produce u_ascii seg1", false,-1, 7,0);
        tracep->declBus(c+133,"produce u_ascii seg2", false,-1, 7,0);
        tracep->declBus(c+82,"produce u_ascii i", false,-1, 31,0);
        tracep->declBus(c+121,"produce u_ascii lut_out", false,-1, 7,0);
        tracep->declBus(c+139,"produce u_ascii addr", false,-1, 7,0);
        tracep->declBus(c+8,"produce u_ascii tmp", false,-1, 7,0);
        tracep->declBus(c+9,"produce u_ascii buffer", false,-1, 7,0);
        tracep->declBus(c+122,"produce u_ascii addr1", false,-1, 4,0);
        tracep->declBus(c+123,"produce u_ascii addr2", false,-1, 4,0);
        tracep->declBit(c+125,"produce u_ascii u_rom1 clk", false,-1);
        tracep->declBit(c+126,"produce u_ascii u_rom1 rst_n", false,-1);
        tracep->declBus(c+122,"produce u_ascii u_rom1 addr", false,-1, 4,0);
        tracep->declBus(c+132,"produce u_ascii u_rom1 seg", false,-1, 7,0);
        {int i; for (i=0; i<17; i++) {
                tracep->declBus(c+83+i*1,"produce u_ascii u_rom1 rom", true,(i+0), 7,0);}}
        tracep->declBus(c+100,"produce u_ascii u_rom1 i", false,-1, 31,0);
        tracep->declBit(c+125,"produce u_ascii u_rom2 clk", false,-1);
        tracep->declBit(c+126,"produce u_ascii u_rom2 rst_n", false,-1);
        tracep->declBus(c+123,"produce u_ascii u_rom2 addr", false,-1, 4,0);
        tracep->declBus(c+133,"produce u_ascii u_rom2 seg", false,-1, 7,0);
        {int i; for (i=0; i<17; i++) {
                tracep->declBus(c+101+i*1,"produce u_ascii u_rom2 rom", true,(i+0), 7,0);}}
        tracep->declBus(c+118,"produce u_ascii u_rom2 i", false,-1, 31,0);
    }
}

void Vproduce___024root__traceFullTop0(void* voidSelf, VerilatedVcd* tracep) VL_ATTR_COLD;
void Vproduce___024root__traceChgTop0(void* voidSelf, VerilatedVcd* tracep);
void Vproduce___024root__traceCleanup(void* voidSelf, VerilatedVcd* /*unused*/);

void Vproduce___024root__traceRegister(Vproduce___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vproduce__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        tracep->addFullCb(&Vproduce___024root__traceFullTop0, vlSelf);
        tracep->addChgCb(&Vproduce___024root__traceChgTop0, vlSelf);
        tracep->addCleanupCb(&Vproduce___024root__traceCleanup, vlSelf);
    }
}

void Vproduce___024root__traceFullSub0(Vproduce___024root* vlSelf, VerilatedVcd* tracep) VL_ATTR_COLD;

void Vproduce___024root__traceFullTop0(void* voidSelf, VerilatedVcd* tracep) {
    Vproduce___024root* const __restrict vlSelf = static_cast<Vproduce___024root*>(voidSelf);
    Vproduce__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        Vproduce___024root__traceFullSub0((&vlSymsp->TOP), tracep);
    }
}

void Vproduce___024root__traceFullSub0(Vproduce___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vproduce__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->fullCData(oldp+1,(vlSelf->produce__DOT__u_fsm__DOT__current_state),3);
        tracep->fullCData(oldp+2,(vlSelf->produce__DOT__counter),8);
        tracep->fullCData(oldp+3,(vlSelf->produce__DOT__tmp),8);
        tracep->fullCData(oldp+4,(vlSelf->produce__DOT__buffer),8);
        tracep->fullCData(oldp+5,(vlSelf->produce__DOT__last_state),3);
        tracep->fullCData(oldp+6,((0xfU & ((IData)(vlSelf->produce__DOT__counter) 
                                           >> 4U))),5);
        tracep->fullCData(oldp+7,((0xfU & (IData)(vlSelf->produce__DOT__counter))),5);
        tracep->fullCData(oldp+8,(vlSelf->produce__DOT__u_ascii__DOT__tmp),8);
        tracep->fullCData(oldp+9,(vlSelf->produce__DOT__u_ascii__DOT__buffer),8);
        tracep->fullCData(oldp+10,(vlSelf->produce__DOT__u_rom_counter1__DOT__rom[0]),8);
        tracep->fullCData(oldp+11,(vlSelf->produce__DOT__u_rom_counter1__DOT__rom[1]),8);
        tracep->fullCData(oldp+12,(vlSelf->produce__DOT__u_rom_counter1__DOT__rom[2]),8);
        tracep->fullCData(oldp+13,(vlSelf->produce__DOT__u_rom_counter1__DOT__rom[3]),8);
        tracep->fullCData(oldp+14,(vlSelf->produce__DOT__u_rom_counter1__DOT__rom[4]),8);
        tracep->fullCData(oldp+15,(vlSelf->produce__DOT__u_rom_counter1__DOT__rom[5]),8);
        tracep->fullCData(oldp+16,(vlSelf->produce__DOT__u_rom_counter1__DOT__rom[6]),8);
        tracep->fullCData(oldp+17,(vlSelf->produce__DOT__u_rom_counter1__DOT__rom[7]),8);
        tracep->fullCData(oldp+18,(vlSelf->produce__DOT__u_rom_counter1__DOT__rom[8]),8);
        tracep->fullCData(oldp+19,(vlSelf->produce__DOT__u_rom_counter1__DOT__rom[9]),8);
        tracep->fullCData(oldp+20,(vlSelf->produce__DOT__u_rom_counter1__DOT__rom[10]),8);
        tracep->fullCData(oldp+21,(vlSelf->produce__DOT__u_rom_counter1__DOT__rom[11]),8);
        tracep->fullCData(oldp+22,(vlSelf->produce__DOT__u_rom_counter1__DOT__rom[12]),8);
        tracep->fullCData(oldp+23,(vlSelf->produce__DOT__u_rom_counter1__DOT__rom[13]),8);
        tracep->fullCData(oldp+24,(vlSelf->produce__DOT__u_rom_counter1__DOT__rom[14]),8);
        tracep->fullCData(oldp+25,(vlSelf->produce__DOT__u_rom_counter1__DOT__rom[15]),8);
        tracep->fullCData(oldp+26,(vlSelf->produce__DOT__u_rom_counter1__DOT__rom[16]),8);
        tracep->fullIData(oldp+27,(vlSelf->produce__DOT__u_rom_counter1__DOT__i),32);
        tracep->fullCData(oldp+28,(vlSelf->produce__DOT__u_rom_counter2__DOT__rom[0]),8);
        tracep->fullCData(oldp+29,(vlSelf->produce__DOT__u_rom_counter2__DOT__rom[1]),8);
        tracep->fullCData(oldp+30,(vlSelf->produce__DOT__u_rom_counter2__DOT__rom[2]),8);
        tracep->fullCData(oldp+31,(vlSelf->produce__DOT__u_rom_counter2__DOT__rom[3]),8);
        tracep->fullCData(oldp+32,(vlSelf->produce__DOT__u_rom_counter2__DOT__rom[4]),8);
        tracep->fullCData(oldp+33,(vlSelf->produce__DOT__u_rom_counter2__DOT__rom[5]),8);
        tracep->fullCData(oldp+34,(vlSelf->produce__DOT__u_rom_counter2__DOT__rom[6]),8);
        tracep->fullCData(oldp+35,(vlSelf->produce__DOT__u_rom_counter2__DOT__rom[7]),8);
        tracep->fullCData(oldp+36,(vlSelf->produce__DOT__u_rom_counter2__DOT__rom[8]),8);
        tracep->fullCData(oldp+37,(vlSelf->produce__DOT__u_rom_counter2__DOT__rom[9]),8);
        tracep->fullCData(oldp+38,(vlSelf->produce__DOT__u_rom_counter2__DOT__rom[10]),8);
        tracep->fullCData(oldp+39,(vlSelf->produce__DOT__u_rom_counter2__DOT__rom[11]),8);
        tracep->fullCData(oldp+40,(vlSelf->produce__DOT__u_rom_counter2__DOT__rom[12]),8);
        tracep->fullCData(oldp+41,(vlSelf->produce__DOT__u_rom_counter2__DOT__rom[13]),8);
        tracep->fullCData(oldp+42,(vlSelf->produce__DOT__u_rom_counter2__DOT__rom[14]),8);
        tracep->fullCData(oldp+43,(vlSelf->produce__DOT__u_rom_counter2__DOT__rom[15]),8);
        tracep->fullCData(oldp+44,(vlSelf->produce__DOT__u_rom_counter2__DOT__rom[16]),8);
        tracep->fullIData(oldp+45,(vlSelf->produce__DOT__u_rom_counter2__DOT__i),32);
        tracep->fullCData(oldp+46,(vlSelf->produce__DOT__u_rom_ascii1__DOT__rom[0]),8);
        tracep->fullCData(oldp+47,(vlSelf->produce__DOT__u_rom_ascii1__DOT__rom[1]),8);
        tracep->fullCData(oldp+48,(vlSelf->produce__DOT__u_rom_ascii1__DOT__rom[2]),8);
        tracep->fullCData(oldp+49,(vlSelf->produce__DOT__u_rom_ascii1__DOT__rom[3]),8);
        tracep->fullCData(oldp+50,(vlSelf->produce__DOT__u_rom_ascii1__DOT__rom[4]),8);
        tracep->fullCData(oldp+51,(vlSelf->produce__DOT__u_rom_ascii1__DOT__rom[5]),8);
        tracep->fullCData(oldp+52,(vlSelf->produce__DOT__u_rom_ascii1__DOT__rom[6]),8);
        tracep->fullCData(oldp+53,(vlSelf->produce__DOT__u_rom_ascii1__DOT__rom[7]),8);
        tracep->fullCData(oldp+54,(vlSelf->produce__DOT__u_rom_ascii1__DOT__rom[8]),8);
        tracep->fullCData(oldp+55,(vlSelf->produce__DOT__u_rom_ascii1__DOT__rom[9]),8);
        tracep->fullCData(oldp+56,(vlSelf->produce__DOT__u_rom_ascii1__DOT__rom[10]),8);
        tracep->fullCData(oldp+57,(vlSelf->produce__DOT__u_rom_ascii1__DOT__rom[11]),8);
        tracep->fullCData(oldp+58,(vlSelf->produce__DOT__u_rom_ascii1__DOT__rom[12]),8);
        tracep->fullCData(oldp+59,(vlSelf->produce__DOT__u_rom_ascii1__DOT__rom[13]),8);
        tracep->fullCData(oldp+60,(vlSelf->produce__DOT__u_rom_ascii1__DOT__rom[14]),8);
        tracep->fullCData(oldp+61,(vlSelf->produce__DOT__u_rom_ascii1__DOT__rom[15]),8);
        tracep->fullCData(oldp+62,(vlSelf->produce__DOT__u_rom_ascii1__DOT__rom[16]),8);
        tracep->fullIData(oldp+63,(vlSelf->produce__DOT__u_rom_ascii1__DOT__i),32);
        tracep->fullCData(oldp+64,(vlSelf->produce__DOT__u_rom_ascii2__DOT__rom[0]),8);
        tracep->fullCData(oldp+65,(vlSelf->produce__DOT__u_rom_ascii2__DOT__rom[1]),8);
        tracep->fullCData(oldp+66,(vlSelf->produce__DOT__u_rom_ascii2__DOT__rom[2]),8);
        tracep->fullCData(oldp+67,(vlSelf->produce__DOT__u_rom_ascii2__DOT__rom[3]),8);
        tracep->fullCData(oldp+68,(vlSelf->produce__DOT__u_rom_ascii2__DOT__rom[4]),8);
        tracep->fullCData(oldp+69,(vlSelf->produce__DOT__u_rom_ascii2__DOT__rom[5]),8);
        tracep->fullCData(oldp+70,(vlSelf->produce__DOT__u_rom_ascii2__DOT__rom[6]),8);
        tracep->fullCData(oldp+71,(vlSelf->produce__DOT__u_rom_ascii2__DOT__rom[7]),8);
        tracep->fullCData(oldp+72,(vlSelf->produce__DOT__u_rom_ascii2__DOT__rom[8]),8);
        tracep->fullCData(oldp+73,(vlSelf->produce__DOT__u_rom_ascii2__DOT__rom[9]),8);
        tracep->fullCData(oldp+74,(vlSelf->produce__DOT__u_rom_ascii2__DOT__rom[10]),8);
        tracep->fullCData(oldp+75,(vlSelf->produce__DOT__u_rom_ascii2__DOT__rom[11]),8);
        tracep->fullCData(oldp+76,(vlSelf->produce__DOT__u_rom_ascii2__DOT__rom[12]),8);
        tracep->fullCData(oldp+77,(vlSelf->produce__DOT__u_rom_ascii2__DOT__rom[13]),8);
        tracep->fullCData(oldp+78,(vlSelf->produce__DOT__u_rom_ascii2__DOT__rom[14]),8);
        tracep->fullCData(oldp+79,(vlSelf->produce__DOT__u_rom_ascii2__DOT__rom[15]),8);
        tracep->fullCData(oldp+80,(vlSelf->produce__DOT__u_rom_ascii2__DOT__rom[16]),8);
        tracep->fullIData(oldp+81,(vlSelf->produce__DOT__u_rom_ascii2__DOT__i),32);
        tracep->fullIData(oldp+82,(vlSelf->produce__DOT__u_ascii__DOT__i),32);
        tracep->fullCData(oldp+83,(vlSelf->produce__DOT__u_ascii__DOT__u_rom1__DOT__rom[0]),8);
        tracep->fullCData(oldp+84,(vlSelf->produce__DOT__u_ascii__DOT__u_rom1__DOT__rom[1]),8);
        tracep->fullCData(oldp+85,(vlSelf->produce__DOT__u_ascii__DOT__u_rom1__DOT__rom[2]),8);
        tracep->fullCData(oldp+86,(vlSelf->produce__DOT__u_ascii__DOT__u_rom1__DOT__rom[3]),8);
        tracep->fullCData(oldp+87,(vlSelf->produce__DOT__u_ascii__DOT__u_rom1__DOT__rom[4]),8);
        tracep->fullCData(oldp+88,(vlSelf->produce__DOT__u_ascii__DOT__u_rom1__DOT__rom[5]),8);
        tracep->fullCData(oldp+89,(vlSelf->produce__DOT__u_ascii__DOT__u_rom1__DOT__rom[6]),8);
        tracep->fullCData(oldp+90,(vlSelf->produce__DOT__u_ascii__DOT__u_rom1__DOT__rom[7]),8);
        tracep->fullCData(oldp+91,(vlSelf->produce__DOT__u_ascii__DOT__u_rom1__DOT__rom[8]),8);
        tracep->fullCData(oldp+92,(vlSelf->produce__DOT__u_ascii__DOT__u_rom1__DOT__rom[9]),8);
        tracep->fullCData(oldp+93,(vlSelf->produce__DOT__u_ascii__DOT__u_rom1__DOT__rom[10]),8);
        tracep->fullCData(oldp+94,(vlSelf->produce__DOT__u_ascii__DOT__u_rom1__DOT__rom[11]),8);
        tracep->fullCData(oldp+95,(vlSelf->produce__DOT__u_ascii__DOT__u_rom1__DOT__rom[12]),8);
        tracep->fullCData(oldp+96,(vlSelf->produce__DOT__u_ascii__DOT__u_rom1__DOT__rom[13]),8);
        tracep->fullCData(oldp+97,(vlSelf->produce__DOT__u_ascii__DOT__u_rom1__DOT__rom[14]),8);
        tracep->fullCData(oldp+98,(vlSelf->produce__DOT__u_ascii__DOT__u_rom1__DOT__rom[15]),8);
        tracep->fullCData(oldp+99,(vlSelf->produce__DOT__u_ascii__DOT__u_rom1__DOT__rom[16]),8);
        tracep->fullIData(oldp+100,(vlSelf->produce__DOT__u_ascii__DOT__u_rom1__DOT__i),32);
        tracep->fullCData(oldp+101,(vlSelf->produce__DOT__u_ascii__DOT__u_rom2__DOT__rom[0]),8);
        tracep->fullCData(oldp+102,(vlSelf->produce__DOT__u_ascii__DOT__u_rom2__DOT__rom[1]),8);
        tracep->fullCData(oldp+103,(vlSelf->produce__DOT__u_ascii__DOT__u_rom2__DOT__rom[2]),8);
        tracep->fullCData(oldp+104,(vlSelf->produce__DOT__u_ascii__DOT__u_rom2__DOT__rom[3]),8);
        tracep->fullCData(oldp+105,(vlSelf->produce__DOT__u_ascii__DOT__u_rom2__DOT__rom[4]),8);
        tracep->fullCData(oldp+106,(vlSelf->produce__DOT__u_ascii__DOT__u_rom2__DOT__rom[5]),8);
        tracep->fullCData(oldp+107,(vlSelf->produce__DOT__u_ascii__DOT__u_rom2__DOT__rom[6]),8);
        tracep->fullCData(oldp+108,(vlSelf->produce__DOT__u_ascii__DOT__u_rom2__DOT__rom[7]),8);
        tracep->fullCData(oldp+109,(vlSelf->produce__DOT__u_ascii__DOT__u_rom2__DOT__rom[8]),8);
        tracep->fullCData(oldp+110,(vlSelf->produce__DOT__u_ascii__DOT__u_rom2__DOT__rom[9]),8);
        tracep->fullCData(oldp+111,(vlSelf->produce__DOT__u_ascii__DOT__u_rom2__DOT__rom[10]),8);
        tracep->fullCData(oldp+112,(vlSelf->produce__DOT__u_ascii__DOT__u_rom2__DOT__rom[11]),8);
        tracep->fullCData(oldp+113,(vlSelf->produce__DOT__u_ascii__DOT__u_rom2__DOT__rom[12]),8);
        tracep->fullCData(oldp+114,(vlSelf->produce__DOT__u_ascii__DOT__u_rom2__DOT__rom[13]),8);
        tracep->fullCData(oldp+115,(vlSelf->produce__DOT__u_ascii__DOT__u_rom2__DOT__rom[14]),8);
        tracep->fullCData(oldp+116,(vlSelf->produce__DOT__u_ascii__DOT__u_rom2__DOT__rom[15]),8);
        tracep->fullCData(oldp+117,(vlSelf->produce__DOT__u_ascii__DOT__u_rom2__DOT__rom[16]),8);
        tracep->fullIData(oldp+118,(vlSelf->produce__DOT__u_ascii__DOT__u_rom2__DOT__i),32);
        tracep->fullCData(oldp+119,(vlSelf->produce__DOT__addr1),5);
        tracep->fullCData(oldp+120,(vlSelf->produce__DOT__addr2),5);
        tracep->fullCData(oldp+121,(vlSelf->produce__DOT__u_ascii__DOT__lut_out),8);
        tracep->fullCData(oldp+122,(vlSelf->produce__DOT__u_ascii__DOT__addr1),5);
        tracep->fullCData(oldp+123,(vlSelf->produce__DOT__u_ascii__DOT__addr2),5);
        tracep->fullCData(oldp+124,(vlSelf->data),8);
        tracep->fullBit(oldp+125,(vlSelf->clk));
        tracep->fullBit(oldp+126,(vlSelf->rst_n));
        tracep->fullBit(oldp+127,(vlSelf->en));
        tracep->fullCData(oldp+128,(vlSelf->counter1),8);
        tracep->fullCData(oldp+129,(vlSelf->counter2),8);
        tracep->fullCData(oldp+130,(vlSelf->ascii1),8);
        tracep->fullCData(oldp+131,(vlSelf->ascii2),8);
        tracep->fullCData(oldp+132,(vlSelf->key1),8);
        tracep->fullCData(oldp+133,(vlSelf->key2),8);
        tracep->fullCData(oldp+134,(((4U & (IData)(vlSelf->produce__DOT__u_fsm__DOT__current_state))
                                      ? 0U : ((2U & (IData)(vlSelf->produce__DOT__u_fsm__DOT__current_state))
                                               ? ((1U 
                                                   & (IData)(vlSelf->produce__DOT__u_fsm__DOT__current_state))
                                                   ? 0U
                                                   : 
                                                  ((IData)(vlSelf->en)
                                                    ? 4U
                                                    : 2U))
                                               : ((1U 
                                                   & (IData)(vlSelf->produce__DOT__u_fsm__DOT__current_state))
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
        tracep->fullCData(oldp+135,(0U),3);
        tracep->fullCData(oldp+136,(1U),3);
        tracep->fullCData(oldp+137,(2U),3);
        tracep->fullCData(oldp+138,(4U),3);
        tracep->fullCData(oldp+139,(vlSelf->produce__DOT__u_ascii__DOT__addr),8);
    }
}
