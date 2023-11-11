// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vysyx_23060096_npc.h for the primary calling header

#ifndef VERILATED_VYSYX_23060096_NPC___024ROOT_H_
#define VERILATED_VYSYX_23060096_NPC___024ROOT_H_  // guard

#include "verilated_heavy.h"

//==========

class Vysyx_23060096_npc__Syms;
class Vysyx_23060096_npc_VerilatedVcd;


//----------

VL_MODULE(Vysyx_23060096_npc___024root) {
  public:

    // PORTS
    VL_IN8(clk,0,0);
    VL_IN8(rstn,0,0);
    VL_IN(inst,31,0);
    VL_OUT(pc,31,0);

    // INTERNAL VARIABLES
    Vysyx_23060096_npc__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(Vysyx_23060096_npc___024root);  ///< Copying not allowed
  public:
    Vysyx_23060096_npc___024root(const char* name);
    ~Vysyx_23060096_npc___024root();

    // INTERNAL METHODS
    void __Vconfigure(Vysyx_23060096_npc__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
