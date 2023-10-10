// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vrom_ascii.h for the primary calling header

#include "Vrom_ascii___024root.h"
#include "Vrom_ascii__Syms.h"

//==========


void Vrom_ascii___024root___ctor_var_reset(Vrom_ascii___024root* vlSelf);

Vrom_ascii___024root::Vrom_ascii___024root(const char* _vcname__)
    : VerilatedModule(_vcname__)
 {
    // Reset structure values
    Vrom_ascii___024root___ctor_var_reset(this);
}

void Vrom_ascii___024root::__Vconfigure(Vrom_ascii__Syms* _vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->vlSymsp = _vlSymsp;
}

Vrom_ascii___024root::~Vrom_ascii___024root() {
}

void Vrom_ascii___024root___settle__TOP__1(Vrom_ascii___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrom_ascii__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrom_ascii___024root___settle__TOP__1\n"); );
    // Body
    vlSelf->rom_ascii__DOT__i = 0x24U;
    vlSelf->rom_ascii__DOT__lut_key[0U] = (0xffU & 
                                           (vlSelf->rom_ascii__DOT__lut
                                            [0U] >> 8U));
    vlSelf->rom_ascii__DOT__lut_data[0U] = (0xffU & 
                                            vlSelf->rom_ascii__DOT__lut
                                            [0U]);
    vlSelf->rom_ascii__DOT__lut_key[1U] = (0xffU & 
                                           (vlSelf->rom_ascii__DOT__lut
                                            [1U] >> 8U));
    vlSelf->rom_ascii__DOT__lut_data[1U] = (0xffU & 
                                            vlSelf->rom_ascii__DOT__lut
                                            [1U]);
    vlSelf->rom_ascii__DOT__lut_key[2U] = (0xffU & 
                                           (vlSelf->rom_ascii__DOT__lut
                                            [2U] >> 8U));
    vlSelf->rom_ascii__DOT__lut_data[2U] = (0xffU & 
                                            vlSelf->rom_ascii__DOT__lut
                                            [2U]);
    vlSelf->rom_ascii__DOT__lut_key[3U] = (0xffU & 
                                           (vlSelf->rom_ascii__DOT__lut
                                            [3U] >> 8U));
    vlSelf->rom_ascii__DOT__lut_data[3U] = (0xffU & 
                                            vlSelf->rom_ascii__DOT__lut
                                            [3U]);
    vlSelf->rom_ascii__DOT__lut_key[4U] = (0xffU & 
                                           (vlSelf->rom_ascii__DOT__lut
                                            [4U] >> 8U));
    vlSelf->rom_ascii__DOT__lut_data[4U] = (0xffU & 
                                            vlSelf->rom_ascii__DOT__lut
                                            [4U]);
    vlSelf->rom_ascii__DOT__lut_key[5U] = (0xffU & 
                                           (vlSelf->rom_ascii__DOT__lut
                                            [5U] >> 8U));
    vlSelf->rom_ascii__DOT__lut_data[5U] = (0xffU & 
                                            vlSelf->rom_ascii__DOT__lut
                                            [5U]);
    vlSelf->rom_ascii__DOT__lut_key[6U] = (0xffU & 
                                           (vlSelf->rom_ascii__DOT__lut
                                            [6U] >> 8U));
    vlSelf->rom_ascii__DOT__lut_data[6U] = (0xffU & 
                                            vlSelf->rom_ascii__DOT__lut
                                            [6U]);
    vlSelf->rom_ascii__DOT__lut_key[7U] = (0xffU & 
                                           (vlSelf->rom_ascii__DOT__lut
                                            [7U] >> 8U));
    vlSelf->rom_ascii__DOT__lut_data[7U] = (0xffU & 
                                            vlSelf->rom_ascii__DOT__lut
                                            [7U]);
    vlSelf->rom_ascii__DOT__lut_key[8U] = (0xffU & 
                                           (vlSelf->rom_ascii__DOT__lut
                                            [8U] >> 8U));
    vlSelf->rom_ascii__DOT__lut_data[8U] = (0xffU & 
                                            vlSelf->rom_ascii__DOT__lut
                                            [8U]);
    vlSelf->rom_ascii__DOT__lut_key[9U] = (0xffU & 
                                           (vlSelf->rom_ascii__DOT__lut
                                            [9U] >> 8U));
    vlSelf->rom_ascii__DOT__lut_data[9U] = (0xffU & 
                                            vlSelf->rom_ascii__DOT__lut
                                            [9U]);
    vlSelf->rom_ascii__DOT__lut_key[0xaU] = (0xffU 
                                             & (vlSelf->rom_ascii__DOT__lut
                                                [0xaU] 
                                                >> 8U));
    vlSelf->rom_ascii__DOT__lut_data[0xaU] = (0xffU 
                                              & vlSelf->rom_ascii__DOT__lut
                                              [0xaU]);
    vlSelf->rom_ascii__DOT__lut_key[0xbU] = (0xffU 
                                             & (vlSelf->rom_ascii__DOT__lut
                                                [0xbU] 
                                                >> 8U));
    vlSelf->rom_ascii__DOT__lut_data[0xbU] = (0xffU 
                                              & vlSelf->rom_ascii__DOT__lut
                                              [0xbU]);
    vlSelf->rom_ascii__DOT__lut_key[0xcU] = (0xffU 
                                             & (vlSelf->rom_ascii__DOT__lut
                                                [0xcU] 
                                                >> 8U));
    vlSelf->rom_ascii__DOT__lut_data[0xcU] = (0xffU 
                                              & vlSelf->rom_ascii__DOT__lut
                                              [0xcU]);
    vlSelf->rom_ascii__DOT__lut_key[0xdU] = (0xffU 
                                             & (vlSelf->rom_ascii__DOT__lut
                                                [0xdU] 
                                                >> 8U));
    vlSelf->rom_ascii__DOT__lut_data[0xdU] = (0xffU 
                                              & vlSelf->rom_ascii__DOT__lut
                                              [0xdU]);
    vlSelf->rom_ascii__DOT__lut_key[0xeU] = (0xffU 
                                             & (vlSelf->rom_ascii__DOT__lut
                                                [0xeU] 
                                                >> 8U));
    vlSelf->rom_ascii__DOT__lut_data[0xeU] = (0xffU 
                                              & vlSelf->rom_ascii__DOT__lut
                                              [0xeU]);
    vlSelf->rom_ascii__DOT__lut_key[0xfU] = (0xffU 
                                             & (vlSelf->rom_ascii__DOT__lut
                                                [0xfU] 
                                                >> 8U));
    vlSelf->rom_ascii__DOT__lut_data[0xfU] = (0xffU 
                                              & vlSelf->rom_ascii__DOT__lut
                                              [0xfU]);
    vlSelf->rom_ascii__DOT__lut_key[0x10U] = (0xffU 
                                              & (vlSelf->rom_ascii__DOT__lut
                                                 [0x10U] 
                                                 >> 8U));
    vlSelf->rom_ascii__DOT__lut_data[0x10U] = (0xffU 
                                               & vlSelf->rom_ascii__DOT__lut
                                               [0x10U]);
    vlSelf->rom_ascii__DOT__lut_key[0x11U] = (0xffU 
                                              & (vlSelf->rom_ascii__DOT__lut
                                                 [0x11U] 
                                                 >> 8U));
    vlSelf->rom_ascii__DOT__lut_data[0x11U] = (0xffU 
                                               & vlSelf->rom_ascii__DOT__lut
                                               [0x11U]);
    vlSelf->rom_ascii__DOT__lut_key[0x12U] = (0xffU 
                                              & (vlSelf->rom_ascii__DOT__lut
                                                 [0x12U] 
                                                 >> 8U));
    vlSelf->rom_ascii__DOT__lut_data[0x12U] = (0xffU 
                                               & vlSelf->rom_ascii__DOT__lut
                                               [0x12U]);
    vlSelf->rom_ascii__DOT__lut_key[0x13U] = (0xffU 
                                              & (vlSelf->rom_ascii__DOT__lut
                                                 [0x13U] 
                                                 >> 8U));
    vlSelf->rom_ascii__DOT__lut_data[0x13U] = (0xffU 
                                               & vlSelf->rom_ascii__DOT__lut
                                               [0x13U]);
    vlSelf->rom_ascii__DOT__lut_key[0x14U] = (0xffU 
                                              & (vlSelf->rom_ascii__DOT__lut
                                                 [0x14U] 
                                                 >> 8U));
    vlSelf->rom_ascii__DOT__lut_data[0x14U] = (0xffU 
                                               & vlSelf->rom_ascii__DOT__lut
                                               [0x14U]);
    vlSelf->rom_ascii__DOT__lut_key[0x15U] = (0xffU 
                                              & (vlSelf->rom_ascii__DOT__lut
                                                 [0x15U] 
                                                 >> 8U));
    vlSelf->rom_ascii__DOT__lut_data[0x15U] = (0xffU 
                                               & vlSelf->rom_ascii__DOT__lut
                                               [0x15U]);
    vlSelf->rom_ascii__DOT__lut_key[0x16U] = (0xffU 
                                              & (vlSelf->rom_ascii__DOT__lut
                                                 [0x16U] 
                                                 >> 8U));
    vlSelf->rom_ascii__DOT__lut_data[0x16U] = (0xffU 
                                               & vlSelf->rom_ascii__DOT__lut
                                               [0x16U]);
    vlSelf->rom_ascii__DOT__lut_key[0x17U] = (0xffU 
                                              & (vlSelf->rom_ascii__DOT__lut
                                                 [0x17U] 
                                                 >> 8U));
    vlSelf->rom_ascii__DOT__lut_data[0x17U] = (0xffU 
                                               & vlSelf->rom_ascii__DOT__lut
                                               [0x17U]);
    vlSelf->rom_ascii__DOT__lut_key[0x18U] = (0xffU 
                                              & (vlSelf->rom_ascii__DOT__lut
                                                 [0x18U] 
                                                 >> 8U));
    vlSelf->rom_ascii__DOT__lut_data[0x18U] = (0xffU 
                                               & vlSelf->rom_ascii__DOT__lut
                                               [0x18U]);
    vlSelf->rom_ascii__DOT__lut_key[0x19U] = (0xffU 
                                              & (vlSelf->rom_ascii__DOT__lut
                                                 [0x19U] 
                                                 >> 8U));
    vlSelf->rom_ascii__DOT__lut_data[0x19U] = (0xffU 
                                               & vlSelf->rom_ascii__DOT__lut
                                               [0x19U]);
    vlSelf->rom_ascii__DOT__lut_key[0x1aU] = (0xffU 
                                              & (vlSelf->rom_ascii__DOT__lut
                                                 [0x1aU] 
                                                 >> 8U));
    vlSelf->rom_ascii__DOT__lut_data[0x1aU] = (0xffU 
                                               & vlSelf->rom_ascii__DOT__lut
                                               [0x1aU]);
    vlSelf->rom_ascii__DOT__lut_key[0x1bU] = (0xffU 
                                              & (vlSelf->rom_ascii__DOT__lut
                                                 [0x1bU] 
                                                 >> 8U));
    vlSelf->rom_ascii__DOT__lut_data[0x1bU] = (0xffU 
                                               & vlSelf->rom_ascii__DOT__lut
                                               [0x1bU]);
    vlSelf->rom_ascii__DOT__lut_key[0x1cU] = (0xffU 
                                              & (vlSelf->rom_ascii__DOT__lut
                                                 [0x1cU] 
                                                 >> 8U));
    vlSelf->rom_ascii__DOT__lut_data[0x1cU] = (0xffU 
                                               & vlSelf->rom_ascii__DOT__lut
                                               [0x1cU]);
    vlSelf->rom_ascii__DOT__lut_key[0x1dU] = (0xffU 
                                              & (vlSelf->rom_ascii__DOT__lut
                                                 [0x1dU] 
                                                 >> 8U));
    vlSelf->rom_ascii__DOT__lut_data[0x1dU] = (0xffU 
                                               & vlSelf->rom_ascii__DOT__lut
                                               [0x1dU]);
    vlSelf->rom_ascii__DOT__lut_key[0x1eU] = (0xffU 
                                              & (vlSelf->rom_ascii__DOT__lut
                                                 [0x1eU] 
                                                 >> 8U));
    vlSelf->rom_ascii__DOT__lut_data[0x1eU] = (0xffU 
                                               & vlSelf->rom_ascii__DOT__lut
                                               [0x1eU]);
    vlSelf->rom_ascii__DOT__lut_key[0x1fU] = (0xffU 
                                              & (vlSelf->rom_ascii__DOT__lut
                                                 [0x1fU] 
                                                 >> 8U));
    vlSelf->rom_ascii__DOT__lut_data[0x1fU] = (0xffU 
                                               & vlSelf->rom_ascii__DOT__lut
                                               [0x1fU]);
    vlSelf->rom_ascii__DOT__lut_key[0x20U] = (0xffU 
                                              & (vlSelf->rom_ascii__DOT__lut
                                                 [0x20U] 
                                                 >> 8U));
    vlSelf->rom_ascii__DOT__lut_data[0x20U] = (0xffU 
                                               & vlSelf->rom_ascii__DOT__lut
                                               [0x20U]);
    vlSelf->rom_ascii__DOT__lut_key[0x21U] = (0xffU 
                                              & (vlSelf->rom_ascii__DOT__lut
                                                 [0x21U] 
                                                 >> 8U));
    vlSelf->rom_ascii__DOT__lut_data[0x21U] = (0xffU 
                                               & vlSelf->rom_ascii__DOT__lut
                                               [0x21U]);
    vlSelf->rom_ascii__DOT__lut_key[0x22U] = (0xffU 
                                              & (vlSelf->rom_ascii__DOT__lut
                                                 [0x22U] 
                                                 >> 8U));
    vlSelf->rom_ascii__DOT__lut_data[0x22U] = (0xffU 
                                               & vlSelf->rom_ascii__DOT__lut
                                               [0x22U]);
    vlSelf->rom_ascii__DOT__lut_key[0x23U] = (0xffU 
                                              & (vlSelf->rom_ascii__DOT__lut
                                                 [0x23U] 
                                                 >> 8U));
    vlSelf->rom_ascii__DOT__lut_data[0x23U] = (0xffU 
                                               & vlSelf->rom_ascii__DOT__lut
                                               [0x23U]);
    vlSelf->rom_ascii__DOT__lut_out = ((- (IData)((
                                                   vlSelf->rom_ascii__DOT__lut_key
                                                   [0U] 
                                                   == (IData)(vlSelf->data)))) 
                                       & vlSelf->rom_ascii__DOT__lut_data
                                       [0U]);
    vlSelf->rom_ascii__DOT__lut_out = ((IData)(vlSelf->rom_ascii__DOT__lut_out) 
                                       | ((- (IData)(
                                                     (vlSelf->rom_ascii__DOT__lut_key
                                                      [1U] 
                                                      == (IData)(vlSelf->data)))) 
                                          & vlSelf->rom_ascii__DOT__lut_data
                                          [1U]));
    vlSelf->rom_ascii__DOT__lut_out = ((IData)(vlSelf->rom_ascii__DOT__lut_out) 
                                       | ((- (IData)(
                                                     (vlSelf->rom_ascii__DOT__lut_key
                                                      [2U] 
                                                      == (IData)(vlSelf->data)))) 
                                          & vlSelf->rom_ascii__DOT__lut_data
                                          [2U]));
    vlSelf->rom_ascii__DOT__lut_out = ((IData)(vlSelf->rom_ascii__DOT__lut_out) 
                                       | ((- (IData)(
                                                     (vlSelf->rom_ascii__DOT__lut_key
                                                      [3U] 
                                                      == (IData)(vlSelf->data)))) 
                                          & vlSelf->rom_ascii__DOT__lut_data
                                          [3U]));
    vlSelf->rom_ascii__DOT__lut_out = ((IData)(vlSelf->rom_ascii__DOT__lut_out) 
                                       | ((- (IData)(
                                                     (vlSelf->rom_ascii__DOT__lut_key
                                                      [4U] 
                                                      == (IData)(vlSelf->data)))) 
                                          & vlSelf->rom_ascii__DOT__lut_data
                                          [4U]));
    vlSelf->rom_ascii__DOT__lut_out = ((IData)(vlSelf->rom_ascii__DOT__lut_out) 
                                       | ((- (IData)(
                                                     (vlSelf->rom_ascii__DOT__lut_key
                                                      [5U] 
                                                      == (IData)(vlSelf->data)))) 
                                          & vlSelf->rom_ascii__DOT__lut_data
                                          [5U]));
    vlSelf->rom_ascii__DOT__lut_out = ((IData)(vlSelf->rom_ascii__DOT__lut_out) 
                                       | ((- (IData)(
                                                     (vlSelf->rom_ascii__DOT__lut_key
                                                      [6U] 
                                                      == (IData)(vlSelf->data)))) 
                                          & vlSelf->rom_ascii__DOT__lut_data
                                          [6U]));
    vlSelf->rom_ascii__DOT__lut_out = ((IData)(vlSelf->rom_ascii__DOT__lut_out) 
                                       | ((- (IData)(
                                                     (vlSelf->rom_ascii__DOT__lut_key
                                                      [7U] 
                                                      == (IData)(vlSelf->data)))) 
                                          & vlSelf->rom_ascii__DOT__lut_data
                                          [7U]));
    vlSelf->rom_ascii__DOT__lut_out = ((IData)(vlSelf->rom_ascii__DOT__lut_out) 
                                       | ((- (IData)(
                                                     (vlSelf->rom_ascii__DOT__lut_key
                                                      [8U] 
                                                      == (IData)(vlSelf->data)))) 
                                          & vlSelf->rom_ascii__DOT__lut_data
                                          [8U]));
    vlSelf->rom_ascii__DOT__lut_out = ((IData)(vlSelf->rom_ascii__DOT__lut_out) 
                                       | ((- (IData)(
                                                     (vlSelf->rom_ascii__DOT__lut_key
                                                      [9U] 
                                                      == (IData)(vlSelf->data)))) 
                                          & vlSelf->rom_ascii__DOT__lut_data
                                          [9U]));
    vlSelf->rom_ascii__DOT__lut_out = ((IData)(vlSelf->rom_ascii__DOT__lut_out) 
                                       | ((- (IData)(
                                                     (vlSelf->rom_ascii__DOT__lut_key
                                                      [0xaU] 
                                                      == (IData)(vlSelf->data)))) 
                                          & vlSelf->rom_ascii__DOT__lut_data
                                          [0xaU]));
    vlSelf->rom_ascii__DOT__lut_out = ((IData)(vlSelf->rom_ascii__DOT__lut_out) 
                                       | ((- (IData)(
                                                     (vlSelf->rom_ascii__DOT__lut_key
                                                      [0xbU] 
                                                      == (IData)(vlSelf->data)))) 
                                          & vlSelf->rom_ascii__DOT__lut_data
                                          [0xbU]));
    vlSelf->rom_ascii__DOT__lut_out = ((IData)(vlSelf->rom_ascii__DOT__lut_out) 
                                       | ((- (IData)(
                                                     (vlSelf->rom_ascii__DOT__lut_key
                                                      [0xcU] 
                                                      == (IData)(vlSelf->data)))) 
                                          & vlSelf->rom_ascii__DOT__lut_data
                                          [0xcU]));
    vlSelf->rom_ascii__DOT__lut_out = ((IData)(vlSelf->rom_ascii__DOT__lut_out) 
                                       | ((- (IData)(
                                                     (vlSelf->rom_ascii__DOT__lut_key
                                                      [0xdU] 
                                                      == (IData)(vlSelf->data)))) 
                                          & vlSelf->rom_ascii__DOT__lut_data
                                          [0xdU]));
    vlSelf->rom_ascii__DOT__lut_out = ((IData)(vlSelf->rom_ascii__DOT__lut_out) 
                                       | ((- (IData)(
                                                     (vlSelf->rom_ascii__DOT__lut_key
                                                      [0xeU] 
                                                      == (IData)(vlSelf->data)))) 
                                          & vlSelf->rom_ascii__DOT__lut_data
                                          [0xeU]));
    vlSelf->rom_ascii__DOT__lut_out = ((IData)(vlSelf->rom_ascii__DOT__lut_out) 
                                       | ((- (IData)(
                                                     (vlSelf->rom_ascii__DOT__lut_key
                                                      [0xfU] 
                                                      == (IData)(vlSelf->data)))) 
                                          & vlSelf->rom_ascii__DOT__lut_data
                                          [0xfU]));
    vlSelf->rom_ascii__DOT__lut_out = ((IData)(vlSelf->rom_ascii__DOT__lut_out) 
                                       | ((- (IData)(
                                                     (vlSelf->rom_ascii__DOT__lut_key
                                                      [0x10U] 
                                                      == (IData)(vlSelf->data)))) 
                                          & vlSelf->rom_ascii__DOT__lut_data
                                          [0x10U]));
    vlSelf->rom_ascii__DOT__lut_out = ((IData)(vlSelf->rom_ascii__DOT__lut_out) 
                                       | ((- (IData)(
                                                     (vlSelf->rom_ascii__DOT__lut_key
                                                      [0x11U] 
                                                      == (IData)(vlSelf->data)))) 
                                          & vlSelf->rom_ascii__DOT__lut_data
                                          [0x11U]));
    vlSelf->rom_ascii__DOT__lut_out = ((IData)(vlSelf->rom_ascii__DOT__lut_out) 
                                       | ((- (IData)(
                                                     (vlSelf->rom_ascii__DOT__lut_key
                                                      [0x12U] 
                                                      == (IData)(vlSelf->data)))) 
                                          & vlSelf->rom_ascii__DOT__lut_data
                                          [0x12U]));
    vlSelf->rom_ascii__DOT__lut_out = ((IData)(vlSelf->rom_ascii__DOT__lut_out) 
                                       | ((- (IData)(
                                                     (vlSelf->rom_ascii__DOT__lut_key
                                                      [0x13U] 
                                                      == (IData)(vlSelf->data)))) 
                                          & vlSelf->rom_ascii__DOT__lut_data
                                          [0x13U]));
    vlSelf->rom_ascii__DOT__lut_out = ((IData)(vlSelf->rom_ascii__DOT__lut_out) 
                                       | ((- (IData)(
                                                     (vlSelf->rom_ascii__DOT__lut_key
                                                      [0x14U] 
                                                      == (IData)(vlSelf->data)))) 
                                          & vlSelf->rom_ascii__DOT__lut_data
                                          [0x14U]));
    vlSelf->rom_ascii__DOT__lut_out = ((IData)(vlSelf->rom_ascii__DOT__lut_out) 
                                       | ((- (IData)(
                                                     (vlSelf->rom_ascii__DOT__lut_key
                                                      [0x15U] 
                                                      == (IData)(vlSelf->data)))) 
                                          & vlSelf->rom_ascii__DOT__lut_data
                                          [0x15U]));
    vlSelf->rom_ascii__DOT__lut_out = ((IData)(vlSelf->rom_ascii__DOT__lut_out) 
                                       | ((- (IData)(
                                                     (vlSelf->rom_ascii__DOT__lut_key
                                                      [0x16U] 
                                                      == (IData)(vlSelf->data)))) 
                                          & vlSelf->rom_ascii__DOT__lut_data
                                          [0x16U]));
    vlSelf->rom_ascii__DOT__lut_out = ((IData)(vlSelf->rom_ascii__DOT__lut_out) 
                                       | ((- (IData)(
                                                     (vlSelf->rom_ascii__DOT__lut_key
                                                      [0x17U] 
                                                      == (IData)(vlSelf->data)))) 
                                          & vlSelf->rom_ascii__DOT__lut_data
                                          [0x17U]));
    vlSelf->rom_ascii__DOT__lut_out = ((IData)(vlSelf->rom_ascii__DOT__lut_out) 
                                       | ((- (IData)(
                                                     (vlSelf->rom_ascii__DOT__lut_key
                                                      [0x18U] 
                                                      == (IData)(vlSelf->data)))) 
                                          & vlSelf->rom_ascii__DOT__lut_data
                                          [0x18U]));
    vlSelf->rom_ascii__DOT__lut_out = ((IData)(vlSelf->rom_ascii__DOT__lut_out) 
                                       | ((- (IData)(
                                                     (vlSelf->rom_ascii__DOT__lut_key
                                                      [0x19U] 
                                                      == (IData)(vlSelf->data)))) 
                                          & vlSelf->rom_ascii__DOT__lut_data
                                          [0x19U]));
    vlSelf->rom_ascii__DOT__lut_out = ((IData)(vlSelf->rom_ascii__DOT__lut_out) 
                                       | ((- (IData)(
                                                     (vlSelf->rom_ascii__DOT__lut_key
                                                      [0x1aU] 
                                                      == (IData)(vlSelf->data)))) 
                                          & vlSelf->rom_ascii__DOT__lut_data
                                          [0x1aU]));
    vlSelf->rom_ascii__DOT__lut_out = ((IData)(vlSelf->rom_ascii__DOT__lut_out) 
                                       | ((- (IData)(
                                                     (vlSelf->rom_ascii__DOT__lut_key
                                                      [0x1bU] 
                                                      == (IData)(vlSelf->data)))) 
                                          & vlSelf->rom_ascii__DOT__lut_data
                                          [0x1bU]));
    vlSelf->rom_ascii__DOT__lut_out = ((IData)(vlSelf->rom_ascii__DOT__lut_out) 
                                       | ((- (IData)(
                                                     (vlSelf->rom_ascii__DOT__lut_key
                                                      [0x1cU] 
                                                      == (IData)(vlSelf->data)))) 
                                          & vlSelf->rom_ascii__DOT__lut_data
                                          [0x1cU]));
    vlSelf->rom_ascii__DOT__lut_out = ((IData)(vlSelf->rom_ascii__DOT__lut_out) 
                                       | ((- (IData)(
                                                     (vlSelf->rom_ascii__DOT__lut_key
                                                      [0x1dU] 
                                                      == (IData)(vlSelf->data)))) 
                                          & vlSelf->rom_ascii__DOT__lut_data
                                          [0x1dU]));
    vlSelf->rom_ascii__DOT__lut_out = ((IData)(vlSelf->rom_ascii__DOT__lut_out) 
                                       | ((- (IData)(
                                                     (vlSelf->rom_ascii__DOT__lut_key
                                                      [0x1eU] 
                                                      == (IData)(vlSelf->data)))) 
                                          & vlSelf->rom_ascii__DOT__lut_data
                                          [0x1eU]));
    vlSelf->rom_ascii__DOT__lut_out = ((IData)(vlSelf->rom_ascii__DOT__lut_out) 
                                       | ((- (IData)(
                                                     (vlSelf->rom_ascii__DOT__lut_key
                                                      [0x1fU] 
                                                      == (IData)(vlSelf->data)))) 
                                          & vlSelf->rom_ascii__DOT__lut_data
                                          [0x1fU]));
    vlSelf->rom_ascii__DOT__lut_out = ((IData)(vlSelf->rom_ascii__DOT__lut_out) 
                                       | ((- (IData)(
                                                     (vlSelf->rom_ascii__DOT__lut_key
                                                      [0x20U] 
                                                      == (IData)(vlSelf->data)))) 
                                          & vlSelf->rom_ascii__DOT__lut_data
                                          [0x20U]));
    vlSelf->rom_ascii__DOT__lut_out = ((IData)(vlSelf->rom_ascii__DOT__lut_out) 
                                       | ((- (IData)(
                                                     (vlSelf->rom_ascii__DOT__lut_key
                                                      [0x21U] 
                                                      == (IData)(vlSelf->data)))) 
                                          & vlSelf->rom_ascii__DOT__lut_data
                                          [0x21U]));
    vlSelf->rom_ascii__DOT__lut_out = ((IData)(vlSelf->rom_ascii__DOT__lut_out) 
                                       | ((- (IData)(
                                                     (vlSelf->rom_ascii__DOT__lut_key
                                                      [0x22U] 
                                                      == (IData)(vlSelf->data)))) 
                                          & vlSelf->rom_ascii__DOT__lut_data
                                          [0x22U]));
    vlSelf->rom_ascii__DOT__lut_out = ((IData)(vlSelf->rom_ascii__DOT__lut_out) 
                                       | ((- (IData)(
                                                     (vlSelf->rom_ascii__DOT__lut_key
                                                      [0x23U] 
                                                      == (IData)(vlSelf->data)))) 
                                          & vlSelf->rom_ascii__DOT__lut_data
                                          [0x23U]));
    if ((((0U != (IData)(vlSelf->data)) & (0xf0U != (IData)(vlSelf->data))) 
         & (0xf0U != (IData)(vlSelf->rom_ascii__DOT__buffer)))) {
        vlSelf->rom_ascii__DOT__addr1 = (0xfU & (IData)(vlSelf->rom_ascii__DOT__lut_out));
        vlSelf->rom_ascii__DOT__addr2 = (0xfU & ((IData)(vlSelf->rom_ascii__DOT__lut_out) 
                                                 >> 4U));
    } else {
        vlSelf->rom_ascii__DOT__addr1 = 0x10U;
        vlSelf->rom_ascii__DOT__addr2 = 0x10U;
    }
    if (vlSelf->rst_n) {
        vlSelf->seg1 = ((0x10U >= (IData)(vlSelf->rom_ascii__DOT__addr1))
                         ? (0xffU & vlSelf->rom_ascii__DOT__u_rom1__DOT__rom
                            [vlSelf->rom_ascii__DOT__addr1])
                         : 0U);
        vlSelf->seg2 = ((0x10U >= (IData)(vlSelf->rom_ascii__DOT__addr2))
                         ? (0xffU & vlSelf->rom_ascii__DOT__u_rom2__DOT__rom
                            [vlSelf->rom_ascii__DOT__addr2])
                         : 0U);
    } else {
        vlSelf->seg1 = 0U;
        vlSelf->seg2 = 0U;
    }
}

