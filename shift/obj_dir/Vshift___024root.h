// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vshift.h for the primary calling header

#ifndef VERILATED_VSHIFT___024ROOT_H_
#define VERILATED_VSHIFT___024ROOT_H_  // guard

#include "verilated_heavy.h"

//==========

class Vshift__Syms;
class Vshift_VerilatedVcd;


//----------

VL_MODULE(Vshift___024root) {
  public:

    // PORTS
    VL_IN8(rst_n,0,0);
    VL_IN8(clk,0,0);
    VL_IN8(din,7,0);
    VL_IN8(op,2,0);
    VL_OUT8(dout,7,0);

    // LOCAL SIGNALS
    CData/*7:0*/ shift__DOT__Q;
    IData/*31:0*/ shift__DOT__i;

    // LOCAL VARIABLES
    CData/*0:0*/ __Vclklast__TOP__clk;
    CData/*0:0*/ __Vclklast__TOP__rst_n;

    // INTERNAL VARIABLES
    Vshift__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(Vshift___024root);  ///< Copying not allowed
  public:
    Vshift___024root(const char* name);
    ~Vshift___024root();

    // INTERNAL METHODS
    void __Vconfigure(Vshift__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
