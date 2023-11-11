// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vysyx_23060096_RegisterFile.h for the primary calling header

#ifndef VERILATED_VYSYX_23060096_REGISTERFILE___024ROOT_H_
#define VERILATED_VYSYX_23060096_REGISTERFILE___024ROOT_H_  // guard

#include "verilated_heavy.h"

//==========

class Vysyx_23060096_RegisterFile__Syms;
class Vysyx_23060096_RegisterFile_VerilatedVcd;


//----------

VL_MODULE(Vysyx_23060096_RegisterFile___024root) {
  public:

    // PORTS
    VL_IN8(clk,0,0);
    VL_IN8(rstn,0,0);
    VL_IN8(Ra,4,0);
    VL_IN8(Rb,4,0);
    VL_IN8(waddr,4,0);
    VL_IN8(w_en,0,0);
    VL_IN(wdata,31,0);
    VL_OUT(busA,31,0);
    VL_OUT(busB,31,0);

    // LOCAL SIGNALS
    IData/*31:0*/ ysyx_23060096_RegisterFile__DOT__i;
    VlUnpacked<IData/*31:0*/, 5> ysyx_23060096_RegisterFile__DOT__rf;

    // LOCAL VARIABLES
    CData/*0:0*/ __Vclklast__TOP__clk;
    IData/*31:0*/ ysyx_23060096_RegisterFile__DOT____Vlvbound1;
    VlUnpacked<CData/*0:0*/, 2> __Vm_traceActivity;

    // INTERNAL VARIABLES
    Vysyx_23060096_RegisterFile__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(Vysyx_23060096_RegisterFile___024root);  ///< Copying not allowed
  public:
    Vysyx_23060096_RegisterFile___024root(const char* name);
    ~Vysyx_23060096_RegisterFile___024root();

    // INTERNAL METHODS
    void __Vconfigure(Vysyx_23060096_RegisterFile__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
