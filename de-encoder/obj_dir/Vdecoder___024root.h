// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vdecoder.h for the primary calling header

#ifndef VERILATED_VDECODER___024ROOT_H_
#define VERILATED_VDECODER___024ROOT_H_  // guard

#include "verilated_heavy.h"

//==========

class Vdecoder__Syms;
class Vdecoder_VerilatedVcd;


//----------

VL_MODULE(Vdecoder___024root) {
  public:

    // PORTS
    VL_IN8(x,2,0);
    VL_IN8(en,0,0);
    VL_OUT8(y,6,0);

    // INTERNAL VARIABLES
    Vdecoder__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(Vdecoder___024root);  ///< Copying not allowed
  public:
    Vdecoder___024root(const char* name);
    ~Vdecoder___024root();

    // INTERNAL METHODS
    void __Vconfigure(Vdecoder__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
