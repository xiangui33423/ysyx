// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VROM_ASCII__SYMS_H_
#define VERILATED_VROM_ASCII__SYMS_H_  // guard

#include "verilated_heavy.h"

// INCLUDE MODEL CLASS

#include "Vrom_ascii.h"

// INCLUDE MODULE CLASSES
#include "Vrom_ascii___024root.h"

// SYMS CLASS (contains all model state)
class Vrom_ascii__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vrom_ascii* const __Vm_modelp;
    bool __Vm_activity = false;  ///< Used by trace routines to determine change occurred
    uint32_t __Vm_baseCode = 0;  ///< Used by trace routines when tracing multiple models
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vrom_ascii___024root           TOP;

    // CONSTRUCTORS
    Vrom_ascii__Syms(VerilatedContext* contextp, const char* namep, Vrom_ascii* modelp);
    ~Vrom_ascii__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

#endif  // guard
