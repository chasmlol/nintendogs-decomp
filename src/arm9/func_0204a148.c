#include "ctx.h"

extern s32 func_02036578(int a);
extern void func_02039448(int a);
extern void func_02027654(int a, int b);
extern void func_02037450(int a, int b);
extern u32 func_02028124(int a);
extern void func_0202508c(int a, int b, int c, u32 d);
extern s32 func_0203567c(int a);
extern void func_0203e8cc(int a, int b, int c);
extern s32 func_02035164(int a);
extern void func_02026bac(int a);
extern void func_02035be8(int a);
extern s32 func_020289d0(int a, int b, int c);
extern s32 func_0203592c(int a, int b);
extern s32 func_020357c8(int a, int b);
extern void func_020362f8(int a);
extern void func_0202fcc0(int a);

void func_0204a148(int param_1)
{
    int iVar2;
    int iVar4;
    u32 uVar3;
    int bVar1;
    s16 sVar;

    iVar2 = func_02036578(param_1);
    if (iVar2 != 0) {
        func_02039448(param_1);
        func_02027654(iVar2, param_1 + 0x278);
        func_02037450(param_1, 0x302);
    }
    if (*(s16 *)(param_1 + 0x152) == 0x167) {
        uVar3 = func_02028124(param_1);
        func_0202508c(param_1, 9, 0x11, (u32)((((s64)(s32)uVar3) * -630 + 0x800) >> 12));
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
    if (func_020357c8(param_1, 0) != 0) {
        return;
    }
    if (iVar2 != 0) {
        sVar = *(s16 *)(iVar2 + 0xea);
        if (sVar < 0x28f) {
            goto zero;
        }
        if (sVar <= 0x290) {
            bVar1 = 1;
            goto end;
        }
    zero:
        bVar1 = 0;
    end:
        if (bVar1) {
            return;
        }
    }
    func_020362f8(param_1);
    func_0202fcc0(param_1);
}
