// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vysyx_23060096_npc.h for the primary calling header

#include "Vysyx_23060096_npc___024unit.h"
#include "Vysyx_23060096_npc__Syms.h"

#include "verilated_dpi.h"

//==========

extern "C" int ebreak(int inst);

VL_INLINE_OPT void Vysyx_23060096_npc___024unit____Vdpiimwrap_ebreak_TOP____024unit(IData/*31:0*/ inst, IData/*31:0*/ &ebreak__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vysyx_23060096_npc___024unit____Vdpiimwrap_ebreak_TOP____024unit\n"); );
    // Body
    int inst__Vcvt;
    for (size_t inst__Vidx = 0; inst__Vidx < 1; ++inst__Vidx) inst__Vcvt = inst;
    int ebreak__Vfuncrtn__Vcvt;
    ebreak__Vfuncrtn__Vcvt = ebreak(inst__Vcvt);
    ebreak__Vfuncrtn = ebreak__Vfuncrtn__Vcvt;
}
