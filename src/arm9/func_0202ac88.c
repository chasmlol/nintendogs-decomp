#pragma avoid_byte strb
#pragma opt_propagation off
#pragma opt_common_subs off
#include "ctx.h"

extern u8 data_02159178[];
extern u8 data_0215942c[];
extern u8 data_0214f464[];
extern u8 data_02159444[];
extern u8 data_02152cd8[];
extern u8 data_0213cde7[];
extern u8 data_02159468[];

extern s32 func_020f5220(u8 *p);
extern void func_020f3bdc(s32 a);
extern void func_0209f59c(s32 a);
extern s32 func_020f523c(void);
extern void func_ov004_0216cda4(u8 *p, s32 a);
extern s32 func_0202b2f4(u8 *p);
extern s32 func_020c1f34(u8 *p);
extern s32 func_02009d34(s32 *a, void *b, void *c);
extern void func_ov004_0216c504(u8 *p);
extern s32 func_02009eb8(u8 *a, s32 *b);
extern s32 func_02009f38(s32 *a, s32 *b);
extern void func_02009230(u8 *p);

typedef struct { u32 w[3]; } T12;
#define FX_Mul(a, b) ((s32)(((s64)(a) * (b) + 0x800) >> 12))


void func_0202ac88(u8 *pa)
{
    u8 *param_1 = pa;
    s32 st[9];
    s32 bv;
    s32 v, t, r5, c, sel;
    s32 k4cb;
    u32 q;
    s32 m;
    u8 *P1;
    u8 *Q;
    u8 *P;
    u32 newL;

    if (func_020f5220(param_1) != 0) {
        func_020f3bdc(0);
    }
    t = *(s32 *)(data_02159178 + 8);
    if (t == 3) goto c38;
    if (t != 4) goto c40;
c38:
    func_0209f59c(1);
c40:
    if (func_020f523c() != 0 && *(u16 *)*(u8 **)data_0215942c == 9) {
        func_ov004_0216cda4(param_1, 0);
        v = *(s16 *)(param_1 + 240);
        if (v == 77) goto B88;
        if (v == 78) goto B88;
        if (v != 79) goto Lb4;
B88:
        *(vu8 *)(param_1 + 168) = 0;
        *(u16 *)(param_1 + 256 + 18) = 0;
        *(s16 *)(param_1 + 240) = 111;
        *(vu8 *)(param_1 + 165) = 0;
        *(vu8 *)(param_1 + 163) = 0;
    }
Lb4:
    if (func_0202b2f4(param_1) == 0) goto L5b0;

    *(T12 *)st = *(T12 *)(param_1 + 0x490);
    if (*(u16 *)*(u8 **)data_0215942c != 12) goto L2c0;
    if (*(s8 *)(*(u8 **)data_0214f464 + *(s8 *)(param_1 + 0x88) + 0x1c) != 0) goto L2c0;

    v = *(s16 *)(param_1 + 0xea);
    if (v > 0x4a4) goto S120;
    if (v != 0x4a4) goto L1b8;
    goto L148;
S120:
    k4cb = 0x4cb;
    t = v - k4cb;
    switch (t) {
    case 0: case 1: goto L1a0;
    case 2: goto L1ac;
    case 3: case 4: goto L168;
    default: goto L1b8;
    }

L148:
    t = *(s32 *)(*(u8 **)data_02159444 + 0x98);
    if (t < -30) {
        *(s16 *)(param_1 + 0xea) = 0x49f;
    }
    goto L5a8;

L168:
    st[3] = *(s32 *)(data_02152cd8 + 0x4c);
    st[4] = *(s32 *)(data_02152cd8 + 0x58);
    st[5] = *(s32 *)(data_02152cd8 + 0x64);
    if (func_02009f38(st, st + 3) != 0) {
        *(s16 *)(param_1 + 0xea) = 0x49e;
    }
    goto L5a8;

L1a0:
    *(s16 *)(param_1 + 0xea) = 0x4a1;
    goto L5a8;

L1ac:
    *(s16 *)(param_1 + 0xea) = 0x4a3;
    goto L5a8;

L1b8:
    v = *(s16 *)(param_1 + 0xea);
    c = 0;
    if (v >= 1152) { c = (v <= 0x4d2) ? 1 : c; }
    if (c != 0) goto L5a8;
    c = *(s8 *)(data_0213cde7 + (*(s16 *)(param_1 + 0x152)) * 8);
    switch (c) {
    case 0: goto L25c;
    case 1: case 2: case 3: goto L27c;
    case 4: case 5: case 6: goto L29c;
    case 7: case 9: case 11: goto L238;
    case 8: case 10: case 12: goto L244;
    case 13: case 14: goto L250;
    default: goto L29c;
    }

L238:
    *(s16 *)(param_1 + 0xea) = 0x497;
    goto L5a8;

L244:
    *(s16 *)(param_1 + 0xea) = 0x498;
    goto L5a8;

L250:
    *(s16 *)(param_1 + 0xea) = 0x499;
    goto L5a8;

L25c:
    *(s16 *)(param_1 + 0xea) = (s16)(func_02009d34(st, (s32 *)(param_1 + 420), (s32 *)(param_1 + 396)) + 0x48f);
    goto L5a8;

L27c:
    *(s16 *)(param_1 + 0xea) = (s16)(func_02009d34(st, (s32 *)(param_1 + 420), (s32 *)(param_1 + 396)) + 0x493);
    goto L5a8;

L29c:
    if (func_02009eb8(param_1 + 396, st) != 0) {
        *(s16 *)(param_1 + 0xea) = 0x497;
    } else {
        *(s16 *)(param_1 + 0xea) = 0x498;
    }
    goto L5a8;

L2c0:
    P1 = *(u8 **)data_02159444;
    t = *(s16 *)(P1 + 0x7a);
    if (t < 0) goto L2e8;
    Q = *(u8 **)data_02159468;
    if (*(s16 *)(Q + 0x20) > t) goto L2f0;
L2e8:
    r5 = 0;
    goto L2f8;
L2f0:
    r5 = *(s32 *)(Q + t * 4 + 4);
L2f8:
    if (r5 != 0) {
        *(T12 *)(st + 6) = *(T12 *)(r5 + 0xbc);
    }
    if (r5 == 0) goto L38c;
    if (*(s16 *)(r5 + 0x90) == 0 || *(s16 *)(r5 + 0x90) == 2) {
        bv = 1;
    } else if (*(s16 *)(r5 + 0x94) == 0x35 && func_020c1f34((u8 *)r5) == 0) {
        bv = 1;
    } else {
        bv = 0;
    }
    if (bv != 0) goto L38c;
    if (*(s16 *)(r5 + 0x96) != 19) goto L38c;
    if (st[6] >= 24576) goto L38c;
    if (st[6] > -40960) {
        *(s16 *)(param_1 + 0xea) = 0x4be;
        goto L5a8;
    }

L38c:
    c = *(s8 *)(data_0213cde7 + (*(s16 *)(param_1 + 0x152)) * 8);
    switch (c) {
    case 0: goto L3bc;
    case 1: case 2: case 3: goto L568;
    default: goto L588;
    }

L3bc:
    v = *(s16 *)(param_1 + 0xea);
    if (v != 0x4b8) goto L508;
    P1 = *(u8 **)data_02159444;
    if (*(s32 *)(P1 + 0x98) <= 10) goto L4f0;
    t = *(s32 *)(*(u8 **)(param_1 + 0x9e8) + 0xc);
    if (t < 0xccd) m = 0;
    else if (t <= 0x119a) m = 1;
    else m = 2;
    if (m == 0) goto M0;
    if (m == 1) goto M1;
    if (m != 2) goto L4b8;
    *(s32 *)(param_1 + 0x484) = FX_Mul(t, 0x3cf);
    goto L4b8;
M1:
    *(s32 *)(param_1 + 0x484) = FX_Mul(t, 0x579);
    goto L4b8;
M0:
    *(s32 *)(param_1 + 0x484) = FX_Mul(t, 0x880);
L4b8:
    P = *(u8 **)data_0214f464;
    newL = *(u32 *)P * 0x10dcd + 1;
    *(u32 *)P = newL;
    q = (newL << 16) >> 30;
    q = q << 16;
    *(s16 *)(param_1 + 0xea) = (s16)(0x4b9 + (q >> 16));
    goto L5a8;

L4f0:
    t = *(s32 *)(P1 + 0x94);
    if (t < -12) {
        *(s16 *)(param_1 + 0xea) = 0x492;
    }
    goto L5a8;

L508:
    sel = func_02009d34(st, (s32 *)(param_1 + 420), (s32 *)(param_1 + 396));
    P1 = *(u8 **)data_02159444;
    if (*(s32 *)(P1 + 0x94) > 12) {
        v = *(s16 *)(param_1 + 0xea);
        if (v < 1152) goto L544;
        if (v <= 0x48b) goto L558;
        goto L544;
    }
    goto L558;

L544:
    func_ov004_0216c504(param_1);
    *(s16 *)(param_1 + 0xea) = 0x4b8;
    goto L5a8;

L558:
    *(s16 *)(param_1 + 0xea) = (s16)(sel + 0x48f);
    goto L5a8;

L568:
    sel = func_02009d34(st, (s32 *)(param_1 + 420), (s32 *)(param_1 + 396));
    *(s16 *)(param_1 + 0xea) = (s16)(sel + 0x493);
    goto L5a8;

L588:
    if (func_02009eb8(param_1 + 396, st) != 0) {
        *(s16 *)(param_1 + 0xea) = 0x497;
    } else {
        *(s16 *)(param_1 + 0xea) = 0x498;
    }

L5a8:
    func_02009230(param_1);
L5b0:
    *(s16 *)(param_1 + 0xfa) = 0;
    return;
}
