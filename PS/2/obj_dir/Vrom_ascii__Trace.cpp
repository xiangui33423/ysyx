// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vrom_ascii__Syms.h"


void Vrom_ascii___024root__traceChgSub0(Vrom_ascii___024root* vlSelf, VerilatedVcd* tracep);

void Vrom_ascii___024root__traceChgTop0(void* voidSelf, VerilatedVcd* tracep) {
    Vrom_ascii___024root* const __restrict vlSelf = static_cast<Vrom_ascii___024root*>(voidSelf);
    Vrom_ascii__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    {
        Vrom_ascii___024root__traceChgSub0((&vlSymsp->TOP), tracep);
    }
}

void Vrom_ascii___024root__traceChgSub0(Vrom_ascii___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vrom_ascii__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode + 1);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
            tracep->chgIData(oldp+0,(vlSelf->rom_ascii__DOT__i),32);
            tracep->chgCData(oldp+1,(vlSelf->rom_ascii__DOT__u_rom1__DOT__rom[0]),8);
            tracep->chgCData(oldp+2,(vlSelf->rom_ascii__DOT__u_rom1__DOT__rom[1]),8);
            tracep->chgCData(oldp+3,(vlSelf->rom_ascii__DOT__u_rom1__DOT__rom[2]),8);
            tracep->chgCData(oldp+4,(vlSelf->rom_ascii__DOT__u_rom1__DOT__rom[3]),8);
            tracep->chgCData(oldp+5,(vlSelf->rom_ascii__DOT__u_rom1__DOT__rom[4]),8);
            tracep->chgCData(oldp+6,(vlSelf->rom_ascii__DOT__u_rom1__DOT__rom[5]),8);
            tracep->chgCData(oldp+7,(vlSelf->rom_ascii__DOT__u_rom1__DOT__rom[6]),8);
            tracep->chgCData(oldp+8,(vlSelf->rom_ascii__DOT__u_rom1__DOT__rom[7]),8);
            tracep->chgCData(oldp+9,(vlSelf->rom_ascii__DOT__u_rom1__DOT__rom[8]),8);
            tracep->chgCData(oldp+10,(vlSelf->rom_ascii__DOT__u_rom1__DOT__rom[9]),8);
            tracep->chgCData(oldp+11,(vlSelf->rom_ascii__DOT__u_rom1__DOT__rom[10]),8);
            tracep->chgCData(oldp+12,(vlSelf->rom_ascii__DOT__u_rom1__DOT__rom[11]),8);
            tracep->chgCData(oldp+13,(vlSelf->rom_ascii__DOT__u_rom1__DOT__rom[12]),8);
            tracep->chgCData(oldp+14,(vlSelf->rom_ascii__DOT__u_rom1__DOT__rom[13]),8);
            tracep->chgCData(oldp+15,(vlSelf->rom_ascii__DOT__u_rom1__DOT__rom[14]),8);
            tracep->chgCData(oldp+16,(vlSelf->rom_ascii__DOT__u_rom1__DOT__rom[15]),8);
            tracep->chgCData(oldp+17,(vlSelf->rom_ascii__DOT__u_rom1__DOT__rom[16]),8);
            tracep->chgIData(oldp+18,(vlSelf->rom_ascii__DOT__u_rom1__DOT__i),32);
            tracep->chgCData(oldp+19,(vlSelf->rom_ascii__DOT__u_rom2__DOT__rom[0]),8);
            tracep->chgCData(oldp+20,(vlSelf->rom_ascii__DOT__u_rom2__DOT__rom[1]),8);
            tracep->chgCData(oldp+21,(vlSelf->rom_ascii__DOT__u_rom2__DOT__rom[2]),8);
            tracep->chgCData(oldp+22,(vlSelf->rom_ascii__DOT__u_rom2__DOT__rom[3]),8);
            tracep->chgCData(oldp+23,(vlSelf->rom_ascii__DOT__u_rom2__DOT__rom[4]),8);
            tracep->chgCData(oldp+24,(vlSelf->rom_ascii__DOT__u_rom2__DOT__rom[5]),8);
            tracep->chgCData(oldp+25,(vlSelf->rom_ascii__DOT__u_rom2__DOT__rom[6]),8);
            tracep->chgCData(oldp+26,(vlSelf->rom_ascii__DOT__u_rom2__DOT__rom[7]),8);
            tracep->chgCData(oldp+27,(vlSelf->rom_ascii__DOT__u_rom2__DOT__rom[8]),8);
            tracep->chgCData(oldp+28,(vlSelf->rom_ascii__DOT__u_rom2__DOT__rom[9]),8);
            tracep->chgCData(oldp+29,(vlSelf->rom_ascii__DOT__u_rom2__DOT__rom[10]),8);
            tracep->chgCData(oldp+30,(vlSelf->rom_ascii__DOT__u_rom2__DOT__rom[11]),8);
            tracep->chgCData(oldp+31,(vlSelf->rom_ascii__DOT__u_rom2__DOT__rom[12]),8);
            tracep->chgCData(oldp+32,(vlSelf->rom_ascii__DOT__u_rom2__DOT__rom[13]),8);
            tracep->chgCData(oldp+33,(vlSelf->rom_ascii__DOT__u_rom2__DOT__rom[14]),8);
            tracep->chgCData(oldp+34,(vlSelf->rom_ascii__DOT__u_rom2__DOT__rom[15]),8);
            tracep->chgCData(oldp+35,(vlSelf->rom_ascii__DOT__u_rom2__DOT__rom[16]),8);
            tracep->chgIData(oldp+36,(vlSelf->rom_ascii__DOT__u_rom2__DOT__i),32);
        }
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
            tracep->chgCData(oldp+37,(vlSelf->rom_ascii__DOT__lut_out),8);
            tracep->chgCData(oldp+38,(vlSelf->rom_ascii__DOT__addr1),5);
            tracep->chgCData(oldp+39,(vlSelf->rom_ascii__DOT__addr2),5);
        }
        tracep->chgBit(oldp+40,(vlSelf->clk));
        tracep->chgBit(oldp+41,(vlSelf->rst_n));
        tracep->chgCData(oldp+42,(vlSelf->data),8);
        tracep->chgCData(oldp+43,(vlSelf->seg1),8);
        tracep->chgCData(oldp+44,(vlSelf->seg2),8);
        tracep->chgCData(oldp+45,(vlSelf->rom_ascii__DOT__tmp),8);
        tracep->chgCData(oldp+46,(vlSelf->rom_ascii__DOT__buffer),8);
    }
}

void Vrom_ascii___024root__traceCleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    Vrom_ascii___024root* const __restrict vlSelf = static_cast<Vrom_ascii___024root*>(voidSelf);
    Vrom_ascii__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        vlSymsp->__Vm_activity = false;
        vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
        vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
        vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
    }
}
