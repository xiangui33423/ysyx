// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vysyx_23060096_npc.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vysyx_23060096_npc__Syms.h"
#include "Vysyx_23060096_npc___024unit.h"

void Vysyx_23060096_npc___024unit___ctor_var_reset(Vysyx_23060096_npc___024unit* vlSelf);

Vysyx_23060096_npc___024unit::Vysyx_23060096_npc___024unit(Vysyx_23060096_npc__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vysyx_23060096_npc___024unit___ctor_var_reset(this);
}

void Vysyx_23060096_npc___024unit::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

Vysyx_23060096_npc___024unit::~Vysyx_23060096_npc___024unit() {
}
