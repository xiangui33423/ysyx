// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vencoder.h"
#include "Vencoder__Syms.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

Vencoder::Vencoder(VerilatedContext* _vcontextp__, const char* _vcname__)
    : vlSymsp{new Vencoder__Syms(_vcontextp__, _vcname__, this)}
    , x{vlSymsp->TOP.x}
    , en{vlSymsp->TOP.en}
    , y{vlSymsp->TOP.y}
    , tur{vlSymsp->TOP.tur}
    , rootp{&(vlSymsp->TOP)}
{
}

Vencoder::Vencoder(const char* _vcname__)
    : Vencoder(nullptr, _vcname__)
{
}

//============================================================
// Destructor

Vencoder::~Vencoder() {
    delete vlSymsp;
}

//============================================================
// Evaluation loop

void Vencoder___024root___eval_initial(Vencoder___024root* vlSelf);
void Vencoder___024root___eval_settle(Vencoder___024root* vlSelf);
void Vencoder___024root___eval(Vencoder___024root* vlSelf);
QData Vencoder___024root___change_request(Vencoder___024root* vlSelf);
#ifdef VL_DEBUG
void Vencoder___024root___eval_debug_assertions(Vencoder___024root* vlSelf);
#endif  // VL_DEBUG
void Vencoder___024root___final(Vencoder___024root* vlSelf);

static void _eval_initial_loop(Vencoder__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    Vencoder___024root___eval_initial(&(vlSymsp->TOP));
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial loop\n"););
        Vencoder___024root___eval_settle(&(vlSymsp->TOP));
        Vencoder___024root___eval(&(vlSymsp->TOP));
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = Vencoder___024root___change_request(&(vlSymsp->TOP));
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("encoder.v", 1, "",
                "Verilated model didn't DC converge\n"
                "- See https://verilator.org/warn/DIDNOTCONVERGE");
        } else {
            __Vchange = Vencoder___024root___change_request(&(vlSymsp->TOP));
        }
    } while (VL_UNLIKELY(__Vchange));
}

void Vencoder::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vencoder::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vencoder___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        Vencoder___024root___eval(&(vlSymsp->TOP));
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = Vencoder___024root___change_request(&(vlSymsp->TOP));
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("encoder.v", 1, "",
                "Verilated model didn't converge\n"
                "- See https://verilator.org/warn/DIDNOTCONVERGE");
        } else {
            __Vchange = Vencoder___024root___change_request(&(vlSymsp->TOP));
        }
    } while (VL_UNLIKELY(__Vchange));
}

//============================================================
// Invoke final blocks

void Vencoder::final() {
    Vencoder___024root___final(&(vlSymsp->TOP));
}

//============================================================
// Utilities

VerilatedContext* Vencoder::contextp() const {
    return vlSymsp->_vm_contextp__;
}

const char* Vencoder::name() const {
    return vlSymsp->name();
}

//============================================================
// Trace configuration

void Vencoder___024root__traceInitTop(Vencoder___024root* vlSelf, VerilatedVcd* tracep);

static void traceInit(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vencoder___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vencoder___024root*>(voidSelf);
    Vencoder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->module(vlSymsp->name());
    tracep->scopeEscape(' ');
    Vencoder___024root__traceInitTop(vlSelf, tracep);
    tracep->scopeEscape('.');
}

void Vencoder___024root__traceRegister(Vencoder___024root* vlSelf, VerilatedVcd* tracep);

void Vencoder::trace(VerilatedVcdC* tfp, int, int) {
    tfp->spTrace()->addInitCb(&traceInit, &(vlSymsp->TOP));
    Vencoder___024root__traceRegister(&(vlSymsp->TOP), tfp->spTrace());
}
