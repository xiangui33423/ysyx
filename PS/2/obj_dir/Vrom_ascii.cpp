// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vrom_ascii.h"
#include "Vrom_ascii__Syms.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

Vrom_ascii::Vrom_ascii(VerilatedContext* _vcontextp__, const char* _vcname__)
    : vlSymsp{new Vrom_ascii__Syms(_vcontextp__, _vcname__, this)}
    , clk{vlSymsp->TOP.clk}
    , rst_n{vlSymsp->TOP.rst_n}
    , data{vlSymsp->TOP.data}
    , seg1{vlSymsp->TOP.seg1}
    , seg2{vlSymsp->TOP.seg2}
    , rootp{&(vlSymsp->TOP)}
{
}

Vrom_ascii::Vrom_ascii(const char* _vcname__)
    : Vrom_ascii(nullptr, _vcname__)
{
}

//============================================================
// Destructor

Vrom_ascii::~Vrom_ascii() {
    delete vlSymsp;
}

//============================================================
// Evaluation loop

void Vrom_ascii___024root___eval_initial(Vrom_ascii___024root* vlSelf);
void Vrom_ascii___024root___eval_settle(Vrom_ascii___024root* vlSelf);
void Vrom_ascii___024root___eval(Vrom_ascii___024root* vlSelf);
QData Vrom_ascii___024root___change_request(Vrom_ascii___024root* vlSelf);
#ifdef VL_DEBUG
void Vrom_ascii___024root___eval_debug_assertions(Vrom_ascii___024root* vlSelf);
#endif  // VL_DEBUG
void Vrom_ascii___024root___final(Vrom_ascii___024root* vlSelf);

static void _eval_initial_loop(Vrom_ascii__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    Vrom_ascii___024root___eval_initial(&(vlSymsp->TOP));
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial loop\n"););
        Vrom_ascii___024root___eval_settle(&(vlSymsp->TOP));
        Vrom_ascii___024root___eval(&(vlSymsp->TOP));
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = Vrom_ascii___024root___change_request(&(vlSymsp->TOP));
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("rom_ascii.v", 1, "",
                "Verilated model didn't DC converge\n"
                "- See https://verilator.org/warn/DIDNOTCONVERGE");
        } else {
            __Vchange = Vrom_ascii___024root___change_request(&(vlSymsp->TOP));
        }
    } while (VL_UNLIKELY(__Vchange));
}

void Vrom_ascii::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vrom_ascii::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vrom_ascii___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        Vrom_ascii___024root___eval(&(vlSymsp->TOP));
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = Vrom_ascii___024root___change_request(&(vlSymsp->TOP));
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("rom_ascii.v", 1, "",
                "Verilated model didn't converge\n"
                "- See https://verilator.org/warn/DIDNOTCONVERGE");
        } else {
            __Vchange = Vrom_ascii___024root___change_request(&(vlSymsp->TOP));
        }
    } while (VL_UNLIKELY(__Vchange));
}

//============================================================
// Invoke final blocks

void Vrom_ascii::final() {
    Vrom_ascii___024root___final(&(vlSymsp->TOP));
}

//============================================================
// Utilities

VerilatedContext* Vrom_ascii::contextp() const {
    return vlSymsp->_vm_contextp__;
}

const char* Vrom_ascii::name() const {
    return vlSymsp->name();
}

//============================================================
// Trace configuration

void Vrom_ascii___024root__traceInitTop(Vrom_ascii___024root* vlSelf, VerilatedVcd* tracep);

static void traceInit(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vrom_ascii___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vrom_ascii___024root*>(voidSelf);
    Vrom_ascii__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->module(vlSymsp->name());
    tracep->scopeEscape(' ');
    Vrom_ascii___024root__traceInitTop(vlSelf, tracep);
    tracep->scopeEscape('.');
}

void Vrom_ascii___024root__traceRegister(Vrom_ascii___024root* vlSelf, VerilatedVcd* tracep);

void Vrom_ascii::trace(VerilatedVcdC* tfp, int, int) {
    tfp->spTrace()->addInitCb(&traceInit, &(vlSymsp->TOP));
    Vrom_ascii___024root__traceRegister(&(vlSymsp->TOP), tfp->spTrace());
}
