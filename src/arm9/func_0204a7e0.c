#include "ctx.h"

#define FX_Mul(a, b) ((s32)(((s64)(a) * (b) + 0x800) >> 12))

s32 func_02036578(u8 *p);
void func_02039448(u8 *p);
void func_02027654(s32 a, u32 *b);
void func_02037450(u8 *p, s32 a);
s32 func_02028124(u8 *p);
void func_0202508c(u8 *p, s32 a, s32 b, s32 c);
s32 func_0203567c(u8 *p);
void func_0203e8cc(u8 *p, s32 a, s32 b);
s32 func_02035164(u8 *p);
void func_02026bac(u8 *p);
void func_02035be8(u8 *p);
s32 func_020289d0(u8 *p, s32 a, s32 b);
s32 func_0203592c(u8 *p, s32 a);
s32 func_020357c8(u8 *p, s32 a);
void func_020362f8(u8 *p);
void func_0202fcc0(u8 *p);

void func_0204a7e0(u8 *param_1)
{
    s32 iVar2;
    s32 iVar4;
    s32 bVar1;
    s32 uVar3;

    iVar2 = func_02036578(param_1);
    if (iVar2 != 0) {
        func_02039448(param_1);
        func_02027654(iVar2, (u32 *)(param_1 + 632));
        func_02037450(param_1, 0x302);
    }
    if (*(s16 *)(param_1 + 0x152) == 0x167) {
        uVar3 = func_02028124(param_1);
        func_0202508c(param_1, 9, 17, FX_Mul(uVar3, -630));
        iVar4 = func_0203567c(param_1);
        if (iVar4 != 0) {
            func_0203e8cc(param_1, 0, 0x111);
            iVar4 = func_02035164(param_1);
            func_0203e8cc(param_1, 3, iVar4);
            func_02026bac(param_1);
        }
    }
    func_02035be8(param_1);
    iVar4 = func_020289d0(param_1, 0, 1);
    if (iVar4 != 0) {
        return;
    }
    if (func_0203592c(param_1, 0) != 0) {
        return;
    }
    iVar4 = func_020357c8(param_1, 0);
    if (iVar4 != 0) {
        return;
    }
    if (iVar2 != 0) {
        s32 vv = *(s16 *)(iVar2 + 0xea);
        if (vv < 0x289) {
            goto zz;
        }
        if (vv <= 0x28a) {
            bVar1 = 1;
            goto tt;
        }
    zz:
        bVar1 = 0;
    tt:
        if (bVar1 != 0) {
            return;
        }
    }
    func_020362f8(param_1);
    func_0202fcc0(param_1);
}
