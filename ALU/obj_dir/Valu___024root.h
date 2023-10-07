// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Valu.h for the primary calling header

#ifndef VERILATED_VALU___024ROOT_H_
#define VERILATED_VALU___024ROOT_H_  // guard

#include "verilated_heavy.h"

//==========

class Valu__Syms;
class Valu_VerilatedVcd;


//----------

VL_MODULE(Valu___024root) {
  public:

    // PORTS
    VL_IN8(A,3,0);
    VL_IN8(B,3,0);
    VL_IN8(op,2,0);
    VL_OUT8(out,3,0);

    // LOCAL SIGNALS
    CData/*3:0*/ alu__DOT__res;
    CData/*3:0*/ alu__DOT__add;

    // LOCAL VARIABLES
    VlUnpacked<CData/*0:0*/, 2> __Vm_traceActivity;

    // INTERNAL VARIABLES
    Valu__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(Valu___024root);  ///< Copying not allowed
  public:
    Valu___024root(const char* name);
    ~Valu___024root();

    // INTERNAL METHODS
    void __Vconfigure(Valu__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
