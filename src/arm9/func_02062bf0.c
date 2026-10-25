#pragma avoid_byte all
#include "ctx.h"
#pragma opt_propagation off

typedef struct { u32 lo; u32 hi; } D2;

extern s32 func_0205c7f0(s32 a, s32 b, u32 c, u32 d);
extern u64 func_0205b8c0(s32 a, s32 b, u32 c, u32 d);
extern u64 func_02062700(u32 lo, u32 hi, s32 *e);
extern s32 func_02063a5c(u32 a, volatile u64 *b);
extern void func_02062f38(u8 *a, s32 b);
extern u64 func_020627c0(u32 lo, u32 hi, s32 b);
extern u64 func_0205b04c(u32 lo, u32 hi);
extern void func_020636d0(u8 *a, u32 lo, u32 hi);
extern void func_02063454(u32 *a, u8 *b, u8 *c);

static inline void PutB(u8 *p, u32 b)
{
    *p = (u8)b;
}

static inline s32 Cls(u32 lo, u32 hi)
{
    if ((hi & 0x7ff00000) == 0) {
        goto zero;
    }
    if ((hi & 0x7ff00000) != 0x7ff00000) {
        goto four;
    }
    if ((hi & 0xfffff) != 0 || lo != 0) {
        return 1;
    }
    return 2;
zero:
    if ((hi & 0xfffff) != 0 || lo != 0) {
        return 5;
    }
    return 3;
four:
    return 4;
}

void func_02062bf0(u32 *param_1, D2 x)
{
    u32 t;
    s32 e;
    volatile D2 c1;
    D2 c2;
    D2 w;
    volatile D2 *pw;
    u8 arrA[38];
    u8 arrB[38];
    s32 n;
    u64 r;
    u64 m;
    u32 mh;
    u32 ml;
    u32 wl;
    u8 sign;
    u32 lo;
    u32 hi;
    s32 cls;

    sign = (x.hi & 0x80000000) != 0;
    lo = x.lo;
    hi = *(vu32 *)&x.hi;
    if (func_0205c7f0(0, 0, lo, hi)) {
        PutB((u8 *)param_1, sign);
        *(u16 *)((u8 *)param_1 + 2) = 0;
        PutB((u8 *)param_1 + 4, 1);
        PutB((u8 *)param_1 + 5, 0);
        return;
    }
    c1.lo = lo;
    c1.hi = hi;
    cls = Cls(lo, hi);
    if (cls <= 2) {
        PutB((u8 *)param_1, sign);
        *(u16 *)((u8 *)param_1 + 2) = 0;
        PutB((u8 *)param_1 + 4, 1);
        c2 = x;
        PutB((u8 *)param_1 + 5, (Cls(c2.lo, c2.hi) == 1) ? 0x4e : 0x49);
        return;
    }
    if (sign != 0) {
        r = func_0205b8c0(0, 0, lo, hi);
        x.lo = (u32)r;
        x.hi = (u32)(r >> 32);
    }
    m = func_02062700(x.lo, x.hi, &e);
    mh = (u32)(m >> 32);
    ml = (u32)m;
    pw = (volatile D2 *)&w;
    w.lo = ml;
    w.hi = mh;
    wl = pw->lo;
    if (wl != 0) {
        n = func_02063a5c(wl, (volatile u64 *)pw);
    } else {
        n = func_02063a5c(pw->hi | 0x100000, (volatile u64 *)pw) + 32;
    }
    t = 53 - n;
    func_02062f38(arrB, e - t);
    r = func_020627c0(ml, mh, t);
    r = func_0205b04c((u32)r, (u32)(r >> 32));
    func_020636d0(arrA, (u32)r, (u32)(r >> 32));
    func_02063454(param_1, arrA, arrB);
    PutB((u8 *)param_1, sign);
}
