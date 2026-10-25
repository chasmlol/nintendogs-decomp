#include "ctx.h"
extern u8 data_02133d64[];
extern u8 data_02133ab0[];
extern s32 func_ov004_0216e508(s32 a);
extern s32 func_020ec43c(s32 a);
extern u16 func_02028118(s32 a);
extern s32 func_02028130(s32 a);
extern void func_0202762c(s32 a, u32 *b);
extern void func_02027654(s32 a, u32 *b);
extern void func_02027178(s32 a, u8 *b, s32 c);
extern void func_01ffe474(u8 *p);

static inline u32 FXm(s32 k, s32 v)
{
    s64 lv = (s64)k * (s64)v + 0x800;
    return (u32)(lv >> 12);
}

void func_ov004_0216e18c(u8 *param_1)
{
    s32 e;
    u32 A[12];
    u32 kind;
    u8 *T;
    u16 uVar3;
    s32 iVar5;
    u32 uVar9;
    s32 m1;
    s32 m2;
    s32 m3;
    u8 *q;
    u8 *r;
    s32 t;

    e = func_ov004_0216e508(*(s16 *)(param_1 + 0x88));
    if (e == 0) {
        goto fail;
    }
    if (func_020ec43c(e) != -1) {
        goto fail;
    }
    T = data_02133d64;
    kind = *(u16 *)(T + 2);
    uVar3 = func_02028118(e);
    iVar5 = func_02028130(e);
    if (kind == 11) {
        func_0202762c(e, A);
    }
    if (kind == 12) {
        func_02027654(e, A);
    }
    func_02027178(e, param_1 + 0x3c, kind);
    {
        u32 c0;
        u32 c1;
        u32 c2;
        c2 = *(u32 *)(param_1 + 0x44);
        c1 = *(u32 *)(param_1 + 0x40);
        c0 = *(u32 *)(param_1 + 0x3c);
        A[3] = c0;
        A[4] = c1;
        A[5] = c2;
        c2 = *(u32 *)(param_1 + 0x50);
        c1 = *(u32 *)(param_1 + 0x4c);
        c0 = *(u32 *)(param_1 + 0x48);
        A[6] = c0;
        A[7] = c1;
        A[8] = c2;
        c2 = *(u32 *)(param_1 + 0x5c);
        c1 = *(u32 *)(param_1 + 0x58);
        c0 = *(u32 *)(param_1 + 0x54);
        A[9] = c0;
        A[10] = c1;
        A[11] = c2;
    }
    uVar9 = *(u8 *)(T + 1);
    if (uVar9 == 0) {
        *(u32 *)(param_1 + 0x24) = iVar5;
        *(u32 *)(param_1 + 0x28) = iVar5;
        *(u32 *)(param_1 + 0x2c) = iVar5;
    } else {
        q = data_02133ab0 + uVar9 * 138 + uVar3 * 6;
        *(u32 *)(param_1 + 0x24) = FXm(*(s16 *)q, iVar5);
        *(u32 *)(param_1 + 0x28) = FXm(*(s16 *)(q + 2), iVar5);
        *(u32 *)(param_1 + 0x2c) = FXm(*(s16 *)(q + 4), iVar5);
    }
    r = T + uVar3 * 6;
    m1 = *(s16 *)(r + 4);
    A[3] = FXm(A[3], m1);
    A[4] = FXm(A[4], m1);
    A[5] = FXm(A[5], m1);
    m2 = *(s16 *)(r + 6);
    A[6] = FXm(A[6], m2);
    A[7] = FXm(A[7], m2);
    A[8] = FXm(A[8], m2);
    m3 = *(s16 *)(r + 8);
    A[9] = FXm(A[9], m3);
    A[10] = FXm(A[10], m3);
    A[11] = FXm(A[11], m3);
    t = (s32)(A[3] + A[6] + A[9]);
    *(u32 *)(param_1 + 0x30) = A[0] + FXm(iVar5, t);
    t = (s32)(A[4] + A[7] + A[10]);
    *(u32 *)(param_1 + 0x34) = A[1] + FXm(iVar5, t);
    t = (s32)(A[5] + A[8] + A[11]);
    *(u32 *)(param_1 + 0x38) = A[2] + FXm(iVar5, t);
    goto done;
fail:
    *(u16 *)(param_1 + 0x20) = (u16)(*(u16 *)(param_1 + 0x20) | 1);
done:
    func_01ffe474(param_1);
}
