// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vysyx_23060096_RegisterFile.h for the primary calling header

#include "Vysyx_23060096_RegisterFile___024unit.h"
#include "Vysyx_23060096_RegisterFile__Syms.h"

//==========


void Vysyx_23060096_RegisterFile___024unit___ctor_var_reset(Vysyx_23060096_RegisterFile___024unit* vlSelf);

Vysyx_23060096_RegisterFile___024unit::Vysyx_23060096_RegisterFile___024unit(const char* _vcname__)
    : VerilatedModule(_vcname__)
 {
    // Reset structure values
    Vysyx_23060096_RegisterFile___024unit___ctor_var_reset(this);
}

void Vysyx_23060096_RegisterFile___024unit::__Vconfigure(Vysyx_23060096_RegisterFile__Syms* _vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->vlSymsp = _vlSymsp;
}

Vysyx_23060096_RegisterFile___024unit::~Vysyx_23060096_RegisterFile___024unit() {
}

void Vysyx_23060096_RegisterFile___024unit___ctor_var_reset(Vysyx_23060096_RegisterFile___024unit* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_23060096_RegisterFile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vysyx_23060096_RegisterFile___024unit___ctor_var_reset\n"); );
    // Body
    vlSelf->__VmonitorOff = 0;
}
