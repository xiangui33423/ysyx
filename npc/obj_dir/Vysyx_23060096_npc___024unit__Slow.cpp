// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vysyx_23060096_npc.h for the primary calling header

#include "Vysyx_23060096_npc___024unit.h"
#include "Vysyx_23060096_npc__Syms.h"

#include "verilated_dpi.h"

//==========


void Vysyx_23060096_npc___024unit___ctor_var_reset(Vysyx_23060096_npc___024unit* vlSelf);

Vysyx_23060096_npc___024unit::Vysyx_23060096_npc___024unit(const char* _vcname__)
    : VerilatedModule(_vcname__)
 {
    // Reset structure values
    Vysyx_23060096_npc___024unit___ctor_var_reset(this);
}

void Vysyx_23060096_npc___024unit::__Vconfigure(Vysyx_23060096_npc__Syms* _vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->vlSymsp = _vlSymsp;
}

Vysyx_23060096_npc___024unit::~Vysyx_23060096_npc___024unit() {
}

void Vysyx_23060096_npc___024unit___ctor_var_reset(Vysyx_23060096_npc___024unit* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_23060096_npc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vysyx_23060096_npc___024unit___ctor_var_reset\n"); );
}
