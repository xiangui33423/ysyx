// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vysyx_23060096_ImmGen__Syms.h"


void Vysyx_23060096_ImmGen___024root__traceChgSub0(Vysyx_23060096_ImmGen___024root* vlSelf, VerilatedVcd* tracep);

void Vysyx_23060096_ImmGen___024root__traceChgTop0(void* voidSelf, VerilatedVcd* tracep) {
    Vysyx_23060096_ImmGen___024root* const __restrict vlSelf = static_cast<Vysyx_23060096_ImmGen___024root*>(voidSelf);
    Vysyx_23060096_ImmGen__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    {
        Vysyx_23060096_ImmGen___024root__traceChgSub0((&vlSymsp->TOP), tracep);
    }
}

void Vysyx_23060096_ImmGen___024root__traceChgSub0(Vysyx_23060096_ImmGen___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_23060096_ImmGen__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode + 1);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->chgBit(oldp+0,(vlSelf->clk));
        tracep->chgBit(oldp+1,(vlSelf->rstn));
        tracep->chgIData(oldp+2,(vlSelf->inst),25);
        tracep->chgCData(oldp+3,(vlSelf->ExtOP),3);
        tracep->chgIData(oldp+4,(vlSelf->imm),32);
        tracep->chgIData(oldp+5,((((- (IData)((1U & 
                                               (vlSelf->inst 
                                                >> 0x18U)))) 
                                   << 0xcU) | (0xfffU 
                                               & (vlSelf->inst 
                                                  >> 0xcU)))),32);
        tracep->chgIData(oldp+6,((0xfffff000U & (vlSelf->inst 
                                                 << 7U))),32);
        tracep->chgIData(oldp+7,((((- (IData)((1U & 
                                               (vlSelf->inst 
                                                >> 0x18U)))) 
                                   << 0xcU) | ((0xfe0U 
                                                & (vlSelf->inst 
                                                   >> 0xdU)) 
                                               | (0x1fU 
                                                  & vlSelf->inst)))),32);
        tracep->chgIData(oldp+8,((((- (IData)((1U & 
                                               (vlSelf->inst 
                                                >> 0x18U)))) 
                                   << 0xcU) | ((0x800U 
                                                & (vlSelf->inst 
                                                   << 0xbU)) 
                                               | ((0x7e0U 
                                                   & (vlSelf->inst 
                                                      >> 0xdU)) 
                                                  | (0x1eU 
                                                     & vlSelf->inst))))),32);
        tracep->chgIData(oldp+9,((((- (IData)((1U & 
                                               (vlSelf->inst 
                                                >> 0x18U)))) 
                                   << 0x14U) | ((0xff000U 
                                                 & (vlSelf->inst 
                                                    << 7U)) 
                                                | ((0x800U 
                                                    & (vlSelf->inst 
                                                       >> 2U)) 
                                                   | (0x7feU 
                                                      & (vlSelf->inst 
                                                         >> 0xdU)))))),32);
    }
}

void Vysyx_23060096_ImmGen___024root__traceCleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VlUnpacked<CData/*0:0*/, 1> __Vm_traceActivity;
    Vysyx_23060096_ImmGen___024root* const __restrict vlSelf = static_cast<Vysyx_23060096_ImmGen___024root*>(voidSelf);
    Vysyx_23060096_ImmGen__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        vlSymsp->__Vm_activity = false;
        __Vm_traceActivity[0U] = 0U;
    }
}
