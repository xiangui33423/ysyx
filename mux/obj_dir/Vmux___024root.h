// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vmux.h for the primary calling header

#ifndef VERILATED_VMUX___024ROOT_H_
#define VERILATED_VMUX___024ROOT_H_  // guard

#include "verilated_heavy.h"

//==========

class Vmux__Syms;
class Vmux_VerilatedVcd;


//----------

VL_MODULE(Vmux___024root) {
  public:

    // PORTS
    VL_IN8(A,1,0);
    VL_IN8(B,1,0);
    VL_IN8(C,1,0);
    VL_IN8(D,1,0);
    VL_IN8(Y,1,0);
    VL_OUT8(out,1,0);

    // LOCAL SIGNALS
    CData/*1:0*/ mux__DOT__lut_out;
    SData/*15:0*/ mux__DOT__lut;
    VlUnpacked<CData/*3:0*/, 4> mux__DOT__pair_list;
    VlUnpacked<CData/*1:0*/, 4> mux__DOT__key_list;
    VlUnpacked<CData/*1:0*/, 4> mux__DOT__data_list;

    // LOCAL VARIABLES
    VlUnpacked<CData/*0:0*/, 2> __Vm_traceActivity;

    // INTERNAL VARIABLES
    Vmux__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(Vmux___024root);  ///< Copying not allowed
  public:
    Vmux___024root(const char* name);
    ~Vmux___024root();

    // INTERNAL METHODS
    void __Vconfigure(Vmux__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
