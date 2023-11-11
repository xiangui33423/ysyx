// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vysyx_23060096_adder.h for the primary calling header

#ifndef VERILATED_VYSYX_23060096_ADDER___024ROOT_H_
#define VERILATED_VYSYX_23060096_ADDER___024ROOT_H_  // guard

#include "verilated_heavy.h"

//==========

class Vysyx_23060096_adder__Syms;
class Vysyx_23060096_adder_VerilatedVcd;


//----------

VL_MODULE(Vysyx_23060096_adder___024root) {
  public:

    // PORTS
    VL_IN8(ysyx_23060096_PCreg__02Eclk,0,0);
    VL_IN8(ysyx_23060096_pc__02Eclk,0,0);
    VL_IN8(ysyx_23060096_RegisterFile__02Eclk,0,0);
    VL_IN8(ysyx_23060096_Reg__02Eclk,0,0);
    VL_IN8(ysyx_23060096_npc__02Eclk,0,0);
    VL_IN8(ysyx_23060096_npc__02Erstn,0,0);
    VL_IN8(rst_n,0,0);
    VL_IN8(ysyx_23060096_pc__02Erstn,0,0);
    VL_IN8(ysyx_23060096_RegisterFile__02Erstn,0,0);
    VL_IN8(Ra,4,0);
    VL_IN8(Rb,4,0);
    VL_IN8(waddr,4,0);
    VL_IN8(w_en,0,0);
    VL_IN8(rst,0,0);
    VL_IN8(din,0,0);
    VL_OUT8(dout,0,0);
    VL_IN8(wen,0,0);
    VL_IN8(A,3,0);
    VL_IN8(B,3,0);
    VL_IN8(op,2,0);
    VL_OUT8(out,3,0);
    VL_IN(ysyx_23060096_npc__02Einst,31,0);
    VL_OUT(ysyx_23060096_npc__02Epc,31,0);
    VL_IN(ysyx_23060096_PCreg__02Epc,31,0);
    VL_OUT(ysyx_23060096_PCreg__02Einst,31,0);
    VL_OUT(ysyx_23060096_pc__02Epc,31,0);
    VL_IN(wdata,31,0);
    VL_OUT(busA,31,0);
    VL_OUT(busB,31,0);

    // LOCAL SIGNALS
    CData/*3:0*/ ysyx_23060096_alu__DOT__res;
    CData/*3:0*/ ysyx_23060096_alu__DOT__add;
    IData/*31:0*/ ysyx_23060096_pc__DOT__pc_next;
    IData/*31:0*/ ysyx_23060096_RegisterFile__DOT__i;
    VlUnpacked<IData/*31:0*/, -2147483647> ysyx_23060096_PCreg__DOT__inst_reg;
    VlUnpacked<IData/*31:0*/, 17> ysyx_23060096_RegisterFile__DOT__rf;

    // LOCAL VARIABLES
    CData/*0:0*/ __Vclklast__TOP__ysyx_23060096_Reg__02Eclk;
    CData/*0:0*/ __Vclklast__TOP__ysyx_23060096_PCreg__02Eclk;
    CData/*0:0*/ __Vclklast__TOP__ysyx_23060096_pc__02Eclk;
    CData/*0:0*/ __Vclklast__TOP__ysyx_23060096_RegisterFile__02Eclk;
    IData/*31:0*/ ysyx_23060096_RegisterFile__DOT____Vlvbound1;
    VlUnpacked<CData/*0:0*/, 4> __Vm_traceActivity;

    // INTERNAL VARIABLES
    Vysyx_23060096_adder__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(Vysyx_23060096_adder___024root);  ///< Copying not allowed
  public:
    Vysyx_23060096_adder___024root(const char* name);
    ~Vysyx_23060096_adder___024root();

    // INTERNAL METHODS
    void __Vconfigure(Vysyx_23060096_adder__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
