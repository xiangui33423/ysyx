// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vkeyboard.h for the primary calling header

#ifndef VERILATED_VKEYBOARD___024ROOT_H_
#define VERILATED_VKEYBOARD___024ROOT_H_  // guard

#include "verilated_heavy.h"

//==========

class Vkeyboard__Syms;
class Vkeyboard_VerilatedVcd;


//----------

VL_MODULE(Vkeyboard___024root) {
  public:

    // PORTS
    VL_IN8(clk,0,0);
    VL_IN8(rst_n,0,0);
    VL_IN8(ps2_data,0,0);
    VL_IN8(ps2_clk,0,0);
    VL_OUT8(out,7,0);
    VL_OUT8(en,0,0);

    // LOCAL SIGNALS
    CData/*0:0*/ keyboard__DOT__ready;
    CData/*7:0*/ keyboard__DOT__data;
    CData/*3:0*/ keyboard__DOT__count;
    CData/*2:0*/ keyboard__DOT__ps2_clk_sync;
    SData/*9:0*/ keyboard__DOT__buffer;

    // LOCAL VARIABLES
    CData/*0:0*/ keyboard__DOT____Vlvbound1;
    CData/*0:0*/ __Vclklast__TOP__clk;
    VlUnpacked<CData/*0:0*/, 2> __Vm_traceActivity;

    // INTERNAL VARIABLES
    Vkeyboard__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(Vkeyboard___024root);  ///< Copying not allowed
  public:
    Vkeyboard___024root(const char* name);
    ~Vkeyboard___024root();

    // INTERNAL METHODS
    void __Vconfigure(Vkeyboard__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
