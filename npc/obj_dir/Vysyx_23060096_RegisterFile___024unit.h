// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vysyx_23060096_RegisterFile.h for the primary calling header

#ifndef VERILATED_VYSYX_23060096_REGISTERFILE___024UNIT_H_
#define VERILATED_VYSYX_23060096_REGISTERFILE___024UNIT_H_  // guard

#include "verilated_heavy.h"

//==========

class Vysyx_23060096_RegisterFile__Syms;
class Vysyx_23060096_RegisterFile_VerilatedVcd;


//----------

VL_MODULE(Vysyx_23060096_RegisterFile___024unit) {
  public:

    // LOCAL VARIABLES
    CData/*0:0*/ __VmonitorOff;
    QData/*63:0*/ __VmonitorNum;

    // INTERNAL VARIABLES
    Vysyx_23060096_RegisterFile__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(Vysyx_23060096_RegisterFile___024unit);  ///< Copying not allowed
  public:
    Vysyx_23060096_RegisterFile___024unit(const char* name);
    ~Vysyx_23060096_RegisterFile___024unit();

    // INTERNAL METHODS
    void __Vconfigure(Vysyx_23060096_RegisterFile__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
