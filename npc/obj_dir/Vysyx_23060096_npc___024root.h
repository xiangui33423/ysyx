// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vysyx_23060096_npc.h for the primary calling header

#ifndef VERILATED_VYSYX_23060096_NPC___024ROOT_H_
#define VERILATED_VYSYX_23060096_NPC___024ROOT_H_  // guard

#include "verilated_heavy.h"

//==========

class Vysyx_23060096_npc__Syms;
class Vysyx_23060096_npc_VerilatedVcd;
class Vysyx_23060096_npc___024unit;


//----------

VL_MODULE(Vysyx_23060096_npc___024root) {
  public:
    // CELLS
    Vysyx_23060096_npc___024unit* __PVT____024unit;

    // PORTS
    VL_IN8(clk,0,0);
    VL_IN8(rstn,0,0);
    VL_IN(inst,31,0);
    VL_OUT(pc,31,0);

    // LOCAL SIGNALS
    CData/*0:0*/ ysyx_23060096_npc__DOT__clk_en;
    CData/*0:0*/ ysyx_23060096_npc__DOT__ALUAsrc;
    CData/*1:0*/ ysyx_23060096_npc__DOT__ALUBsrc;
    CData/*2:0*/ ysyx_23060096_npc__DOT__Branch;
    CData/*3:0*/ ysyx_23060096_npc__DOT__ALUctr;
    CData/*0:0*/ ysyx_23060096_npc__DOT__MemtoReg;
    CData/*2:0*/ ysyx_23060096_npc__DOT__MemOP;
    IData/*31:0*/ ysyx_23060096_npc__DOT__en;
    IData/*31:0*/ ysyx_23060096_npc__DOT__src1;
    IData/*31:0*/ ysyx_23060096_npc__DOT__src2;
    IData/*31:0*/ ysyx_23060096_npc__DOT__u_RegisterFile__DOT__i;
    IData/*31:0*/ ysyx_23060096_npc__DOT__u_alu__DOT__res;
    IData/*31:0*/ ysyx_23060096_npc__DOT__u_alu__DOT__sub;
    IData/*31:0*/ ysyx_23060096_npc__DOT__u_alu__DOT__add;
    VlUnpacked<IData/*31:0*/, 17> ysyx_23060096_npc__DOT__u_RegisterFile__DOT__rf;

    // LOCAL VARIABLES
    CData/*0:0*/ __Vclklast__TOP__clk;
    IData/*31:0*/ ysyx_23060096_npc__DOT__u_RegisterFile__DOT____Vlvbound1;
    VlUnpacked<CData/*0:0*/, 3> __Vm_traceActivity;

    // INTERNAL VARIABLES
    Vysyx_23060096_npc__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(Vysyx_23060096_npc___024root);  ///< Copying not allowed
  public:
    Vysyx_23060096_npc___024root(const char* name);
    ~Vysyx_23060096_npc___024root();

    // INTERNAL METHODS
    void __Vconfigure(Vysyx_23060096_npc__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
