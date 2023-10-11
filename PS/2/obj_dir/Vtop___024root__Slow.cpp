// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop___024root.h"
#include "Vtop__Syms.h"

//==========


void Vtop___024root___ctor_var_reset(Vtop___024root* vlSelf);

Vtop___024root::Vtop___024root(const char* _vcname__)
    : VerilatedModule(_vcname__)
 {
    // Reset structure values
    Vtop___024root___ctor_var_reset(this);
}

void Vtop___024root::__Vconfigure(Vtop__Syms* _vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->vlSymsp = _vlSymsp;
}

Vtop___024root::~Vtop___024root() {
}

void Vtop___024root___settle__TOP__1(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___settle__TOP__1\n"); );
    // Body
    vlSelf->top__DOT__u_produce__DOT__u_ascii__DOT__i = 0x24U;
    if (vlSelf->rst_n) {
        vlSelf->counter1 = (0xffU & vlSelf->top__DOT__u_produce__DOT__u_rom_counter1__DOT__rom
                            [(0xfU & ((IData)(vlSelf->top__DOT__u_produce__DOT__counter) 
                                      >> 4U))]);
        vlSelf->counter2 = (0xffU & vlSelf->top__DOT__u_produce__DOT__u_rom_counter2__DOT__rom
                            [(0xfU & (IData)(vlSelf->top__DOT__u_produce__DOT__counter))]);
    } else {
        vlSelf->counter1 = 0U;
        vlSelf->counter2 = 0U;
    }
    vlSelf->top__DOT__u_produce__DOT__u_ascii__DOT__lut_key[0U] 
        = (0xffU & (vlSelf->top__DOT__u_produce__DOT__u_ascii__DOT__lut
                    [0U] >> 8U));
    vlSelf->top__DOT__u_produce__DOT__u_ascii__DOT__lut_data[0U] 
        = (0xffU & vlSelf->top__DOT__u_produce__DOT__u_ascii__DOT__lut
           [0U]);
    vlSelf->top__DOT__u_produce__DOT__u_ascii__DOT__lut_key[1U] 
        = (0xffU & (vlSelf->top__DOT__u_produce__DOT__u_ascii__DOT__lut
                    [1U] >> 8U));
    vlSelf->top__DOT__u_produce__DOT__u_ascii__DOT__lut_data[1U] 
        = (0xffU & vlSelf->top__DOT__u_produce__DOT__u_ascii__DOT__lut
           [1U]);
    vlSelf->top__DOT__u_produce__DOT__u_ascii__DOT__lut_key[2U] 
        = (0xffU & (vlSelf->top__DOT__u_produce__DOT__u_ascii__DOT__lut
                    [2U] >> 8U));
    vlSelf->top__DOT__u_produce__DOT__u_ascii__DOT__lut_data[2U] 
        = (0xffU & vlSelf->top__DOT__u_produce__DOT__u_ascii__DOT__lut
           [2U]);
    vlSelf->top__DOT__u_produce__DOT__u_ascii__DOT__lut_key[3U] 
        = (0xffU & (vlSelf->top__DOT__u_produce__DOT__u_ascii__DOT__lut
                    [3U] >> 8U));
    vlSelf->top__DOT__u_produce__DOT__u_ascii__DOT__lut_data[3U] 
        = (0xffU & vlSelf->top__DOT__u_produce__DOT__u_ascii__DOT__lut
           [3U]);
    vlSelf->top__DOT__u_produce__DOT__u_ascii__DOT__lut_key[4U] 
        = (0xffU & (vlSelf->top__DOT__u_produce__DOT__u_ascii__DOT__lut
                    [4U] >> 8U));
    vlSelf->top__DOT__u_produce__DOT__u_ascii__DOT__lut_data[4U] 
        = (0xffU & vlSelf->top__DOT__u_produce__DOT__u_ascii__DOT__lut
           [4U]);
    vlSelf->top__DOT__u_produce__DOT__u_ascii__DOT__lut_key[5U] 
        = (0xffU & (vlSelf->top__DOT__u_produce__DOT__u_ascii__DOT__lut
                    [5U] >> 8U));
    vlSelf->top__DOT__u_produce__DOT__u_ascii__DOT__lut_data[5U] 
        = (0xffU & vlSelf->top__DOT__u_produce__DOT__u_ascii__DOT__lut
           [5U]);
    vlSelf->top__DOT__u_produce__DOT__u_ascii__DOT__lut_key[6U] 
        = (0xffU & (vlSelf->top__DOT__u_produce__DOT__u_ascii__DOT__lut
                    [6U] >> 8U));
    vlSelf->top__DOT__u_produce__DOT__u_ascii__DOT__lut_data[6U] 
        = (0xffU & vlSelf->top__DOT__u_produce__DOT__u_ascii__DOT__lut
           [6U]);
    vlSelf->top__DOT__u_produce__DOT__u_ascii__DOT__lut_key[7U] 
        = (0xffU & (vlSelf->top__DOT__u_produce__DOT__u_ascii__DOT__lut
                    [7U] >> 8U));
    vlSelf->top__DOT__u_produce__DOT__u_ascii__DOT__lut_data[7U] 
        = (0xffU & vlSelf->top__DOT__u_produce__DOT__u_ascii__DOT__lut
           [7U]);
    vlSelf->top__DOT__u_produce__DOT__u_ascii__DOT__lut_key[8U] 
        = (0xffU & (vlSelf->top__DOT__u_produce__DOT__u_ascii__DOT__lut
                    [8U] >> 8U));
    vlSelf->top__DOT__u_produce__DOT__u_ascii__DOT__lut_data[8U] 
        = (0xffU & vlSelf->top__DOT__u_produce__DOT__u_ascii__DOT__lut
           [8U]);
    vlSelf->top__DOT__u_produce__DOT__u_ascii__DOT__lut_key[9U] 
        = (0xffU & (vlSelf->top__DOT__u_produce__DOT__u_ascii__DOT__lut
                    [9U] >> 8U));
    vlSelf->top__DOT__u_produce__DOT__u_ascii__DOT__lut_data[9U] 
        = (0xffU & vlSelf->top__DOT__u_produce__DOT__u_ascii__DOT__lut
           [9U]);
    vlSelf->top__DOT__u_produce__DOT__u_ascii__DOT__lut_key[0xaU] 
        = (0xffU & (vlSelf->top__DOT__u_produce__DOT__u_ascii__DOT__lut
                    [0xaU] >> 8U));
    vlSelf->top__DOT__u_produce__DOT__u_ascii__DOT__lut_data[0xaU] 
        = (0xffU & vlSelf->top__DOT__u_produce__DOT__u_ascii__DOT__lut
           [0xaU]);
    vlSelf->top__DOT__u_produce__DOT__u_ascii__DOT__lut_key[0xbU] 
        = (0xffU & (vlSelf->top__DOT__u_produce__DOT__u_ascii__DOT__lut
                    [0xbU] >> 8U));
    vlSelf->top__DOT__u_produce__DOT__u_ascii__DOT__lut_data[0xbU] 
        = (0xffU & vlSelf->top__DOT__u_produce__DOT__u_ascii__DOT__lut
           [0xbU]);
    vlSelf->top__DOT__u_produce__DOT__u_ascii__DOT__lut_key[0xcU] 
        = (0xffU & (vlSelf->top__DOT__u_produce__DOT__u_ascii__DOT__lut
                    [0xcU] >> 8U));
    vlSelf->top__DOT__u_produce__DOT__u_ascii__DOT__lut_data[0xcU] 
        = (0xffU & vlSelf->top__DOT__u_produce__DOT__u_ascii__DOT__lut
           [0xcU]);
    vlSelf->top__DOT__u_produce__DOT__u_ascii__DOT__lut_key[0xdU] 
        = (0xffU & (vlSelf->top__DOT__u_produce__DOT__u_ascii__DOT__lut
                    [0xdU] >> 8U));
    vlSelf->top__DOT__u_produce__DOT__u_ascii__DOT__lut_data[0xdU] 
        = (0xffU & vlSelf->top__DOT__u_produce__DOT__u_ascii__DOT__lut
           [0xdU]);
    vlSelf->top__DOT__u_produce__DOT__u_ascii__DOT__lut_key[0xeU] 
        = (0xffU & (vlSelf->top__DOT__u_produce__DOT__u_ascii__DOT__lut
                    [0xeU] >> 8U));
    vlSelf->top__DOT__u_produce__DOT__u_ascii__DOT__lut_data[0xeU] 
        = (0xffU & vlSelf->top__DOT__u_produce__DOT__u_ascii__DOT__lut
           [0xeU]);
    vlSelf->top__DOT__u_produce__DOT__u_ascii__DOT__lut_key[0xfU] 
        = (0xffU & (vlSelf->top__DOT__u_produce__DOT__u_ascii__DOT__lut
                    [0xfU] >> 8U));
    vlSelf->top__DOT__u_produce__DOT__u_ascii__DOT__lut_data[0xfU] 
        = (0xffU & vlSelf->top__DOT__u_produce__DOT__u_ascii__DOT__lut
           [0xfU]);
    vlSelf->top__DOT__u_produce__DOT__u_ascii__DOT__lut_key[0x10U] 
        = (0xffU & (vlSelf->top__DOT__u_produce__DOT__u_ascii__DOT__lut
                    [0x10U] >> 8U));
    vlSelf->top__DOT__u_produce__DOT__u_ascii__DOT__lut_data[0x10U] 
        = (0xffU & vlSelf->top__DOT__u_produce__DOT__u_ascii__DOT__lut
           [0x10U]);
    vlSelf->top__DOT__u_produce__DOT__u_ascii__DOT__lut_key[0x11U] 
        = (0xffU & (vlSelf->top__DOT__u_produce__DOT__u_ascii__DOT__lut
                    [0x11U] >> 8U));
    vlSelf->top__DOT__u_produce__DOT__u_ascii__DOT__lut_data[0x11U] 
        = (0xffU & vlSelf->top__DOT__u_produce__DOT__u_ascii__DOT__lut
           [0x11U]);
    vlSelf->top__DOT__u_produce__DOT__u_ascii__DOT__lut_key[0x12U] 
        = (0xffU & (vlSelf->top__DOT__u_produce__DOT__u_ascii__DOT__lut
                    [0x12U] >> 8U));
    vlSelf->top__DOT__u_produce__DOT__u_ascii__DOT__lut_data[0x12U] 
        = (0xffU & vlSelf->top__DOT__u_produce__DOT__u_ascii__DOT__lut
           [0x12U]);
    vlSelf->top__DOT__u_produce__DOT__u_ascii__DOT__lut_key[0x13U] 
        = (0xffU & (vlSelf->top__DOT__u_produce__DOT__u_ascii__DOT__lut
                    [0x13U] >> 8U));
    vlSelf->top__DOT__u_produce__DOT__u_ascii__DOT__lut_data[0x13U] 
        = (0xffU & vlSelf->top__DOT__u_produce__DOT__u_ascii__DOT__lut
           [0x13U]);
    vlSelf->top__DOT__u_produce__DOT__u_ascii__DOT__lut_key[0x14U] 
        = (0xffU & (vlSelf->top__DOT__u_produce__DOT__u_ascii__DOT__lut
                    [0x14U] >> 8U));
    vlSelf->top__DOT__u_produce__DOT__u_ascii__DOT__lut_data[0x14U] 
        = (0xffU & vlSelf->top__DOT__u_produce__DOT__u_ascii__DOT__lut
           [0x14U]);
    vlSelf->top__DOT__u_produce__DOT__u_ascii__DOT__lut_key[0x15U] 
        = (0xffU & (vlSelf->top__DOT__u_produce__DOT__u_ascii__DOT__lut
                    [0x15U] >> 8U));
    vlSelf->top__DOT__u_produce__DOT__u_ascii__DOT__lut_data[0x15U] 
        = (0xffU & vlSelf->top__DOT__u_produce__DOT__u_ascii__DOT__lut
           [0x15U]);
    vlSelf->top__DOT__u_produce__DOT__u_ascii__DOT__lut_key[0x16U] 
        = (0xffU & (vlSelf->top__DOT__u_produce__DOT__u_ascii__DOT__lut
                    [0x16U] >> 8U));
    vlSelf->top__DOT__u_produce__DOT__u_ascii__DOT__lut_data[0x16U] 
        = (0xffU & vlSelf->top__DOT__u_produce__DOT__u_ascii__DOT__lut
           [0x16U]);
    vlSelf->top__DOT__u_produce__DOT__u_ascii__DOT__lut_key[0x17U] 
        = (0xffU & (vlSelf->top__DOT__u_produce__DOT__u_ascii__DOT__lut
                    [0x17U] >> 8U));
    vlSelf->top__DOT__u_produce__DOT__u_ascii__DOT__lut_data[0x17U] 
        = (0xffU & vlSelf->top__DOT__u_produce__DOT__u_ascii__DOT__lut
           [0x17U]);
    vlSelf->top__DOT__u_produce__DOT__u_ascii__DOT__lut_key[0x18U] 
        = (0xffU & (vlSelf->top__DOT__u_produce__DOT__u_ascii__DOT__lut
                    [0x18U] >> 8U));
    vlSelf->top__DOT__u_produce__DOT__u_ascii__DOT__lut_data[0x18U] 
        = (0xffU & vlSelf->top__DOT__u_produce__DOT__u_ascii__DOT__lut
           [0x18U]);
    vlSelf->top__DOT__u_produce__DOT__u_ascii__DOT__lut_key[0x19U] 
        = (0xffU & (vlSelf->top__DOT__u_produce__DOT__u_ascii__DOT__lut
                    [0x19U] >> 8U));
    vlSelf->top__DOT__u_produce__DOT__u_ascii__DOT__lut_data[0x19U] 
        = (0xffU & vlSelf->top__DOT__u_produce__DOT__u_ascii__DOT__lut
           [0x19U]);
    vlSelf->top__DOT__u_produce__DOT__u_ascii__DOT__lut_key[0x1aU] 
        = (0xffU & (vlSelf->top__DOT__u_produce__DOT__u_ascii__DOT__lut
                    [0x1aU] >> 8U));
    vlSelf->top__DOT__u_produce__DOT__u_ascii__DOT__lut_data[0x1aU] 
        = (0xffU & vlSelf->top__DOT__u_produce__DOT__u_ascii__DOT__lut
           [0x1aU]);
    vlSelf->top__DOT__u_produce__DOT__u_ascii__DOT__lut_key[0x1bU] 
        = (0xffU & (vlSelf->top__DOT__u_produce__DOT__u_ascii__DOT__lut
                    [0x1bU] >> 8U));
    vlSelf->top__DOT__u_produce__DOT__u_ascii__DOT__lut_data[0x1bU] 
        = (0xffU & vlSelf->top__DOT__u_produce__DOT__u_ascii__DOT__lut
           [0x1bU]);
    vlSelf->top__DOT__u_produce__DOT__u_ascii__DOT__lut_key[0x1cU] 
        = (0xffU & (vlSelf->top__DOT__u_produce__DOT__u_ascii__DOT__lut
                    [0x1cU] >> 8U));
    vlSelf->top__DOT__u_produce__DOT__u_ascii__DOT__lut_data[0x1cU] 
        = (0xffU & vlSelf->top__DOT__u_produce__DOT__u_ascii__DOT__lut
           [0x1cU]);
    vlSelf->top__DOT__u_produce__DOT__u_ascii__DOT__lut_key[0x1dU] 
        = (0xffU & (vlSelf->top__DOT__u_produce__DOT__u_ascii__DOT__lut
                    [0x1dU] >> 8U));
    vlSelf->top__DOT__u_produce__DOT__u_ascii__DOT__lut_data[0x1dU] 
        = (0xffU & vlSelf->top__DOT__u_produce__DOT__u_ascii__DOT__lut
           [0x1dU]);
    vlSelf->top__DOT__u_produce__DOT__u_ascii__DOT__lut_key[0x1eU] 
        = (0xffU & (vlSelf->top__DOT__u_produce__DOT__u_ascii__DOT__lut
                    [0x1eU] >> 8U));
    vlSelf->top__DOT__u_produce__DOT__u_ascii__DOT__lut_data[0x1eU] 
        = (0xffU & vlSelf->top__DOT__u_produce__DOT__u_ascii__DOT__lut
           [0x1eU]);
    vlSelf->top__DOT__u_produce__DOT__u_ascii__DOT__lut_key[0x1fU] 
        = (0xffU & (vlSelf->top__DOT__u_produce__DOT__u_ascii__DOT__lut
                    [0x1fU] >> 8U));
    vlSelf->top__DOT__u_produce__DOT__u_ascii__DOT__lut_data[0x1fU] 
        = (0xffU & vlSelf->top__DOT__u_produce__DOT__u_ascii__DOT__lut
           [0x1fU]);
    vlSelf->top__DOT__u_produce__DOT__u_ascii__DOT__lut_key[0x20U] 
        = (0xffU & (vlSelf->top__DOT__u_produce__DOT__u_ascii__DOT__lut
                    [0x20U] >> 8U));
    vlSelf->top__DOT__u_produce__DOT__u_ascii__DOT__lut_data[0x20U] 
        = (0xffU & vlSelf->top__DOT__u_produce__DOT__u_ascii__DOT__lut
           [0x20U]);
    vlSelf->top__DOT__u_produce__DOT__u_ascii__DOT__lut_key[0x21U] 
        = (0xffU & (vlSelf->top__DOT__u_produce__DOT__u_ascii__DOT__lut
                    [0x21U] >> 8U));
    vlSelf->top__DOT__u_produce__DOT__u_ascii__DOT__lut_data[0x21U] 
        = (0xffU & vlSelf->top__DOT__u_produce__DOT__u_ascii__DOT__lut
           [0x21U]);
    vlSelf->top__DOT__u_produce__DOT__u_ascii__DOT__lut_key[0x22U] 
        = (0xffU & (vlSelf->top__DOT__u_produce__DOT__u_ascii__DOT__lut
                    [0x22U] >> 8U));
    vlSelf->top__DOT__u_produce__DOT__u_ascii__DOT__lut_data[0x22U] 
        = (0xffU & vlSelf->top__DOT__u_produce__DOT__u_ascii__DOT__lut
           [0x22U]);
    vlSelf->top__DOT__u_produce__DOT__u_ascii__DOT__lut_key[0x23U] 
        = (0xffU & (vlSelf->top__DOT__u_produce__DOT__u_ascii__DOT__lut
                    [0x23U] >> 8U));
    vlSelf->top__DOT__u_produce__DOT__u_ascii__DOT__lut_data[0x23U] 
        = (0xffU & vlSelf->top__DOT__u_produce__DOT__u_ascii__DOT__lut
           [0x23U]);
    vlSelf->top__DOT__u_produce__DOT__u_fsm__DOT__next_state 
        = ((4U & (IData)(vlSelf->top__DOT__u_produce__DOT__u_fsm__DOT__current_state))
            ? 0U : ((2U & (IData)(vlSelf->top__DOT__u_produce__DOT__u_fsm__DOT__current_state))
                     ? ((1U & (IData)(vlSelf->top__DOT__u_produce__DOT__u_fsm__DOT__current_state))
                         ? 0U : ((IData)(vlSelf->top__DOT__en)
                                  ? 4U : 2U)) : ((1U 
                                                  & (IData)(vlSelf->top__DOT__u_produce__DOT__u_fsm__DOT__current_state))
                                                  ? 
                                                 ((0xf0U 
                                                   == (IData)(vlSelf->top__DOT__u_keyboard__DOT__data))
                                                   ? 2U
                                                   : 1U)
                                                  : 
                                                 (((0xfU 
                                                    != (IData)(vlSelf->top__DOT__u_keyboard__DOT__data)) 
                                                   & (IData)(vlSelf->top__DOT__en))
                                                   ? 1U
                                                   : 0U))));
    if ((((0U != (IData)(vlSelf->top__DOT__u_keyboard__DOT__data)) 
          & (0xf0U != (IData)(vlSelf->top__DOT__u_keyboard__DOT__data))) 
         & (0xf0U != (IData)(vlSelf->top__DOT__u_produce__DOT__buffer)))) {
        vlSelf->top__DOT__u_produce__DOT__addr1 = (0xfU 
                                                   & (IData)(vlSelf->top__DOT__u_keyboard__DOT__data));
        vlSelf->top__DOT__u_produce__DOT__addr2 = (0xfU 
                                                   & ((IData)(vlSelf->top__DOT__u_keyboard__DOT__data) 
                                                      >> 4U));
    } else {
        vlSelf->top__DOT__u_produce__DOT__addr1 = 0x10U;
        vlSelf->top__DOT__u_produce__DOT__addr2 = 0x10U;
    }
    vlSelf->top__DOT__u_produce__DOT__u_ascii__DOT__lut_out 
        = ((- (IData)((vlSelf->top__DOT__u_produce__DOT__u_ascii__DOT__lut_key
                       [0U] == (IData)(vlSelf->top__DOT__u_keyboard__DOT__data)))) 
           & vlSelf->top__DOT__u_produce__DOT__u_ascii__DOT__lut_data
           [0U]);
    vlSelf->top__DOT__u_produce__DOT__u_ascii__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__u_produce__DOT__u_ascii__DOT__lut_out) 
           | ((- (IData)((vlSelf->top__DOT__u_produce__DOT__u_ascii__DOT__lut_key
                          [1U] == (IData)(vlSelf->top__DOT__u_keyboard__DOT__data)))) 
              & vlSelf->top__DOT__u_produce__DOT__u_ascii__DOT__lut_data
              [1U]));
    vlSelf->top__DOT__u_produce__DOT__u_ascii__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__u_produce__DOT__u_ascii__DOT__lut_out) 
           | ((- (IData)((vlSelf->top__DOT__u_produce__DOT__u_ascii__DOT__lut_key
                          [2U] == (IData)(vlSelf->top__DOT__u_keyboard__DOT__data)))) 
              & vlSelf->top__DOT__u_produce__DOT__u_ascii__DOT__lut_data
              [2U]));
    vlSelf->top__DOT__u_produce__DOT__u_ascii__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__u_produce__DOT__u_ascii__DOT__lut_out) 
           | ((- (IData)((vlSelf->top__DOT__u_produce__DOT__u_ascii__DOT__lut_key
                          [3U] == (IData)(vlSelf->top__DOT__u_keyboard__DOT__data)))) 
              & vlSelf->top__DOT__u_produce__DOT__u_ascii__DOT__lut_data
              [3U]));
    vlSelf->top__DOT__u_produce__DOT__u_ascii__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__u_produce__DOT__u_ascii__DOT__lut_out) 
           | ((- (IData)((vlSelf->top__DOT__u_produce__DOT__u_ascii__DOT__lut_key
                          [4U] == (IData)(vlSelf->top__DOT__u_keyboard__DOT__data)))) 
              & vlSelf->top__DOT__u_produce__DOT__u_ascii__DOT__lut_data
              [4U]));
    vlSelf->top__DOT__u_produce__DOT__u_ascii__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__u_produce__DOT__u_ascii__DOT__lut_out) 
           | ((- (IData)((vlSelf->top__DOT__u_produce__DOT__u_ascii__DOT__lut_key
                          [5U] == (IData)(vlSelf->top__DOT__u_keyboard__DOT__data)))) 
              & vlSelf->top__DOT__u_produce__DOT__u_ascii__DOT__lut_data
              [5U]));
    vlSelf->top__DOT__u_produce__DOT__u_ascii__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__u_produce__DOT__u_ascii__DOT__lut_out) 
           | ((- (IData)((vlSelf->top__DOT__u_produce__DOT__u_ascii__DOT__lut_key
                          [6U] == (IData)(vlSelf->top__DOT__u_keyboard__DOT__data)))) 
              & vlSelf->top__DOT__u_produce__DOT__u_ascii__DOT__lut_data
              [6U]));
    vlSelf->top__DOT__u_produce__DOT__u_ascii__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__u_produce__DOT__u_ascii__DOT__lut_out) 
           | ((- (IData)((vlSelf->top__DOT__u_produce__DOT__u_ascii__DOT__lut_key
                          [7U] == (IData)(vlSelf->top__DOT__u_keyboard__DOT__data)))) 
              & vlSelf->top__DOT__u_produce__DOT__u_ascii__DOT__lut_data
              [7U]));
    vlSelf->top__DOT__u_produce__DOT__u_ascii__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__u_produce__DOT__u_ascii__DOT__lut_out) 
           | ((- (IData)((vlSelf->top__DOT__u_produce__DOT__u_ascii__DOT__lut_key
                          [8U] == (IData)(vlSelf->top__DOT__u_keyboard__DOT__data)))) 
              & vlSelf->top__DOT__u_produce__DOT__u_ascii__DOT__lut_data
              [8U]));
    vlSelf->top__DOT__u_produce__DOT__u_ascii__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__u_produce__DOT__u_ascii__DOT__lut_out) 
           | ((- (IData)((vlSelf->top__DOT__u_produce__DOT__u_ascii__DOT__lut_key
                          [9U] == (IData)(vlSelf->top__DOT__u_keyboard__DOT__data)))) 
              & vlSelf->top__DOT__u_produce__DOT__u_ascii__DOT__lut_data
              [9U]));
    vlSelf->top__DOT__u_produce__DOT__u_ascii__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__u_produce__DOT__u_ascii__DOT__lut_out) 
           | ((- (IData)((vlSelf->top__DOT__u_produce__DOT__u_ascii__DOT__lut_key
                          [0xaU] == (IData)(vlSelf->top__DOT__u_keyboard__DOT__data)))) 
              & vlSelf->top__DOT__u_produce__DOT__u_ascii__DOT__lut_data
              [0xaU]));
    vlSelf->top__DOT__u_produce__DOT__u_ascii__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__u_produce__DOT__u_ascii__DOT__lut_out) 
           | ((- (IData)((vlSelf->top__DOT__u_produce__DOT__u_ascii__DOT__lut_key
                          [0xbU] == (IData)(vlSelf->top__DOT__u_keyboard__DOT__data)))) 
              & vlSelf->top__DOT__u_produce__DOT__u_ascii__DOT__lut_data
              [0xbU]));
    vlSelf->top__DOT__u_produce__DOT__u_ascii__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__u_produce__DOT__u_ascii__DOT__lut_out) 
           | ((- (IData)((vlSelf->top__DOT__u_produce__DOT__u_ascii__DOT__lut_key
                          [0xcU] == (IData)(vlSelf->top__DOT__u_keyboard__DOT__data)))) 
              & vlSelf->top__DOT__u_produce__DOT__u_ascii__DOT__lut_data
              [0xcU]));
    vlSelf->top__DOT__u_produce__DOT__u_ascii__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__u_produce__DOT__u_ascii__DOT__lut_out) 
           | ((- (IData)((vlSelf->top__DOT__u_produce__DOT__u_ascii__DOT__lut_key
                          [0xdU] == (IData)(vlSelf->top__DOT__u_keyboard__DOT__data)))) 
              & vlSelf->top__DOT__u_produce__DOT__u_ascii__DOT__lut_data
              [0xdU]));
    vlSelf->top__DOT__u_produce__DOT__u_ascii__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__u_produce__DOT__u_ascii__DOT__lut_out) 
           | ((- (IData)((vlSelf->top__DOT__u_produce__DOT__u_ascii__DOT__lut_key
                          [0xeU] == (IData)(vlSelf->top__DOT__u_keyboard__DOT__data)))) 
              & vlSelf->top__DOT__u_produce__DOT__u_ascii__DOT__lut_data
              [0xeU]));
    vlSelf->top__DOT__u_produce__DOT__u_ascii__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__u_produce__DOT__u_ascii__DOT__lut_out) 
           | ((- (IData)((vlSelf->top__DOT__u_produce__DOT__u_ascii__DOT__lut_key
                          [0xfU] == (IData)(vlSelf->top__DOT__u_keyboard__DOT__data)))) 
              & vlSelf->top__DOT__u_produce__DOT__u_ascii__DOT__lut_data
              [0xfU]));
    vlSelf->top__DOT__u_produce__DOT__u_ascii__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__u_produce__DOT__u_ascii__DOT__lut_out) 
           | ((- (IData)((vlSelf->top__DOT__u_produce__DOT__u_ascii__DOT__lut_key
                          [0x10U] == (IData)(vlSelf->top__DOT__u_keyboard__DOT__data)))) 
              & vlSelf->top__DOT__u_produce__DOT__u_ascii__DOT__lut_data
              [0x10U]));
    vlSelf->top__DOT__u_produce__DOT__u_ascii__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__u_produce__DOT__u_ascii__DOT__lut_out) 
           | ((- (IData)((vlSelf->top__DOT__u_produce__DOT__u_ascii__DOT__lut_key
                          [0x11U] == (IData)(vlSelf->top__DOT__u_keyboard__DOT__data)))) 
              & vlSelf->top__DOT__u_produce__DOT__u_ascii__DOT__lut_data
              [0x11U]));
    vlSelf->top__DOT__u_produce__DOT__u_ascii__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__u_produce__DOT__u_ascii__DOT__lut_out) 
           | ((- (IData)((vlSelf->top__DOT__u_produce__DOT__u_ascii__DOT__lut_key
                          [0x12U] == (IData)(vlSelf->top__DOT__u_keyboard__DOT__data)))) 
              & vlSelf->top__DOT__u_produce__DOT__u_ascii__DOT__lut_data
              [0x12U]));
    vlSelf->top__DOT__u_produce__DOT__u_ascii__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__u_produce__DOT__u_ascii__DOT__lut_out) 
           | ((- (IData)((vlSelf->top__DOT__u_produce__DOT__u_ascii__DOT__lut_key
                          [0x13U] == (IData)(vlSelf->top__DOT__u_keyboard__DOT__data)))) 
              & vlSelf->top__DOT__u_produce__DOT__u_ascii__DOT__lut_data
              [0x13U]));
    vlSelf->top__DOT__u_produce__DOT__u_ascii__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__u_produce__DOT__u_ascii__DOT__lut_out) 
           | ((- (IData)((vlSelf->top__DOT__u_produce__DOT__u_ascii__DOT__lut_key
                          [0x14U] == (IData)(vlSelf->top__DOT__u_keyboard__DOT__data)))) 
              & vlSelf->top__DOT__u_produce__DOT__u_ascii__DOT__lut_data
              [0x14U]));
    vlSelf->top__DOT__u_produce__DOT__u_ascii__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__u_produce__DOT__u_ascii__DOT__lut_out) 
           | ((- (IData)((vlSelf->top__DOT__u_produce__DOT__u_ascii__DOT__lut_key
                          [0x15U] == (IData)(vlSelf->top__DOT__u_keyboard__DOT__data)))) 
              & vlSelf->top__DOT__u_produce__DOT__u_ascii__DOT__lut_data
              [0x15U]));
    vlSelf->top__DOT__u_produce__DOT__u_ascii__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__u_produce__DOT__u_ascii__DOT__lut_out) 
           | ((- (IData)((vlSelf->top__DOT__u_produce__DOT__u_ascii__DOT__lut_key
                          [0x16U] == (IData)(vlSelf->top__DOT__u_keyboard__DOT__data)))) 
              & vlSelf->top__DOT__u_produce__DOT__u_ascii__DOT__lut_data
              [0x16U]));
    vlSelf->top__DOT__u_produce__DOT__u_ascii__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__u_produce__DOT__u_ascii__DOT__lut_out) 
           | ((- (IData)((vlSelf->top__DOT__u_produce__DOT__u_ascii__DOT__lut_key
                          [0x17U] == (IData)(vlSelf->top__DOT__u_keyboard__DOT__data)))) 
              & vlSelf->top__DOT__u_produce__DOT__u_ascii__DOT__lut_data
              [0x17U]));
    vlSelf->top__DOT__u_produce__DOT__u_ascii__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__u_produce__DOT__u_ascii__DOT__lut_out) 
           | ((- (IData)((vlSelf->top__DOT__u_produce__DOT__u_ascii__DOT__lut_key
                          [0x18U] == (IData)(vlSelf->top__DOT__u_keyboard__DOT__data)))) 
              & vlSelf->top__DOT__u_produce__DOT__u_ascii__DOT__lut_data
              [0x18U]));
    vlSelf->top__DOT__u_produce__DOT__u_ascii__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__u_produce__DOT__u_ascii__DOT__lut_out) 
           | ((- (IData)((vlSelf->top__DOT__u_produce__DOT__u_ascii__DOT__lut_key
                          [0x19U] == (IData)(vlSelf->top__DOT__u_keyboard__DOT__data)))) 
              & vlSelf->top__DOT__u_produce__DOT__u_ascii__DOT__lut_data
              [0x19U]));
    vlSelf->top__DOT__u_produce__DOT__u_ascii__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__u_produce__DOT__u_ascii__DOT__lut_out) 
           | ((- (IData)((vlSelf->top__DOT__u_produce__DOT__u_ascii__DOT__lut_key
                          [0x1aU] == (IData)(vlSelf->top__DOT__u_keyboard__DOT__data)))) 
              & vlSelf->top__DOT__u_produce__DOT__u_ascii__DOT__lut_data
              [0x1aU]));
    vlSelf->top__DOT__u_produce__DOT__u_ascii__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__u_produce__DOT__u_ascii__DOT__lut_out) 
           | ((- (IData)((vlSelf->top__DOT__u_produce__DOT__u_ascii__DOT__lut_key
                          [0x1bU] == (IData)(vlSelf->top__DOT__u_keyboard__DOT__data)))) 
              & vlSelf->top__DOT__u_produce__DOT__u_ascii__DOT__lut_data
              [0x1bU]));
    vlSelf->top__DOT__u_produce__DOT__u_ascii__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__u_produce__DOT__u_ascii__DOT__lut_out) 
           | ((- (IData)((vlSelf->top__DOT__u_produce__DOT__u_ascii__DOT__lut_key
                          [0x1cU] == (IData)(vlSelf->top__DOT__u_keyboard__DOT__data)))) 
              & vlSelf->top__DOT__u_produce__DOT__u_ascii__DOT__lut_data
              [0x1cU]));
    vlSelf->top__DOT__u_produce__DOT__u_ascii__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__u_produce__DOT__u_ascii__DOT__lut_out) 
           | ((- (IData)((vlSelf->top__DOT__u_produce__DOT__u_ascii__DOT__lut_key
                          [0x1dU] == (IData)(vlSelf->top__DOT__u_keyboard__DOT__data)))) 
              & vlSelf->top__DOT__u_produce__DOT__u_ascii__DOT__lut_data
              [0x1dU]));
    vlSelf->top__DOT__u_produce__DOT__u_ascii__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__u_produce__DOT__u_ascii__DOT__lut_out) 
           | ((- (IData)((vlSelf->top__DOT__u_produce__DOT__u_ascii__DOT__lut_key
                          [0x1eU] == (IData)(vlSelf->top__DOT__u_keyboard__DOT__data)))) 
              & vlSelf->top__DOT__u_produce__DOT__u_ascii__DOT__lut_data
              [0x1eU]));
    vlSelf->top__DOT__u_produce__DOT__u_ascii__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__u_produce__DOT__u_ascii__DOT__lut_out) 
           | ((- (IData)((vlSelf->top__DOT__u_produce__DOT__u_ascii__DOT__lut_key
                          [0x1fU] == (IData)(vlSelf->top__DOT__u_keyboard__DOT__data)))) 
              & vlSelf->top__DOT__u_produce__DOT__u_ascii__DOT__lut_data
              [0x1fU]));
    vlSelf->top__DOT__u_produce__DOT__u_ascii__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__u_produce__DOT__u_ascii__DOT__lut_out) 
           | ((- (IData)((vlSelf->top__DOT__u_produce__DOT__u_ascii__DOT__lut_key
                          [0x20U] == (IData)(vlSelf->top__DOT__u_keyboard__DOT__data)))) 
              & vlSelf->top__DOT__u_produce__DOT__u_ascii__DOT__lut_data
              [0x20U]));
    vlSelf->top__DOT__u_produce__DOT__u_ascii__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__u_produce__DOT__u_ascii__DOT__lut_out) 
           | ((- (IData)((vlSelf->top__DOT__u_produce__DOT__u_ascii__DOT__lut_key
                          [0x21U] == (IData)(vlSelf->top__DOT__u_keyboard__DOT__data)))) 
              & vlSelf->top__DOT__u_produce__DOT__u_ascii__DOT__lut_data
              [0x21U]));
    vlSelf->top__DOT__u_produce__DOT__u_ascii__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__u_produce__DOT__u_ascii__DOT__lut_out) 
           | ((- (IData)((vlSelf->top__DOT__u_produce__DOT__u_ascii__DOT__lut_key
                          [0x22U] == (IData)(vlSelf->top__DOT__u_keyboard__DOT__data)))) 
              & vlSelf->top__DOT__u_produce__DOT__u_ascii__DOT__lut_data
              [0x22U]));
    vlSelf->top__DOT__u_produce__DOT__u_ascii__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__u_produce__DOT__u_ascii__DOT__lut_out) 
           | ((- (IData)((vlSelf->top__DOT__u_produce__DOT__u_ascii__DOT__lut_key
                          [0x23U] == (IData)(vlSelf->top__DOT__u_keyboard__DOT__data)))) 
              & vlSelf->top__DOT__u_produce__DOT__u_ascii__DOT__lut_data
              [0x23U]));
    if (vlSelf->rst_n) {
        vlSelf->ascii1 = ((0x10U >= (IData)(vlSelf->top__DOT__u_produce__DOT__addr1))
                           ? (0xffU & vlSelf->top__DOT__u_produce__DOT__u_rom_ascii1__DOT__rom
                              [vlSelf->top__DOT__u_produce__DOT__addr1])
                           : 0U);
        vlSelf->ascii2 = ((0x10U >= (IData)(vlSelf->top__DOT__u_produce__DOT__addr2))
                           ? (0xffU & vlSelf->top__DOT__u_produce__DOT__u_rom_ascii2__DOT__rom
                              [vlSelf->top__DOT__u_produce__DOT__addr2])
                           : 0U);
    } else {
        vlSelf->ascii1 = 0U;
        vlSelf->ascii2 = 0U;
    }
    if ((((0U != (IData)(vlSelf->top__DOT__u_keyboard__DOT__data)) 
          & (0xf0U != (IData)(vlSelf->top__DOT__u_keyboard__DOT__data))) 
         & (0xf0U != (IData)(vlSelf->top__DOT__u_produce__DOT__u_ascii__DOT__buffer)))) {
        vlSelf->top__DOT__u_produce__DOT__u_ascii__DOT__addr1 
            = (0xfU & (IData)(vlSelf->top__DOT__u_produce__DOT__u_ascii__DOT__lut_out));
        vlSelf->top__DOT__u_produce__DOT__u_ascii__DOT__addr2 
            = (0xfU & ((IData)(vlSelf->top__DOT__u_produce__DOT__u_ascii__DOT__lut_out) 
                       >> 4U));
    } else {
        vlSelf->top__DOT__u_produce__DOT__u_ascii__DOT__addr1 = 0x10U;
        vlSelf->top__DOT__u_produce__DOT__u_ascii__DOT__addr2 = 0x10U;
    }
    if (vlSelf->rst_n) {
        vlSelf->key1 = ((0x10U >= (IData)(vlSelf->top__DOT__u_produce__DOT__u_ascii__DOT__addr1))
                         ? (0xffU & vlSelf->top__DOT__u_produce__DOT__u_ascii__DOT__u_rom1__DOT__rom
                            [vlSelf->top__DOT__u_produce__DOT__u_ascii__DOT__addr1])
                         : 0U);
        vlSelf->key2 = ((0x10U >= (IData)(vlSelf->top__DOT__u_produce__DOT__u_ascii__DOT__addr2))
                         ? (0xffU & vlSelf->top__DOT__u_produce__DOT__u_ascii__DOT__u_rom2__DOT__rom
                            [vlSelf->top__DOT__u_produce__DOT__u_ascii__DOT__addr2])
                         : 0U);
    } else {
        vlSelf->key1 = 0U;
        vlSelf->key2 = 0U;
    }
}

