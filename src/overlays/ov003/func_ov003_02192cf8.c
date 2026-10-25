#include "ctx.h"

#define FX_Mul(a, b) ((s32)(((s64)(a) * (b) + 0x800) >> 12))

typedef struct { u32 w[3]; } T3;

extern u8 *data_0215942c;
extern s32 func_02028124(u8 *p);
extern void func_02024f18(u8 *p, u32 a, s32 b);
extern u8 *func_020364cc(u8 *p);
extern s32 func_020c1f34(u8 *p);
extern void func_02039448(u8 *p);
extern void func_02037450(u8 *p, u32 a);
extern s32 func_0203567c(u8 *p);
extern s32 func_0203592c(u8 *p, u8 *q);
extern s32 func_02026c40(u8 *p, u8 *q);
extern void func_0202fd7c(u8 *p);
extern void func_020362f8(u8 *p);
extern void func_0203e908(u8 *p, u32 a);
extern void func_ov003_0219a368(u8 *p);

void func_ov003_02192cf8(u8 *p)
{
    u8 *q;
    s32 g;
    s32 b;
    s32 res;

    func_02024f18(p, 1, FX_Mul(func_02028124(p), 0x1eb));
    q = func_020364cc(p);
    if (q != 0) {
        if (*(s16 *)(q + 0x90) == 0 || *(s16 *)(q + 0x90) == 2) {
            b = 1;
        } else if (*(s16 *)(q + 0x94) == 53 && func_020c1f34(q) == 0) {
            b = 1;
        } else {
            b = 0;
        }
        if (b == 0) {
            func_02039448(p);
            *(T3 *)(p + 0x278) = *(T3 *)(q + 0xbc);
            func_02037450(p, 0x300);
        }
    }
    g = func_0203567c(p);
    if (g == 0) {
        return;
    }
    if (func_0203592c(p, q) != 0) {
        return;
    }
    *(u32 *)(p + 0x488) = *(u32 *)(p + 0x488) + 1;
    if (*(u16 *)data_0215942c == 0x8003) {
        res = 0;
    } else if (*(s16 *)(p + 0xfa) == 0x23) {
        res = 0;
    } else {
        if (q == 0) {
            goto act;
        }
        if (*(s16 *)(q + 0x90) == 0 || *(s16 *)(q + 0x90) == 2) {
            b = 1;
        } else if (*(s16 *)(q + 0x94) == 53 && func_020c1f34(q) == 0) {
            b = 1;
        } else {
            b = 0;
        }
        if (b == 0) {
            goto l198;
        }
    act:
        func_0203e908(p, 93);
        func_020362f8(p);
        res = 1;
        goto done;
    l198:
        if (func_02026c40(p, q) == 0) {
            res = 0;
        } else {
            func_0202fd7c(p);
            func_020362f8(p);
            res = 1;
        }
    }
done:
    if (res) {
        return;
    }
    func_ov003_0219a368(p);
}
