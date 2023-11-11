// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vysyx_23060096_RegisterFile__Syms.h"
#include "Vysyx_23060096_RegisterFile.h"
#include "Vysyx_23060096_RegisterFile___024root.h"
#include "Vysyx_23060096_RegisterFile___024unit.h"

// FUNCTIONS
Vysyx_23060096_RegisterFile__Syms::~Vysyx_23060096_RegisterFile__Syms()
{
}

Vysyx_23060096_RegisterFile__Syms::Vysyx_23060096_RegisterFile__Syms(VerilatedContext* contextp, const char* namep,Vysyx_23060096_RegisterFile* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp(modelp)
    // Setup module instances
    , TOP(namep)
    , TOP____024unit(Verilated::catName(namep, "$unit"))
{
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-12);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    TOP.__PVT____024unit = &TOP____024unit;
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(this, true);
    TOP____024unit.__Vconfigure(this, true);
    // Setup scopes
    __Vscope_ysyx_23060096_RegisterFile.configure(this, name(), "ysyx_23060096_RegisterFile", "ysyx_23060096_RegisterFile", -12, VerilatedScope::SCOPE_OTHER);
}
