// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtop__Syms.h"


void Vtop___024root__traceChgSub0(Vtop___024root* vlSelf, VerilatedVcd* tracep);

void Vtop___024root__traceChgTop0(void* voidSelf, VerilatedVcd* tracep) {
    Vtop___024root* const __restrict vlSelf = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    {
        Vtop___024root__traceChgSub0((&vlSymsp->TOP), tracep);
    }
}

void Vtop___024root__traceChgSub0(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode + 1);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
            tracep->chgCData(oldp+0,(vlSelf->top__DOT__u_produce__DOT__u_rom_counter1__DOT__rom[0]),8);
            tracep->chgCData(oldp+1,(vlSelf->top__DOT__u_produce__DOT__u_rom_counter1__DOT__rom[1]),8);
            tracep->chgCData(oldp+2,(vlSelf->top__DOT__u_produce__DOT__u_rom_counter1__DOT__rom[2]),8);
            tracep->chgCData(oldp+3,(vlSelf->top__DOT__u_produce__DOT__u_rom_counter1__DOT__rom[3]),8);
            tracep->chgCData(oldp+4,(vlSelf->top__DOT__u_produce__DOT__u_rom_counter1__DOT__rom[4]),8);
            tracep->chgCData(oldp+5,(vlSelf->top__DOT__u_produce__DOT__u_rom_counter1__DOT__rom[5]),8);
            tracep->chgCData(oldp+6,(vlSelf->top__DOT__u_produce__DOT__u_rom_counter1__DOT__rom[6]),8);
            tracep->chgCData(oldp+7,(vlSelf->top__DOT__u_produce__DOT__u_rom_counter1__DOT__rom[7]),8);
            tracep->chgCData(oldp+8,(vlSelf->top__DOT__u_produce__DOT__u_rom_counter1__DOT__rom[8]),8);
            tracep->chgCData(oldp+9,(vlSelf->top__DOT__u_produce__DOT__u_rom_counter1__DOT__rom[9]),8);
            tracep->chgCData(oldp+10,(vlSelf->top__DOT__u_produce__DOT__u_rom_counter1__DOT__rom[10]),8);
            tracep->chgCData(oldp+11,(vlSelf->top__DOT__u_produce__DOT__u_rom_counter1__DOT__rom[11]),8);
            tracep->chgCData(oldp+12,(vlSelf->top__DOT__u_produce__DOT__u_rom_counter1__DOT__rom[12]),8);
            tracep->chgCData(oldp+13,(vlSelf->top__DOT__u_produce__DOT__u_rom_counter1__DOT__rom[13]),8);
            tracep->chgCData(oldp+14,(vlSelf->top__DOT__u_produce__DOT__u_rom_counter1__DOT__rom[14]),8);
            tracep->chgCData(oldp+15,(vlSelf->top__DOT__u_produce__DOT__u_rom_counter1__DOT__rom[15]),8);
            tracep->chgCData(oldp+16,(vlSelf->top__DOT__u_produce__DOT__u_rom_counter1__DOT__rom[16]),8);
            tracep->chgIData(oldp+17,(vlSelf->top__DOT__u_produce__DOT__u_rom_counter1__DOT__i),32);
            tracep->chgCData(oldp+18,(vlSelf->top__DOT__u_produce__DOT__u_rom_counter2__DOT__rom[0]),8);
            tracep->chgCData(oldp+19,(vlSelf->top__DOT__u_produce__DOT__u_rom_counter2__DOT__rom[1]),8);
            tracep->chgCData(oldp+20,(vlSelf->top__DOT__u_produce__DOT__u_rom_counter2__DOT__rom[2]),8);
            tracep->chgCData(oldp+21,(vlSelf->top__DOT__u_produce__DOT__u_rom_counter2__DOT__rom[3]),8);
            tracep->chgCData(oldp+22,(vlSelf->top__DOT__u_produce__DOT__u_rom_counter2__DOT__rom[4]),8);
            tracep->chgCData(oldp+23,(vlSelf->top__DOT__u_produce__DOT__u_rom_counter2__DOT__rom[5]),8);
            tracep->chgCData(oldp+24,(vlSelf->top__DOT__u_produce__DOT__u_rom_counter2__DOT__rom[6]),8);
            tracep->chgCData(oldp+25,(vlSelf->top__DOT__u_produce__DOT__u_rom_counter2__DOT__rom[7]),8);
            tracep->chgCData(oldp+26,(vlSelf->top__DOT__u_produce__DOT__u_rom_counter2__DOT__rom[8]),8);
            tracep->chgCData(oldp+27,(vlSelf->top__DOT__u_produce__DOT__u_rom_counter2__DOT__rom[9]),8);
            tracep->chgCData(oldp+28,(vlSelf->top__DOT__u_produce__DOT__u_rom_counter2__DOT__rom[10]),8);
            tracep->chgCData(oldp+29,(vlSelf->top__DOT__u_produce__DOT__u_rom_counter2__DOT__rom[11]),8);
            tracep->chgCData(oldp+30,(vlSelf->top__DOT__u_produce__DOT__u_rom_counter2__DOT__rom[12]),8);
            tracep->chgCData(oldp+31,(vlSelf->top__DOT__u_produce__DOT__u_rom_counter2__DOT__rom[13]),8);
            tracep->chgCData(oldp+32,(vlSelf->top__DOT__u_produce__DOT__u_rom_counter2__DOT__rom[14]),8);
            tracep->chgCData(oldp+33,(vlSelf->top__DOT__u_produce__DOT__u_rom_counter2__DOT__rom[15]),8);
            tracep->chgCData(oldp+34,(vlSelf->top__DOT__u_produce__DOT__u_rom_counter2__DOT__rom[16]),8);
            tracep->chgIData(oldp+35,(vlSelf->top__DOT__u_produce__DOT__u_rom_counter2__DOT__i),32);
            tracep->chgCData(oldp+36,(vlSelf->top__DOT__u_produce__DOT__u_rom_ascii1__DOT__rom[0]),8);
            tracep->chgCData(oldp+37,(vlSelf->top__DOT__u_produce__DOT__u_rom_ascii1__DOT__rom[1]),8);
            tracep->chgCData(oldp+38,(vlSelf->top__DOT__u_produce__DOT__u_rom_ascii1__DOT__rom[2]),8);
            tracep->chgCData(oldp+39,(vlSelf->top__DOT__u_produce__DOT__u_rom_ascii1__DOT__rom[3]),8);
            tracep->chgCData(oldp+40,(vlSelf->top__DOT__u_produce__DOT__u_rom_ascii1__DOT__rom[4]),8);
            tracep->chgCData(oldp+41,(vlSelf->top__DOT__u_produce__DOT__u_rom_ascii1__DOT__rom[5]),8);
            tracep->chgCData(oldp+42,(vlSelf->top__DOT__u_produce__DOT__u_rom_ascii1__DOT__rom[6]),8);
            tracep->chgCData(oldp+43,(vlSelf->top__DOT__u_produce__DOT__u_rom_ascii1__DOT__rom[7]),8);
            tracep->chgCData(oldp+44,(vlSelf->top__DOT__u_produce__DOT__u_rom_ascii1__DOT__rom[8]),8);
            tracep->chgCData(oldp+45,(vlSelf->top__DOT__u_produce__DOT__u_rom_ascii1__DOT__rom[9]),8);
            tracep->chgCData(oldp+46,(vlSelf->top__DOT__u_produce__DOT__u_rom_ascii1__DOT__rom[10]),8);
            tracep->chgCData(oldp+47,(vlSelf->top__DOT__u_produce__DOT__u_rom_ascii1__DOT__rom[11]),8);
            tracep->chgCData(oldp+48,(vlSelf->top__DOT__u_produce__DOT__u_rom_ascii1__DOT__rom[12]),8);
            tracep->chgCData(oldp+49,(vlSelf->top__DOT__u_produce__DOT__u_rom_ascii1__DOT__rom[13]),8);
            tracep->chgCData(oldp+50,(vlSelf->top__DOT__u_produce__DOT__u_rom_ascii1__DOT__rom[14]),8);
            tracep->chgCData(oldp+51,(vlSelf->top__DOT__u_produce__DOT__u_rom_ascii1__DOT__rom[15]),8);
            tracep->chgCData(oldp+52,(vlSelf->top__DOT__u_produce__DOT__u_rom_ascii1__DOT__rom[16]),8);
            tracep->chgIData(oldp+53,(vlSelf->top__DOT__u_produce__DOT__u_rom_ascii1__DOT__i),32);
            tracep->chgCData(oldp+54,(vlSelf->top__DOT__u_produce__DOT__u_rom_ascii2__DOT__rom[0]),8);
            tracep->chgCData(oldp+55,(vlSelf->top__DOT__u_produce__DOT__u_rom_ascii2__DOT__rom[1]),8);
            tracep->chgCData(oldp+56,(vlSelf->top__DOT__u_produce__DOT__u_rom_ascii2__DOT__rom[2]),8);
            tracep->chgCData(oldp+57,(vlSelf->top__DOT__u_produce__DOT__u_rom_ascii2__DOT__rom[3]),8);
            tracep->chgCData(oldp+58,(vlSelf->top__DOT__u_produce__DOT__u_rom_ascii2__DOT__rom[4]),8);
            tracep->chgCData(oldp+59,(vlSelf->top__DOT__u_produce__DOT__u_rom_ascii2__DOT__rom[5]),8);
            tracep->chgCData(oldp+60,(vlSelf->top__DOT__u_produce__DOT__u_rom_ascii2__DOT__rom[6]),8);
            tracep->chgCData(oldp+61,(vlSelf->top__DOT__u_produce__DOT__u_rom_ascii2__DOT__rom[7]),8);
            tracep->chgCData(oldp+62,(vlSelf->top__DOT__u_produce__DOT__u_rom_ascii2__DOT__rom[8]),8);
            tracep->chgCData(oldp+63,(vlSelf->top__DOT__u_produce__DOT__u_rom_ascii2__DOT__rom[9]),8);
            tracep->chgCData(oldp+64,(vlSelf->top__DOT__u_produce__DOT__u_rom_ascii2__DOT__rom[10]),8);
            tracep->chgCData(oldp+65,(vlSelf->top__DOT__u_produce__DOT__u_rom_ascii2__DOT__rom[11]),8);
            tracep->chgCData(oldp+66,(vlSelf->top__DOT__u_produce__DOT__u_rom_ascii2__DOT__rom[12]),8);
            tracep->chgCData(oldp+67,(vlSelf->top__DOT__u_produce__DOT__u_rom_ascii2__DOT__rom[13]),8);
            tracep->chgCData(oldp+68,(vlSelf->top__DOT__u_produce__DOT__u_rom_ascii2__DOT__rom[14]),8);
            tracep->chgCData(oldp+69,(vlSelf->top__DOT__u_produce__DOT__u_rom_ascii2__DOT__rom[15]),8);
            tracep->chgCData(oldp+70,(vlSelf->top__DOT__u_produce__DOT__u_rom_ascii2__DOT__rom[16]),8);
            tracep->chgIData(oldp+71,(vlSelf->top__DOT__u_produce__DOT__u_rom_ascii2__DOT__i),32);
            tracep->chgIData(oldp+72,(vlSelf->top__DOT__u_produce__DOT__u_ascii__DOT__i),32);
            tracep->chgCData(oldp+73,(vlSelf->top__DOT__u_produce__DOT__u_ascii__DOT__u_rom1__DOT__rom[0]),8);
            tracep->chgCData(oldp+74,(vlSelf->top__DOT__u_produce__DOT__u_ascii__DOT__u_rom1__DOT__rom[1]),8);
            tracep->chgCData(oldp+75,(vlSelf->top__DOT__u_produce__DOT__u_ascii__DOT__u_rom1__DOT__rom[2]),8);
            tracep->chgCData(oldp+76,(vlSelf->top__DOT__u_produce__DOT__u_ascii__DOT__u_rom1__DOT__rom[3]),8);
            tracep->chgCData(oldp+77,(vlSelf->top__DOT__u_produce__DOT__u_ascii__DOT__u_rom1__DOT__rom[4]),8);
            tracep->chgCData(oldp+78,(vlSelf->top__DOT__u_produce__DOT__u_ascii__DOT__u_rom1__DOT__rom[5]),8);
            tracep->chgCData(oldp+79,(vlSelf->top__DOT__u_produce__DOT__u_ascii__DOT__u_rom1__DOT__rom[6]),8);
            tracep->chgCData(oldp+80,(vlSelf->top__DOT__u_produce__DOT__u_ascii__DOT__u_rom1__DOT__rom[7]),8);
            tracep->chgCData(oldp+81,(vlSelf->top__DOT__u_produce__DOT__u_ascii__DOT__u_rom1__DOT__rom[8]),8);
            tracep->chgCData(oldp+82,(vlSelf->top__DOT__u_produce__DOT__u_ascii__DOT__u_rom1__DOT__rom[9]),8);
            tracep->chgCData(oldp+83,(vlSelf->top__DOT__u_produce__DOT__u_ascii__DOT__u_rom1__DOT__rom[10]),8);
            tracep->chgCData(oldp+84,(vlSelf->top__DOT__u_produce__DOT__u_ascii__DOT__u_rom1__DOT__rom[11]),8);
            tracep->chgCData(oldp+85,(vlSelf->top__DOT__u_produce__DOT__u_ascii__DOT__u_rom1__DOT__rom[12]),8);
            tracep->chgCData(oldp+86,(vlSelf->top__DOT__u_produce__DOT__u_ascii__DOT__u_rom1__DOT__rom[13]),8);
            tracep->chgCData(oldp+87,(vlSelf->top__DOT__u_produce__DOT__u_ascii__DOT__u_rom1__DOT__rom[14]),8);
            tracep->chgCData(oldp+88,(vlSelf->top__DOT__u_produce__DOT__u_ascii__DOT__u_rom1__DOT__rom[15]),8);
            tracep->chgCData(oldp+89,(vlSelf->top__DOT__u_produce__DOT__u_ascii__DOT__u_rom1__DOT__rom[16]),8);
            tracep->chgIData(oldp+90,(vlSelf->top__DOT__u_produce__DOT__u_ascii__DOT__u_rom1__DOT__i),32);
            tracep->chgCData(oldp+91,(vlSelf->top__DOT__u_produce__DOT__u_ascii__DOT__u_rom2__DOT__rom[0]),8);
            tracep->chgCData(oldp+92,(vlSelf->top__DOT__u_produce__DOT__u_ascii__DOT__u_rom2__DOT__rom[1]),8);
            tracep->chgCData(oldp+93,(vlSelf->top__DOT__u_produce__DOT__u_ascii__DOT__u_rom2__DOT__rom[2]),8);
            tracep->chgCData(oldp+94,(vlSelf->top__DOT__u_produce__DOT__u_ascii__DOT__u_rom2__DOT__rom[3]),8);
            tracep->chgCData(oldp+95,(vlSelf->top__DOT__u_produce__DOT__u_ascii__DOT__u_rom2__DOT__rom[4]),8);
            tracep->chgCData(oldp+96,(vlSelf->top__DOT__u_produce__DOT__u_ascii__DOT__u_rom2__DOT__rom[5]),8);
            tracep->chgCData(oldp+97,(vlSelf->top__DOT__u_produce__DOT__u_ascii__DOT__u_rom2__DOT__rom[6]),8);
            tracep->chgCData(oldp+98,(vlSelf->top__DOT__u_produce__DOT__u_ascii__DOT__u_rom2__DOT__rom[7]),8);
            tracep->chgCData(oldp+99,(vlSelf->top__DOT__u_produce__DOT__u_ascii__DOT__u_rom2__DOT__rom[8]),8);
            tracep->chgCData(oldp+100,(vlSelf->top__DOT__u_produce__DOT__u_ascii__DOT__u_rom2__DOT__rom[9]),8);
            tracep->chgCData(oldp+101,(vlSelf->top__DOT__u_produce__DOT__u_ascii__DOT__u_rom2__DOT__rom[10]),8);
            tracep->chgCData(oldp+102,(vlSelf->top__DOT__u_produce__DOT__u_ascii__DOT__u_rom2__DOT__rom[11]),8);
            tracep->chgCData(oldp+103,(vlSelf->top__DOT__u_produce__DOT__u_ascii__DOT__u_rom2__DOT__rom[12]),8);
            tracep->chgCData(oldp+104,(vlSelf->top__DOT__u_produce__DOT__u_ascii__DOT__u_rom2__DOT__rom[13]),8);
            tracep->chgCData(oldp+105,(vlSelf->top__DOT__u_produce__DOT__u_ascii__DOT__u_rom2__DOT__rom[14]),8);
            tracep->chgCData(oldp+106,(vlSelf->top__DOT__u_produce__DOT__u_ascii__DOT__u_rom2__DOT__rom[15]),8);
            tracep->chgCData(oldp+107,(vlSelf->top__DOT__u_produce__DOT__u_ascii__DOT__u_rom2__DOT__rom[16]),8);
            tracep->chgIData(oldp+108,(vlSelf->top__DOT__u_produce__DOT__u_ascii__DOT__u_rom2__DOT__i),32);
        }
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
            tracep->chgCData(oldp+109,(vlSelf->top__DOT__u_produce__DOT__u_fsm__DOT__current_state),3);
            tracep->chgCData(oldp+110,(vlSelf->top__DOT__u_produce__DOT__counter),8);
            tracep->chgCData(oldp+111,(vlSelf->top__DOT__u_produce__DOT__tmp),8);
            tracep->chgCData(oldp+112,(vlSelf->top__DOT__u_produce__DOT__buffer),8);
            tracep->chgCData(oldp+113,(vlSelf->top__DOT__u_produce__DOT__last_state),3);
            tracep->chgCData(oldp+114,((0xfU & ((IData)(vlSelf->top__DOT__u_produce__DOT__counter) 
                                                >> 4U))),5);
            tracep->chgCData(oldp+115,((0xfU & (IData)(vlSelf->top__DOT__u_produce__DOT__counter))),5);
            tracep->chgCData(oldp+116,(vlSelf->top__DOT__u_produce__DOT__u_ascii__DOT__buffer),8);
        }
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[3U])) {
            tracep->chgCData(oldp+117,(vlSelf->top__DOT__u_keyboard__DOT__data),8);
            tracep->chgBit(oldp+118,(vlSelf->top__DOT__en));
            tracep->chgSData(oldp+119,(vlSelf->top__DOT__u_keyboard__DOT__buffer),10);
            tracep->chgCData(oldp+120,(vlSelf->top__DOT__u_keyboard__DOT__count),4);
            tracep->chgCData(oldp+121,(vlSelf->top__DOT__u_keyboard__DOT__ps2_clk_sync),3);
            tracep->chgBit(oldp+122,((IData)((4U == 
                                              (6U & (IData)(vlSelf->top__DOT__u_keyboard__DOT__ps2_clk_sync))))));
            tracep->chgCData(oldp+123,(vlSelf->top__DOT__u_produce__DOT__u_ascii__DOT__lut_out),8);
        }
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[4U])) {
            tracep->chgCData(oldp+124,(vlSelf->top__DOT__u_produce__DOT__addr1),5);
            tracep->chgCData(oldp+125,(vlSelf->top__DOT__u_produce__DOT__addr2),5);
            tracep->chgCData(oldp+126,(vlSelf->top__DOT__u_produce__DOT__u_ascii__DOT__addr1),5);
            tracep->chgCData(oldp+127,(vlSelf->top__DOT__u_produce__DOT__u_ascii__DOT__addr2),5);
        }
        tracep->chgBit(oldp+128,(vlSelf->clk));
        tracep->chgBit(oldp+129,(vlSelf->rst_n));
        tracep->chgBit(oldp+130,(vlSelf->ps2_clk));
        tracep->chgBit(oldp+131,(vlSelf->ps2_data));
        tracep->chgCData(oldp+132,(vlSelf->counter1),8);
        tracep->chgCData(oldp+133,(vlSelf->counter2),8);
        tracep->chgCData(oldp+134,(vlSelf->ascii1),8);
        tracep->chgCData(oldp+135,(vlSelf->ascii2),8);
        tracep->chgCData(oldp+136,(vlSelf->key1),8);
        tracep->chgCData(oldp+137,(vlSelf->key2),8);
        tracep->chgCData(oldp+138,(((4U & (IData)(vlSelf->top__DOT__u_produce__DOT__u_fsm__DOT__current_state))
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
    }
}

void Vtop___024root__traceCleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    Vtop___024root* const __restrict vlSelf = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        vlSymsp->__Vm_activity = false;
        vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
        vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
        vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
        vlSymsp->TOP.__Vm_traceActivity[3U] = 0U;
        vlSymsp->TOP.__Vm_traceActivity[4U] = 0U;
    }
}
