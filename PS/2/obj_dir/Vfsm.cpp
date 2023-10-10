// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vfsm.h"
#include "Vfsm__Syms.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

Vfsm::Vfsm(VerilatedContext* _vcontextp__, const char* _vcname__)
    : vlSymsp{new Vfsm__Syms(_vcontextp__, _vcname__, this)}
    , clk{vlSymsp->TOP.clk}
    , rst_n{vlSymsp->TOP.rst_n}
    , data{vlSymsp->TOP.data}
    , en{vlSymsp->TOP.en}
    , state{vlSymsp->TOP.state}
    , rootp{&(vlSymsp->TOP)}
{
}

Vfsm::Vfsm(const char* _vcname__)
    : Vfsm(nullptr, _vcname__)
{
}

//============================================================
// Destructor

Vfsm::~Vfsm() {
    delete vlSymsp;
}

//============================================================
// Evaluation loop

void Vfsm___024root___eval_initial(Vfsm___024root* vlSelf);
void Vfsm___024root___eval_settle(Vfsm___024root* vlSelf);
void Vfsm___024root___eval(Vfsm___024root* vlSelf);
QData Vfsm___024root___change_request(Vfsm___024root* vlSelf);
#ifdef VL_DEBUG
void Vfsm___024root___eval_debug_assertions(Vfsm___024root* vlSelf);
#endif  // VL_DEBUG
void Vfsm___024root___final(Vfsm___024root* vlSelf);

static void _eval_initial_loop(Vfsm__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    Vfsm___024root___eval_initial(&(vlSymsp->TOP));
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial loop\n"););
        Vfsm___024root___eval_settle(&(vlSymsp->TOP));
        Vfsm___024root___eval(&(vlSymsp->TOP));
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = Vfsm___024root___change_request(&(vlSymsp->TOP));
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("fsm.v", 1, "",
                "Verilated model didn't DC converge\n"
                "- See https://verilator.org/warn/DIDNOTCONVERGE");
        } else {
            __Vchange = Vfsm___024root___change_request(&(vlSymsp->TOP));
        }
    } while (VL_UNLIKELY(__Vchange));
}

void Vfsm::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vfsm::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vfsm___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        Vfsm___024root___eval(&(vlSymsp->TOP));
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = Vfsm___024root___change_request(&(vlSymsp->TOP));
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("fsm.v", 1, "",
                "Verilated model didn't converge\n"
                "- See https://verilator.org/warn/DIDNOTCONVERGE");
        } else {
            __Vchange = Vfsm___024root___change_request(&(vlSymsp->TOP));
        }
    } while (VL_UNLIKELY(__Vchange));
}

//============================================================
// Invoke final blocks

void Vfsm::final() {
    Vfsm___024root___final(&(vlSymsp->TOP));
}

//============================================================
// Utilities

VerilatedContext* Vfsm::contextp() const {
    return vlSymsp->_vm_contextp__;
}

const char* Vfsm::name() const {
    return vlSymsp->name();
}

//============================================================
// Trace configuration

void Vfsm___024root__traceInitTop(Vfsm___024root* vlSelf, VerilatedVcd* tracep);

static void traceInit(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vfsm___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vfsm___024root*>(voidSelf);
    Vfsm__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->module(vlSymsp->name());
    tracep->scopeEscape(' ');
    Vfsm___024root__traceInitTop(vlSelf, tracep);
    tracep->scopeEscape('.');
}

void Vfsm___024root__traceRegister(Vfsm___024root* vlSelf, VerilatedVcd* tracep);

void Vfsm::trace(VerilatedVcdC* tfp, int, int) {
    tfp->spTrace()->addInitCb(&traceInit, &(vlSymsp->TOP));
    Vfsm___024root__traceRegister(&(vlSymsp->TOP), tfp->spTrace());
}
