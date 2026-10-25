#include "ctx.h"

extern int *func_02036578(int a);
extern void func_02027690(int a, int b);
extern void func_0202767c(int a, int b);
extern void func_02027668(int a, int b);
extern void func_02027618(int a, int b);
extern void func_02027654(int a, int b);
extern void func_01ff832c(s32 a, int b, int c, int d);
extern s32 func_02028130(int a);
extern void func_02037450(int a, int b);
extern void func_02035be8(int a);
extern s32 func_020289d0(int a, int b, int c);
extern s32 func_0203592c(int a, int b);
extern s32 func_020357c8(int a, int b);
extern void func_0202fcc0(int a);
extern s32 func_02027708(int a);
extern s32 func_02032aac(int a, int b);
extern void func_020362ec(int a, s32 b);
extern void func_0202707c(int a, int b);
extern void func_0203e908(int a, int b);
extern void func_020362f8(int a);

#define FXP(a, b) ((s32)((((s64)(s32)(a)) * (s32)(b) + 0x800) >> 12))

void func_02049d38(int param_1)
{
    int iVar4;
    int iVar5;
    s32 local_40[3];
    s32 local_34[3];
    s32 local_28[3];
    s32 fl;
    s32 g1;
    s32 g2;

    iVar4 = (int)func_02036578(param_1);
    if (iVar4 != 0) {
        func_02027690(iVar4, (int)local_40);
        func_0202767c(iVar4, (int)local_34);
        func_02027668(iVar4, (int)local_28);
        func_02027618(iVar4, param_1 + 0x26c);
        func_02027654(iVar4, param_1 + 0x3b4);
        func_01ff832c(0x5000, (int)((u8 *)local_40 + 0), param_1 + 0x2a0, param_1 + 0x278);
        iVar5 = local_34[0] * (local_28[0] - *(s32 *)(param_1 + 0x2a0)) + local_34[2] * (local_28[2] - *(s32 *)(param_1 + 0x2a8));
        if (iVar5 > 0) {
            func_01ff832c(0x4000, (int)((u8 *)local_34 + 0), param_1 + 0x278, param_1 + 0x278);
            fl = 1;
        } else {
            func_01ff832c(-0x4000, (int)((u8 *)local_34 + 0), param_1 + 0x278, param_1 + 0x278);
            fl = 0;
        }
        g1 = FXP(func_02028130(iVar4), -3072);
        g2 = FXP(func_02028130(iVar4), 15360);
        if (fl == 0) {
            *(s32 *)(param_1 + 0x26c) = *(s32 *)(param_1 + 0x26c) + (FXP(local_40[0], g1) + FXP(local_34[0], g2));
            *(s32 *)(param_1 + 0x274) = *(s32 *)(param_1 + 0x274) + (FXP(local_40[2], g1) + FXP(local_34[2], g2));
        } else {
            *(s32 *)(param_1 + 0x26c) = *(s32 *)(param_1 + 0x26c) + (FXP(local_40[0], g1) - FXP(local_34[0], g2));
            *(s32 *)(param_1 + 0x274) = *(s32 *)(param_1 + 0x274) + (FXP(local_40[2], g1) - FXP(local_34[2], g2));
        }
        func_02037450(param_1, 0x300);
    }
    func_02035be8(param_1);
    iVar5 = func_020289d0(param_1, 0, 1);
    if (iVar5 != 0) {
        return;
    }
    if (func_0203592c(param_1, 0) != 0) {
        return;
    }
    if (func_020357c8(param_1, 0) != 0) {
        return;
    }
    if (iVar4 == 0) {
        goto LEND;
    }
    {
        s16 t = *(s16 *)(iVar4 + 234);
        s32 x;
        s32 y;
        s32 yy;
        if (t == 0x2ab) goto X0;
        if (t == 0x2b5) goto X0;
        if (t != 0x2bf) goto Xr;
    X0:
        x = 0;
        goto Xj;
    Xr:
        if (t < 0x2a1) goto Xz;
        if (t <= 716) {
            x = 1;
            goto Xj;
        }
    Xz:
        x = 0;
    Xj:
        if (x != 0) {
            goto LEND;
        }
        if (t < 0x295) goto Yz;
        if (t <= 0x299) {
            y = 1;
            goto Yj;
        }
    Yz:
        y = 0;
    Yj:
        if (y == 0) goto Yc;
        if (func_02036578(iVar4) == (int *)param_1) {
            goto LEND;
        }
    Yc:
        ;
    }
    if (*(u16 *)(param_1 + 252) <= 200) {
        goto LARM;
    }
LEND:
    func_0202fcc0(param_1);
    func_020362f8(param_1);
    return;
LARM:
    iVar5 = func_02027708(iVar4);
    if (func_02032aac(param_1, iVar5) == 0) {
        return;
    }
    {
        s16 t2 = *(s16 *)(iVar4 + 234);
        s32 z2;
        s32 tt;
        if (t2 < 0x295) goto Zz;
        if (t2 <= 0x299) {
            z2 = 1;
            goto Zj;
        }
    Zz:
        z2 = 0;
    Zj:
        if (z2 == 0) {
            tt = *(s8 *)(param_1 + 136);
            func_020362ec(iVar4, (s16)tt);
            func_0202707c(iVar4, 16);
        }
    }
    func_0203e908(param_1, 0x296);
    return;
}
