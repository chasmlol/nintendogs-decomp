#include "ctx.h"

extern u8 *data_ov004_02170320;
extern void func_0207c910(int a, int b, void *c, int d);

void func_ov004_0215fec0(void)
{
    u8 pv, g1a, g1b;
    u8 mn1, mx1, mn2, mx2;
    u8 hi2, lo2, hi1, lo1;
    u32 i6, u6, sz, i7;
    u8 *G;
    u8 *P;

    G = data_ov004_02170320;
    g1a = G[0x1a];
    P = *(u8 **)(G + 0x36c4);
    pv = P[0];
    g1b = G[0x1b];
    mx1 = g1a;
    if (pv < g1a) {
        mn1 = pv;
    } else {
        mn1 = g1a;
        mx1 = pv;
    }
    pv = P[1];
    mx2 = g1b;
    if (pv < g1b) {
        mn2 = pv;
    } else {
        mn2 = g1b;
        mx2 = pv;
    }

    lo1 = mn1;
    if (mn1 != 0) {
        lo1 = (u8)(mn1 - 1);
    }
    hi1 = mx1;
    if (mx1 < 0x3f) {
        hi1 = (u8)(mx1 + 1);
    }
    lo2 = mn2;
    if (mn2 != 0) {
        lo2 = (u8)(mn2 - 1);
    }
    hi2 = mx2;
    if (mx2 < 0x2f) {
        hi2 = (u8)(mx2 + 1);
    }

    if (lo1 < 0x20 && hi1 >= 0x20) {
        if (lo2 < 0x20 && hi2 >= 0x20) {
            i6 = (lo2 < 0x20) ? (u32)(lo2 << 6) : (u32)((lo2 - 0x20) * 0x40 + 0x1000);
            u6 = (lo2 < 0x20) ? (u32)(lo2 * 0x40 + 0x800) : (u32)((lo2 - 0x20) * 0x40 + 0x1800);
            sz = (0x20 - lo2) * 0x40;
            func_0207c910(0x19, i6, (u16 *)(P + 0x264) + (i6 >> 1), sz);
            P = *(u8 **)(data_ov004_02170320 + 0x36c4);
            func_0207c910(0x19, u6, (u16 *)(P + 0x264) + (u6 >> 1), sz);
            func_0207c910(0x19, 0x1000, *(u8 **)(data_ov004_02170320 + 0x36c4) + 0x1264, (hi2 - 0x1f) * 0x40);
            func_0207c910(0x19, 0x1800, *(u8 **)(data_ov004_02170320 + 0x36c4) + 0x1a64, (hi2 - 0x1f) * 0x40);
            return;
        }
        i6 = (lo2 < 0x20) ? (u32)(lo2 << 6) : (u32)((lo2 - 0x20) * 0x40 + 0x1000);
        u6 = (lo2 < 0x20) ? (u32)(lo2 * 0x40 + 0x800) : (u32)((lo2 - 0x20) * 0x40 + 0x1800);
        sz = ((hi2 - lo2) + 1) * 0x40;
        func_0207c910(0x19, i6, (u16 *)(P + 0x264) + (i6 >> 1), sz);
        P = *(u8 **)(data_ov004_02170320 + 0x36c4);
        func_0207c910(0x19, u6, (u16 *)(P + 0x264) + (u6 >> 1), sz);
        return;
    }
    if (lo2 < 0x20 && hi2 >= 0x20) {
        i6 = (lo2 < 0x20) ? (u32)(lo2 << 6) : (u32)((lo2 - 0x20) * 0x40 + 0x1000);
        i7 = 0x1000;
        if (lo1 >= 0x20) {
            i6 = (lo2 < 0x20) ? (u32)(lo2 * 0x40 + 0x800) : (u32)((lo2 - 0x20) * 0x40 + 0x1800);
            i7 = 0x1800;
        }
        func_0207c910(0x19, i6, (u16 *)(P + 0x264) + (i6 >> 1), (0x20 - lo2) * 0x40);
        func_0207c910(0x19, i7, (u16 *)(*(u8 **)(data_ov004_02170320 + 0x36c4) + 0x264) + (i7 >> 1), (hi2 - 0x1f) * 0x40);
        return;
    }
    i6 = (lo2 < 0x20) ? (u32)(lo2 << 6) : (u32)((lo2 - 0x20) * 0x40 + 0x1000);
    if (lo1 >= 0x20) {
        i6 = (lo2 < 0x20) ? (u32)(lo2 * 0x40 + 0x800) : (u32)((lo2 - 0x20) * 0x40 + 0x1800);
    }
    func_0207c910(0x19, i6, (u16 *)(P + 0x264) + (i6 >> 1), ((hi2 - lo2) + 1) * 0x40);
}
