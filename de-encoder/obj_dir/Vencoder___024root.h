// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vencoder.h for the primary calling header

#ifndef VERILATED_VENCODER___024ROOT_H_
#define VERILATED_VENCODER___024ROOT_H_  // guard

#include "verilated_heavy.h"

//==========

class Vencoder__Syms;
class Vencoder_VerilatedVcd;


//----------

VL_MODULE(Vencoder___024root) {
  public:

    // PORTS
    VL_IN8(x,7,0);
    VL_IN8(en,0,0);
    VL_OUT8(y,2,0);
    VL_OUT8(tur,0,0);

    // LOCAL SIGNALS
    IData/*31:0*/ encoder__DOT__i;

    // INTERNAL VARIABLES
    Vencoder__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(Vencoder___024root);  ///< Copying not allowed
  public:
    Vencoder___024root(const char* name);
    ~Vencoder___024root();

    // INTERNAL METHODS
    void __Vconfigure(Vencoder__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
