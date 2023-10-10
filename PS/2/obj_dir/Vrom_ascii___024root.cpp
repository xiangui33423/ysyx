// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vrom_ascii.h for the primary calling header

#include "Vrom_ascii___024root.h"
#include "Vrom_ascii__Syms.h"

//==========

VL_INLINE_OPT void Vrom_ascii___024root___sequent__TOP__2(Vrom_ascii___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrom_ascii__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrom_ascii___024root___sequent__TOP__2\n"); );
    // Body
    if (vlSelf->rst_n) {
        vlSelf->rom_ascii__DOT__buffer = vlSelf->rom_ascii__DOT__tmp;
        vlSelf->rom_ascii__DOT__tmp = vlSelf->data;
    } else {
        vlSelf->rom_ascii__DOT__buffer = 0U;
        vlSelf->rom_ascii__DOT__tmp = 0U;
    }
}

VL_INLINE_OPT void Vrom_ascii___024root___sequent__TOP__3(Vrom_ascii___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrom_ascii__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrom_ascii___024root___sequent__TOP__3\n"); );
    // Variables
    CData/*0:0*/ __Vdlyvset__rom_ascii__DOT__lut__v0;
    CData/*0:0*/ __Vdlyvset__rom_ascii__DOT__lut__v1;
    CData/*0:0*/ __Vdlyvset__rom_ascii__DOT__lut__v2;
    CData/*0:0*/ __Vdlyvset__rom_ascii__DOT__lut__v3;
    CData/*0:0*/ __Vdlyvset__rom_ascii__DOT__lut__v4;
    CData/*0:0*/ __Vdlyvset__rom_ascii__DOT__lut__v5;
    CData/*0:0*/ __Vdlyvset__rom_ascii__DOT__lut__v6;
    CData/*0:0*/ __Vdlyvset__rom_ascii__DOT__lut__v7;
    CData/*0:0*/ __Vdlyvset__rom_ascii__DOT__lut__v8;
    CData/*0:0*/ __Vdlyvset__rom_ascii__DOT__lut__v9;
    CData/*0:0*/ __Vdlyvset__rom_ascii__DOT__lut__v10;
    CData/*0:0*/ __Vdlyvset__rom_ascii__DOT__lut__v11;
    CData/*0:0*/ __Vdlyvset__rom_ascii__DOT__lut__v12;
    CData/*0:0*/ __Vdlyvset__rom_ascii__DOT__lut__v13;
    CData/*0:0*/ __Vdlyvset__rom_ascii__DOT__lut__v14;
    CData/*0:0*/ __Vdlyvset__rom_ascii__DOT__lut__v15;
    CData/*0:0*/ __Vdlyvset__rom_ascii__DOT__lut__v16;
    CData/*0:0*/ __Vdlyvset__rom_ascii__DOT__lut__v17;
    CData/*0:0*/ __Vdlyvset__rom_ascii__DOT__lut__v18;
    CData/*0:0*/ __Vdlyvset__rom_ascii__DOT__lut__v19;
    CData/*0:0*/ __Vdlyvset__rom_ascii__DOT__lut__v20;
    CData/*0:0*/ __Vdlyvset__rom_ascii__DOT__lut__v21;
    CData/*0:0*/ __Vdlyvset__rom_ascii__DOT__lut__v22;
    CData/*0:0*/ __Vdlyvset__rom_ascii__DOT__lut__v23;
    CData/*0:0*/ __Vdlyvset__rom_ascii__DOT__lut__v24;
    CData/*0:0*/ __Vdlyvset__rom_ascii__DOT__lut__v25;
    CData/*0:0*/ __Vdlyvset__rom_ascii__DOT__lut__v26;
    CData/*0:0*/ __Vdlyvset__rom_ascii__DOT__lut__v27;
    CData/*0:0*/ __Vdlyvset__rom_ascii__DOT__lut__v28;
    CData/*0:0*/ __Vdlyvset__rom_ascii__DOT__lut__v29;
    CData/*0:0*/ __Vdlyvset__rom_ascii__DOT__lut__v30;
    CData/*0:0*/ __Vdlyvset__rom_ascii__DOT__lut__v31;
    CData/*0:0*/ __Vdlyvset__rom_ascii__DOT__lut__v32;
    CData/*0:0*/ __Vdlyvset__rom_ascii__DOT__lut__v33;
    CData/*0:0*/ __Vdlyvset__rom_ascii__DOT__lut__v34;
    CData/*0:0*/ __Vdlyvset__rom_ascii__DOT__lut__v35;
    CData/*0:0*/ __Vdlyvset__rom_ascii__DOT__lut__v36;
    CData/*7:0*/ __Vdlyvval__rom_ascii__DOT__u_rom1__DOT__rom__v0;
    CData/*0:0*/ __Vdlyvset__rom_ascii__DOT__u_rom1__DOT__rom__v0;
    CData/*7:0*/ __Vdlyvval__rom_ascii__DOT__u_rom1__DOT__rom__v1;
    CData/*0:0*/ __Vdlyvset__rom_ascii__DOT__u_rom1__DOT__rom__v1;
    CData/*7:0*/ __Vdlyvval__rom_ascii__DOT__u_rom1__DOT__rom__v2;
    CData/*0:0*/ __Vdlyvset__rom_ascii__DOT__u_rom1__DOT__rom__v2;
    CData/*7:0*/ __Vdlyvval__rom_ascii__DOT__u_rom1__DOT__rom__v3;
    CData/*0:0*/ __Vdlyvset__rom_ascii__DOT__u_rom1__DOT__rom__v3;
    CData/*7:0*/ __Vdlyvval__rom_ascii__DOT__u_rom1__DOT__rom__v4;
    CData/*0:0*/ __Vdlyvset__rom_ascii__DOT__u_rom1__DOT__rom__v4;
    CData/*7:0*/ __Vdlyvval__rom_ascii__DOT__u_rom1__DOT__rom__v5;
    CData/*0:0*/ __Vdlyvset__rom_ascii__DOT__u_rom1__DOT__rom__v5;
    CData/*7:0*/ __Vdlyvval__rom_ascii__DOT__u_rom1__DOT__rom__v6;
    CData/*0:0*/ __Vdlyvset__rom_ascii__DOT__u_rom1__DOT__rom__v6;
    CData/*7:0*/ __Vdlyvval__rom_ascii__DOT__u_rom1__DOT__rom__v7;
    CData/*0:0*/ __Vdlyvset__rom_ascii__DOT__u_rom1__DOT__rom__v7;
    CData/*7:0*/ __Vdlyvval__rom_ascii__DOT__u_rom1__DOT__rom__v8;
    CData/*0:0*/ __Vdlyvset__rom_ascii__DOT__u_rom1__DOT__rom__v8;
    CData/*7:0*/ __Vdlyvval__rom_ascii__DOT__u_rom1__DOT__rom__v9;
    CData/*0:0*/ __Vdlyvset__rom_ascii__DOT__u_rom1__DOT__rom__v9;
    CData/*7:0*/ __Vdlyvval__rom_ascii__DOT__u_rom1__DOT__rom__v10;
    CData/*0:0*/ __Vdlyvset__rom_ascii__DOT__u_rom1__DOT__rom__v10;
    CData/*7:0*/ __Vdlyvval__rom_ascii__DOT__u_rom1__DOT__rom__v11;
    CData/*0:0*/ __Vdlyvset__rom_ascii__DOT__u_rom1__DOT__rom__v11;
    CData/*7:0*/ __Vdlyvval__rom_ascii__DOT__u_rom1__DOT__rom__v12;
    CData/*0:0*/ __Vdlyvset__rom_ascii__DOT__u_rom1__DOT__rom__v12;
    CData/*7:0*/ __Vdlyvval__rom_ascii__DOT__u_rom1__DOT__rom__v13;
    CData/*0:0*/ __Vdlyvset__rom_ascii__DOT__u_rom1__DOT__rom__v13;
    CData/*7:0*/ __Vdlyvval__rom_ascii__DOT__u_rom1__DOT__rom__v14;
    CData/*0:0*/ __Vdlyvset__rom_ascii__DOT__u_rom1__DOT__rom__v14;
    CData/*7:0*/ __Vdlyvval__rom_ascii__DOT__u_rom1__DOT__rom__v15;
    CData/*0:0*/ __Vdlyvset__rom_ascii__DOT__u_rom1__DOT__rom__v15;
    CData/*0:0*/ __Vdlyvset__rom_ascii__DOT__u_rom1__DOT__rom__v16;
    CData/*7:0*/ __Vdlyvval__rom_ascii__DOT__u_rom2__DOT__rom__v0;
    CData/*0:0*/ __Vdlyvset__rom_ascii__DOT__u_rom2__DOT__rom__v0;
    CData/*7:0*/ __Vdlyvval__rom_ascii__DOT__u_rom2__DOT__rom__v1;
    CData/*0:0*/ __Vdlyvset__rom_ascii__DOT__u_rom2__DOT__rom__v1;
    CData/*7:0*/ __Vdlyvval__rom_ascii__DOT__u_rom2__DOT__rom__v2;
    CData/*0:0*/ __Vdlyvset__rom_ascii__DOT__u_rom2__DOT__rom__v2;
    CData/*7:0*/ __Vdlyvval__rom_ascii__DOT__u_rom2__DOT__rom__v3;
    CData/*0:0*/ __Vdlyvset__rom_ascii__DOT__u_rom2__DOT__rom__v3;
    CData/*7:0*/ __Vdlyvval__rom_ascii__DOT__u_rom2__DOT__rom__v4;
    CData/*0:0*/ __Vdlyvset__rom_ascii__DOT__u_rom2__DOT__rom__v4;
    CData/*7:0*/ __Vdlyvval__rom_ascii__DOT__u_rom2__DOT__rom__v5;
    CData/*0:0*/ __Vdlyvset__rom_ascii__DOT__u_rom2__DOT__rom__v5;
    CData/*7:0*/ __Vdlyvval__rom_ascii__DOT__u_rom2__DOT__rom__v6;
    CData/*0:0*/ __Vdlyvset__rom_ascii__DOT__u_rom2__DOT__rom__v6;
    CData/*7:0*/ __Vdlyvval__rom_ascii__DOT__u_rom2__DOT__rom__v7;
    CData/*0:0*/ __Vdlyvset__rom_ascii__DOT__u_rom2__DOT__rom__v7;
    CData/*7:0*/ __Vdlyvval__rom_ascii__DOT__u_rom2__DOT__rom__v8;
    CData/*0:0*/ __Vdlyvset__rom_ascii__DOT__u_rom2__DOT__rom__v8;
    CData/*7:0*/ __Vdlyvval__rom_ascii__DOT__u_rom2__DOT__rom__v9;
    CData/*0:0*/ __Vdlyvset__rom_ascii__DOT__u_rom2__DOT__rom__v9;
    CData/*7:0*/ __Vdlyvval__rom_ascii__DOT__u_rom2__DOT__rom__v10;
    CData/*0:0*/ __Vdlyvset__rom_ascii__DOT__u_rom2__DOT__rom__v10;
    CData/*7:0*/ __Vdlyvval__rom_ascii__DOT__u_rom2__DOT__rom__v11;
    CData/*0:0*/ __Vdlyvset__rom_ascii__DOT__u_rom2__DOT__rom__v11;
    CData/*7:0*/ __Vdlyvval__rom_ascii__DOT__u_rom2__DOT__rom__v12;
    CData/*0:0*/ __Vdlyvset__rom_ascii__DOT__u_rom2__DOT__rom__v12;
    CData/*7:0*/ __Vdlyvval__rom_ascii__DOT__u_rom2__DOT__rom__v13;
    CData/*0:0*/ __Vdlyvset__rom_ascii__DOT__u_rom2__DOT__rom__v13;
    CData/*7:0*/ __Vdlyvval__rom_ascii__DOT__u_rom2__DOT__rom__v14;
    CData/*0:0*/ __Vdlyvset__rom_ascii__DOT__u_rom2__DOT__rom__v14;
    CData/*7:0*/ __Vdlyvval__rom_ascii__DOT__u_rom2__DOT__rom__v15;
    CData/*0:0*/ __Vdlyvset__rom_ascii__DOT__u_rom2__DOT__rom__v15;
    CData/*0:0*/ __Vdlyvset__rom_ascii__DOT__u_rom2__DOT__rom__v16;
    SData/*15:0*/ __Vdlyvval__rom_ascii__DOT__lut__v0;
    SData/*15:0*/ __Vdlyvval__rom_ascii__DOT__lut__v1;
    SData/*15:0*/ __Vdlyvval__rom_ascii__DOT__lut__v2;
    SData/*15:0*/ __Vdlyvval__rom_ascii__DOT__lut__v3;
    SData/*15:0*/ __Vdlyvval__rom_ascii__DOT__lut__v4;
    SData/*15:0*/ __Vdlyvval__rom_ascii__DOT__lut__v5;
    SData/*15:0*/ __Vdlyvval__rom_ascii__DOT__lut__v6;
    SData/*15:0*/ __Vdlyvval__rom_ascii__DOT__lut__v7;
    SData/*15:0*/ __Vdlyvval__rom_ascii__DOT__lut__v8;
    SData/*15:0*/ __Vdlyvval__rom_ascii__DOT__lut__v9;
    SData/*15:0*/ __Vdlyvval__rom_ascii__DOT__lut__v10;
    SData/*15:0*/ __Vdlyvval__rom_ascii__DOT__lut__v11;
    SData/*15:0*/ __Vdlyvval__rom_ascii__DOT__lut__v12;
    SData/*15:0*/ __Vdlyvval__rom_ascii__DOT__lut__v13;
    SData/*15:0*/ __Vdlyvval__rom_ascii__DOT__lut__v14;
    SData/*15:0*/ __Vdlyvval__rom_ascii__DOT__lut__v15;
    SData/*15:0*/ __Vdlyvval__rom_ascii__DOT__lut__v16;
    SData/*15:0*/ __Vdlyvval__rom_ascii__DOT__lut__v17;
    SData/*15:0*/ __Vdlyvval__rom_ascii__DOT__lut__v18;
    SData/*15:0*/ __Vdlyvval__rom_ascii__DOT__lut__v19;
    SData/*15:0*/ __Vdlyvval__rom_ascii__DOT__lut__v20;
    SData/*15:0*/ __Vdlyvval__rom_ascii__DOT__lut__v21;
    SData/*15:0*/ __Vdlyvval__rom_ascii__DOT__lut__v22;
    SData/*15:0*/ __Vdlyvval__rom_ascii__DOT__lut__v23;
    SData/*15:0*/ __Vdlyvval__rom_ascii__DOT__lut__v24;
    SData/*15:0*/ __Vdlyvval__rom_ascii__DOT__lut__v25;
    SData/*15:0*/ __Vdlyvval__rom_ascii__DOT__lut__v26;
    SData/*15:0*/ __Vdlyvval__rom_ascii__DOT__lut__v27;
    SData/*15:0*/ __Vdlyvval__rom_ascii__DOT__lut__v28;
    SData/*15:0*/ __Vdlyvval__rom_ascii__DOT__lut__v29;
    SData/*15:0*/ __Vdlyvval__rom_ascii__DOT__lut__v30;
    SData/*15:0*/ __Vdlyvval__rom_ascii__DOT__lut__v31;
    SData/*15:0*/ __Vdlyvval__rom_ascii__DOT__lut__v32;
    SData/*15:0*/ __Vdlyvval__rom_ascii__DOT__lut__v33;
    SData/*15:0*/ __Vdlyvval__rom_ascii__DOT__lut__v34;
    SData/*15:0*/ __Vdlyvval__rom_ascii__DOT__lut__v35;
    // Body
    __Vdlyvset__rom_ascii__DOT__u_rom2__DOT__rom__v0 = 0U;
    __Vdlyvset__rom_ascii__DOT__u_rom2__DOT__rom__v1 = 0U;
    __Vdlyvset__rom_ascii__DOT__u_rom2__DOT__rom__v2 = 0U;
    __Vdlyvset__rom_ascii__DOT__u_rom2__DOT__rom__v3 = 0U;
    __Vdlyvset__rom_ascii__DOT__u_rom2__DOT__rom__v4 = 0U;
    __Vdlyvset__rom_ascii__DOT__u_rom2__DOT__rom__v5 = 0U;
    __Vdlyvset__rom_ascii__DOT__u_rom2__DOT__rom__v6 = 0U;
    __Vdlyvset__rom_ascii__DOT__u_rom2__DOT__rom__v7 = 0U;
    __Vdlyvset__rom_ascii__DOT__u_rom2__DOT__rom__v8 = 0U;
    __Vdlyvset__rom_ascii__DOT__u_rom2__DOT__rom__v9 = 0U;
    __Vdlyvset__rom_ascii__DOT__u_rom2__DOT__rom__v10 = 0U;
    __Vdlyvset__rom_ascii__DOT__u_rom2__DOT__rom__v11 = 0U;
    __Vdlyvset__rom_ascii__DOT__u_rom2__DOT__rom__v12 = 0U;
    __Vdlyvset__rom_ascii__DOT__u_rom2__DOT__rom__v13 = 0U;
    __Vdlyvset__rom_ascii__DOT__u_rom2__DOT__rom__v14 = 0U;
    __Vdlyvset__rom_ascii__DOT__u_rom2__DOT__rom__v15 = 0U;
    __Vdlyvset__rom_ascii__DOT__u_rom2__DOT__rom__v16 = 0U;
    __Vdlyvset__rom_ascii__DOT__u_rom1__DOT__rom__v0 = 0U;
    __Vdlyvset__rom_ascii__DOT__u_rom1__DOT__rom__v1 = 0U;
    __Vdlyvset__rom_ascii__DOT__u_rom1__DOT__rom__v2 = 0U;
    __Vdlyvset__rom_ascii__DOT__u_rom1__DOT__rom__v3 = 0U;
    __Vdlyvset__rom_ascii__DOT__u_rom1__DOT__rom__v4 = 0U;
    __Vdlyvset__rom_ascii__DOT__u_rom1__DOT__rom__v5 = 0U;
    __Vdlyvset__rom_ascii__DOT__u_rom1__DOT__rom__v6 = 0U;
    __Vdlyvset__rom_ascii__DOT__u_rom1__DOT__rom__v7 = 0U;
    __Vdlyvset__rom_ascii__DOT__u_rom1__DOT__rom__v8 = 0U;
    __Vdlyvset__rom_ascii__DOT__u_rom1__DOT__rom__v9 = 0U;
    __Vdlyvset__rom_ascii__DOT__u_rom1__DOT__rom__v10 = 0U;
    __Vdlyvset__rom_ascii__DOT__u_rom1__DOT__rom__v11 = 0U;
    __Vdlyvset__rom_ascii__DOT__u_rom1__DOT__rom__v12 = 0U;
    __Vdlyvset__rom_ascii__DOT__u_rom1__DOT__rom__v13 = 0U;
    __Vdlyvset__rom_ascii__DOT__u_rom1__DOT__rom__v14 = 0U;
    __Vdlyvset__rom_ascii__DOT__u_rom1__DOT__rom__v15 = 0U;
    __Vdlyvset__rom_ascii__DOT__u_rom1__DOT__rom__v16 = 0U;
    if (vlSelf->rst_n) {
        vlSelf->rom_ascii__DOT__u_rom1__DOT__i = 0x10U;
    }
    if (vlSelf->rst_n) {
        vlSelf->rom_ascii__DOT__u_rom2__DOT__i = 0x10U;
    }
    if (vlSelf->rst_n) {
        vlSelf->rom_ascii__DOT__i = 0x24U;
    }
    __Vdlyvset__rom_ascii__DOT__lut__v0 = 0U;
    __Vdlyvset__rom_ascii__DOT__lut__v1 = 0U;
    __Vdlyvset__rom_ascii__DOT__lut__v2 = 0U;
    __Vdlyvset__rom_ascii__DOT__lut__v3 = 0U;
    __Vdlyvset__rom_ascii__DOT__lut__v4 = 0U;
    __Vdlyvset__rom_ascii__DOT__lut__v5 = 0U;
    __Vdlyvset__rom_ascii__DOT__lut__v6 = 0U;
    __Vdlyvset__rom_ascii__DOT__lut__v7 = 0U;
    __Vdlyvset__rom_ascii__DOT__lut__v8 = 0U;
    __Vdlyvset__rom_ascii__DOT__lut__v9 = 0U;
    __Vdlyvset__rom_ascii__DOT__lut__v10 = 0U;
    __Vdlyvset__rom_ascii__DOT__lut__v11 = 0U;
    __Vdlyvset__rom_ascii__DOT__lut__v12 = 0U;
    __Vdlyvset__rom_ascii__DOT__lut__v13 = 0U;
    __Vdlyvset__rom_ascii__DOT__lut__v14 = 0U;
    __Vdlyvset__rom_ascii__DOT__lut__v15 = 0U;
    __Vdlyvset__rom_ascii__DOT__lut__v16 = 0U;
    __Vdlyvset__rom_ascii__DOT__lut__v17 = 0U;
    __Vdlyvset__rom_ascii__DOT__lut__v18 = 0U;
    __Vdlyvset__rom_ascii__DOT__lut__v19 = 0U;
    __Vdlyvset__rom_ascii__DOT__lut__v20 = 0U;
    __Vdlyvset__rom_ascii__DOT__lut__v21 = 0U;
    __Vdlyvset__rom_ascii__DOT__lut__v22 = 0U;
    __Vdlyvset__rom_ascii__DOT__lut__v23 = 0U;
    __Vdlyvset__rom_ascii__DOT__lut__v24 = 0U;
    __Vdlyvset__rom_ascii__DOT__lut__v25 = 0U;
    __Vdlyvset__rom_ascii__DOT__lut__v26 = 0U;
    __Vdlyvset__rom_ascii__DOT__lut__v27 = 0U;
    __Vdlyvset__rom_ascii__DOT__lut__v28 = 0U;
    __Vdlyvset__rom_ascii__DOT__lut__v29 = 0U;
    __Vdlyvset__rom_ascii__DOT__lut__v30 = 0U;
    __Vdlyvset__rom_ascii__DOT__lut__v31 = 0U;
    __Vdlyvset__rom_ascii__DOT__lut__v32 = 0U;
    __Vdlyvset__rom_ascii__DOT__lut__v33 = 0U;
    __Vdlyvset__rom_ascii__DOT__lut__v34 = 0U;
    __Vdlyvset__rom_ascii__DOT__lut__v35 = 0U;
    __Vdlyvset__rom_ascii__DOT__lut__v36 = 0U;
    if (vlSelf->rst_n) {
        vlSelf->rom_ascii__DOT__u_rom2__DOT____Vlvbound1 
            = vlSelf->rom_ascii__DOT__u_rom2__DOT__rom
            [0U];
        __Vdlyvval__rom_ascii__DOT__u_rom2__DOT__rom__v0 
            = vlSelf->rom_ascii__DOT__u_rom2__DOT____Vlvbound1;
        __Vdlyvset__rom_ascii__DOT__u_rom2__DOT__rom__v0 = 1U;
        vlSelf->rom_ascii__DOT__u_rom2__DOT____Vlvbound1 
            = vlSelf->rom_ascii__DOT__u_rom2__DOT__rom
            [1U];
        __Vdlyvval__rom_ascii__DOT__u_rom2__DOT__rom__v1 
            = vlSelf->rom_ascii__DOT__u_rom2__DOT____Vlvbound1;
        __Vdlyvset__rom_ascii__DOT__u_rom2__DOT__rom__v1 = 1U;
        vlSelf->rom_ascii__DOT__u_rom2__DOT____Vlvbound1 
            = vlSelf->rom_ascii__DOT__u_rom2__DOT__rom
            [2U];
        __Vdlyvval__rom_ascii__DOT__u_rom2__DOT__rom__v2 
            = vlSelf->rom_ascii__DOT__u_rom2__DOT____Vlvbound1;
        __Vdlyvset__rom_ascii__DOT__u_rom2__DOT__rom__v2 = 1U;
        vlSelf->rom_ascii__DOT__u_rom2__DOT____Vlvbound1 
            = vlSelf->rom_ascii__DOT__u_rom2__DOT__rom
            [3U];
        __Vdlyvval__rom_ascii__DOT__u_rom2__DOT__rom__v3 
            = vlSelf->rom_ascii__DOT__u_rom2__DOT____Vlvbound1;
        __Vdlyvset__rom_ascii__DOT__u_rom2__DOT__rom__v3 = 1U;
        vlSelf->rom_ascii__DOT__u_rom2__DOT____Vlvbound1 
            = vlSelf->rom_ascii__DOT__u_rom2__DOT__rom
            [4U];
        __Vdlyvval__rom_ascii__DOT__u_rom2__DOT__rom__v4 
            = vlSelf->rom_ascii__DOT__u_rom2__DOT____Vlvbound1;
        __Vdlyvset__rom_ascii__DOT__u_rom2__DOT__rom__v4 = 1U;
        vlSelf->rom_ascii__DOT__u_rom2__DOT____Vlvbound1 
            = vlSelf->rom_ascii__DOT__u_rom2__DOT__rom
            [5U];
        __Vdlyvval__rom_ascii__DOT__u_rom2__DOT__rom__v5 
            = vlSelf->rom_ascii__DOT__u_rom2__DOT____Vlvbound1;
        __Vdlyvset__rom_ascii__DOT__u_rom2__DOT__rom__v5 = 1U;
        vlSelf->rom_ascii__DOT__u_rom2__DOT____Vlvbound1 
            = vlSelf->rom_ascii__DOT__u_rom2__DOT__rom
            [6U];
        __Vdlyvval__rom_ascii__DOT__u_rom2__DOT__rom__v6 
            = vlSelf->rom_ascii__DOT__u_rom2__DOT____Vlvbound1;
        __Vdlyvset__rom_ascii__DOT__u_rom2__DOT__rom__v6 = 1U;
        vlSelf->rom_ascii__DOT__u_rom2__DOT____Vlvbound1 
            = vlSelf->rom_ascii__DOT__u_rom2__DOT__rom
            [7U];
        __Vdlyvval__rom_ascii__DOT__u_rom2__DOT__rom__v7 
            = vlSelf->rom_ascii__DOT__u_rom2__DOT____Vlvbound1;
        __Vdlyvset__rom_ascii__DOT__u_rom2__DOT__rom__v7 = 1U;
        vlSelf->rom_ascii__DOT__u_rom2__DOT____Vlvbound1 
            = vlSelf->rom_ascii__DOT__u_rom2__DOT__rom
            [8U];
        __Vdlyvval__rom_ascii__DOT__u_rom2__DOT__rom__v8 
            = vlSelf->rom_ascii__DOT__u_rom2__DOT____Vlvbound1;
        __Vdlyvset__rom_ascii__DOT__u_rom2__DOT__rom__v8 = 1U;
        vlSelf->rom_ascii__DOT__u_rom2__DOT____Vlvbound1 
            = vlSelf->rom_ascii__DOT__u_rom2__DOT__rom
            [9U];
        __Vdlyvval__rom_ascii__DOT__u_rom2__DOT__rom__v9 
            = vlSelf->rom_ascii__DOT__u_rom2__DOT____Vlvbound1;
        __Vdlyvset__rom_ascii__DOT__u_rom2__DOT__rom__v9 = 1U;
        vlSelf->rom_ascii__DOT__u_rom2__DOT____Vlvbound1 
            = vlSelf->rom_ascii__DOT__u_rom2__DOT__rom
            [0xaU];
        __Vdlyvval__rom_ascii__DOT__u_rom2__DOT__rom__v10 
            = vlSelf->rom_ascii__DOT__u_rom2__DOT____Vlvbound1;
        __Vdlyvset__rom_ascii__DOT__u_rom2__DOT__rom__v10 = 1U;
        vlSelf->rom_ascii__DOT__u_rom2__DOT____Vlvbound1 
            = vlSelf->rom_ascii__DOT__u_rom2__DOT__rom
            [0xbU];
        __Vdlyvval__rom_ascii__DOT__u_rom2__DOT__rom__v11 
            = vlSelf->rom_ascii__DOT__u_rom2__DOT____Vlvbound1;
        __Vdlyvset__rom_ascii__DOT__u_rom2__DOT__rom__v11 = 1U;
        vlSelf->rom_ascii__DOT__u_rom2__DOT____Vlvbound1 
            = vlSelf->rom_ascii__DOT__u_rom2__DOT__rom
            [0xcU];
        __Vdlyvval__rom_ascii__DOT__u_rom2__DOT__rom__v12 
            = vlSelf->rom_ascii__DOT__u_rom2__DOT____Vlvbound1;
        __Vdlyvset__rom_ascii__DOT__u_rom2__DOT__rom__v12 = 1U;
        vlSelf->rom_ascii__DOT__u_rom2__DOT____Vlvbound1 
            = vlSelf->rom_ascii__DOT__u_rom2__DOT__rom
            [0xdU];
        __Vdlyvval__rom_ascii__DOT__u_rom2__DOT__rom__v13 
            = vlSelf->rom_ascii__DOT__u_rom2__DOT____Vlvbound1;
        __Vdlyvset__rom_ascii__DOT__u_rom2__DOT__rom__v13 = 1U;
        vlSelf->rom_ascii__DOT__u_rom2__DOT____Vlvbound1 
            = vlSelf->rom_ascii__DOT__u_rom2__DOT__rom
            [0xeU];
        __Vdlyvval__rom_ascii__DOT__u_rom2__DOT__rom__v14 
            = vlSelf->rom_ascii__DOT__u_rom2__DOT____Vlvbound1;
        __Vdlyvset__rom_ascii__DOT__u_rom2__DOT__rom__v14 = 1U;
        vlSelf->rom_ascii__DOT__u_rom2__DOT____Vlvbound1 
            = vlSelf->rom_ascii__DOT__u_rom2__DOT__rom
            [0xfU];
        __Vdlyvval__rom_ascii__DOT__u_rom2__DOT__rom__v15 
            = vlSelf->rom_ascii__DOT__u_rom2__DOT____Vlvbound1;
        __Vdlyvset__rom_ascii__DOT__u_rom2__DOT__rom__v15 = 1U;
    } else {
        __Vdlyvset__rom_ascii__DOT__u_rom2__DOT__rom__v16 = 1U;
    }
    if (vlSelf->rst_n) {
        vlSelf->rom_ascii__DOT__u_rom1__DOT____Vlvbound1 
            = vlSelf->rom_ascii__DOT__u_rom1__DOT__rom
            [0U];
        __Vdlyvval__rom_ascii__DOT__u_rom1__DOT__rom__v0 
            = vlSelf->rom_ascii__DOT__u_rom1__DOT____Vlvbound1;
        __Vdlyvset__rom_ascii__DOT__u_rom1__DOT__rom__v0 = 1U;
        vlSelf->rom_ascii__DOT__u_rom1__DOT____Vlvbound1 
            = vlSelf->rom_ascii__DOT__u_rom1__DOT__rom
            [1U];
        __Vdlyvval__rom_ascii__DOT__u_rom1__DOT__rom__v1 
            = vlSelf->rom_ascii__DOT__u_rom1__DOT____Vlvbound1;
        __Vdlyvset__rom_ascii__DOT__u_rom1__DOT__rom__v1 = 1U;
        vlSelf->rom_ascii__DOT__u_rom1__DOT____Vlvbound1 
            = vlSelf->rom_ascii__DOT__u_rom1__DOT__rom
            [2U];
        __Vdlyvval__rom_ascii__DOT__u_rom1__DOT__rom__v2 
            = vlSelf->rom_ascii__DOT__u_rom1__DOT____Vlvbound1;
        __Vdlyvset__rom_ascii__DOT__u_rom1__DOT__rom__v2 = 1U;
        vlSelf->rom_ascii__DOT__u_rom1__DOT____Vlvbound1 
            = vlSelf->rom_ascii__DOT__u_rom1__DOT__rom
            [3U];
        __Vdlyvval__rom_ascii__DOT__u_rom1__DOT__rom__v3 
            = vlSelf->rom_ascii__DOT__u_rom1__DOT____Vlvbound1;
        __Vdlyvset__rom_ascii__DOT__u_rom1__DOT__rom__v3 = 1U;
        vlSelf->rom_ascii__DOT__u_rom1__DOT____Vlvbound1 
            = vlSelf->rom_ascii__DOT__u_rom1__DOT__rom
            [4U];
        __Vdlyvval__rom_ascii__DOT__u_rom1__DOT__rom__v4 
            = vlSelf->rom_ascii__DOT__u_rom1__DOT____Vlvbound1;
        __Vdlyvset__rom_ascii__DOT__u_rom1__DOT__rom__v4 = 1U;
        vlSelf->rom_ascii__DOT__u_rom1__DOT____Vlvbound1 
            = vlSelf->rom_ascii__DOT__u_rom1__DOT__rom
            [5U];
        __Vdlyvval__rom_ascii__DOT__u_rom1__DOT__rom__v5 
            = vlSelf->rom_ascii__DOT__u_rom1__DOT____Vlvbound1;
        __Vdlyvset__rom_ascii__DOT__u_rom1__DOT__rom__v5 = 1U;
        vlSelf->rom_ascii__DOT__u_rom1__DOT____Vlvbound1 
            = vlSelf->rom_ascii__DOT__u_rom1__DOT__rom
            [6U];
        __Vdlyvval__rom_ascii__DOT__u_rom1__DOT__rom__v6 
            = vlSelf->rom_ascii__DOT__u_rom1__DOT____Vlvbound1;
        __Vdlyvset__rom_ascii__DOT__u_rom1__DOT__rom__v6 = 1U;
        vlSelf->rom_ascii__DOT__u_rom1__DOT____Vlvbound1 
            = vlSelf->rom_ascii__DOT__u_rom1__DOT__rom
            [7U];
        __Vdlyvval__rom_ascii__DOT__u_rom1__DOT__rom__v7 
            = vlSelf->rom_ascii__DOT__u_rom1__DOT____Vlvbound1;
        __Vdlyvset__rom_ascii__DOT__u_rom1__DOT__rom__v7 = 1U;
        vlSelf->rom_ascii__DOT__u_rom1__DOT____Vlvbound1 
            = vlSelf->rom_ascii__DOT__u_rom1__DOT__rom
            [8U];
        __Vdlyvval__rom_ascii__DOT__u_rom1__DOT__rom__v8 
            = vlSelf->rom_ascii__DOT__u_rom1__DOT____Vlvbound1;
        __Vdlyvset__rom_ascii__DOT__u_rom1__DOT__rom__v8 = 1U;
        vlSelf->rom_ascii__DOT__u_rom1__DOT____Vlvbound1 
            = vlSelf->rom_ascii__DOT__u_rom1__DOT__rom
            [9U];
        __Vdlyvval__rom_ascii__DOT__u_rom1__DOT__rom__v9 
            = vlSelf->rom_ascii__DOT__u_rom1__DOT____Vlvbound1;
        __Vdlyvset__rom_ascii__DOT__u_rom1__DOT__rom__v9 = 1U;
        vlSelf->rom_ascii__DOT__u_rom1__DOT____Vlvbound1 
            = vlSelf->rom_ascii__DOT__u_rom1__DOT__rom
            [0xaU];
        __Vdlyvval__rom_ascii__DOT__u_rom1__DOT__rom__v10 
            = vlSelf->rom_ascii__DOT__u_rom1__DOT____Vlvbound1;
        __Vdlyvset__rom_ascii__DOT__u_rom1__DOT__rom__v10 = 1U;
        vlSelf->rom_ascii__DOT__u_rom1__DOT____Vlvbound1 
            = vlSelf->rom_ascii__DOT__u_rom1__DOT__rom
            [0xbU];
        __Vdlyvval__rom_ascii__DOT__u_rom1__DOT__rom__v11 
            = vlSelf->rom_ascii__DOT__u_rom1__DOT____Vlvbound1;
        __Vdlyvset__rom_ascii__DOT__u_rom1__DOT__rom__v11 = 1U;
        vlSelf->rom_ascii__DOT__u_rom1__DOT____Vlvbound1 
            = vlSelf->rom_ascii__DOT__u_rom1__DOT__rom
            [0xcU];
        __Vdlyvval__rom_ascii__DOT__u_rom1__DOT__rom__v12 
            = vlSelf->rom_ascii__DOT__u_rom1__DOT____Vlvbound1;
        __Vdlyvset__rom_ascii__DOT__u_rom1__DOT__rom__v12 = 1U;
        vlSelf->rom_ascii__DOT__u_rom1__DOT____Vlvbound1 
            = vlSelf->rom_ascii__DOT__u_rom1__DOT__rom
            [0xdU];
        __Vdlyvval__rom_ascii__DOT__u_rom1__DOT__rom__v13 
            = vlSelf->rom_ascii__DOT__u_rom1__DOT____Vlvbound1;
        __Vdlyvset__rom_ascii__DOT__u_rom1__DOT__rom__v13 = 1U;
        vlSelf->rom_ascii__DOT__u_rom1__DOT____Vlvbound1 
            = vlSelf->rom_ascii__DOT__u_rom1__DOT__rom
            [0xeU];
        __Vdlyvval__rom_ascii__DOT__u_rom1__DOT__rom__v14 
            = vlSelf->rom_ascii__DOT__u_rom1__DOT____Vlvbound1;
        __Vdlyvset__rom_ascii__DOT__u_rom1__DOT__rom__v14 = 1U;
        vlSelf->rom_ascii__DOT__u_rom1__DOT____Vlvbound1 
            = vlSelf->rom_ascii__DOT__u_rom1__DOT__rom
            [0xfU];
        __Vdlyvval__rom_ascii__DOT__u_rom1__DOT__rom__v15 
            = vlSelf->rom_ascii__DOT__u_rom1__DOT____Vlvbound1;
        __Vdlyvset__rom_ascii__DOT__u_rom1__DOT__rom__v15 = 1U;
    } else {
        __Vdlyvset__rom_ascii__DOT__u_rom1__DOT__rom__v16 = 1U;
    }
    if (vlSelf->rst_n) {
        vlSelf->rom_ascii__DOT____Vlvbound1 = vlSelf->rom_ascii__DOT__lut
            [0U];
        __Vdlyvval__rom_ascii__DOT__lut__v0 = vlSelf->rom_ascii__DOT____Vlvbound1;
        __Vdlyvset__rom_ascii__DOT__lut__v0 = 1U;
        vlSelf->rom_ascii__DOT____Vlvbound1 = vlSelf->rom_ascii__DOT__lut
            [1U];
        __Vdlyvval__rom_ascii__DOT__lut__v1 = vlSelf->rom_ascii__DOT____Vlvbound1;
        __Vdlyvset__rom_ascii__DOT__lut__v1 = 1U;
        vlSelf->rom_ascii__DOT____Vlvbound1 = vlSelf->rom_ascii__DOT__lut
            [2U];
        __Vdlyvval__rom_ascii__DOT__lut__v2 = vlSelf->rom_ascii__DOT____Vlvbound1;
        __Vdlyvset__rom_ascii__DOT__lut__v2 = 1U;
        vlSelf->rom_ascii__DOT____Vlvbound1 = vlSelf->rom_ascii__DOT__lut
            [3U];
        __Vdlyvval__rom_ascii__DOT__lut__v3 = vlSelf->rom_ascii__DOT____Vlvbound1;
        __Vdlyvset__rom_ascii__DOT__lut__v3 = 1U;
        vlSelf->rom_ascii__DOT____Vlvbound1 = vlSelf->rom_ascii__DOT__lut
            [4U];
        __Vdlyvval__rom_ascii__DOT__lut__v4 = vlSelf->rom_ascii__DOT____Vlvbound1;
        __Vdlyvset__rom_ascii__DOT__lut__v4 = 1U;
        vlSelf->rom_ascii__DOT____Vlvbound1 = vlSelf->rom_ascii__DOT__lut
            [5U];
        __Vdlyvval__rom_ascii__DOT__lut__v5 = vlSelf->rom_ascii__DOT____Vlvbound1;
        __Vdlyvset__rom_ascii__DOT__lut__v5 = 1U;
        vlSelf->rom_ascii__DOT____Vlvbound1 = vlSelf->rom_ascii__DOT__lut
            [6U];
        __Vdlyvval__rom_ascii__DOT__lut__v6 = vlSelf->rom_ascii__DOT____Vlvbound1;
        __Vdlyvset__rom_ascii__DOT__lut__v6 = 1U;
        vlSelf->rom_ascii__DOT____Vlvbound1 = vlSelf->rom_ascii__DOT__lut
            [7U];
        __Vdlyvval__rom_ascii__DOT__lut__v7 = vlSelf->rom_ascii__DOT____Vlvbound1;
        __Vdlyvset__rom_ascii__DOT__lut__v7 = 1U;
        vlSelf->rom_ascii__DOT____Vlvbound1 = vlSelf->rom_ascii__DOT__lut
            [8U];
        __Vdlyvval__rom_ascii__DOT__lut__v8 = vlSelf->rom_ascii__DOT____Vlvbound1;
        __Vdlyvset__rom_ascii__DOT__lut__v8 = 1U;
        vlSelf->rom_ascii__DOT____Vlvbound1 = vlSelf->rom_ascii__DOT__lut
            [9U];
        __Vdlyvval__rom_ascii__DOT__lut__v9 = vlSelf->rom_ascii__DOT____Vlvbound1;
        __Vdlyvset__rom_ascii__DOT__lut__v9 = 1U;
        vlSelf->rom_ascii__DOT____Vlvbound1 = vlSelf->rom_ascii__DOT__lut
            [0xaU];
        __Vdlyvval__rom_ascii__DOT__lut__v10 = vlSelf->rom_ascii__DOT____Vlvbound1;
        __Vdlyvset__rom_ascii__DOT__lut__v10 = 1U;
        vlSelf->rom_ascii__DOT____Vlvbound1 = vlSelf->rom_ascii__DOT__lut
            [0xbU];
        __Vdlyvval__rom_ascii__DOT__lut__v11 = vlSelf->rom_ascii__DOT____Vlvbound1;
        __Vdlyvset__rom_ascii__DOT__lut__v11 = 1U;
        vlSelf->rom_ascii__DOT____Vlvbound1 = vlSelf->rom_ascii__DOT__lut
            [0xcU];
        __Vdlyvval__rom_ascii__DOT__lut__v12 = vlSelf->rom_ascii__DOT____Vlvbound1;
        __Vdlyvset__rom_ascii__DOT__lut__v12 = 1U;
        vlSelf->rom_ascii__DOT____Vlvbound1 = vlSelf->rom_ascii__DOT__lut
            [0xdU];
        __Vdlyvval__rom_ascii__DOT__lut__v13 = vlSelf->rom_ascii__DOT____Vlvbound1;
        __Vdlyvset__rom_ascii__DOT__lut__v13 = 1U;
        vlSelf->rom_ascii__DOT____Vlvbound1 = vlSelf->rom_ascii__DOT__lut
            [0xeU];
        __Vdlyvval__rom_ascii__DOT__lut__v14 = vlSelf->rom_ascii__DOT____Vlvbound1;
        __Vdlyvset__rom_ascii__DOT__lut__v14 = 1U;
        vlSelf->rom_ascii__DOT____Vlvbound1 = vlSelf->rom_ascii__DOT__lut
            [0xfU];
        __Vdlyvval__rom_ascii__DOT__lut__v15 = vlSelf->rom_ascii__DOT____Vlvbound1;
        __Vdlyvset__rom_ascii__DOT__lut__v15 = 1U;
        vlSelf->rom_ascii__DOT____Vlvbound1 = vlSelf->rom_ascii__DOT__lut
            [0x10U];
        __Vdlyvval__rom_ascii__DOT__lut__v16 = vlSelf->rom_ascii__DOT____Vlvbound1;
        __Vdlyvset__rom_ascii__DOT__lut__v16 = 1U;
        vlSelf->rom_ascii__DOT____Vlvbound1 = vlSelf->rom_ascii__DOT__lut
            [0x11U];
        __Vdlyvval__rom_ascii__DOT__lut__v17 = vlSelf->rom_ascii__DOT____Vlvbound1;
        __Vdlyvset__rom_ascii__DOT__lut__v17 = 1U;
        vlSelf->rom_ascii__DOT____Vlvbound1 = vlSelf->rom_ascii__DOT__lut
            [0x12U];
        __Vdlyvval__rom_ascii__DOT__lut__v18 = vlSelf->rom_ascii__DOT____Vlvbound1;
        __Vdlyvset__rom_ascii__DOT__lut__v18 = 1U;
        vlSelf->rom_ascii__DOT____Vlvbound1 = vlSelf->rom_ascii__DOT__lut
            [0x13U];
        __Vdlyvval__rom_ascii__DOT__lut__v19 = vlSelf->rom_ascii__DOT____Vlvbound1;
        __Vdlyvset__rom_ascii__DOT__lut__v19 = 1U;
        vlSelf->rom_ascii__DOT____Vlvbound1 = vlSelf->rom_ascii__DOT__lut
            [0x14U];
        __Vdlyvval__rom_ascii__DOT__lut__v20 = vlSelf->rom_ascii__DOT____Vlvbound1;
        __Vdlyvset__rom_ascii__DOT__lut__v20 = 1U;
        vlSelf->rom_ascii__DOT____Vlvbound1 = vlSelf->rom_ascii__DOT__lut
            [0x15U];
        __Vdlyvval__rom_ascii__DOT__lut__v21 = vlSelf->rom_ascii__DOT____Vlvbound1;
        __Vdlyvset__rom_ascii__DOT__lut__v21 = 1U;
        vlSelf->rom_ascii__DOT____Vlvbound1 = vlSelf->rom_ascii__DOT__lut
            [0x16U];
        __Vdlyvval__rom_ascii__DOT__lut__v22 = vlSelf->rom_ascii__DOT____Vlvbound1;
        __Vdlyvset__rom_ascii__DOT__lut__v22 = 1U;
        vlSelf->rom_ascii__DOT____Vlvbound1 = vlSelf->rom_ascii__DOT__lut
            [0x17U];
        __Vdlyvval__rom_ascii__DOT__lut__v23 = vlSelf->rom_ascii__DOT____Vlvbound1;
        __Vdlyvset__rom_ascii__DOT__lut__v23 = 1U;
        vlSelf->rom_ascii__DOT____Vlvbound1 = vlSelf->rom_ascii__DOT__lut
            [0x18U];
        __Vdlyvval__rom_ascii__DOT__lut__v24 = vlSelf->rom_ascii__DOT____Vlvbound1;
        __Vdlyvset__rom_ascii__DOT__lut__v24 = 1U;
        vlSelf->rom_ascii__DOT____Vlvbound1 = vlSelf->rom_ascii__DOT__lut
            [0x19U];
        __Vdlyvval__rom_ascii__DOT__lut__v25 = vlSelf->rom_ascii__DOT____Vlvbound1;
        __Vdlyvset__rom_ascii__DOT__lut__v25 = 1U;
        vlSelf->rom_ascii__DOT____Vlvbound1 = vlSelf->rom_ascii__DOT__lut
            [0x1aU];
        __Vdlyvval__rom_ascii__DOT__lut__v26 = vlSelf->rom_ascii__DOT____Vlvbound1;
        __Vdlyvset__rom_ascii__DOT__lut__v26 = 1U;
        vlSelf->rom_ascii__DOT____Vlvbound1 = vlSelf->rom_ascii__DOT__lut
            [0x1bU];
        __Vdlyvval__rom_ascii__DOT__lut__v27 = vlSelf->rom_ascii__DOT____Vlvbound1;
        __Vdlyvset__rom_ascii__DOT__lut__v27 = 1U;
        vlSelf->rom_ascii__DOT____Vlvbound1 = vlSelf->rom_ascii__DOT__lut
            [0x1cU];
        __Vdlyvval__rom_ascii__DOT__lut__v28 = vlSelf->rom_ascii__DOT____Vlvbound1;
        __Vdlyvset__rom_ascii__DOT__lut__v28 = 1U;
        vlSelf->rom_ascii__DOT____Vlvbound1 = vlSelf->rom_ascii__DOT__lut
            [0x1dU];
        __Vdlyvval__rom_ascii__DOT__lut__v29 = vlSelf->rom_ascii__DOT____Vlvbound1;
        __Vdlyvset__rom_ascii__DOT__lut__v29 = 1U;
        vlSelf->rom_ascii__DOT____Vlvbound1 = vlSelf->rom_ascii__DOT__lut
            [0x1eU];
        __Vdlyvval__rom_ascii__DOT__lut__v30 = vlSelf->rom_ascii__DOT____Vlvbound1;
        __Vdlyvset__rom_ascii__DOT__lut__v30 = 1U;
        vlSelf->rom_ascii__DOT____Vlvbound1 = vlSelf->rom_ascii__DOT__lut
            [0x1fU];
        __Vdlyvval__rom_ascii__DOT__lut__v31 = vlSelf->rom_ascii__DOT____Vlvbound1;
        __Vdlyvset__rom_ascii__DOT__lut__v31 = 1U;
        vlSelf->rom_ascii__DOT____Vlvbound1 = vlSelf->rom_ascii__DOT__lut
            [0x20U];
        __Vdlyvval__rom_ascii__DOT__lut__v32 = vlSelf->rom_ascii__DOT____Vlvbound1;
        __Vdlyvset__rom_ascii__DOT__lut__v32 = 1U;
        vlSelf->rom_ascii__DOT____Vlvbound1 = vlSelf->rom_ascii__DOT__lut
            [0x21U];
        __Vdlyvval__rom_ascii__DOT__lut__v33 = vlSelf->rom_ascii__DOT____Vlvbound1;
        __Vdlyvset__rom_ascii__DOT__lut__v33 = 1U;
        vlSelf->rom_ascii__DOT____Vlvbound1 = vlSelf->rom_ascii__DOT__lut
            [0x22U];
        __Vdlyvval__rom_ascii__DOT__lut__v34 = vlSelf->rom_ascii__DOT____Vlvbound1;
        __Vdlyvset__rom_ascii__DOT__lut__v34 = 1U;
        vlSelf->rom_ascii__DOT____Vlvbound1 = vlSelf->rom_ascii__DOT__lut
            [0x23U];
        __Vdlyvval__rom_ascii__DOT__lut__v35 = vlSelf->rom_ascii__DOT____Vlvbound1;
        __Vdlyvset__rom_ascii__DOT__lut__v35 = 1U;
    } else {
        __Vdlyvset__rom_ascii__DOT__lut__v36 = 1U;
    }
    if (__Vdlyvset__rom_ascii__DOT__u_rom2__DOT__rom__v0) {
        vlSelf->rom_ascii__DOT__u_rom2__DOT__rom[0U] 
            = __Vdlyvval__rom_ascii__DOT__u_rom2__DOT__rom__v0;
    }
    if (__Vdlyvset__rom_ascii__DOT__u_rom2__DOT__rom__v1) {
        vlSelf->rom_ascii__DOT__u_rom2__DOT__rom[1U] 
            = __Vdlyvval__rom_ascii__DOT__u_rom2__DOT__rom__v1;
    }
    if (__Vdlyvset__rom_ascii__DOT__u_rom2__DOT__rom__v2) {
        vlSelf->rom_ascii__DOT__u_rom2__DOT__rom[2U] 
            = __Vdlyvval__rom_ascii__DOT__u_rom2__DOT__rom__v2;
    }
    if (__Vdlyvset__rom_ascii__DOT__u_rom2__DOT__rom__v3) {
        vlSelf->rom_ascii__DOT__u_rom2__DOT__rom[3U] 
            = __Vdlyvval__rom_ascii__DOT__u_rom2__DOT__rom__v3;
    }
    if (__Vdlyvset__rom_ascii__DOT__u_rom2__DOT__rom__v4) {
        vlSelf->rom_ascii__DOT__u_rom2__DOT__rom[4U] 
            = __Vdlyvval__rom_ascii__DOT__u_rom2__DOT__rom__v4;
    }
    if (__Vdlyvset__rom_ascii__DOT__u_rom2__DOT__rom__v5) {
        vlSelf->rom_ascii__DOT__u_rom2__DOT__rom[5U] 
            = __Vdlyvval__rom_ascii__DOT__u_rom2__DOT__rom__v5;
    }
    if (__Vdlyvset__rom_ascii__DOT__u_rom2__DOT__rom__v6) {
        vlSelf->rom_ascii__DOT__u_rom2__DOT__rom[6U] 
            = __Vdlyvval__rom_ascii__DOT__u_rom2__DOT__rom__v6;
    }
    if (__Vdlyvset__rom_ascii__DOT__u_rom2__DOT__rom__v7) {
        vlSelf->rom_ascii__DOT__u_rom2__DOT__rom[7U] 
            = __Vdlyvval__rom_ascii__DOT__u_rom2__DOT__rom__v7;
    }
    if (__Vdlyvset__rom_ascii__DOT__u_rom2__DOT__rom__v8) {
        vlSelf->rom_ascii__DOT__u_rom2__DOT__rom[8U] 
            = __Vdlyvval__rom_ascii__DOT__u_rom2__DOT__rom__v8;
    }
    if (__Vdlyvset__rom_ascii__DOT__u_rom2__DOT__rom__v9) {
        vlSelf->rom_ascii__DOT__u_rom2__DOT__rom[9U] 
            = __Vdlyvval__rom_ascii__DOT__u_rom2__DOT__rom__v9;
    }
    if (__Vdlyvset__rom_ascii__DOT__u_rom2__DOT__rom__v10) {
        vlSelf->rom_ascii__DOT__u_rom2__DOT__rom[0xaU] 
            = __Vdlyvval__rom_ascii__DOT__u_rom2__DOT__rom__v10;
    }
    if (__Vdlyvset__rom_ascii__DOT__u_rom2__DOT__rom__v11) {
        vlSelf->rom_ascii__DOT__u_rom2__DOT__rom[0xbU] 
            = __Vdlyvval__rom_ascii__DOT__u_rom2__DOT__rom__v11;
    }
    if (__Vdlyvset__rom_ascii__DOT__u_rom2__DOT__rom__v12) {
        vlSelf->rom_ascii__DOT__u_rom2__DOT__rom[0xcU] 
            = __Vdlyvval__rom_ascii__DOT__u_rom2__DOT__rom__v12;
    }
    if (__Vdlyvset__rom_ascii__DOT__u_rom2__DOT__rom__v13) {
        vlSelf->rom_ascii__DOT__u_rom2__DOT__rom[0xdU] 
            = __Vdlyvval__rom_ascii__DOT__u_rom2__DOT__rom__v13;
    }
    if (__Vdlyvset__rom_ascii__DOT__u_rom2__DOT__rom__v14) {
        vlSelf->rom_ascii__DOT__u_rom2__DOT__rom[0xeU] 
            = __Vdlyvval__rom_ascii__DOT__u_rom2__DOT__rom__v14;
    }
    if (__Vdlyvset__rom_ascii__DOT__u_rom2__DOT__rom__v15) {
        vlSelf->rom_ascii__DOT__u_rom2__DOT__rom[0xfU] 
            = __Vdlyvval__rom_ascii__DOT__u_rom2__DOT__rom__v15;
    }
    if (__Vdlyvset__rom_ascii__DOT__u_rom2__DOT__rom__v16) {
        vlSelf->rom_ascii__DOT__u_rom2__DOT__rom[0U] = 0xfcU;
        vlSelf->rom_ascii__DOT__u_rom2__DOT__rom[1U] = 0x60U;
        vlSelf->rom_ascii__DOT__u_rom2__DOT__rom[2U] = 0xdaU;
        vlSelf->rom_ascii__DOT__u_rom2__DOT__rom[3U] = 0xf2U;
        vlSelf->rom_ascii__DOT__u_rom2__DOT__rom[4U] = 0x66U;
        vlSelf->rom_ascii__DOT__u_rom2__DOT__rom[5U] = 0xb6U;
        vlSelf->rom_ascii__DOT__u_rom2__DOT__rom[6U] = 0xbeU;
        vlSelf->rom_ascii__DOT__u_rom2__DOT__rom[7U] = 0xe0U;
        vlSelf->rom_ascii__DOT__u_rom2__DOT__rom[8U] = 0xfeU;
        vlSelf->rom_ascii__DOT__u_rom2__DOT__rom[9U] = 0xf6U;
        vlSelf->rom_ascii__DOT__u_rom2__DOT__rom[0xaU] = 0xeeU;
        vlSelf->rom_ascii__DOT__u_rom2__DOT__rom[0xbU] = 0xfeU;
        vlSelf->rom_ascii__DOT__u_rom2__DOT__rom[0xcU] = 0x9cU;
        vlSelf->rom_ascii__DOT__u_rom2__DOT__rom[0xdU] = 0xfcU;
        vlSelf->rom_ascii__DOT__u_rom2__DOT__rom[0xeU] = 0x9eU;
        vlSelf->rom_ascii__DOT__u_rom2__DOT__rom[0xfU] = 0x8eU;
        vlSelf->rom_ascii__DOT__u_rom2__DOT__rom[0x10U] = 0U;
    }
    if (__Vdlyvset__rom_ascii__DOT__u_rom1__DOT__rom__v0) {
        vlSelf->rom_ascii__DOT__u_rom1__DOT__rom[0U] 
            = __Vdlyvval__rom_ascii__DOT__u_rom1__DOT__rom__v0;
    }
    if (__Vdlyvset__rom_ascii__DOT__u_rom1__DOT__rom__v1) {
        vlSelf->rom_ascii__DOT__u_rom1__DOT__rom[1U] 
            = __Vdlyvval__rom_ascii__DOT__u_rom1__DOT__rom__v1;
    }
    if (__Vdlyvset__rom_ascii__DOT__u_rom1__DOT__rom__v2) {
        vlSelf->rom_ascii__DOT__u_rom1__DOT__rom[2U] 
            = __Vdlyvval__rom_ascii__DOT__u_rom1__DOT__rom__v2;
    }
    if (__Vdlyvset__rom_ascii__DOT__u_rom1__DOT__rom__v3) {
        vlSelf->rom_ascii__DOT__u_rom1__DOT__rom[3U] 
            = __Vdlyvval__rom_ascii__DOT__u_rom1__DOT__rom__v3;
    }
    if (__Vdlyvset__rom_ascii__DOT__u_rom1__DOT__rom__v4) {
        vlSelf->rom_ascii__DOT__u_rom1__DOT__rom[4U] 
            = __Vdlyvval__rom_ascii__DOT__u_rom1__DOT__rom__v4;
    }
    if (__Vdlyvset__rom_ascii__DOT__u_rom1__DOT__rom__v5) {
        vlSelf->rom_ascii__DOT__u_rom1__DOT__rom[5U] 
            = __Vdlyvval__rom_ascii__DOT__u_rom1__DOT__rom__v5;
    }
    if (__Vdlyvset__rom_ascii__DOT__u_rom1__DOT__rom__v6) {
        vlSelf->rom_ascii__DOT__u_rom1__DOT__rom[6U] 
            = __Vdlyvval__rom_ascii__DOT__u_rom1__DOT__rom__v6;
    }
    if (__Vdlyvset__rom_ascii__DOT__u_rom1__DOT__rom__v7) {
        vlSelf->rom_ascii__DOT__u_rom1__DOT__rom[7U] 
            = __Vdlyvval__rom_ascii__DOT__u_rom1__DOT__rom__v7;
    }
    if (__Vdlyvset__rom_ascii__DOT__u_rom1__DOT__rom__v8) {
        vlSelf->rom_ascii__DOT__u_rom1__DOT__rom[8U] 
            = __Vdlyvval__rom_ascii__DOT__u_rom1__DOT__rom__v8;
    }
    if (__Vdlyvset__rom_ascii__DOT__u_rom1__DOT__rom__v9) {
        vlSelf->rom_ascii__DOT__u_rom1__DOT__rom[9U] 
            = __Vdlyvval__rom_ascii__DOT__u_rom1__DOT__rom__v9;
    }
    if (__Vdlyvset__rom_ascii__DOT__u_rom1__DOT__rom__v10) {
        vlSelf->rom_ascii__DOT__u_rom1__DOT__rom[0xaU] 
            = __Vdlyvval__rom_ascii__DOT__u_rom1__DOT__rom__v10;
    }
    if (__Vdlyvset__rom_ascii__DOT__u_rom1__DOT__rom__v11) {
        vlSelf->rom_ascii__DOT__u_rom1__DOT__rom[0xbU] 
            = __Vdlyvval__rom_ascii__DOT__u_rom1__DOT__rom__v11;
    }
    if (__Vdlyvset__rom_ascii__DOT__u_rom1__DOT__rom__v12) {
        vlSelf->rom_ascii__DOT__u_rom1__DOT__rom[0xcU] 
            = __Vdlyvval__rom_ascii__DOT__u_rom1__DOT__rom__v12;
    }
    if (__Vdlyvset__rom_ascii__DOT__u_rom1__DOT__rom__v13) {
        vlSelf->rom_ascii__DOT__u_rom1__DOT__rom[0xdU] 
            = __Vdlyvval__rom_ascii__DOT__u_rom1__DOT__rom__v13;
    }
    if (__Vdlyvset__rom_ascii__DOT__u_rom1__DOT__rom__v14) {
        vlSelf->rom_ascii__DOT__u_rom1__DOT__rom[0xeU] 
            = __Vdlyvval__rom_ascii__DOT__u_rom1__DOT__rom__v14;
    }
    if (__Vdlyvset__rom_ascii__DOT__u_rom1__DOT__rom__v15) {
        vlSelf->rom_ascii__DOT__u_rom1__DOT__rom[0xfU] 
            = __Vdlyvval__rom_ascii__DOT__u_rom1__DOT__rom__v15;
    }
    if (__Vdlyvset__rom_ascii__DOT__u_rom1__DOT__rom__v16) {
        vlSelf->rom_ascii__DOT__u_rom1__DOT__rom[0U] = 0xfcU;
        vlSelf->rom_ascii__DOT__u_rom1__DOT__rom[1U] = 0x60U;
        vlSelf->rom_ascii__DOT__u_rom1__DOT__rom[2U] = 0xdaU;
        vlSelf->rom_ascii__DOT__u_rom1__DOT__rom[3U] = 0xf2U;
        vlSelf->rom_ascii__DOT__u_rom1__DOT__rom[4U] = 0x66U;
        vlSelf->rom_ascii__DOT__u_rom1__DOT__rom[5U] = 0xb6U;
        vlSelf->rom_ascii__DOT__u_rom1__DOT__rom[6U] = 0xbeU;
        vlSelf->rom_ascii__DOT__u_rom1__DOT__rom[7U] = 0xe0U;
        vlSelf->rom_ascii__DOT__u_rom1__DOT__rom[8U] = 0xfeU;
        vlSelf->rom_ascii__DOT__u_rom1__DOT__rom[9U] = 0xf6U;
        vlSelf->rom_ascii__DOT__u_rom1__DOT__rom[0xaU] = 0xeeU;
        vlSelf->rom_ascii__DOT__u_rom1__DOT__rom[0xbU] = 0xfeU;
        vlSelf->rom_ascii__DOT__u_rom1__DOT__rom[0xcU] = 0x9cU;
        vlSelf->rom_ascii__DOT__u_rom1__DOT__rom[0xdU] = 0xfcU;
        vlSelf->rom_ascii__DOT__u_rom1__DOT__rom[0xeU] = 0x9eU;
        vlSelf->rom_ascii__DOT__u_rom1__DOT__rom[0xfU] = 0x8eU;
        vlSelf->rom_ascii__DOT__u_rom1__DOT__rom[0x10U] = 0U;
    }
    if (__Vdlyvset__rom_ascii__DOT__lut__v0) {
        vlSelf->rom_ascii__DOT__lut[0U] = __Vdlyvval__rom_ascii__DOT__lut__v0;
    }
    if (__Vdlyvset__rom_ascii__DOT__lut__v1) {
        vlSelf->rom_ascii__DOT__lut[1U] = __Vdlyvval__rom_ascii__DOT__lut__v1;
    }
    if (__Vdlyvset__rom_ascii__DOT__lut__v2) {
        vlSelf->rom_ascii__DOT__lut[2U] = __Vdlyvval__rom_ascii__DOT__lut__v2;
    }
    if (__Vdlyvset__rom_ascii__DOT__lut__v3) {
        vlSelf->rom_ascii__DOT__lut[3U] = __Vdlyvval__rom_ascii__DOT__lut__v3;
    }
    if (__Vdlyvset__rom_ascii__DOT__lut__v4) {
        vlSelf->rom_ascii__DOT__lut[4U] = __Vdlyvval__rom_ascii__DOT__lut__v4;
    }
    if (__Vdlyvset__rom_ascii__DOT__lut__v5) {
        vlSelf->rom_ascii__DOT__lut[5U] = __Vdlyvval__rom_ascii__DOT__lut__v5;
    }
    if (__Vdlyvset__rom_ascii__DOT__lut__v6) {
        vlSelf->rom_ascii__DOT__lut[6U] = __Vdlyvval__rom_ascii__DOT__lut__v6;
    }
    if (__Vdlyvset__rom_ascii__DOT__lut__v7) {
        vlSelf->rom_ascii__DOT__lut[7U] = __Vdlyvval__rom_ascii__DOT__lut__v7;
    }
    if (__Vdlyvset__rom_ascii__DOT__lut__v8) {
        vlSelf->rom_ascii__DOT__lut[8U] = __Vdlyvval__rom_ascii__DOT__lut__v8;
    }
    if (__Vdlyvset__rom_ascii__DOT__lut__v9) {
        vlSelf->rom_ascii__DOT__lut[9U] = __Vdlyvval__rom_ascii__DOT__lut__v9;
    }
    if (__Vdlyvset__rom_ascii__DOT__lut__v10) {
        vlSelf->rom_ascii__DOT__lut[0xaU] = __Vdlyvval__rom_ascii__DOT__lut__v10;
    }
    if (__Vdlyvset__rom_ascii__DOT__lut__v11) {
        vlSelf->rom_ascii__DOT__lut[0xbU] = __Vdlyvval__rom_ascii__DOT__lut__v11;
    }
    if (__Vdlyvset__rom_ascii__DOT__lut__v12) {
        vlSelf->rom_ascii__DOT__lut[0xcU] = __Vdlyvval__rom_ascii__DOT__lut__v12;
    }
    if (__Vdlyvset__rom_ascii__DOT__lut__v13) {
        vlSelf->rom_ascii__DOT__lut[0xdU] = __Vdlyvval__rom_ascii__DOT__lut__v13;
    }
    if (__Vdlyvset__rom_ascii__DOT__lut__v14) {
        vlSelf->rom_ascii__DOT__lut[0xeU] = __Vdlyvval__rom_ascii__DOT__lut__v14;
    }
    if (__Vdlyvset__rom_ascii__DOT__lut__v15) {
        vlSelf->rom_ascii__DOT__lut[0xfU] = __Vdlyvval__rom_ascii__DOT__lut__v15;
    }
    if (__Vdlyvset__rom_ascii__DOT__lut__v16) {
        vlSelf->rom_ascii__DOT__lut[0x10U] = __Vdlyvval__rom_ascii__DOT__lut__v16;
    }
    if (__Vdlyvset__rom_ascii__DOT__lut__v17) {
        vlSelf->rom_ascii__DOT__lut[0x11U] = __Vdlyvval__rom_ascii__DOT__lut__v17;
    }
    if (__Vdlyvset__rom_ascii__DOT__lut__v18) {
        vlSelf->rom_ascii__DOT__lut[0x12U] = __Vdlyvval__rom_ascii__DOT__lut__v18;
    }
    if (__Vdlyvset__rom_ascii__DOT__lut__v19) {
        vlSelf->rom_ascii__DOT__lut[0x13U] = __Vdlyvval__rom_ascii__DOT__lut__v19;
    }
    if (__Vdlyvset__rom_ascii__DOT__lut__v20) {
        vlSelf->rom_ascii__DOT__lut[0x14U] = __Vdlyvval__rom_ascii__DOT__lut__v20;
    }
    if (__Vdlyvset__rom_ascii__DOT__lut__v21) {
        vlSelf->rom_ascii__DOT__lut[0x15U] = __Vdlyvval__rom_ascii__DOT__lut__v21;
    }
    if (__Vdlyvset__rom_ascii__DOT__lut__v22) {
        vlSelf->rom_ascii__DOT__lut[0x16U] = __Vdlyvval__rom_ascii__DOT__lut__v22;
    }
    if (__Vdlyvset__rom_ascii__DOT__lut__v23) {
        vlSelf->rom_ascii__DOT__lut[0x17U] = __Vdlyvval__rom_ascii__DOT__lut__v23;
    }
    if (__Vdlyvset__rom_ascii__DOT__lut__v24) {
        vlSelf->rom_ascii__DOT__lut[0x18U] = __Vdlyvval__rom_ascii__DOT__lut__v24;
    }
    if (__Vdlyvset__rom_ascii__DOT__lut__v25) {
        vlSelf->rom_ascii__DOT__lut[0x19U] = __Vdlyvval__rom_ascii__DOT__lut__v25;
    }
    if (__Vdlyvset__rom_ascii__DOT__lut__v26) {
        vlSelf->rom_ascii__DOT__lut[0x1aU] = __Vdlyvval__rom_ascii__DOT__lut__v26;
    }
    if (__Vdlyvset__rom_ascii__DOT__lut__v27) {
        vlSelf->rom_ascii__DOT__lut[0x1bU] = __Vdlyvval__rom_ascii__DOT__lut__v27;
    }
    if (__Vdlyvset__rom_ascii__DOT__lut__v28) {
        vlSelf->rom_ascii__DOT__lut[0x1cU] = __Vdlyvval__rom_ascii__DOT__lut__v28;
    }
    if (__Vdlyvset__rom_ascii__DOT__lut__v29) {
        vlSelf->rom_ascii__DOT__lut[0x1dU] = __Vdlyvval__rom_ascii__DOT__lut__v29;
    }
    if (__Vdlyvset__rom_ascii__DOT__lut__v30) {
        vlSelf->rom_ascii__DOT__lut[0x1eU] = __Vdlyvval__rom_ascii__DOT__lut__v30;
    }
    if (__Vdlyvset__rom_ascii__DOT__lut__v31) {
        vlSelf->rom_ascii__DOT__lut[0x1fU] = __Vdlyvval__rom_ascii__DOT__lut__v31;
    }
    if (__Vdlyvset__rom_ascii__DOT__lut__v32) {
        vlSelf->rom_ascii__DOT__lut[0x20U] = __Vdlyvval__rom_ascii__DOT__lut__v32;
    }
    if (__Vdlyvset__rom_ascii__DOT__lut__v33) {
        vlSelf->rom_ascii__DOT__lut[0x21U] = __Vdlyvval__rom_ascii__DOT__lut__v33;
    }
    if (__Vdlyvset__rom_ascii__DOT__lut__v34) {
        vlSelf->rom_ascii__DOT__lut[0x22U] = __Vdlyvval__rom_ascii__DOT__lut__v34;
    }
    if (__Vdlyvset__rom_ascii__DOT__lut__v35) {
        vlSelf->rom_ascii__DOT__lut[0x23U] = __Vdlyvval__rom_ascii__DOT__lut__v35;
    }
    if (__Vdlyvset__rom_ascii__DOT__lut__v36) {
        vlSelf->rom_ascii__DOT__lut[0U] = 0x4530U;
        vlSelf->rom_ascii__DOT__lut[1U] = 0x1631U;
        vlSelf->rom_ascii__DOT__lut[2U] = 0x1e32U;
        vlSelf->rom_ascii__DOT__lut[3U] = 0x2633U;
        vlSelf->rom_ascii__DOT__lut[4U] = 0x2534U;
        vlSelf->rom_ascii__DOT__lut[5U] = 0x2e35U;
        vlSelf->rom_ascii__DOT__lut[6U] = 0x3636U;
        vlSelf->rom_ascii__DOT__lut[7U] = 0x3d37U;
        vlSelf->rom_ascii__DOT__lut[8U] = 0x3e38U;
        vlSelf->rom_ascii__DOT__lut[9U] = 0x4639U;
        vlSelf->rom_ascii__DOT__lut[0xaU] = 0x1c41U;
        vlSelf->rom_ascii__DOT__lut[0xbU] = 0x3242U;
        vlSelf->rom_ascii__DOT__lut[0xcU] = 0x2143U;
        vlSelf->rom_ascii__DOT__lut[0xdU] = 0x2344U;
        vlSelf->rom_ascii__DOT__lut[0xeU] = 0x2445U;
        vlSelf->rom_ascii__DOT__lut[0xfU] = 0x2b46U;
        vlSelf->rom_ascii__DOT__lut[0x10U] = 0x3447U;
        vlSelf->rom_ascii__DOT__lut[0x11U] = 0x3348U;
        vlSelf->rom_ascii__DOT__lut[0x12U] = 0x4349U;
        vlSelf->rom_ascii__DOT__lut[0x13U] = 0x3b4aU;
        vlSelf->rom_ascii__DOT__lut[0x14U] = 0x424bU;
        vlSelf->rom_ascii__DOT__lut[0x15U] = 0x4b4cU;
        vlSelf->rom_ascii__DOT__lut[0x16U] = 0x3a4dU;
        vlSelf->rom_ascii__DOT__lut[0x17U] = 0x314eU;
        vlSelf->rom_ascii__DOT__lut[0x18U] = 0x444fU;
        vlSelf->rom_ascii__DOT__lut[0x19U] = 0x4d50U;
        vlSelf->rom_ascii__DOT__lut[0x1aU] = 0x1551U;
        vlSelf->rom_ascii__DOT__lut[0x1bU] = 0x2d52U;
        vlSelf->rom_ascii__DOT__lut[0x1cU] = 0x1b53U;
        vlSelf->rom_ascii__DOT__lut[0x1dU] = 0x2c54U;
        vlSelf->rom_ascii__DOT__lut[0x1eU] = 0x3c55U;
        vlSelf->rom_ascii__DOT__lut[0x1fU] = 0x2a56U;
        vlSelf->rom_ascii__DOT__lut[0x20U] = 0x1d57U;
        vlSelf->rom_ascii__DOT__lut[0x21U] = 0x2258U;
        vlSelf->rom_ascii__DOT__lut[0x22U] = 0x3559U;
        vlSelf->rom_ascii__DOT__lut[0x23U] = 0x1a5aU;
    }
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
}

