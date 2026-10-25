#include "ctx.h"

extern s32 func_02036578(int a);
extern void func_02039448(int a);
extern void func_02027654(int a, int b);
extern void func_02037450(int a, int b);
extern u32 func_02028124(int a);
extern void func_0202508c(int a, int b, int c, u32 d);
extern s32 func_0203567c(int a);
extern void func_0203e8cc(int a, int b, int c);
extern void func_02026bac(int a);
extern void func_02026c24(int a);
extern void func_02035be8(int a);
extern s32 func_020289d0(int a, int b, int c);
extern s32 func_0203592c(int a, int b);
extern s32 func_020357c8(int a, int b);
extern void func_020362f8(int a);
extern void func_0202fcc0(int a);
extern void func_02053474(int a);

void func_0204b6e8(int param_1)
{
    int iVar2;
    int iVar4;
    u32 uVar3;
    int bVar1;

    iVar2 = func_02036578(param_1);
    if (iVar2 != 0) {
        func_02039448(param_1);
        func_02027654(iVar2, param_1 + 0x278);
        func_02037450(param_1, 0x302);
    }
    switch (*(s16 *)(param_1 + 0x152)) {
    case 0x167:
        uVar3 = func_02028124(param_1);
        func_0202508c(param_1, 9, 0x11, (u32)((((s64)(s32)uVar3) * -630 + 0x800) >> 12));
        iVar4 = func_0203567c(param_1);
        if (iVar4 != 0) {
            func_0203e8cc(param_1, 0, 0x17e);
            func_02026bac(param_1);
        }
        break;
    case 0x17e:
        iVar4 = func_0203567c(param_1);
        if (iVar4 != 0) {
            func_0203e8cc(param_1, 0, 0x17f);
            func_02026c24(param_1);
        }
        break;
    default:
        break;
    }
    func_02035be8(param_1);
    iVar4 = func_020289d0(param_1, 0, 1);
    if (iVar4 != 0) {
        bVar1 = 1;
        goto end;
    }
    if (func_0203592c(param_1, 0) != 0) {
        bVar1 = 1;
        goto end;
    }
    if (func_020357c8(param_1, 0) != 0) {
        bVar1 = 1;
        goto end;
    }
    if (iVar2 != 0) {
        bVar1 = 0;
        goto end;
    }
    func_0202fcc0(param_1);
    func_020362f8(param_1);
    bVar1 = 1;
end:
    if (!bVar1) {
        func_02053474(param_1);
    }
}
