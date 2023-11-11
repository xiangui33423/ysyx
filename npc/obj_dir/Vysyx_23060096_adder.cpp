// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vysyx_23060096_adder.h"
#include "Vysyx_23060096_adder__Syms.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

Vysyx_23060096_adder::Vysyx_23060096_adder(VerilatedContext* _vcontextp__, const char* _vcname__)
    : vlSymsp{new Vysyx_23060096_adder__Syms(_vcontextp__, _vcname__, this)}
    , ysyx_23060096_npc__02Eclk{vlSymsp->TOP.ysyx_23060096_npc__02Eclk}
    , ysyx_23060096_npc__02Erstn{vlSymsp->TOP.ysyx_23060096_npc__02Erstn}
    , ysyx_23060096_npc__02Einst{vlSymsp->TOP.ysyx_23060096_npc__02Einst}
    , ysyx_23060096_npc__02Epc{vlSymsp->TOP.ysyx_23060096_npc__02Epc}
    , ysyx_23060096_PCreg__02Eclk{vlSymsp->TOP.ysyx_23060096_PCreg__02Eclk}
    , rst_n{vlSymsp->TOP.rst_n}
    , ysyx_23060096_PCreg__02Epc{vlSymsp->TOP.ysyx_23060096_PCreg__02Epc}
    , ysyx_23060096_PCreg__02Einst{vlSymsp->TOP.ysyx_23060096_PCreg__02Einst}
    , ysyx_23060096_pc__02Eclk{vlSymsp->TOP.ysyx_23060096_pc__02Eclk}
    , ysyx_23060096_pc__02Erstn{vlSymsp->TOP.ysyx_23060096_pc__02Erstn}
    , ysyx_23060096_pc__02Epc{vlSymsp->TOP.ysyx_23060096_pc__02Epc}
    , ysyx_23060096_RegisterFile__02Eclk{vlSymsp->TOP.ysyx_23060096_RegisterFile__02Eclk}
    , ysyx_23060096_RegisterFile__02Erstn{vlSymsp->TOP.ysyx_23060096_RegisterFile__02Erstn}
    , wdata{vlSymsp->TOP.wdata}
    , Ra{vlSymsp->TOP.Ra}
    , Rb{vlSymsp->TOP.Rb}
    , waddr{vlSymsp->TOP.waddr}
    , w_en{vlSymsp->TOP.w_en}
    , busA{vlSymsp->TOP.busA}
    , busB{vlSymsp->TOP.busB}
    , ysyx_23060096_Reg__02Eclk{vlSymsp->TOP.ysyx_23060096_Reg__02Eclk}
    , rst{vlSymsp->TOP.rst}
    , din{vlSymsp->TOP.din}
    , dout{vlSymsp->TOP.dout}
    , wen{vlSymsp->TOP.wen}
    , A{vlSymsp->TOP.A}
    , B{vlSymsp->TOP.B}
    , op{vlSymsp->TOP.op}
    , out{vlSymsp->TOP.out}
    , rootp{&(vlSymsp->TOP)}
{
}

Vysyx_23060096_adder::Vysyx_23060096_adder(const char* _vcname__)
    : Vysyx_23060096_adder(nullptr, _vcname__)
{
}

//============================================================
// Destructor

Vysyx_23060096_adder::~Vysyx_23060096_adder() {
    delete vlSymsp;
}

//============================================================
// Evaluation loop

void Vysyx_23060096_adder___024root___eval_initial(Vysyx_23060096_adder___024root* vlSelf);
void Vysyx_23060096_adder___024root___eval_settle(Vysyx_23060096_adder___024root* vlSelf);
void Vysyx_23060096_adder___024root___eval(Vysyx_23060096_adder___024root* vlSelf);
QData Vysyx_23060096_adder___024root___change_request(Vysyx_23060096_adder___024root* vlSelf);
#ifdef VL_DEBUG
void Vysyx_23060096_adder___024root___eval_debug_assertions(Vysyx_23060096_adder___024root* vlSelf);
#endif  // VL_DEBUG
void Vysyx_23060096_adder___024root___final(Vysyx_23060096_adder___024root* vlSelf);

static void _eval_initial_loop(Vysyx_23060096_adder__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    Vysyx_23060096_adder___024root___eval_initial(&(vlSymsp->TOP));
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial loop\n"););
        Vysyx_23060096_adder___024root___eval_settle(&(vlSymsp->TOP));
        Vysyx_23060096_adder___024root___eval(&(vlSymsp->TOP));
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = Vysyx_23060096_adder___024root___change_request(&(vlSymsp->TOP));
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("vsrc/ysyx_23060096_npc.v", 1, "",
                "Verilated model didn't DC converge\n"
                "- See https://verilator.org/warn/DIDNOTCONVERGE");
        } else {
            __Vchange = Vysyx_23060096_adder___024root___change_request(&(vlSymsp->TOP));
        }
    } while (VL_UNLIKELY(__Vchange));
}

void Vysyx_23060096_adder::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vysyx_23060096_adder::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vysyx_23060096_adder___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        Vysyx_23060096_adder___024root___eval(&(vlSymsp->TOP));
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = Vysyx_23060096_adder___024root___change_request(&(vlSymsp->TOP));
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("vsrc/ysyx_23060096_npc.v", 1, "",
                "Verilated model didn't converge\n"
                "- See https://verilator.org/warn/DIDNOTCONVERGE");
        } else {
            __Vchange = Vysyx_23060096_adder___024root___change_request(&(vlSymsp->TOP));
        }
    } while (VL_UNLIKELY(__Vchange));
}

//============================================================
// Invoke final blocks

void Vysyx_23060096_adder::final() {
    Vysyx_23060096_adder___024root___final(&(vlSymsp->TOP));
}

//============================================================
// Utilities

VerilatedContext* Vysyx_23060096_adder::contextp() const {
    return vlSymsp->_vm_contextp__;
}

const char* Vysyx_23060096_adder::name() const {
    return vlSymsp->name();
}

//============================================================
// Trace configuration

void Vysyx_23060096_adder___024root__traceInitTop(Vysyx_23060096_adder___024root* vlSelf, VerilatedVcd* tracep);

static void traceInit(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vysyx_23060096_adder___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vysyx_23060096_adder___024root*>(voidSelf);
    Vysyx_23060096_adder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->module(vlSymsp->name());
    tracep->scopeEscape(' ');
    Vysyx_23060096_adder___024root__traceInitTop(vlSelf, tracep);
    tracep->scopeEscape('.');
}

void Vysyx_23060096_adder___024root__traceRegister(Vysyx_23060096_adder___024root* vlSelf, VerilatedVcd* tracep);

void Vysyx_23060096_adder::trace(VerilatedVcdC* tfp, int, int) {
    tfp->spTrace()->addInitCb(&traceInit, &(vlSymsp->TOP));
    Vysyx_23060096_adder___024root__traceRegister(&(vlSymsp->TOP), tfp->spTrace());
}