void Vrom_ascii___024root___eval_initial(Vrom_ascii___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrom_ascii__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrom_ascii___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
    vlSelf->__Vclklast__TOP__rst_n = vlSelf->rst_n;
}

void Vrom_ascii___024root___eval_settle(Vrom_ascii___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrom_ascii__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrom_ascii___024root___eval_settle\n"); );
    // Body
    Vrom_ascii___024root___settle__TOP__1(vlSelf);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
}

void Vrom_ascii___024root___final(Vrom_ascii___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrom_ascii__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrom_ascii___024root___final\n"); );
}

void Vrom_ascii___024root___ctor_var_reset(Vrom_ascii___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrom_ascii__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrom_ascii___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->rst_n = VL_RAND_RESET_I(1);
    vlSelf->data = VL_RAND_RESET_I(8);
    vlSelf->seg1 = VL_RAND_RESET_I(8);
    vlSelf->seg2 = VL_RAND_RESET_I(8);
    for (int __Vi0=0; __Vi0<36; ++__Vi0) {
        vlSelf->rom_ascii__DOT__lut[__Vi0] = VL_RAND_RESET_I(16);
    }
    vlSelf->rom_ascii__DOT__i = VL_RAND_RESET_I(32);
    for (int __Vi0=0; __Vi0<36; ++__Vi0) {
        vlSelf->rom_ascii__DOT__lut_key[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0=0; __Vi0<36; ++__Vi0) {
        vlSelf->rom_ascii__DOT__lut_data[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->rom_ascii__DOT__lut_out = VL_RAND_RESET_I(8);
    vlSelf->rom_ascii__DOT__addr = VL_RAND_RESET_I(8);
    vlSelf->rom_ascii__DOT__tmp = VL_RAND_RESET_I(8);
    vlSelf->rom_ascii__DOT__buffer = VL_RAND_RESET_I(8);
    vlSelf->rom_ascii__DOT__addr1 = VL_RAND_RESET_I(5);
    vlSelf->rom_ascii__DOT__addr2 = VL_RAND_RESET_I(5);
    vlSelf->rom_ascii__DOT____Vlvbound1 = VL_RAND_RESET_I(16);
    for (int __Vi0=0; __Vi0<17; ++__Vi0) {
        vlSelf->rom_ascii__DOT__u_rom1__DOT__rom[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->rom_ascii__DOT__u_rom1__DOT__i = VL_RAND_RESET_I(32);
    vlSelf->rom_ascii__DOT__u_rom1__DOT____Vlvbound1 = VL_RAND_RESET_I(8);
    for (int __Vi0=0; __Vi0<17; ++__Vi0) {
        vlSelf->rom_ascii__DOT__u_rom2__DOT__rom[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->rom_ascii__DOT__u_rom2__DOT__i = VL_RAND_RESET_I(32);
    vlSelf->rom_ascii__DOT__u_rom2__DOT____Vlvbound1 = VL_RAND_RESET_I(8);
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }
}
