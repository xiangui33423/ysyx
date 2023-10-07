// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vbarrel_shift.h for the primary calling header

#ifndef VERILATED_VBARREL_SHIFT___024ROOT_H_
#define VERILATED_VBARREL_SHIFT___024ROOT_H_  // guard

#include "verilated_heavy.h"

//==========

class Vbarrel_shift__Syms;
class Vbarrel_shift_VerilatedVcd;


//----------

VL_MODULE(Vbarrel_shift___024root) {
  public:

    // PORTS
    VL_IN8(din,7,0);
    VL_IN8(shamt,2,0);
    VL_IN8(dir,0,0);
    VL_IN8(op,0,0);
    VL_OUT8(dout,7,0);

    // LOCAL SIGNALS
    CData/*7:0*/ barrel_shift__DOT__Q;

    // INTERNAL VARIABLES
    Vbarrel_shift__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(Vbarrel_shift___024root);  ///< Copying not allowed
  public:
    Vbarrel_shift___024root(const char* name);
    ~Vbarrel_shift___024root();

    // INTERNAL METHODS
    void __Vconfigure(Vbarrel_shift__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
