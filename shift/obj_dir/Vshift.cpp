// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vshift.h"
#include "Vshift__Syms.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

Vshift::Vshift(VerilatedContext* _vcontextp__, const char* _vcname__)
    : vlSymsp{new Vshift__Syms(_vcontextp__, _vcname__, this)}
    , din{vlSymsp->TOP.din}
    , rst_n{vlSymsp->TOP.rst_n}
    , clk{vlSymsp->TOP.clk}
    , op{vlSymsp->TOP.op}
    , dout{vlSymsp->TOP.dout}
    , rootp{&(vlSymsp->TOP)}
{
}

Vshift::Vshift(const char* _vcname__)
    : Vshift(nullptr, _vcname__)
{
}

//============================================================
// Destructor

Vshift::~Vshift() {
    delete vlSymsp;
}

//============================================================
// Evaluation loop

void Vshift___024root___eval_initial(Vshift___024root* vlSelf);
void Vshift___024root___eval_settle(Vshift___024root* vlSelf);
void Vshift___024root___eval(Vshift___024root* vlSelf);
QData Vshift___024root___change_request(Vshift___024root* vlSelf);
#ifdef VL_DEBUG
void Vshift___024root___eval_debug_assertions(Vshift___024root* vlSelf);
#endif  // VL_DEBUG
void Vshift___024root___final(Vshift___024root* vlSelf);

static void _eval_initial_loop(Vshift__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    Vshift___024root___eval_initial(&(vlSymsp->TOP));
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial loop\n"););
        Vshift___024root___eval_settle(&(vlSymsp->TOP));
        Vshift___024root___eval(&(vlSymsp->TOP));
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = Vshift___024root___change_request(&(vlSymsp->TOP));
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("shift.v", 1, "",
                "Verilated model didn't DC converge\n"
                "- See https://verilator.org/warn/DIDNOTCONVERGE");
        } else {
            __Vchange = Vshift___024root___change_request(&(vlSymsp->TOP));
        }
    } while (VL_UNLIKELY(__Vchange));
}

void Vshift::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vshift::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vshift___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        Vshift___024root___eval(&(vlSymsp->TOP));
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = Vshift___024root___change_request(&(vlSymsp->TOP));
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("shift.v", 1, "",
                "Verilated model didn't converge\n"
                "- See https://verilator.org/warn/DIDNOTCONVERGE");
        } else {
            __Vchange = Vshift___024root___change_request(&(vlSymsp->TOP));
        }
    } while (VL_UNLIKELY(__Vchange));
}

//============================================================
// Invoke final blocks

void Vshift::final() {
    Vshift___024root___final(&(vlSymsp->TOP));
}

//============================================================
// Utilities

VerilatedContext* Vshift::contextp() const {
    return vlSymsp->_vm_contextp__;
}

const char* Vshift::name() const {
    return vlSymsp->name();
}

//============================================================
// Trace configuration

void Vshift___024root__traceInitTop(Vshift___024root* vlSelf, VerilatedVcd* tracep);

static void traceInit(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vshift___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vshift___024root*>(voidSelf);
    Vshift__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->module(vlSymsp->name());
    tracep->scopeEscape(' ');
    Vshift___024root__traceInitTop(vlSelf, tracep);
    tracep->scopeEscape('.');
}

void Vshift___024root__traceRegister(Vshift___024root* vlSelf, VerilatedVcd* tracep);

void Vshift::trace(VerilatedVcdC* tfp, int, int) {
    tfp->spTrace()->addInitCb(&traceInit, &(vlSymsp->TOP));
    Vshift___024root__traceRegister(&(vlSymsp->TOP), tfp->spTrace());
}
