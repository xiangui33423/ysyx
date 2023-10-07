// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vadder.h"
#include "Vadder__Syms.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

Vadder::Vadder(VerilatedContext* _vcontextp__, const char* _vcname__)
    : vlSymsp{new Vadder__Syms(_vcontextp__, _vcname__, this)}
    , A{vlSymsp->TOP.A}
    , B{vlSymsp->TOP.B}
    , op{vlSymsp->TOP.op}
    , result{vlSymsp->TOP.result}
    , zero{vlSymsp->TOP.zero}
    , overflow{vlSymsp->TOP.overflow}
    , carry{vlSymsp->TOP.carry}
    , rootp{&(vlSymsp->TOP)}
{
}

Vadder::Vadder(const char* _vcname__)
    : Vadder(nullptr, _vcname__)
{
}

//============================================================
// Destructor

Vadder::~Vadder() {
    delete vlSymsp;
}

//============================================================
// Evaluation loop

void Vadder___024root___eval_initial(Vadder___024root* vlSelf);
void Vadder___024root___eval_settle(Vadder___024root* vlSelf);
void Vadder___024root___eval(Vadder___024root* vlSelf);
QData Vadder___024root___change_request(Vadder___024root* vlSelf);
#ifdef VL_DEBUG
void Vadder___024root___eval_debug_assertions(Vadder___024root* vlSelf);
#endif  // VL_DEBUG
void Vadder___024root___final(Vadder___024root* vlSelf);

static void _eval_initial_loop(Vadder__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    Vadder___024root___eval_initial(&(vlSymsp->TOP));
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial loop\n"););
        Vadder___024root___eval_settle(&(vlSymsp->TOP));
        Vadder___024root___eval(&(vlSymsp->TOP));
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = Vadder___024root___change_request(&(vlSymsp->TOP));
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("adder.v", 1, "",
                "Verilated model didn't DC converge\n"
                "- See https://verilator.org/warn/DIDNOTCONVERGE");
        } else {
            __Vchange = Vadder___024root___change_request(&(vlSymsp->TOP));
        }
    } while (VL_UNLIKELY(__Vchange));
}

void Vadder::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vadder::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vadder___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        Vadder___024root___eval(&(vlSymsp->TOP));
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = Vadder___024root___change_request(&(vlSymsp->TOP));
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("adder.v", 1, "",
                "Verilated model didn't converge\n"
                "- See https://verilator.org/warn/DIDNOTCONVERGE");
        } else {
            __Vchange = Vadder___024root___change_request(&(vlSymsp->TOP));
        }
    } while (VL_UNLIKELY(__Vchange));
}

//============================================================
// Invoke final blocks

void Vadder::final() {
    Vadder___024root___final(&(vlSymsp->TOP));
}

//============================================================
// Utilities

VerilatedContext* Vadder::contextp() const {
    return vlSymsp->_vm_contextp__;
}

const char* Vadder::name() const {
    return vlSymsp->name();
}

//============================================================
// Trace configuration

void Vadder___024root__traceInitTop(Vadder___024root* vlSelf, VerilatedVcd* tracep);

static void traceInit(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vadder___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vadder___024root*>(voidSelf);
    Vadder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->module(vlSymsp->name());
    tracep->scopeEscape(' ');
    Vadder___024root__traceInitTop(vlSelf, tracep);
    tracep->scopeEscape('.');
}

void Vadder___024root__traceRegister(Vadder___024root* vlSelf, VerilatedVcd* tracep);

void Vadder::trace(VerilatedVcdC* tfp, int, int) {
    tfp->spTrace()->addInitCb(&traceInit, &(vlSymsp->TOP));
    Vadder___024root__traceRegister(&(vlSymsp->TOP), tfp->spTrace());
}
