// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vysyx_23060096_adder__Syms.h"


void Vysyx_23060096_adder___024root__traceInitSub0(Vysyx_23060096_adder___024root* vlSelf, VerilatedVcd* tracep) VL_ATTR_COLD;

void Vysyx_23060096_adder___024root__traceInitTop(Vysyx_23060096_adder___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_23060096_adder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        Vysyx_23060096_adder___024root__traceInitSub0(vlSelf, tracep);
    }
}

void Vysyx_23060096_adder___024root__traceInitSub0(Vysyx_23060096_adder___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_23060096_adder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    const int c = vlSymsp->__Vm_baseCode;
    if (false && tracep && c) {}  // Prevent unused
    // Body
    {
        tracep->declBus(c+2147483680,"ysyx_23060096_MuxKeyInternal.out", false,-1, 0,0);
        tracep->declBus(c+2147483681,"key", false,-1, 0,0);
        tracep->declBus(c+2147483682,"default_out", false,-1, 0,0);
        tracep->declBus(c+2147483683,"lut", false,-1, 3,0);
        tracep->declBit(c+2147483684,"ysyx_23060096_npc.clk", false,-1);
        tracep->declBit(c+2147483685,"ysyx_23060096_npc.rstn", false,-1);
        tracep->declBus(c+2147483686,"ysyx_23060096_npc.inst", false,-1, 31,0);
        tracep->declBus(c+2147483687,"ysyx_23060096_npc.pc", false,-1, 31,0);
        tracep->declBit(c+2147483688,"ysyx_23060096_PCreg.clk", false,-1);
        tracep->declBit(c+2147483689,"rst_n", false,-1);
        tracep->declBus(c+2147483690,"ysyx_23060096_PCreg.pc", false,-1, 31,0);
        tracep->declBus(c+2147483691,"ysyx_23060096_PCreg.inst", false,-1, 31,0);
        tracep->declBit(c+2147483692,"ysyx_23060096_pc.clk", false,-1);
        tracep->declBit(c+2147483693,"ysyx_23060096_pc.rstn", false,-1);
        tracep->declBus(c+2147483694,"ysyx_23060096_pc.pc", false,-1, 31,0);
        tracep->declBit(c+2147483695,"ysyx_23060096_RegisterFile.clk", false,-1);
        tracep->declBit(c+2147483696,"ysyx_23060096_RegisterFile.rstn", false,-1);
        tracep->declBus(c+2147483697,"wdata", false,-1, 31,0);
        tracep->declBus(c+2147483698,"Ra", false,-1, 4,0);
        tracep->declBus(c+2147483699,"Rb", false,-1, 4,0);
        tracep->declBus(c+2147483700,"waddr", false,-1, 4,0);
        tracep->declBit(c+2147483701,"w_en", false,-1);
        tracep->declBus(c+2147483702,"busA", false,-1, 31,0);
        tracep->declBus(c+2147483703,"busB", false,-1, 31,0);
        tracep->declBit(c+2147483704,"ysyx_23060096_Reg.clk", false,-1);
        tracep->declBit(c+2147483705,"rst", false,-1);
        tracep->declBus(c+2147483706,"din", false,-1, 0,0);
        tracep->declBus(c+2147483707,"dout", false,-1, 0,0);
        tracep->declBit(c+2147483708,"wen", false,-1);
        tracep->declBus(c+2147483709,"A", false,-1, 3,0);
        tracep->declBus(c+2147483710,"B", false,-1, 3,0);
        tracep->declBus(c+2147483711,"op", false,-1, 2,0);
        tracep->declBus(c+2147483712,"ysyx_23060096_alu.out", false,-1, 3,0);
        tracep->declBus(c+2147483720,"ysyx_23060096_MuxKeyInternal NR_KEY", false,-1, 31,0);
        tracep->declBus(c+2147483721,"ysyx_23060096_MuxKeyInternal KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+2147483721,"ysyx_23060096_MuxKeyInternal DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+2147483722,"ysyx_23060096_MuxKeyInternal HAS_DEFAULT", false,-1, 31,0);
        tracep->declBus(c+2147483680,"ysyx_23060096_MuxKeyInternal out", false,-1, 0,0);
        tracep->declBus(c+2147483681,"ysyx_23060096_MuxKeyInternal key", false,-1, 0,0);
        tracep->declBus(c+2147483682,"ysyx_23060096_MuxKeyInternal default_out", false,-1, 0,0);
        tracep->declBus(c+2147483683,"ysyx_23060096_MuxKeyInternal lut", false,-1, 3,0);
        tracep->declBus(c+2147483720,"ysyx_23060096_MuxKeyInternal PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<2; i++) {
                tracep->declBus(c+1+i*1,"ysyx_23060096_MuxKeyInternal pair_list", true,(i+0), 1,0);}}
        {int i; for (i=0; i<2; i++) {
                tracep->declBus(c+3+i*1,"ysyx_23060096_MuxKeyInternal key_list", true,(i+0), 0,0);}}
        {int i; for (i=0; i<2; i++) {
                tracep->declBus(c+5+i*1,"ysyx_23060096_MuxKeyInternal data_list", true,(i+0), 0,0);}}
        tracep->declBus(c+7,"ysyx_23060096_MuxKeyInternal lut_out", false,-1, 0,0);
        tracep->declBit(c+8,"ysyx_23060096_MuxKeyInternal hit", false,-1);
        tracep->declBus(c+2147483723,"ysyx_23060096_MuxKeyInternal i", false,-1, 31,0);
        tracep->declBit(c+2147483684,"ysyx_23060096_npc clk", false,-1);
        tracep->declBit(c+2147483685,"ysyx_23060096_npc rstn", false,-1);
        tracep->declBus(c+2147483686,"ysyx_23060096_npc inst", false,-1, 31,0);
        tracep->declBus(c+2147483687,"ysyx_23060096_npc pc", false,-1, 31,0);
        tracep->declBit(c+2147483688,"ysyx_23060096_PCreg clk", false,-1);
        tracep->declBit(c+2147483689,"ysyx_23060096_PCreg rst_n", false,-1);
        tracep->declBus(c+2147483690,"ysyx_23060096_PCreg pc", false,-1, 31,0);
        tracep->declBus(c+2147483691,"ysyx_23060096_PCreg inst", false,-1, 31,0);
        {int i; for (i=0; i<-2147483647; i++) {
                tracep->declBus(c+13+i*1,"ysyx_23060096_PCreg inst_reg", true,(i+-2147483648), 31,0);}}
        tracep->declBit(c+2147483713,"ysyx_23060096_PCreg addr", false,-1);
        tracep->declBit(c+2147483692,"ysyx_23060096_pc clk", false,-1);
        tracep->declBit(c+2147483693,"ysyx_23060096_pc rstn", false,-1);
        tracep->declBus(c+2147483694,"ysyx_23060096_pc pc", false,-1, 31,0);
        tracep->declBus(c+2147483714,"ysyx_23060096_pc pc_next", false,-1, 31,0);
        tracep->declBus(c+2147483724,"ysyx_23060096_RegisterFile ADDR_WIDTH", false,-1, 31,0);
        tracep->declBus(c+2147483725,"ysyx_23060096_RegisterFile DATA_WIDTH", false,-1, 31,0);
        tracep->declBit(c+2147483695,"ysyx_23060096_RegisterFile clk", false,-1);
        tracep->declBit(c+2147483696,"ysyx_23060096_RegisterFile rstn", false,-1);
        tracep->declBus(c+2147483697,"ysyx_23060096_RegisterFile wdata", false,-1, 31,0);
        tracep->declBus(c+2147483698,"ysyx_23060096_RegisterFile Ra", false,-1, 4,0);
        tracep->declBus(c+2147483699,"ysyx_23060096_RegisterFile Rb", false,-1, 4,0);
        tracep->declBus(c+2147483700,"ysyx_23060096_RegisterFile waddr", false,-1, 4,0);
        tracep->declBit(c+2147483701,"ysyx_23060096_RegisterFile w_en", false,-1);
        tracep->declBus(c+2147483702,"ysyx_23060096_RegisterFile busA", false,-1, 31,0);
        tracep->declBus(c+2147483703,"ysyx_23060096_RegisterFile busB", false,-1, 31,0);
        {int i; for (i=0; i<17; i++) {
                tracep->declBus(c+2147483662+i*1,"ysyx_23060096_RegisterFile rf", true,(i+0), 31,0);}}
        tracep->declBus(c+2147483679,"ysyx_23060096_RegisterFile i", false,-1, 31,0);
        tracep->declBus(c+2147483721,"ysyx_23060096_Reg WIDTH", false,-1, 31,0);
        tracep->declBus(c+2147483722,"ysyx_23060096_Reg RESET_VAL", false,-1, 31,0);
        tracep->declBit(c+2147483704,"ysyx_23060096_Reg clk", false,-1);
        tracep->declBit(c+2147483705,"ysyx_23060096_Reg rst", false,-1);
        tracep->declBus(c+2147483706,"ysyx_23060096_Reg din", false,-1, 0,0);
        tracep->declBus(c+2147483707,"ysyx_23060096_Reg dout", false,-1, 0,0);
        tracep->declBit(c+2147483708,"ysyx_23060096_Reg wen", false,-1);
        tracep->declBus(c+2147483709,"ysyx_23060096_alu A", false,-1, 3,0);
        tracep->declBus(c+2147483710,"ysyx_23060096_alu B", false,-1, 3,0);
        tracep->declBus(c+2147483711,"ysyx_23060096_alu op", false,-1, 2,0);
        tracep->declBus(c+2147483712,"ysyx_23060096_alu out", false,-1, 3,0);
        tracep->declBit(c+9,"ysyx_23060096_alu zero_add", false,-1);
        tracep->declBit(c+10,"ysyx_23060096_alu zero_sub", false,-1);
        tracep->declBit(c+10,"ysyx_23060096_alu zero_res", false,-1);
        tracep->declBit(c+2147483715,"ysyx_23060096_alu overflow", false,-1);
        tracep->declBit(c+2147483716,"ysyx_23060096_alu carry", false,-1);
        tracep->declBus(c+11,"ysyx_23060096_alu res", false,-1, 3,0);
        tracep->declBus(c+11,"ysyx_23060096_alu sub", false,-1, 3,0);
        tracep->declBus(c+12,"ysyx_23060096_alu add", false,-1, 3,0);
        tracep->declBus(c+2147483709,"ysyx_23060096_alu u_add A", false,-1, 3,0);
        tracep->declBus(c+2147483710,"ysyx_23060096_alu u_add B", false,-1, 3,0);
        tracep->declBit(c+2147483726,"ysyx_23060096_alu u_add op", false,-1);
        tracep->declBus(c+12,"ysyx_23060096_alu u_add result", false,-1, 3,0);
        tracep->declBit(c+9,"ysyx_23060096_alu u_add zero", false,-1);
        tracep->declBit(c+2147483715,"ysyx_23060096_alu u_add overflow", false,-1);
        tracep->declBit(c+2147483716,"ysyx_23060096_alu u_add carry", false,-1);
        tracep->declBus(c+2147483710,"ysyx_23060096_alu u_add t_add_op", false,-1, 3,0);
        tracep->declBus(c+2147483709,"ysyx_23060096_alu u_sub A", false,-1, 3,0);
        tracep->declBus(c+2147483710,"ysyx_23060096_alu u_sub B", false,-1, 3,0);
        tracep->declBit(c+2147483727,"ysyx_23060096_alu u_sub op", false,-1);
        tracep->declBus(c+11,"ysyx_23060096_alu u_sub result", false,-1, 3,0);
        tracep->declBit(c+10,"ysyx_23060096_alu u_sub zero", false,-1);
        tracep->declBit(c+2147483717,"ysyx_23060096_alu u_sub overflow", false,-1);
        tracep->declBit(c+2147483718,"ysyx_23060096_alu u_sub carry", false,-1);
        tracep->declBus(c+2147483719,"ysyx_23060096_alu u_sub t_add_op", false,-1, 3,0);
        tracep->declBus(c+2147483709,"ysyx_23060096_alu u_res A", false,-1, 3,0);
        tracep->declBus(c+2147483710,"ysyx_23060096_alu u_res B", false,-1, 3,0);
        tracep->declBit(c+2147483727,"ysyx_23060096_alu u_res op", false,-1);
        tracep->declBus(c+11,"ysyx_23060096_alu u_res result", false,-1, 3,0);
        tracep->declBit(c+10,"ysyx_23060096_alu u_res zero", false,-1);
        tracep->declBit(c+2147483717,"ysyx_23060096_alu u_res overflow", false,-1);
        tracep->declBit(c+2147483718,"ysyx_23060096_alu u_res carry", false,-1);
        tracep->declBus(c+2147483719,"ysyx_23060096_alu u_res t_add_op", false,-1, 3,0);
    }
}

