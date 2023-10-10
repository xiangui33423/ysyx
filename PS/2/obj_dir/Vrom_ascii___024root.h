// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vrom_ascii.h for the primary calling header

#ifndef VERILATED_VROM_ASCII___024ROOT_H_
#define VERILATED_VROM_ASCII___024ROOT_H_  // guard

#include "verilated_heavy.h"

//==========

class Vrom_ascii__Syms;
class Vrom_ascii_VerilatedVcd;


//----------

VL_MODULE(Vrom_ascii___024root) {
  public:

    // PORTS
    VL_IN8(clk,0,0);
    VL_IN8(rst_n,0,0);
    VL_IN8(data,7,0);
    VL_OUT8(seg1,7,0);
    VL_OUT8(seg2,7,0);

    // LOCAL SIGNALS
    CData/*7:0*/ rom_ascii__DOT__lut_out;
    CData/*7:0*/ rom_ascii__DOT__addr;
    CData/*7:0*/ rom_ascii__DOT__tmp;
    CData/*7:0*/ rom_ascii__DOT__buffer;
    CData/*4:0*/ rom_ascii__DOT__addr1;
    CData/*4:0*/ rom_ascii__DOT__addr2;
    IData/*31:0*/ rom_ascii__DOT__i;
    IData/*31:0*/ rom_ascii__DOT__u_rom1__DOT__i;
    IData/*31:0*/ rom_ascii__DOT__u_rom2__DOT__i;
    VlUnpacked<SData/*15:0*/, 36> rom_ascii__DOT__lut;
    VlUnpacked<CData/*7:0*/, 36> rom_ascii__DOT__lut_key;
    VlUnpacked<CData/*7:0*/, 36> rom_ascii__DOT__lut_data;
    VlUnpacked<CData/*7:0*/, 17> rom_ascii__DOT__u_rom1__DOT__rom;
    VlUnpacked<CData/*7:0*/, 17> rom_ascii__DOT__u_rom2__DOT__rom;

    // LOCAL VARIABLES
    CData/*7:0*/ rom_ascii__DOT__u_rom1__DOT____Vlvbound1;
    CData/*7:0*/ rom_ascii__DOT__u_rom2__DOT____Vlvbound1;
    CData/*0:0*/ __Vclklast__TOP__clk;
    CData/*0:0*/ __Vclklast__TOP__rst_n;
    SData/*15:0*/ rom_ascii__DOT____Vlvbound1;
    VlUnpacked<CData/*0:0*/, 3> __Vm_traceActivity;

    // INTERNAL VARIABLES
    Vrom_ascii__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(Vrom_ascii___024root);  ///< Copying not allowed
  public:
    Vrom_ascii___024root(const char* name);
    ~Vrom_ascii___024root();

    // INTERNAL METHODS
    void __Vconfigure(Vrom_ascii__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
