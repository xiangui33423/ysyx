// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vproduce__Syms.h"


void Vproduce___024root__traceChgSub0(Vproduce___024root* vlSelf, VerilatedVcd* tracep);

void Vproduce___024root__traceChgTop0(void* voidSelf, VerilatedVcd* tracep) {
    Vproduce___024root* const __restrict vlSelf = static_cast<Vproduce___024root*>(voidSelf);
    Vproduce__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    {
        Vproduce___024root__traceChgSub0((&vlSymsp->TOP), tracep);
    }
}

void Vproduce___024root__traceChgSub0(Vproduce___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vproduce__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode + 1);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
            tracep->chgCData(oldp+0,(vlSelf->produce__DOT__u_fsm__DOT__current_state),3);
            tracep->chgCData(oldp+1,(vlSelf->produce__DOT__counter),8);
            tracep->chgCData(oldp+2,(vlSelf->produce__DOT__tmp),8);
            tracep->chgCData(oldp+3,(vlSelf->produce__DOT__buffer),8);
            tracep->chgCData(oldp+4,(vlSelf->produce__DOT__last_state),3);
            tracep->chgCData(oldp+5,((0xfU & ((IData)(vlSelf->produce__DOT__counter) 
                                              >> 4U))),5);
            tracep->chgCData(oldp+6,((0xfU & (IData)(vlSelf->produce__DOT__counter))),5);
            tracep->chgCData(oldp+7,(vlSelf->produce__DOT__u_ascii__DOT__tmp),8);
            tracep->chgCData(oldp+8,(vlSelf->produce__DOT__u_ascii__DOT__buffer),8);
        }
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
            tracep->chgCData(oldp+9,(vlSelf->produce__DOT__u_rom_counter1__DOT__rom[0]),8);
            tracep->chgCData(oldp+10,(vlSelf->produce__DOT__u_rom_counter1__DOT__rom[1]),8);
            tracep->chgCData(oldp+11,(vlSelf->produce__DOT__u_rom_counter1__DOT__rom[2]),8);
            tracep->chgCData(oldp+12,(vlSelf->produce__DOT__u_rom_counter1__DOT__rom[3]),8);
            tracep->chgCData(oldp+13,(vlSelf->produce__DOT__u_rom_counter1__DOT__rom[4]),8);
            tracep->chgCData(oldp+14,(vlSelf->produce__DOT__u_rom_counter1__DOT__rom[5]),8);
            tracep->chgCData(oldp+15,(vlSelf->produce__DOT__u_rom_counter1__DOT__rom[6]),8);
            tracep->chgCData(oldp+16,(vlSelf->produce__DOT__u_rom_counter1__DOT__rom[7]),8);
            tracep->chgCData(oldp+17,(vlSelf->produce__DOT__u_rom_counter1__DOT__rom[8]),8);
            tracep->chgCData(oldp+18,(vlSelf->produce__DOT__u_rom_counter1__DOT__rom[9]),8);
            tracep->chgCData(oldp+19,(vlSelf->produce__DOT__u_rom_counter1__DOT__rom[10]),8);
            tracep->chgCData(oldp+20,(vlSelf->produce__DOT__u_rom_counter1__DOT__rom[11]),8);
            tracep->chgCData(oldp+21,(vlSelf->produce__DOT__u_rom_counter1__DOT__rom[12]),8);
            tracep->chgCData(oldp+22,(vlSelf->produce__DOT__u_rom_counter1__DOT__rom[13]),8);
            tracep->chgCData(oldp+23,(vlSelf->produce__DOT__u_rom_counter1__DOT__rom[14]),8);
            tracep->chgCData(oldp+24,(vlSelf->produce__DOT__u_rom_counter1__DOT__rom[15]),8);
            tracep->chgCData(oldp+25,(vlSelf->produce__DOT__u_rom_counter1__DOT__rom[16]),8);
            tracep->chgIData(oldp+26,(vlSelf->produce__DOT__u_rom_counter1__DOT__i),32);
            tracep->chgCData(oldp+27,(vlSelf->produce__DOT__u_rom_counter2__DOT__rom[0]),8);
            tracep->chgCData(oldp+28,(vlSelf->produce__DOT__u_rom_counter2__DOT__rom[1]),8);
            tracep->chgCData(oldp+29,(vlSelf->produce__DOT__u_rom_counter2__DOT__rom[2]),8);
            tracep->chgCData(oldp+30,(vlSelf->produce__DOT__u_rom_counter2__DOT__rom[3]),8);
            tracep->chgCData(oldp+31,(vlSelf->produce__DOT__u_rom_counter2__DOT__rom[4]),8);
            tracep->chgCData(oldp+32,(vlSelf->produce__DOT__u_rom_counter2__DOT__rom[5]),8);
            tracep->chgCData(oldp+33,(vlSelf->produce__DOT__u_rom_counter2__DOT__rom[6]),8);
            tracep->chgCData(oldp+34,(vlSelf->produce__DOT__u_rom_counter2__DOT__rom[7]),8);
            tracep->chgCData(oldp+35,(vlSelf->produce__DOT__u_rom_counter2__DOT__rom[8]),8);
            tracep->chgCData(oldp+36,(vlSelf->produce__DOT__u_rom_counter2__DOT__rom[9]),8);
            tracep->chgCData(oldp+37,(vlSelf->produce__DOT__u_rom_counter2__DOT__rom[10]),8);
            tracep->chgCData(oldp+38,(vlSelf->produce__DOT__u_rom_counter2__DOT__rom[11]),8);
            tracep->chgCData(oldp+39,(vlSelf->produce__DOT__u_rom_counter2__DOT__rom[12]),8);
            tracep->chgCData(oldp+40,(vlSelf->produce__DOT__u_rom_counter2__DOT__rom[13]),8);
            tracep->chgCData(oldp+41,(vlSelf->produce__DOT__u_rom_counter2__DOT__rom[14]),8);
            tracep->chgCData(oldp+42,(vlSelf->produce__DOT__u_rom_counter2__DOT__rom[15]),8);
            tracep->chgCData(oldp+43,(vlSelf->produce__DOT__u_rom_counter2__DOT__rom[16]),8);
            tracep->chgIData(oldp+44,(vlSelf->produce__DOT__u_rom_counter2__DOT__i),32);
            tracep->chgCData(oldp+45,(vlSelf->produce__DOT__u_rom_ascii1__DOT__rom[0]),8);
            tracep->chgCData(oldp+46,(vlSelf->produce__DOT__u_rom_ascii1__DOT__rom[1]),8);
            tracep->chgCData(oldp+47,(vlSelf->produce__DOT__u_rom_ascii1__DOT__rom[2]),8);
            tracep->chgCData(oldp+48,(vlSelf->produce__DOT__u_rom_ascii1__DOT__rom[3]),8);
            tracep->chgCData(oldp+49,(vlSelf->produce__DOT__u_rom_ascii1__DOT__rom[4]),8);
            tracep->chgCData(oldp+50,(vlSelf->produce__DOT__u_rom_ascii1__DOT__rom[5]),8);
            tracep->chgCData(oldp+51,(vlSelf->produce__DOT__u_rom_ascii1__DOT__rom[6]),8);
            tracep->chgCData(oldp+52,(vlSelf->produce__DOT__u_rom_ascii1__DOT__rom[7]),8);
            tracep->chgCData(oldp+53,(vlSelf->produce__DOT__u_rom_ascii1__DOT__rom[8]),8);
            tracep->chgCData(oldp+54,(vlSelf->produce__DOT__u_rom_ascii1__DOT__rom[9]),8);
            tracep->chgCData(oldp+55,(vlSelf->produce__DOT__u_rom_ascii1__DOT__rom[10]),8);
            tracep->chgCData(oldp+56,(vlSelf->produce__DOT__u_rom_ascii1__DOT__rom[11]),8);
            tracep->chgCData(oldp+57,(vlSelf->produce__DOT__u_rom_ascii1__DOT__rom[12]),8);
            tracep->chgCData(oldp+58,(vlSelf->produce__DOT__u_rom_ascii1__DOT__rom[13]),8);
            tracep->chgCData(oldp+59,(vlSelf->produce__DOT__u_rom_ascii1__DOT__rom[14]),8);
            tracep->chgCData(oldp+60,(vlSelf->produce__DOT__u_rom_ascii1__DOT__rom[15]),8);
            tracep->chgCData(oldp+61,(vlSelf->produce__DOT__u_rom_ascii1__DOT__rom[16]),8);
            tracep->chgIData(oldp+62,(vlSelf->produce__DOT__u_rom_ascii1__DOT__i),32);
            tracep->chgCData(oldp+63,(vlSelf->produce__DOT__u_rom_ascii2__DOT__rom[0]),8);
            tracep->chgCData(oldp+64,(vlSelf->produce__DOT__u_rom_ascii2__DOT__rom[1]),8);
            tracep->chgCData(oldp+65,(vlSelf->produce__DOT__u_rom_ascii2__DOT__rom[2]),8);
            tracep->chgCData(oldp+66,(vlSelf->produce__DOT__u_rom_ascii2__DOT__rom[3]),8);
            tracep->chgCData(oldp+67,(vlSelf->produce__DOT__u_rom_ascii2__DOT__rom[4]),8);
            tracep->chgCData(oldp+68,(vlSelf->produce__DOT__u_rom_ascii2__DOT__rom[5]),8);
            tracep->chgCData(oldp+69,(vlSelf->produce__DOT__u_rom_ascii2__DOT__rom[6]),8);
            tracep->chgCData(oldp+70,(vlSelf->produce__DOT__u_rom_ascii2__DOT__rom[7]),8);
            tracep->chgCData(oldp+71,(vlSelf->produce__DOT__u_rom_ascii2__DOT__rom[8]),8);
            tracep->chgCData(oldp+72,(vlSelf->produce__DOT__u_rom_ascii2__DOT__rom[9]),8);
            tracep->chgCData(oldp+73,(vlSelf->produce__DOT__u_rom_ascii2__DOT__rom[10]),8);
            tracep->chgCData(oldp+74,(vlSelf->produce__DOT__u_rom_ascii2__DOT__rom[11]),8);
            tracep->chgCData(oldp+75,(vlSelf->produce__DOT__u_rom_ascii2__DOT__rom[12]),8);
            tracep->chgCData(oldp+76,(vlSelf->produce__DOT__u_rom_ascii2__DOT__rom[13]),8);
            tracep->chgCData(oldp+77,(vlSelf->produce__DOT__u_rom_ascii2__DOT__rom[14]),8);
            tracep->chgCData(oldp+78,(vlSelf->produce__DOT__u_rom_ascii2__DOT__rom[15]),8);
            tracep->chgCData(oldp+79,(vlSelf->produce__DOT__u_rom_ascii2__DOT__rom[16]),8);
            tracep->chgIData(oldp+80,(vlSelf->produce__DOT__u_rom_ascii2__DOT__i),32);
            tracep->chgIData(oldp+81,(vlSelf->produce__DOT__u_ascii__DOT__i),32);
            tracep->chgCData(oldp+82,(vlSelf->produce__DOT__u_ascii__DOT__u_rom1__DOT__rom[0]),8);
            tracep->chgCData(oldp+83,(vlSelf->produce__DOT__u_ascii__DOT__u_rom1__DOT__rom[1]),8);
            tracep->chgCData(oldp+84,(vlSelf->produce__DOT__u_ascii__DOT__u_rom1__DOT__rom[2]),8);
            tracep->chgCData(oldp+85,(vlSelf->produce__DOT__u_ascii__DOT__u_rom1__DOT__rom[3]),8);
            tracep->chgCData(oldp+86,(vlSelf->produce__DOT__u_ascii__DOT__u_rom1__DOT__rom[4]),8);
            tracep->chgCData(oldp+87,(vlSelf->produce__DOT__u_ascii__DOT__u_rom1__DOT__rom[5]),8);
            tracep->chgCData(oldp+88,(vlSelf->produce__DOT__u_ascii__DOT__u_rom1__DOT__rom[6]),8);
            tracep->chgCData(oldp+89,(vlSelf->produce__DOT__u_ascii__DOT__u_rom1__DOT__rom[7]),8);
            tracep->chgCData(oldp+90,(vlSelf->produce__DOT__u_ascii__DOT__u_rom1__DOT__rom[8]),8);
            tracep->chgCData(oldp+91,(vlSelf->produce__DOT__u_ascii__DOT__u_rom1__DOT__rom[9]),8);
            tracep->chgCData(oldp+92,(vlSelf->produce__DOT__u_ascii__DOT__u_rom1__DOT__rom[10]),8);
            tracep->chgCData(oldp+93,(vlSelf->produce__DOT__u_ascii__DOT__u_rom1__DOT__rom[11]),8);
            tracep->chgCData(oldp+94,(vlSelf->produce__DOT__u_ascii__DOT__u_rom1__DOT__rom[12]),8);
            tracep->chgCData(oldp+95,(vlSelf->produce__DOT__u_ascii__DOT__u_rom1__DOT__rom[13]),8);
            tracep->chgCData(oldp+96,(vlSelf->produce__DOT__u_ascii__DOT__u_rom1__DOT__rom[14]),8);
            tracep->chgCData(oldp+97,(vlSelf->produce__DOT__u_ascii__DOT__u_rom1__DOT__rom[15]),8);
            tracep->chgCData(oldp+98,(vlSelf->produce__DOT__u_ascii__DOT__u_rom1__DOT__rom[16]),8);
            tracep->chgIData(oldp+99,(vlSelf->produce__DOT__u_ascii__DOT__u_rom1__DOT__i),32);
            tracep->chgCData(oldp+100,(vlSelf->produce__DOT__u_ascii__DOT__u_rom2__DOT__rom[0]),8);
            tracep->chgCData(oldp+101,(vlSelf->produce__DOT__u_ascii__DOT__u_rom2__DOT__rom[1]),8);
            tracep->chgCData(oldp+102,(vlSelf->produce__DOT__u_ascii__DOT__u_rom2__DOT__rom[2]),8);
            tracep->chgCData(oldp+103,(vlSelf->produce__DOT__u_ascii__DOT__u_rom2__DOT__rom[3]),8);
            tracep->chgCData(oldp+104,(vlSelf->produce__DOT__u_ascii__DOT__u_rom2__DOT__rom[4]),8);
            tracep->chgCData(oldp+105,(vlSelf->produce__DOT__u_ascii__DOT__u_rom2__DOT__rom[5]),8);
            tracep->chgCData(oldp+106,(vlSelf->produce__DOT__u_ascii__DOT__u_rom2__DOT__rom[6]),8);
            tracep->chgCData(oldp+107,(vlSelf->produce__DOT__u_ascii__DOT__u_rom2__DOT__rom[7]),8);
            tracep->chgCData(oldp+108,(vlSelf->produce__DOT__u_ascii__DOT__u_rom2__DOT__rom[8]),8);
            tracep->chgCData(oldp+109,(vlSelf->produce__DOT__u_ascii__DOT__u_rom2__DOT__rom[9]),8);
            tracep->chgCData(oldp+110,(vlSelf->produce__DOT__u_ascii__DOT__u_rom2__DOT__rom[10]),8);
            tracep->chgCData(oldp+111,(vlSelf->produce__DOT__u_ascii__DOT__u_rom2__DOT__rom[11]),8);
            tracep->chgCData(oldp+112,(vlSelf->produce__DOT__u_ascii__DOT__u_rom2__DOT__rom[12]),8);
            tracep->chgCData(oldp+113,(vlSelf->produce__DOT__u_ascii__DOT__u_rom2__DOT__rom[13]),8);
            tracep->chgCData(oldp+114,(vlSelf->produce__DOT__u_ascii__DOT__u_rom2__DOT__rom[14]),8);
            tracep->chgCData(oldp+115,(vlSelf->produce__DOT__u_ascii__DOT__u_rom2__DOT__rom[15]),8);
            tracep->chgCData(oldp+116,(vlSelf->produce__DOT__u_ascii__DOT__u_rom2__DOT__rom[16]),8);
            tracep->chgIData(oldp+117,(vlSelf->produce__DOT__u_ascii__DOT__u_rom2__DOT__i),32);
        }
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[3U])) {
            tracep->chgCData(oldp+118,(vlSelf->produce__DOT__addr1),5);
            tracep->chgCData(oldp+119,(vlSelf->produce__DOT__addr2),5);
            tracep->chgCData(oldp+120,(vlSelf->produce__DOT__u_ascii__DOT__lut_out),8);
            tracep->chgCData(oldp+121,(vlSelf->produce__DOT__u_ascii__DOT__addr1),5);
            tracep->chgCData(oldp+122,(vlSelf->produce__DOT__u_ascii__DOT__addr2),5);
        }
        tracep->chgCData(oldp+123,(vlSelf->data),8);
        tracep->chgBit(oldp+124,(vlSelf->clk));
        tracep->chgBit(oldp+125,(vlSelf->rst_n));
        tracep->chgBit(oldp+126,(vlSelf->en));
        tracep->chgCData(oldp+127,(vlSelf->counter1),8);
        tracep->chgCData(oldp+128,(vlSelf->counter2),8);
        tracep->chgCData(oldp+129,(vlSelf->ascii1),8);
        tracep->chgCData(oldp+130,(vlSelf->ascii2),8);
        tracep->chgCData(oldp+131,(vlSelf->key1),8);
        tracep->chgCData(oldp+132,(vlSelf->key2),8);
        tracep->chgCData(oldp+133,(((4U & (IData)(vlSelf->produce__DOT__u_fsm__DOT__current_state))
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
    }
}

void Vproduce___024root__traceCleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    Vproduce___024root* const __restrict vlSelf = static_cast<Vproduce___024root*>(voidSelf);
    Vproduce__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        vlSymsp->__Vm_activity = false;
        vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
        vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
        vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
        vlSymsp->TOP.__Vm_traceActivity[3U] = 0U;
    }
}