void Vysyx_23060096_adder___024root__traceFullTop0(void* voidSelf, VerilatedVcd* tracep) VL_ATTR_COLD;
void Vysyx_23060096_adder___024root__traceChgTop0(void* voidSelf, VerilatedVcd* tracep);
void Vysyx_23060096_adder___024root__traceCleanup(void* voidSelf, VerilatedVcd* /*unused*/);

void Vysyx_23060096_adder___024root__traceRegister(Vysyx_23060096_adder___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_23060096_adder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        tracep->addFullCb(&Vysyx_23060096_adder___024root__traceFullTop0, vlSelf);
        tracep->addChgCb(&Vysyx_23060096_adder___024root__traceChgTop0, vlSelf);
        tracep->addCleanupCb(&Vysyx_23060096_adder___024root__traceCleanup, vlSelf);
    }
}

void Vysyx_23060096_adder___024root__traceFullSub0(Vysyx_23060096_adder___024root* vlSelf, VerilatedVcd* tracep) VL_ATTR_COLD;

void Vysyx_23060096_adder___024root__traceFullTop0(void* voidSelf, VerilatedVcd* tracep) {
    Vysyx_23060096_adder___024root* const __restrict vlSelf = static_cast<Vysyx_23060096_adder___024root*>(voidSelf);
    Vysyx_23060096_adder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        Vysyx_23060096_adder___024root__traceFullSub0((&vlSymsp->TOP), tracep);
    }
}