void Vtop___024root___eval_initial(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
    vlSelf->__Vclklast__TOP__rst_n = vlSelf->rst_n;
}

void Vtop___024root___eval_settle(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_settle\n"); );
    // Body
    Vtop___024root___settle__TOP__1(vlSelf);
    vlSelf->__Vm_traceActivity[4U] = 1U;
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
}

void Vtop___024root___final(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___final\n"); );
}

void Vtop___024root___ctor_var_reset(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->rst_n = VL_RAND_RESET_I(1);
    vlSelf->ps2_clk = VL_RAND_RESET_I(1);
    vlSelf->ps2_data = VL_RAND_RESET_I(1);
    vlSelf->counter1 = VL_RAND_RESET_I(8);
    vlSelf->counter2 = VL_RAND_RESET_I(8);
    vlSelf->ascii1 = VL_RAND_RESET_I(8);
    vlSelf->ascii2 = VL_RAND_RESET_I(8);
    vlSelf->key1 = VL_RAND_RESET_I(8);
    vlSelf->key2 = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__en = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__u_keyboard__DOT__ready = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__u_keyboard__DOT__data = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__u_keyboard__DOT__buffer = VL_RAND_RESET_I(10);
    vlSelf->top__DOT__u_keyboard__DOT__count = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__u_keyboard__DOT__ps2_clk_sync = VL_RAND_RESET_I(3);
    vlSelf->top__DOT__u_keyboard__DOT____Vlvbound1 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__u_produce__DOT__counter = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__u_produce__DOT__tmp = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__u_produce__DOT__buffer = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__u_produce__DOT__last_state = VL_RAND_RESET_I(3);
    vlSelf->top__DOT__u_produce__DOT__addr1 = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__u_produce__DOT__addr2 = VL_RAND_RESET_I(5);
    for (int __Vi0=0; __Vi0<17; ++__Vi0) {
        vlSelf->top__DOT__u_produce__DOT__u_rom_counter1__DOT__rom[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->top__DOT__u_produce__DOT__u_rom_counter1__DOT__i = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__u_produce__DOT__u_rom_counter1__DOT____Vlvbound1 = VL_RAND_RESET_I(8);
    for (int __Vi0=0; __Vi0<17; ++__Vi0) {
        vlSelf->top__DOT__u_produce__DOT__u_rom_counter2__DOT__rom[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->top__DOT__u_produce__DOT__u_rom_counter2__DOT__i = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__u_produce__DOT__u_rom_counter2__DOT____Vlvbound1 = VL_RAND_RESET_I(8);
    for (int __Vi0=0; __Vi0<17; ++__Vi0) {
        vlSelf->top__DOT__u_produce__DOT__u_rom_ascii1__DOT__rom[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->top__DOT__u_produce__DOT__u_rom_ascii1__DOT__i = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__u_produce__DOT__u_rom_ascii1__DOT____Vlvbound1 = VL_RAND_RESET_I(8);
    for (int __Vi0=0; __Vi0<17; ++__Vi0) {
        vlSelf->top__DOT__u_produce__DOT__u_rom_ascii2__DOT__rom[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->top__DOT__u_produce__DOT__u_rom_ascii2__DOT__i = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__u_produce__DOT__u_rom_ascii2__DOT____Vlvbound1 = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__u_produce__DOT__u_fsm__DOT__next_state = VL_RAND_RESET_I(3);
    vlSelf->top__DOT__u_produce__DOT__u_fsm__DOT__current_state = VL_RAND_RESET_I(3);
    for (int __Vi0=0; __Vi0<36; ++__Vi0) {
        vlSelf->top__DOT__u_produce__DOT__u_ascii__DOT__lut[__Vi0] = VL_RAND_RESET_I(16);
    }
    vlSelf->top__DOT__u_produce__DOT__u_ascii__DOT__i = VL_RAND_RESET_I(32);
    for (int __Vi0=0; __Vi0<36; ++__Vi0) {
        vlSelf->top__DOT__u_produce__DOT__u_ascii__DOT__lut_key[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0=0; __Vi0<36; ++__Vi0) {
        vlSelf->top__DOT__u_produce__DOT__u_ascii__DOT__lut_data[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->top__DOT__u_produce__DOT__u_ascii__DOT__lut_out = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__u_produce__DOT__u_ascii__DOT__addr = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__u_produce__DOT__u_ascii__DOT__buffer = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__u_produce__DOT__u_ascii__DOT__addr1 = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__u_produce__DOT__u_ascii__DOT__addr2 = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__u_produce__DOT__u_ascii__DOT____Vlvbound1 = VL_RAND_RESET_I(16);
    for (int __Vi0=0; __Vi0<17; ++__Vi0) {
        vlSelf->top__DOT__u_produce__DOT__u_ascii__DOT__u_rom1__DOT__rom[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->top__DOT__u_produce__DOT__u_ascii__DOT__u_rom1__DOT__i = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__u_produce__DOT__u_ascii__DOT__u_rom1__DOT____Vlvbound1 = VL_RAND_RESET_I(8);
    for (int __Vi0=0; __Vi0<17; ++__Vi0) {
        vlSelf->top__DOT__u_produce__DOT__u_ascii__DOT__u_rom2__DOT__rom[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->top__DOT__u_produce__DOT__u_ascii__DOT__u_rom2__DOT__i = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__u_produce__DOT__u_ascii__DOT__u_rom2__DOT____Vlvbound1 = VL_RAND_RESET_I(8);
    vlSelf->__Vdly__top__DOT__u_keyboard__DOT__ps2_clk_sync = VL_RAND_RESET_I(3);
    vlSelf->__Vdly__top__DOT__en = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__top__DOT__u_keyboard__DOT__count = VL_RAND_RESET_I(4);
    for (int __Vi0=0; __Vi0<5; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }
}
