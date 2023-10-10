// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vkeyboard.h"
#include "Vkeyboard__Syms.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

Vkeyboard::Vkeyboard(VerilatedContext* _vcontextp__, const char* _vcname__)
    : vlSymsp{new Vkeyboard__Syms(_vcontextp__, _vcname__, this)}
    , clk{vlSymsp->TOP.clk}
    , rst_n{vlSymsp->TOP.rst_n}
    , ps2_data{vlSymsp->TOP.ps2_data}
    , ps2_clk{vlSymsp->TOP.ps2_clk}
    , out{vlSymsp->TOP.out}
    , en{vlSymsp->TOP.en}
    , rootp{&(vlSymsp->TOP)}
{
}

Vkeyboard::Vkeyboard(const char* _vcname__)
    : Vkeyboard(nullptr, _vcname__)
{
}

//============================================================
// Destructor

Vkeyboard::~Vkeyboard() {
    delete vlSymsp;
}

//============================================================
// Evaluation loop

void Vkeyboard___024root___eval_initial(Vkeyboard___024root* vlSelf);
void Vkeyboard___024root___eval_settle(Vkeyboard___024root* vlSelf);
void Vkeyboard___024root___eval(Vkeyboard___024root* vlSelf);
QData Vkeyboard___024root___change_request(Vkeyboard___024root* vlSelf);
#ifdef VL_DEBUG
void Vkeyboard___024root___eval_debug_assertions(Vkeyboard___024root* vlSelf);
#endif  // VL_DEBUG
void Vkeyboard___024root___final(Vkeyboard___024root* vlSelf);

static void _eval_initial_loop(Vkeyboard__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    Vkeyboard___024root___eval_initial(&(vlSymsp->TOP));
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial loop\n"););
        Vkeyboard___024root___eval_settle(&(vlSymsp->TOP));
        Vkeyboard___024root___eval(&(vlSymsp->TOP));
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = Vkeyboard___024root___change_request(&(vlSymsp->TOP));
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("keyboard.v", 1, "",
                "Verilated model didn't DC converge\n"
                "- See https://verilator.org/warn/DIDNOTCONVERGE");
        } else {
            __Vchange = Vkeyboard___024root___change_request(&(vlSymsp->TOP));
        }
    } while (VL_UNLIKELY(__Vchange));
}

void Vkeyboard::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vkeyboard::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vkeyboard___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        Vkeyboard___024root___eval(&(vlSymsp->TOP));
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = Vkeyboard___024root___change_request(&(vlSymsp->TOP));
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("keyboard.v", 1, "",
                "Verilated model didn't converge\n"
                "- See https://verilator.org/warn/DIDNOTCONVERGE");
        } else {
            __Vchange = Vkeyboard___024root___change_request(&(vlSymsp->TOP));
        }
    } while (VL_UNLIKELY(__Vchange));
}

//============================================================
// Invoke final blocks

void Vkeyboard::final() {
    Vkeyboard___024root___final(&(vlSymsp->TOP));
}

//============================================================
// Utilities

VerilatedContext* Vkeyboard::contextp() const {
    return vlSymsp->_vm_contextp__;
}

const char* Vkeyboard::name() const {
    return vlSymsp->name();
}

//============================================================
// Trace configuration

void Vkeyboard___024root__traceInitTop(Vkeyboard___024root* vlSelf, VerilatedVcd* tracep);

static void traceInit(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vkeyboard___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vkeyboard___024root*>(voidSelf);
    Vkeyboard__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->module(vlSymsp->name());
    tracep->scopeEscape(' ');
    Vkeyboard___024root__traceInitTop(vlSelf, tracep);
    tracep->scopeEscape('.');
}

void Vkeyboard___024root__traceRegister(Vkeyboard___024root* vlSelf, VerilatedVcd* tracep);

void Vkeyboard::trace(VerilatedVcdC* tfp, int, int) {
    tfp->spTrace()->addInitCb(&traceInit, &(vlSymsp->TOP));
    Vkeyboard___024root__traceRegister(&(vlSymsp->TOP), tfp->spTrace());
}
