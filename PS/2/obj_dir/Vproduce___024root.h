// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vproduce.h for the primary calling header

#ifndef VERILATED_VPRODUCE___024ROOT_H_
#define VERILATED_VPRODUCE___024ROOT_H_  // guard

#include "verilated_heavy.h"

//==========

class Vproduce__Syms;
class Vproduce_VerilatedVcd;


//----------

VL_MODULE(Vproduce___024root) {
  public:

    // PORTS
    VL_IN8(clk,0,0);
    VL_IN8(rst_n,0,0);
    VL_IN8(data,7,0);
    VL_IN8(en,0,0);
    VL_OUT8(counter1,7,0);
    VL_OUT8(counter2,7,0);
    VL_OUT8(ascii1,7,0);
    VL_OUT8(ascii2,7,0);
    VL_OUT8(key1,7,0);
    VL_OUT8(key2,7,0);

    // LOCAL SIGNALS
    CData/*7:0*/ produce__DOT__counter;
    CData/*7:0*/ produce__DOT__tmp;
    CData/*7:0*/ produce__DOT__buffer;
    CData/*2:0*/ produce__DOT__last_state;
    CData/*4:0*/ produce__DOT__addr1;
    CData/*4:0*/ produce__DOT__addr2;
    CData/*2:0*/ produce__DOT__u_fsm__DOT__next_state;
    CData/*2:0*/ produce__DOT__u_fsm__DOT__current_state;
    CData/*7:0*/ produce__DOT__u_ascii__DOT__lut_out;
    CData/*7:0*/ produce__DOT__u_ascii__DOT__addr;
    CData/*7:0*/ produce__DOT__u_ascii__DOT__tmp;
    CData/*7:0*/ produce__DOT__u_ascii__DOT__buffer;
    CData/*4:0*/ produce__DOT__u_ascii__DOT__addr1;
    CData/*4:0*/ produce__DOT__u_ascii__DOT__addr2;
    IData/*31:0*/ produce__DOT__u_rom_counter1__DOT__i;
    IData/*31:0*/ produce__DOT__u_rom_counter2__DOT__i;
    IData/*31:0*/ produce__DOT__u_rom_ascii1__DOT__i;
    IData/*31:0*/ produce__DOT__u_rom_ascii2__DOT__i;
    IData/*31:0*/ produce__DOT__u_ascii__DOT__i;
    IData/*31:0*/ produce__DOT__u_ascii__DOT__u_rom1__DOT__i;
    IData/*31:0*/ produce__DOT__u_ascii__DOT__u_rom2__DOT__i;
    VlUnpacked<CData/*7:0*/, 17> produce__DOT__u_rom_counter1__DOT__rom;
    VlUnpacked<CData/*7:0*/, 17> produce__DOT__u_rom_counter2__DOT__rom;
    VlUnpacked<CData/*7:0*/, 17> produce__DOT__u_rom_ascii1__DOT__rom;
    VlUnpacked<CData/*7:0*/, 17> produce__DOT__u_rom_ascii2__DOT__rom;
    VlUnpacked<SData/*15:0*/, 36> produce__DOT__u_ascii__DOT__lut;
    VlUnpacked<CData/*7:0*/, 36> produce__DOT__u_ascii__DOT__lut_key;
    VlUnpacked<CData/*7:0*/, 36> produce__DOT__u_ascii__DOT__lut_data;
    VlUnpacked<CData/*7:0*/, 17> produce__DOT__u_ascii__DOT__u_rom1__DOT__rom;
    VlUnpacked<CData/*7:0*/, 17> produce__DOT__u_ascii__DOT__u_rom2__DOT__rom;

    // LOCAL VARIABLES
    CData/*7:0*/ produce__DOT__u_rom_counter1__DOT____Vlvbound1;
    CData/*7:0*/ produce__DOT__u_rom_counter2__DOT____Vlvbound1;
    CData/*7:0*/ produce__DOT__u_rom_ascii1__DOT____Vlvbound1;
    CData/*7:0*/ produce__DOT__u_rom_ascii2__DOT____Vlvbound1;
    CData/*7:0*/ produce__DOT__u_ascii__DOT__u_rom1__DOT____Vlvbound1;
    CData/*7:0*/ produce__DOT__u_ascii__DOT__u_rom2__DOT____Vlvbound1;
    CData/*0:0*/ __Vclklast__TOP__clk;
    CData/*0:0*/ __Vclklast__TOP__rst_n;
    SData/*15:0*/ produce__DOT__u_ascii__DOT____Vlvbound1;
    VlUnpacked<CData/*0:0*/, 4> __Vm_traceActivity;

    // INTERNAL VARIABLES
    Vproduce__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(Vproduce___024root);  ///< Copying not allowed
  public:
    Vproduce___024root(const char* name);
    ~Vproduce___024root();

    // INTERNAL METHODS
    void __Vconfigure(Vproduce__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
