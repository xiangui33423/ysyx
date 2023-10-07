// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vbarrel_shift.h"
#include "Vbarrel_shift__Syms.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

Vbarrel_shift::Vbarrel_shift(VerilatedContext* _vcontextp__, const char* _vcname__)
    : vlSymsp{new Vbarrel_shift__Syms(_vcontextp__, _vcname__, this)}
    , din{vlSymsp->TOP.din}
    , shamt{vlSymsp->TOP.shamt}
    , dir{vlSymsp->TOP.dir}
    , op{vlSymsp->TOP.op}
    , dout{vlSymsp->TOP.dout}
    , rootp{&(vlSymsp->TOP)}
{
}

Vbarrel_shift::Vbarrel_shift(const char* _vcname__)
    : Vbarrel_shift(nullptr, _vcname__)
{
}

//============================================================
// Destructor

Vbarrel_shift::~Vbarrel_shift() {
    delete vlSymsp;
}

//============================================================
// Evaluation loop

void Vbarrel_shift___024root___eval_initial(Vbarrel_shift___024root* vlSelf);
void Vbarrel_shift___024root___eval_settle(Vbarrel_shift___024root* vlSelf);
void Vbarrel_shift___024root___eval(Vbarrel_shift___024root* vlSelf);
QData Vbarrel_shift___024root___change_request(Vbarrel_shift___024root* vlSelf);
#ifdef VL_DEBUG
void Vbarrel_shift___024root___eval_debug_assertions(Vbarrel_shift___024root* vlSelf);
#endif  // VL_DEBUG
void Vbarrel_shift___024root___final(Vbarrel_shift___024root* vlSelf);

static void _eval_initial_loop(Vbarrel_shift__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    Vbarrel_shift___024root___eval_initial(&(vlSymsp->TOP));
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial loop\n"););
        Vbarrel_shift___024root___eval_settle(&(vlSymsp->TOP));
        Vbarrel_shift___024root___eval(&(vlSymsp->TOP));
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = Vbarrel_shift___024root___change_request(&(vlSymsp->TOP));
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("barrel_shift.v", 1, "",
                "Verilated model didn't DC converge\n"
                "- See https://verilator.org/warn/DIDNOTCONVERGE");
        } else {
            __Vchange = Vbarrel_shift___024root___change_request(&(vlSymsp->TOP));
        }
    } while (VL_UNLIKELY(__Vchange));
}

void Vbarrel_shift::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vbarrel_shift::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vbarrel_shift___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        Vbarrel_shift___024root___eval(&(vlSymsp->TOP));
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = Vbarrel_shift___024root___change_request(&(vlSymsp->TOP));
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("barrel_shift.v", 1, "",
                "Verilated model didn't converge\n"
                "- See https://verilator.org/warn/DIDNOTCONVERGE");
        } else {
            __Vchange = Vbarrel_shift___024root___change_request(&(vlSymsp->TOP));
        }
    } while (VL_UNLIKELY(__Vchange));
}

//============================================================
// Invoke final blocks

void Vbarrel_shift::final() {
    Vbarrel_shift___024root___final(&(vlSymsp->TOP));
}

//============================================================
// Utilities

VerilatedContext* Vbarrel_shift::contextp() const {
    return vlSymsp->_vm_contextp__;
}

const char* Vbarrel_shift::name() const {
    return vlSymsp->name();
}

//============================================================
// Trace configuration

void Vbarrel_shift___024root__traceInitTop(Vbarrel_shift___024root* vlSelf, VerilatedVcd* tracep);

static void traceInit(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vbarrel_shift___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vbarrel_shift___024root*>(voidSelf);
    Vbarrel_shift__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->module(vlSymsp->name());
    tracep->scopeEscape(' ');
    Vbarrel_shift___024root__traceInitTop(vlSelf, tracep);
    tracep->scopeEscape('.');
}

void Vbarrel_shift___024root__traceRegister(Vbarrel_shift___024root* vlSelf, VerilatedVcd* tracep);

void Vbarrel_shift::trace(VerilatedVcdC* tfp, int, int) {
    tfp->spTrace()->addInitCb(&traceInit, &(vlSymsp->TOP));
    Vbarrel_shift___024root__traceRegister(&(vlSymsp->TOP), tfp->spTrace());
}
