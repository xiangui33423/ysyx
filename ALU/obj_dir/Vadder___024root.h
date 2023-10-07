// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vadder.h for the primary calling header

#ifndef VERILATED_VADDER___024ROOT_H_
#define VERILATED_VADDER___024ROOT_H_  // guard

#include "verilated_heavy.h"

//==========

class Vadder__Syms;
class Vadder_VerilatedVcd;


//----------

VL_MODULE(Vadder___024root) {
  public:

    // PORTS
    VL_IN8(A,3,0);
    VL_IN8(B,3,0);
    VL_IN8(op,0,0);
    VL_OUT8(result,3,0);
    VL_OUT8(zero,0,0);
    VL_OUT8(overflow,0,0);
    VL_OUT8(carry,0,0);

    // LOCAL SIGNALS
    CData/*3:0*/ adder__DOT__t_add_op;

    // INTERNAL VARIABLES
    Vadder__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(Vadder___024root);  ///< Copying not allowed
  public:
    Vadder___024root(const char* name);
    ~Vadder___024root();

    // INTERNAL METHODS
    void __Vconfigure(Vadder__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
