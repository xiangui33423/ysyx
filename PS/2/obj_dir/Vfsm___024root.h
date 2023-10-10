// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vfsm.h for the primary calling header

#ifndef VERILATED_VFSM___024ROOT_H_
#define VERILATED_VFSM___024ROOT_H_  // guard

#include "verilated_heavy.h"

//==========

class Vfsm__Syms;
class Vfsm_VerilatedVcd;


//----------

VL_MODULE(Vfsm___024root) {
  public:

    // PORTS
    VL_IN8(clk,0,0);
    VL_IN8(rst_n,0,0);
    VL_IN8(data,7,0);
    VL_IN8(en,0,0);
    VL_OUT8(state,2,0);

    // LOCAL SIGNALS
    CData/*2:0*/ fsm__DOT__next_state;
    CData/*2:0*/ fsm__DOT__current_state;

    // LOCAL VARIABLES
    CData/*0:0*/ __Vclklast__TOP__clk;
    CData/*0:0*/ __Vclklast__TOP__rst_n;

    // INTERNAL VARIABLES
    Vfsm__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(Vfsm___024root);  ///< Copying not allowed
  public:
    Vfsm___024root(const char* name);
    ~Vfsm___024root();

    // INTERNAL METHODS
    void __Vconfigure(Vfsm__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
