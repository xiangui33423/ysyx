// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vysyx_23060096_adder__Syms.h"


void Vysyx_23060096_adder___024root__traceChgSub0(Vysyx_23060096_adder___024root* vlSelf, VerilatedVcd* tracep);

void Vysyx_23060096_adder___024root__traceChgTop0(void* voidSelf, VerilatedVcd* tracep) {
    Vysyx_23060096_adder___024root* const __restrict vlSelf = static_cast<Vysyx_23060096_adder___024root*>(voidSelf);
    Vysyx_23060096_adder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    {
        Vysyx_23060096_adder___024root__traceChgSub0((&vlSymsp->TOP), tracep);
    }
}

void Vysyx_23060096_adder___024root__traceChgSub0(Vysyx_23060096_adder___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_23060096_adder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode + 1);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
            tracep->chgCData(oldp+0,(vlSelf->ysyx_23060096_MuxKeyInternal__DOT__pair_list[0]),2);
            tracep->chgCData(oldp+1,(vlSelf->ysyx_23060096_MuxKeyInternal__DOT__pair_list[1]),2);
            tracep->chgBit(oldp+2,(vlSelf->ysyx_23060096_MuxKeyInternal__DOT__key_list[0]));
            tracep->chgBit(oldp+3,(vlSelf->ysyx_23060096_MuxKeyInternal__DOT__key_list[1]));
            tracep->chgBit(oldp+4,(vlSelf->ysyx_23060096_MuxKeyInternal__DOT__data_list[0]));
            tracep->chgBit(oldp+5,(vlSelf->ysyx_23060096_MuxKeyInternal__DOT__data_list[1]));
            tracep->chgBit(oldp+6,(vlSelf->ysyx_23060096_MuxKeyInternal__DOT__lut_out));
            tracep->chgBit(oldp+7,(vlSelf->ysyx_23060096_MuxKeyInternal__DOT__hit));
            tracep->chgBit(oldp+8,((1U & (~ (IData)(
                                                    (0U 
                                                     != (IData)(vlSelf->ysyx_23060096_alu__DOT__add)))))));
            tracep->chgBit(oldp+9,((1U & (~ (IData)(
                                                    (0U 
                                                     != (IData)(vlSelf->ysyx_23060096_alu__DOT__res)))))));
            tracep->chgCData(oldp+10,(vlSelf->ysyx_23060096_alu__DOT__res),4);
            tracep->chgCData(oldp+11,(vlSelf->ysyx_23060096_alu__DOT__add),4);
        }
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
            tracep->chgIData(oldp+12,(vlSelf->ysyx_23060096_PCreg__DOT__inst_reg[0]),32);
        }
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[3U])) {
            tracep->chgIData(oldp+2147483661,(vlSelf->ysyx_23060096_RegisterFile__DOT__rf[0]),32);
            tracep->chgIData(oldp+2147483662,(vlSelf->ysyx_23060096_RegisterFile__DOT__rf[1]),32);
            tracep->chgIData(oldp+2147483663,(vlSelf->ysyx_23060096_RegisterFile__DOT__rf[2]),32);
            tracep->chgIData(oldp+2147483664,(vlSelf->ysyx_23060096_RegisterFile__DOT__rf[3]),32);
            tracep->chgIData(oldp+2147483665,(vlSelf->ysyx_23060096_RegisterFile__DOT__rf[4]),32);
            tracep->chgIData(oldp+2147483666,(vlSelf->ysyx_23060096_RegisterFile__DOT__rf[5]),32);
            tracep->chgIData(oldp+2147483667,(vlSelf->ysyx_23060096_RegisterFile__DOT__rf[6]),32);
            tracep->chgIData(oldp+2147483668,(vlSelf->ysyx_23060096_RegisterFile__DOT__rf[7]),32);
            tracep->chgIData(oldp+2147483669,(vlSelf->ysyx_23060096_RegisterFile__DOT__rf[8]),32);
            tracep->chgIData(oldp+2147483670,(vlSelf->ysyx_23060096_RegisterFile__DOT__rf[9]),32);
            tracep->chgIData(oldp+2147483671,(vlSelf->ysyx_23060096_RegisterFile__DOT__rf[10]),32);
            tracep->chgIData(oldp+2147483672,(vlSelf->ysyx_23060096_RegisterFile__DOT__rf[11]),32);
            tracep->chgIData(oldp+2147483673,(vlSelf->ysyx_23060096_RegisterFile__DOT__rf[12]),32);
            tracep->chgIData(oldp+2147483674,(vlSelf->ysyx_23060096_RegisterFile__DOT__rf[13]),32);
            tracep->chgIData(oldp+2147483675,(vlSelf->ysyx_23060096_RegisterFile__DOT__rf[14]),32);
            tracep->chgIData(oldp+2147483676,(vlSelf->ysyx_23060096_RegisterFile__DOT__rf[15]),32);
            tracep->chgIData(oldp+2147483677,(vlSelf->ysyx_23060096_RegisterFile__DOT__rf[16]),32);
            tracep->chgIData(oldp+2147483678,(vlSelf->ysyx_23060096_RegisterFile__DOT__i),32);
        }
        tracep->chgBit(oldp+2147483679,(vlSelf->ysyx_23060096_MuxKeyInternal__02Eout));
        tracep->chgBit(oldp+2147483680,(vlSelf->key));
        tracep->chgBit(oldp+2147483681,(vlSelf->default_out));
        tracep->chgCData(oldp+2147483682,(vlSelf->lut),4);
        tracep->chgBit(oldp+2147483683,(vlSelf->ysyx_23060096_npc__02Eclk));
        tracep->chgBit(oldp+2147483684,(vlSelf->ysyx_23060096_npc__02Erstn));
        tracep->chgIData(oldp+2147483685,(vlSelf->ysyx_23060096_npc__02Einst),32);
        tracep->chgIData(oldp+2147483686,(vlSelf->ysyx_23060096_npc__02Epc),32);
        tracep->chgBit(oldp+2147483687,(vlSelf->ysyx_23060096_PCreg__02Eclk));
        tracep->chgBit(oldp+2147483688,(vlSelf->rst_n));
        tracep->chgIData(oldp+2147483689,(vlSelf->ysyx_23060096_PCreg__02Epc),32);
        tracep->chgIData(oldp+2147483690,(vlSelf->ysyx_23060096_PCreg__02Einst),32);
        tracep->chgBit(oldp+2147483691,(vlSelf->ysyx_23060096_pc__02Eclk));
        tracep->chgBit(oldp+2147483692,(vlSelf->ysyx_23060096_pc__02Erstn));
        tracep->chgIData(oldp+2147483693,(vlSelf->ysyx_23060096_pc__02Epc),32);
        tracep->chgBit(oldp+2147483694,(vlSelf->ysyx_23060096_RegisterFile__02Eclk));
        tracep->chgBit(oldp+2147483695,(vlSelf->ysyx_23060096_RegisterFile__02Erstn));
        tracep->chgIData(oldp+2147483696,(vlSelf->wdata),32);
        tracep->chgCData(oldp+2147483697,(vlSelf->Ra),5);
        tracep->chgCData(oldp+2147483698,(vlSelf->Rb),5);
        tracep->chgCData(oldp+2147483699,(vlSelf->waddr),5);
        tracep->chgBit(oldp+2147483700,(vlSelf->w_en));
        tracep->chgIData(oldp+2147483701,(vlSelf->busA),32);
        tracep->chgIData(oldp+2147483702,(vlSelf->busB),32);
        tracep->chgBit(oldp+2147483703,(vlSelf->ysyx_23060096_Reg__02Eclk));
        tracep->chgBit(oldp+2147483704,(vlSelf->rst));
        tracep->chgBit(oldp+2147483705,(vlSelf->din));
        tracep->chgBit(oldp+2147483706,(vlSelf->dout));
        tracep->chgBit(oldp+2147483707,(vlSelf->wen));
        tracep->chgCData(oldp+2147483708,(vlSelf->A),4);
        tracep->chgCData(oldp+2147483709,(vlSelf->B),4);
        tracep->chgCData(oldp+2147483710,(vlSelf->op),3);
        tracep->chgCData(oldp+2147483711,(vlSelf->ysyx_23060096_alu__02Eout),4);
        tracep->chgBit(oldp+2147483712,((1U & ((vlSelf->ysyx_23060096_PCreg__02Epc 
                                                - (IData)(0x80000000U)) 
                                               >> 2U))));
        tracep->chgIData(oldp+2147483713,(vlSelf->ysyx_23060096_pc__DOT__pc_next),32);
        tracep->chgBit(oldp+2147483714,((((1U & ((IData)(vlSelf->A) 
                                                 >> 3U)) 
                                          == (1U & 
                                              ((IData)(vlSelf->B) 
                                               >> 3U))) 
                                         & ((1U & ((IData)(vlSelf->ysyx_23060096_alu__DOT__add) 
                                                   >> 3U)) 
                                            != (1U 
                                                & ((IData)(vlSelf->A) 
                                                   >> 3U))))));
        tracep->chgBit(oldp+2147483715,((1U & (((IData)(vlSelf->A) 
                                                + (IData)(vlSelf->B)) 
                                               >> 4U))));
        tracep->chgBit(oldp+2147483716,((((1U & ((IData)(vlSelf->A) 
                                                 >> 3U)) 
                                          == (1U & 
                                              (~ ((IData)(vlSelf->B) 
                                                  >> 3U)))) 
                                         & ((1U & ((IData)(vlSelf->ysyx_23060096_alu__DOT__res) 
                                                   >> 3U)) 
                                            != (1U 
                                                & ((IData)(vlSelf->A) 
                                                   >> 3U))))));
        tracep->chgBit(oldp+2147483717,((1U & (((IData)(1U) 
                                                + ((IData)(vlSelf->A) 
                                                   + 
                                                   (0xfU 
                                                    & (~ (IData)(vlSelf->B))))) 
                                               >> 4U))));
        tracep->chgCData(oldp+2147483718,((0xfU & (~ (IData)(vlSelf->B)))),4);
    }
}

void Vysyx_23060096_adder___024root__traceCleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    Vysyx_23060096_adder___024root* const __restrict vlSelf = static_cast<Vysyx_23060096_adder___024root*>(voidSelf);
    Vysyx_23060096_adder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        vlSymsp->__Vm_activity = false;
        vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
        vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
        vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
        vlSymsp->TOP.__Vm_traceActivity[3U] = 0U;
    }
}
