#pragma avoid_byte strb
#include "ctx.h"

typedef struct { u32 w[3]; } T3;

#define FX_Mul(a, b) ((s32)(((s64)(a) * (b) + 0x800) >> 12))

extern u16 *data_0215942c;
extern s32 func_020364cc(u8 *p);
extern void func_02037450(u8 *p, s32 a);
extern s32 func_02036b94(u8 *p, u8 *q);
extern s32 func_02028124(u8 *p);
extern void func_0203e8cc(u8 *p, s32 a, s32 b);
extern s32 func_020289d0(u8 *p, s32 a, s32 b);
extern s32 func_0203592c(u8 *p, s32 a);
extern s32 func_02026c40(u8 *p, s32 a);
extern void func_0203e908(u8 *p, s32 a);
extern void func_020362f8(u8 *p);
extern s32 func_0202fd7c(u8 *p);
extern s32 func_020c1f34(s32 a);
extern s32 func_020365c8(u8 *p, s32 a);
extern s32 func_ov003_0219a368(u8 *p);

static inline void SwapB(u32 v, vu8 *p)
{
    *(u8 *)(p) = (u8)(v);
}

s32 func_ov003_021924b0(u8 *param_1)
{
    s32 iVar3;
    u8 *pp;
    s32 r4;
    s32 r6;
    s32 fx;
    s32 fx2;
    s32 r;
    s32 s16v;
    u32 x;

    pp = param_1;
    iVar3 = func_020364cc(pp);
    if (iVar3 == 0) goto L174;
    *(T3 *)(pp + 620) = *(T3 *)(iVar3 + 188);
    *(T3 *)(pp + 632) = *(T3 *)(pp + 620);
    func_02037450(pp, 768);
    r4 = func_02036b94(pp, pp + 620);
    r6 = *(s32 *)(iVar3 + 0xf8);
    if (*(s32 *)(pp + 0x464) == 0) goto L104;
    fx = FX_Mul(r6 + 16384, func_02028124(pp));
    if (r4 >= fx) goto L174;
    *(s32 *)(pp + 0x464) = 0;
    fx2 = FX_Mul(func_02028124(pp), -76);
    *(s32 *)(pp + 0x240) = fx2;
    func_0203e8cc(pp, 0, 142);
    func_0203e8cc(pp, 1, 0);
    SwapB(2, (vu8 *)(pp + 147));
    SwapB(1, (vu8 *)(pp + 175));
    goto L174;
L104:
    fx = FX_Mul(r6 + 36864, func_02028124(pp));
    if (r4 <= fx) goto L174;
    *(s32 *)(pp + 0x464) = 1;
    *(s32 *)(pp + 0x240) = 0;
    func_0203e8cc(pp, 0, 0);
    func_0203e8cc(pp, 1, 1);
    SwapB(0, (vu8 *)(pp + 147));
    SwapB(2, (vu8 *)(pp + 175));
L174:
    r4 = func_020364cc(pp);
    r = func_020289d0(pp, 0, 1);
    if (r != 0) return r;
    r = func_0203592c(pp, r4);
    if (r != 0) return r;
    *(vu32 *)(pp + 0x488) = *(vu32 *)(pp + 0x488) + 1;
    if (*data_0215942c == 0x8003) {
        r = 0;
        goto CHK;
    }
    s16v = *(s16 *)(pp + 250);
    if (s16v == 35) {
        r = 0;
        goto CHK;
    }
    if (r4 == 0) goto L23c;
    s16v = *(s16 *)(r4 + 144);
    if (s16v == 0) goto F1;
    if (s16v != 2) goto F2;
F1:
    fx = 1;
    goto JF;
F2:
    s16v = *(s16 *)(r4 + 148);
    if (s16v != 53) goto JF0;
    if (func_020c1f34(r4) == 0) {
        fx = 1;
        goto JF;
    }
JF0:
    fx = 0;
JF:
    if (fx == 0) goto L258;
L23c:
    func_0203e908(pp, 93);
    func_020362f8(pp);
    r = 1;
    goto CHK;
L258:
    if (func_02026c40(pp, r4) == 0) {
        r = 0;
        goto CHK;
    }
    func_0202fd7c(pp);
    func_020362f8(pp);
    r = 1;
CHK:
    if (r != 0) return r;
    if (r4 == 0) goto L2bc;
    if (func_020365c8(pp, r4) != 0) goto L2bc;
    return func_ov003_0219a368(pp);
L2bc:
    x = *(u16 *)(pp + 252);
    if (x <= 100) return x;
    return func_ov003_0219a368(pp);
}
