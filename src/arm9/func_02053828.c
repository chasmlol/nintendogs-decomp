#include "ctx.h"

extern u8 *data_0214f464;
extern s32 func_02027710(u8 *p, u8 *q);
extern void func_0202707c(u8 *p, u32 a);
extern s32 func_02036578(u8 *p);
extern u32 func_020449bc(s32 a);
extern s32 func_0202fd7c(u8 *p);
extern void func_020362ec(u8 *p, s32 a);
extern void func_020362f8(u8 *p);
extern void func_0203e908(u8 *p, s32 a);

s32 func_02053828(u8 *p1, u8 *p2)
{
    s32 i;
    s32 iv;
    u32 u;
    u32 v;
    u16 t;
    u16 idx;
    s32 k;

    if (*(s16 *)(p2 + 0xea) == 0x287) goto A;
    if (*(s16 *)(p2 + 0xea) == 0x288) goto Z1;
    i = func_02027710(p1, p2);
    if (i == -1) goto B;
    if (i == 0) goto C;
    if (i != 1) goto Z0;
    iv = func_02036578(p1);
    u = func_020449bc(iv);
    if (u & 0x20) goto E2;
    return func_0202fd7c(p1);
E2:
    if (iv == 0) return 0;
    v = *(u32 *)data_0214f464 * 0x10dcd + 1;
    *(u32 *)data_0214f464 = v;
    t = (u16)((v << 16) >> 31);
    switch (t) {
    case 0:
        func_0203e908(p1, 0x2cd);
        return 1;
    case 1:
        func_0203e908(p1, 0x2ce);
        return 1;
    }
    return 0;
C:
    func_020362f8(p1);
    return func_0202fd7c(p1);
B:
    v = *(u32 *)data_0214f464 * 0x10dcd + 1;
    *(u32 *)data_0214f464 = v;
    t = (u16)((v << 16) >> 31);
    switch (t) {
    case 0:
        goto P;
    case 1:
        goto Q;
    default:
        goto Z0;
    }
P:
    k = *(s8 *)(p1 + 0x88);
    func_020362ec(p2, (s16)k);
    func_0202707c(p2, 0x11);
    return 1;
Q:
    u = func_020449bc(t);
    if (u & 0x100) goto Q2;
    return func_0202fd7c(p1);
Q2:
    if ((u8)(s8)(*(s8 *)(p1 + 0x8b) - 4) <= 1) goto R0;
    if ((u8)(s8)(*(s8 *)(p2 + 0x8b) - 4) > 1) goto S;
R0:
    return 0;
S:
    k = *(s8 *)(p2 + 0x88);
    func_020362ec(p1, (s16)k);
    func_0203e908(p1, 0x273);
    k = *(s8 *)(p1 + 0x88);
    func_020362ec(p2, (s16)k);
    func_0202707c(p2, 0x16);
    return 1;
A:
    i = func_02027710(p1, p2);
    if (i == -1) goto A_m1;
    if (i == 0) goto A_0;
    if (i != 1) goto Z0;
    v = *(u32 *)data_0214f464 * 0x10dcd + 1;
    *(u32 *)data_0214f464 = v;
    idx = (u16)((v << 16) >> 30);
    switch (idx) {
    case 0:
        iv = func_02036578(p1);
        u = func_020449bc(iv);
        if (u & 4) goto C0b;
        return func_0202fd7c(p1);
    C0b:
        if (iv == 0) return 0;
        func_0203e908(p1, 0x289);
        return 1;
    case 1:
        iv = func_02036578(p1);
        u = func_020449bc(iv);
        if (u & 8) goto C1b;
        return func_0202fd7c(p1);
    C1b:
        if (iv == 0) return 0;
        func_0203e908(p1, 0x28f);
        return 1;
    case 2:
        iv = func_02036578(p1);
        u = func_020449bc(iv);
        if (u & 0x20) goto C2b;
        return func_0202fd7c(p1);
    C2b:
        if (iv == 0) return 0;
        v = *(u32 *)data_0214f464 * 0x10dcd + 1;
        *(u32 *)data_0214f464 = v;
        t = (u16)((v << 16) >> 31);
        switch (t) {
        case 0:
            func_0203e908(p1, 0x2cd);
            return 1;
        case 1:
            func_0203e908(p1, 0x2ce);
            return 1;
        }
        return 0;
    case 3:
        u = func_020449bc(idx);
        if (u & 0x80) goto C3b;
        return func_0202fd7c(p1);
    C3b:
        if ((u8)(s8)(*(s8 *)(p1 + 0x8b) - 4) <= 1) goto R3;
        if ((u8)(s8)(*(s8 *)(p2 + 0x8b) - 4) > 1) goto S3;
    R3:
        return 0;
    S3:
        k = *(s8 *)(p2 + 0x88);
        func_020362ec(p1, (s16)k);
        func_0203e908(p1, 0x26e);
        k = *(s8 *)(p1 + 0x88);
        func_020362ec(p2, (s16)k);
        func_0202707c(p2, 0x17);
        return 1;
    default:
        goto Z0;
    }
A_0:
    func_020362f8(p1);
    return func_0202fd7c(p1);
A_m1:
    k = *(s8 *)(p1 + 0x88);
    func_020362ec(p2, (s16)k);
    func_0202707c(p2, 0x11);
    return 1;
Z1:
    return 0;
Z0:
    return 0;
}
