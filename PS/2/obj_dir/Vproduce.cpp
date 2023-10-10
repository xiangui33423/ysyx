// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vproduce.h"
#include "Vproduce__Syms.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

Vproduce::Vproduce(VerilatedContext* _vcontextp__, const char* _vcname__)
    : vlSymsp{new Vproduce__Syms(_vcontextp__, _vcname__, this)}
    , data{vlSymsp->TOP.data}
    , clk{vlSymsp->TOP.clk}
    , rst_n{vlSymsp->TOP.rst_n}
    , en{vlSymsp->TOP.en}
    , counter1{vlSymsp->TOP.counter1}
    , counter2{vlSymsp->TOP.counter2}
    , ascii1{vlSymsp->TOP.ascii1}
    , ascii2{vlSymsp->TOP.ascii2}
    , key1{vlSymsp->TOP.key1}
    , key2{vlSymsp->TOP.key2}
    , rootp{&(vlSymsp->TOP)}
{
}

Vproduce::Vproduce(const char* _vcname__)
    : Vproduce(nullptr, _vcname__)
{
}

//============================================================
// Destructor

Vproduce::~Vproduce() {
    delete vlSymsp;
}

//============================================================
// Evaluation loop

void Vproduce___024root___eval_initial(Vproduce___024root* vlSelf);
void Vproduce___024root___eval_settle(Vproduce___024root* vlSelf);
void Vproduce___024root___eval(Vproduce___024root* vlSelf);
QData Vproduce___024root___change_request(Vproduce___024root* vlSelf);
#ifdef VL_DEBUG
void Vproduce___024root___eval_debug_assertions(Vproduce___024root* vlSelf);
#endif  // VL_DEBUG
void Vproduce___024root___final(Vproduce___024root* vlSelf);

static void _eval_initial_loop(Vproduce__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    Vproduce___024root___eval_initial(&(vlSymsp->TOP));
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial loop\n"););
        Vproduce___024root___eval_settle(&(vlSymsp->TOP));
        Vproduce___024root___eval(&(vlSymsp->TOP));
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = Vproduce___024root___change_request(&(vlSymsp->TOP));
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("produce.v", 2, "",
                "Verilated model didn't DC converge\n"
                "- See https://verilator.org/warn/DIDNOTCONVERGE");
        } else {
            __Vchange = Vproduce___024root___change_request(&(vlSymsp->TOP));
        }
    } while (VL_UNLIKELY(__Vchange));
}

void Vproduce::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vproduce::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vproduce___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        Vproduce___024root___eval(&(vlSymsp->TOP));
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = Vproduce___024root___change_request(&(vlSymsp->TOP));
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("produce.v", 2, "",
                "Verilated model didn't converge\n"
                "- See https://verilator.org/warn/DIDNOTCONVERGE");
        } else {
            __Vchange = Vproduce___024root___change_request(&(vlSymsp->TOP));
        }
    } while (VL_UNLIKELY(__Vchange));
}

//============================================================
// Invoke final blocks

void Vproduce::final() {
    Vproduce___024root___final(&(vlSymsp->TOP));
}

//============================================================
// Utilities

VerilatedContext* Vproduce::contextp() const {
    return vlSymsp->_vm_contextp__;
}

const char* Vproduce::name() const {
    return vlSymsp->name();
}

//============================================================
// Trace configuration

void Vproduce___024root__traceInitTop(Vproduce___024root* vlSelf, VerilatedVcd* tracep);

static void traceInit(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vproduce___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vproduce___024root*>(voidSelf);
    Vproduce__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->module(vlSymsp->name());
    tracep->scopeEscape(' ');
    Vproduce___024root__traceInitTop(vlSelf, tracep);
    tracep->scopeEscape('.');
}

void Vproduce___024root__traceRegister(Vproduce___024root* vlSelf, VerilatedVcd* tracep);

void Vproduce::trace(VerilatedVcdC* tfp, int, int) {
    tfp->spTrace()->addInitCb(&traceInit, &(vlSymsp->TOP));
    Vproduce___024root__traceRegister(&(vlSymsp->TOP), tfp->spTrace());
}
