#pragma avoid_byte strb
#include "ctx.h"
#pragma opt_strength_reduction off

extern u8 *data_ov004_02170320;
extern s8 data_ov004_0216fd3c[5][2];
u8 *func_02069d98(void);

void func_ov004_02161a7c(void)
{
    s32 cVar11;
    s32 idx;
    u32 a;
    u32 b;
    s32 x;
    s32 y;
    u32 ux;
    u32 uy;
    s32 local_2c;
    u8 *G;
    u8 *T;

    cVar11 = -1;
    G = data_ov004_02170320;
    T = *(u8 **)(G + 0x36c4);
    idx = *(s32 *)(T + 8);
    a = *(u8 *)(T + idx * 2 + 10);
    b = *(u8 *)(T + idx * 2 + 11);
    *(s32 *)(T + 8) = idx - 1;
    {
        s32 i = 0;
        u8 *G2;
        u8 *T2;
        s32 w;
        s32 hi;
        s32 q;
        do {
            x = a + data_ov004_0216fd3c[i][0];
            y = b + data_ov004_0216fd3c[i][1];
            if (x >= 0 && x < 64 && y >= 0 && y < 48) {
                ux = x & 0xff;
                if (ux < 32) {
                    uy = y & 0xff;
                    if (uy < 32) {
                        q = (ux + uy * 32) * 2;
                    } else {
                        q = (ux + (uy - 32) * 32) * 2 + 0x1000;
                    }
                } else {
                    uy = y & 0xff;
                    if (uy < 32) {
                        q = ((ux - 32) + uy * 32) * 2 + 0x800;
                    } else {
                        q = ((ux - 32) + (uy - 32) * 32) * 2 + 0x1800;
                    }
                }
                G2 = data_ov004_02170320;
                T2 = *(u8 **)(G2 + 0x36c4);
                w = *(s32 *)(T2 + 8);
                hi = (u32)(q >> 1);
                *(u16 *)(T2 + hi * 2 + 0x264) = *(u16 *)(G2 + w * 10 + i * 2 + 0x28);
            }
            i++;
        } while (i < 5);
    }

    {
        s32 q;
        s32 q00;
        s32 q01;
        s32 q10;
        s32 q11;
        s32 i = 1;
        u8 *G3;
        u8 *base;
        u32 val;
        u32 cand;
        u32 vm;
        u32 cm;
        q00 = (a + b * 32) * 2;
        q01 = (a + (b - 32) * 32) * 2 + 0x1000;
        q10 = ((a - 32) + b * 32) * 2 + 0x800;
        q11 = ((a - 32) + (b - 32) * 32) * 2 + 0x1800;
        local_2c = 5;
        do {
            if (a < 32) {
                if (b < 32) {
                    q = q00;
                } else {
                    q = q01;
                }
            } else {
                if (b < 32) {
                    q = q10;
                } else {
                    q = q11;
                }
            }
            base = func_02069d98();
            val = *(vu16 *)(base + q);
            G3 = data_ov004_02170320;
            cand = *(u16 *)(G3 + i * 2 + 0xf7a);
            vm = val & 0x3ff;
            cm = cand & 0x3ff;
            if (cm == vm) {
                cVar11 = (s8)i;
                i = local_2c;
            }
            i++;
        } while (i < 5);
    }

    if (cVar11 == -1) {
        return;
    }
    {
        s32 i = 0;
        u8 *G4;
        u8 *P3;
        do {
            G4 = data_ov004_02170320;
            P3 = G4 + i * 3;
            if (cVar11 == *(s8 *)(P3 + 0x12dc) && a == *(s8 *)(P3 + 0x12da) && b == *(s8 *)(P3 + 0x12db)) {
                *(s8 *)(P3 + 0x12dc) = -1;
                i = 5;
            }
            i++;
        } while (i < 5);
    }
}