VL_INLINE_OPT void Vrom_ascii___024root___combo__TOP__4(Vrom_ascii___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrom_ascii__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrom_ascii___024root___combo__TOP__4\n"); );
    // Body
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

void Vrom_ascii___024root___eval(Vrom_ascii___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrom_ascii__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrom_ascii___024root___eval\n"); );
    // Body
    if ((((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk))) 
         | ((~ (IData)(vlSelf->rst_n)) & (IData)(vlSelf->__Vclklast__TOP__rst_n)))) {
        Vrom_ascii___024root___sequent__TOP__2(vlSelf);
    }
    if (((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk)))) {
        Vrom_ascii___024root___sequent__TOP__3(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
    Vrom_ascii___024root___combo__TOP__4(vlSelf);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    // Final
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
    vlSelf->__Vclklast__TOP__rst_n = vlSelf->rst_n;
}

QData Vrom_ascii___024root___change_request_1(Vrom_ascii___024root* vlSelf);

VL_INLINE_OPT QData Vrom_ascii___024root___change_request(Vrom_ascii___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrom_ascii__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrom_ascii___024root___change_request\n"); );
    // Body
    return (Vrom_ascii___024root___change_request_1(vlSelf));
}

VL_INLINE_OPT QData Vrom_ascii___024root___change_request_1(Vrom_ascii___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrom_ascii__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrom_ascii___024root___change_request_1\n"); );
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void Vrom_ascii___024root___eval_debug_assertions(Vrom_ascii___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrom_ascii__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrom_ascii___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelf->rst_n & 0xfeU))) {
        Verilated::overWidthError("rst_n");}
}
#endif  // VL_DEBUG
