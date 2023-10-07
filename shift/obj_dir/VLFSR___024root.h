// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VLFSR.h for the primary calling header

#ifndef VERILATED_VLFSR___024ROOT_H_
#define VERILATED_VLFSR___024ROOT_H_  // guard

#include "verilated_heavy.h"

//==========

class VLFSR__Syms;
class VLFSR_VerilatedVcd;


//----------

VL_MODULE(VLFSR___024root) {
  public:

    // PORTS
    VL_IN8(clk,0,0);
    VL_IN8(rst_n,0,0);
    VL_IN8(seed,7,0);
    VL_IN8(start,0,0);
    VL_OUT8(dout,7,0);
    VL_OUT8(dout_vld,0,0);

    // LOCAL SIGNALS
    CData/*7:0*/ LFSR__DOT__cnt;
    CData/*0:0*/ LFSR__DOT__start_r;
    CData/*0:0*/ LFSR__DOT__xor_bit;

    // LOCAL VARIABLES
    CData/*0:0*/ __Vclklast__TOP__clk;
    CData/*0:0*/ __Vclklast__TOP__rst_n;
    VlUnpacked<CData/*31:0*/, 2> __Vm_traceActivity;

    // INTERNAL VARIABLES
    VLFSR__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(VLFSR___024root);  ///< Copying not allowed
  public:
    VLFSR___024root(const char* name);
    ~VLFSR___024root();

    // INTERNAL METHODS
    void __Vconfigure(VLFSR__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
