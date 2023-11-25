// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vysyx_23060096_npc.h for the primary calling header

#ifndef VERILATED_VYSYX_23060096_NPC___024ROOT_H_
#define VERILATED_VYSYX_23060096_NPC___024ROOT_H_  // guard

#include "verilated.h"

class Vysyx_23060096_npc__Syms;
class Vysyx_23060096_npc___024unit;


class Vysyx_23060096_npc___024root final : public VerilatedModule {
  public:
    // CELLS
    Vysyx_23060096_npc___024unit* __PVT____024unit;

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(rstn,0,0);
    CData/*0:0*/ ysyx_23060096_npc__DOT__clk_en;
    CData/*0:0*/ ysyx_23060096_npc__DOT__ALUAsrc;
    CData/*1:0*/ ysyx_23060096_npc__DOT__ALUBsrc;
    CData/*2:0*/ ysyx_23060096_npc__DOT__Branch;
    CData/*3:0*/ ysyx_23060096_npc__DOT__ALUctr;
    CData/*0:0*/ ysyx_23060096_npc__DOT__MemtoReg;
    CData/*2:0*/ ysyx_23060096_npc__DOT__MemOP;
    CData/*0:0*/ __Vtrigrprev__TOP__clk;
    CData/*0:0*/ __VactContinue;
    VL_IN(inst,31,0);
    VL_OUT(pc,31,0);
    IData/*31:0*/ ysyx_23060096_npc__DOT__en;
    IData/*31:0*/ ysyx_23060096_npc__DOT__src1;
    IData/*31:0*/ ysyx_23060096_npc__DOT__src2;
    IData/*31:0*/ ysyx_23060096_npc__DOT__u_RegisterFile__DOT__i;
    IData/*31:0*/ ysyx_23060096_npc__DOT__u_RegisterFile__DOT____Vlvbound_h06a0cbe9__0;
    IData/*31:0*/ ysyx_23060096_npc__DOT__u_alu__DOT__res;
    IData/*31:0*/ ysyx_23060096_npc__DOT__u_alu__DOT__add;
    IData/*31:0*/ __VstlIterCount;
    IData/*31:0*/ __VicoIterCount;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<IData/*31:0*/, 17> ysyx_23060096_npc__DOT__u_RegisterFile__DOT__rf;
    VlUnpacked<CData/*0:0*/, 3> __Vm_traceActivity;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VicoTriggered;
    VlTriggerVec<1> __VactTriggered;
    VlTriggerVec<1> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vysyx_23060096_npc__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vysyx_23060096_npc___024root(Vysyx_23060096_npc__Syms* symsp, const char* v__name);
    ~Vysyx_23060096_npc___024root();
    VL_UNCOPYABLE(Vysyx_23060096_npc___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