void Vysyx_23060096_adder___024root__traceFullSub0(Vysyx_23060096_adder___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_23060096_adder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->fullCData(oldp+1,(vlSelf->ysyx_23060096_MuxKeyInternal__DOT__pair_list[0]),2);
        tracep->fullCData(oldp+2,(vlSelf->ysyx_23060096_MuxKeyInternal__DOT__pair_list[1]),2);
        tracep->fullBit(oldp+3,(vlSelf->ysyx_23060096_MuxKeyInternal__DOT__key_list[0]));
        tracep->fullBit(oldp+4,(vlSelf->ysyx_23060096_MuxKeyInternal__DOT__key_list[1]));
        tracep->fullBit(oldp+5,(vlSelf->ysyx_23060096_MuxKeyInternal__DOT__data_list[0]));
        tracep->fullBit(oldp+6,(vlSelf->ysyx_23060096_MuxKeyInternal__DOT__data_list[1]));
        tracep->fullBit(oldp+7,(vlSelf->ysyx_23060096_MuxKeyInternal__DOT__lut_out));
        tracep->fullBit(oldp+8,(vlSelf->ysyx_23060096_MuxKeyInternal__DOT__hit));
        tracep->fullBit(oldp+9,((1U & (~ (IData)((0U 
                                                  != (IData)(vlSelf->ysyx_23060096_alu__DOT__add)))))));
        tracep->fullBit(oldp+10,((1U & (~ (IData)((0U 
                                                   != (IData)(vlSelf->ysyx_23060096_alu__DOT__res)))))));
        tracep->fullCData(oldp+11,(vlSelf->ysyx_23060096_alu__DOT__res),4);
        tracep->fullCData(oldp+12,(vlSelf->ysyx_23060096_alu__DOT__add),4);
        tracep->fullIData(oldp+13,(vlSelf->ysyx_23060096_PCreg__DOT__inst_reg[0]),32);
        tracep->fullIData(oldp+2147483662,(vlSelf->ysyx_23060096_RegisterFile__DOT__rf[0]),32);
        tracep->fullIData(oldp+2147483663,(vlSelf->ysyx_23060096_RegisterFile__DOT__rf[1]),32);
        tracep->fullIData(oldp+2147483664,(vlSelf->ysyx_23060096_RegisterFile__DOT__rf[2]),32);
        tracep->fullIData(oldp+2147483665,(vlSelf->ysyx_23060096_RegisterFile__DOT__rf[3]),32);
        tracep->fullIData(oldp+2147483666,(vlSelf->ysyx_23060096_RegisterFile__DOT__rf[4]),32);
        tracep->fullIData(oldp+2147483667,(vlSelf->ysyx_23060096_RegisterFile__DOT__rf[5]),32);
        tracep->fullIData(oldp+2147483668,(vlSelf->ysyx_23060096_RegisterFile__DOT__rf[6]),32);
        tracep->fullIData(oldp+2147483669,(vlSelf->ysyx_23060096_RegisterFile__DOT__rf[7]),32);
        tracep->fullIData(oldp+2147483670,(vlSelf->ysyx_23060096_RegisterFile__DOT__rf[8]),32);
        tracep->fullIData(oldp+2147483671,(vlSelf->ysyx_23060096_RegisterFile__DOT__rf[9]),32);
        tracep->fullIData(oldp+2147483672,(vlSelf->ysyx_23060096_RegisterFile__DOT__rf[10]),32);
        tracep->fullIData(oldp+2147483673,(vlSelf->ysyx_23060096_RegisterFile__DOT__rf[11]),32);
        tracep->fullIData(oldp+2147483674,(vlSelf->ysyx_23060096_RegisterFile__DOT__rf[12]),32);
        tracep->fullIData(oldp+2147483675,(vlSelf->ysyx_23060096_RegisterFile__DOT__rf[13]),32);
        tracep->fullIData(oldp+2147483676,(vlSelf->ysyx_23060096_RegisterFile__DOT__rf[14]),32);
        tracep->fullIData(oldp+2147483677,(vlSelf->ysyx_23060096_RegisterFile__DOT__rf[15]),32);
        tracep->fullIData(oldp+2147483678,(vlSelf->ysyx_23060096_RegisterFile__DOT__rf[16]),32);
        tracep->fullIData(oldp+2147483679,(vlSelf->ysyx_23060096_RegisterFile__DOT__i),32);
        tracep->fullBit(oldp+2147483680,(vlSelf->ysyx_23060096_MuxKeyInternal__02Eout));
        tracep->fullBit(oldp+2147483681,(vlSelf->key));
        tracep->fullBit(oldp+2147483682,(vlSelf->default_out));
        tracep->fullCData(oldp+2147483683,(vlSelf->lut),4);
        tracep->fullBit(oldp+2147483684,(vlSelf->ysyx_23060096_npc__02Eclk));
        tracep->fullBit(oldp+2147483685,(vlSelf->ysyx_23060096_npc__02Erstn));
        tracep->fullIData(oldp+2147483686,(vlSelf->ysyx_23060096_npc__02Einst),32);
        tracep->fullIData(oldp+2147483687,(vlSelf->ysyx_23060096_npc__02Epc),32);
        tracep->fullBit(oldp+2147483688,(vlSelf->ysyx_23060096_PCreg__02Eclk));
        tracep->fullBit(oldp+2147483689,(vlSelf->rst_n));
        tracep->fullIData(oldp+2147483690,(vlSelf->ysyx_23060096_PCreg__02Epc),32);
        tracep->fullIData(oldp+2147483691,(vlSelf->ysyx_23060096_PCreg__02Einst),32);
        tracep->fullBit(oldp+2147483692,(vlSelf->ysyx_23060096_pc__02Eclk));
        tracep->fullBit(oldp+2147483693,(vlSelf->ysyx_23060096_pc__02Erstn));
        tracep->fullIData(oldp+2147483694,(vlSelf->ysyx_23060096_pc__02Epc),32);
        tracep->fullBit(oldp+2147483695,(vlSelf->ysyx_23060096_RegisterFile__02Eclk));
        tracep->fullBit(oldp+2147483696,(vlSelf->ysyx_23060096_RegisterFile__02Erstn));
        tracep->fullIData(oldp+2147483697,(vlSelf->wdata),32);
        tracep->fullCData(oldp+2147483698,(vlSelf->Ra),5);
        tracep->fullCData(oldp+2147483699,(vlSelf->Rb),5);
        tracep->fullCData(oldp+2147483700,(vlSelf->waddr),5);
        tracep->fullBit(oldp+2147483701,(vlSelf->w_en));
        tracep->fullIData(oldp+2147483702,(vlSelf->busA),32);
        tracep->fullIData(oldp+2147483703,(vlSelf->busB),32);
        tracep->fullBit(oldp+2147483704,(vlSelf->ysyx_23060096_Reg__02Eclk));
        tracep->fullBit(oldp+2147483705,(vlSelf->rst));
        tracep->fullBit(oldp+2147483706,(vlSelf->din));
        tracep->fullBit(oldp+2147483707,(vlSelf->dout));
        tracep->fullBit(oldp+2147483708,(vlSelf->wen));
        tracep->fullCData(oldp+2147483709,(vlSelf->A),4);
        tracep->fullCData(oldp+2147483710,(vlSelf->B),4);
        tracep->fullCData(oldp+2147483711,(vlSelf->op),3);
        tracep->fullCData(oldp+2147483712,(vlSelf->ysyx_23060096_alu__02Eout),4);
        tracep->fullBit(oldp+2147483713,((1U & ((vlSelf->ysyx_23060096_PCreg__02Epc 
                                                 - (IData)(0x80000000U)) 
                                                >> 2U))));
        tracep->fullIData(oldp+2147483714,(vlSelf->ysyx_23060096_pc__DOT__pc_next),32);
        tracep->fullBit(oldp+2147483715,((((1U & ((IData)(vlSelf->A) 
                                                  >> 3U)) 
                                           == (1U & 
                                               ((IData)(vlSelf->B) 
                                                >> 3U))) 
                                          & ((1U & 
                                              ((IData)(vlSelf->ysyx_23060096_alu__DOT__add) 
                                               >> 3U)) 
                                             != (1U 
                                                 & ((IData)(vlSelf->A) 
                                                    >> 3U))))));
        tracep->fullBit(oldp+2147483716,((1U & (((IData)(vlSelf->A) 
                                                 + (IData)(vlSelf->B)) 
                                                >> 4U))));
        tracep->fullBit(oldp+2147483717,((((1U & ((IData)(vlSelf->A) 
                                                  >> 3U)) 
                                           == (1U & 
                                               (~ ((IData)(vlSelf->B) 
                                                   >> 3U)))) 
                                          & ((1U & 
                                              ((IData)(vlSelf->ysyx_23060096_alu__DOT__res) 
                                               >> 3U)) 
                                             != (1U 
                                                 & ((IData)(vlSelf->A) 
                                                    >> 3U))))));
        tracep->fullBit(oldp+2147483718,((1U & (((IData)(1U) 
                                                 + 
                                                 ((IData)(vlSelf->A) 
                                                  + 
                                                  (0xfU 
                                                   & (~ (IData)(vlSelf->B))))) 
                                                >> 4U))));
        tracep->fullCData(oldp+2147483719,((0xfU & 
                                            (~ (IData)(vlSelf->B)))),4);
        tracep->fullIData(oldp+2147483720,(2U),32);
        tracep->fullIData(oldp+2147483721,(1U),32);
        tracep->fullIData(oldp+2147483722,(0U),32);
        tracep->fullIData(oldp+2147483723,(2U),32);
        tracep->fullIData(oldp+2147483724,(5U),32);
        tracep->fullIData(oldp+2147483725,(0x20U),32);
        tracep->fullBit(oldp+2147483726,(0U));
        tracep->fullBit(oldp+2147483727,(1U));
    }
}
