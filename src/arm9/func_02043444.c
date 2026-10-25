#pragma avoid_byte strb
#include "ctx.h"

extern u8 data_0215942c[];
extern u8 data_0214f464[];

static inline void SwapByte(u32 v, vu8 *p)
{
    *(u8 *)(p) = (u8)(v);
}

void func_02043444(void)
{
    s32 ok;
    s32 px;
    s32 pi;
    u8 *pobj;
    s32 psv;
    s32 psel;
    s32 pa;
    s32 a;
    s32 x;
    s32 i;
    u8 *tab;
    s32 sv;
    s32 x2;
    u8 *obj;
    s32 zn;
    s32 one;
    s32 za;
    s32 zs5;
    s32 zs4;
    s32 pzn;
    s32 pone;
    s32 pza;
    s32 pz5;
    s32 pz4;
    s32 zst;
    s32 zs3;
    s32 zs2;
    s32 zs1;
    s32 c119;

    if (*(u16 *)*(u8 **)data_0215942c != 0) {
        goto END;
    }
    i = 0;
    tab = *(u8 **)data_0214f464;
    zn = 0;
    za = 0;
    zs1 = 0;
    zs2 = 0;
    zs3 = 0;
    zs4 = 0;
    zs5 = 0;
    one = 1;
P1:
    if (i < 0) {
        goto P1n;
    }
    if (i < 3) {
        goto P1ld;
    }
P1n:
    obj = (u8 *)zn;
    goto P1c;
P1ld:
    obj = *(u8 **)(tab + i * 4 + 0x54);
P1c:
    if (obj == 0) {
        goto P1next;
    }
    sv = *(s16 *)(obj + 0xf0);
    if (sv < 4) {
        goto P1a;
    }
    if (sv <= 8) {
        a = one;
        goto P1c8;
    }
P1a:
    if (sv == 87) {
        a = one;
        goto P1c8;
    }
    x = *(s16 *)(obj + 0xea);
    if (x < 15) {
        goto P1b;
    }
    if (x <= 75) {
        a = one;
        goto P1c8;
    }
P1b:
    if (x < 0x119) {
        goto P1c4;
    }
    if (x <= 316) {
        a = one;
        goto P1c8;
    }
P1c4:
    a = za;
P1c8:
    if (a != 0) {
        x2 = zs5;
        goto P1sel;
    }
    x2 = *(s16 *)(obj + 0xea);
    if (x2 < 0x478) {
        goto P1f4;
    }
    if (x2 <= 0x47e) {
        x2 = zs4;
        goto P1sel;
    }
P1f4:
    if (x2 < 0x4c7) {
        goto P1h;
    }
    if (x2 <= 0x4ca) {
        x2 = zs3;
        goto P1sel;
    }
P1h:
    if (sv == 83) {
        x2 = zs2;
        goto P1sel;
    }
    if (sv == 84) {
        x2 = zs1;
    } else {
        x2 = one;
    }
P1sel:
    if (x2 == 0) {
        ok = 0;
        goto DONE1;
    }
P1next:
    i = (s8)(i + 1);
    if (i < 3) {
        goto P1;
    }
    ok = 1;
DONE1:
    if (ok == 0) {
        goto END;
    }
    pi = 0;
    pzn = 0;
    pza = 0;
    zs1 = 0;
    zs2 = 0;
    zs3 = 0;
    pz4 = 0;
    pz5 = 0;
    zst = 0;
P2:
    pone = 1;
P2X:
    if (pi < 0) {
        goto P2n;
    }
    if (pi < 3) {
        goto P2ld;
    }
P2n:
    pobj = (u8 *)pzn;
    goto P2c;
P2ld:
    pobj = *(u8 **)(*(u8 **)data_0214f464 + pi * 4 + 0x54);
P2c:
    if (pobj == 0) {
        goto P2next;
    }
    SwapByte(1, (vu8 *)(pobj + 0xaa));
    SwapByte(1, (vu8 *)(pobj + 0xd2));
    *(u16 *)(*(u8 **)(pobj + 0x9e8) + 0x24) = 0x2710;
    psv = *(s16 *)(pobj + 0xf0);
    if (psv < 4) {
        goto P2a;
    }
    if (psv <= 8) {
        pa = pone;
        goto P2c8;
    }
P2a:
    if (psv == 87) {
        pa = pone;
        goto P2c8;
    }
    px = *(s16 *)(pobj + 0xea);
    if (px < 15) {
        goto P2b;
    }
    if (px <= 75) {
        pa = pone;
        goto P2c8;
    }
P2b:
    if (px < 0x119) {
        goto P2c4;
    }
    if (px <= 316) {
        pa = pone;
        goto P2c8;
    }
P2c4:
    pa = pza;
P2c8:
    if (pa != 0) {
        psel = pz5;
        goto P2sel;
    }
    psel = *(s16 *)(pobj + 0xea);
    if (psel < 0x478) {
        goto P2f4;
    }
    if (psel <= 0x47e) {
        psel = pz4;
        goto P2sel;
    }
P2f4:
    if (psel < 0x4c7) {
        goto P2h;
    }
    if (psel <= 0x4ca) {
        psel = zs3;
        goto P2sel;
    }
P2h:
    if (psv == 83) {
        psel = zs2;
        goto P2sel;
    }
    if (psv == 84) {
        psel = zs1;
    } else {
        psel = pone;
    }
P2sel:
    if (psel == 0) {
        goto P2next;
    }
    SwapByte(1, (vu8 *)(pobj + 0xa8));
    *(u16 *)(pobj + 0x112) = 0;
    *(u16 *)(pobj + 0xf0) = 1;
    SwapByte(0, (vu8 *)(pobj + 0xa5));
P2next:
    pi = (s8)(pi + 1);
    if (pi < 3) {
        goto P2;
    }
END:
    *(u16 *)(*(u8 **)data_0214f464 + 0x26) = 0;
}
