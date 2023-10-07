// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VBARREL_SHIFT__SYMS_H_
#define VERILATED_VBARREL_SHIFT__SYMS_H_  // guard

#include "verilated_heavy.h"

// INCLUDE MODEL CLASS

#include "Vbarrel_shift.h"

// INCLUDE MODULE CLASSES
#include "Vbarrel_shift___024root.h"

// SYMS CLASS (contains all model state)
class Vbarrel_shift__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vbarrel_shift* const __Vm_modelp;
    bool __Vm_activity = false;  ///< Used by trace routines to determine change occurred
    uint32_t __Vm_baseCode = 0;  ///< Used by trace routines when tracing multiple models
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vbarrel_shift___024root        TOP;

    // CONSTRUCTORS
    Vbarrel_shift__Syms(VerilatedContext* contextp, const char* namep, Vbarrel_shift* modelp);
    ~Vbarrel_shift__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

#endif  // guard
