#include "ctx.h"

extern s32 func_02036578(s32 a);
extern void func_02039448(s32 a);
extern void func_02027654(s32 a, void *b);
extern void func_02037450(s32 a, s32 b);
extern u32 func_02028124(s32 a);
extern void func_0202508c(s32 a, s32 b, s32 c, s32 d);
extern s32 func_0203567c(s32 a);
extern void func_0203e8cc(s32 a, s32 b, s32 c);
extern void func_02026bac(s32 a);
extern void func_02026c24(s32 a);
extern void func_02035be8(s32 a);
extern s32 func_020289d0(s32 a, s32 b, s32 c);
extern s32 func_0203592c(s32 a, s32 b);
extern s32 func_020357c8(s32 a, s32 b);
extern void func_0202fcc0(s32 a);
extern void func_020362f8(s32 a);
extern void func_02054090(s32 a);

void func_0204c1e0(s32 param_1)
{
    s32 bVar1;
    s32 iVar2;
    u32 uVar3;
    s32 iVar4;
    u32 uVar5;
    s32 ok;

    iVar2 = func_02036578(param_1);
    if (iVar2 != 0) {
        func_02039448(param_1);
        func_02027654(iVar2, (void *)(param_1 + 0x278));
        func_02037450(param_1, 0x302);
    }
    switch (*(s16 *)(param_1 + 0x152)) {
    case 0x167:
        uVar3 = func_02028124(param_1);
        func_0202508c(param_1, 9, 0x11, (s32)(u32)((((s64)(s32)uVar3) * (-630) + 0x800) >> 12));
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
    }
    func_02035be8(param_1);
    if (func_020289d0(param_1, 0, 1) != 0) {
        ok = 1;
        goto Lchk;
    }
    if (func_0203592c(param_1, 0) != 0) {
        ok = 1;
        goto Lchk;
    }
    if (func_020357c8(param_1, 0) != 0) {
        ok = 1;
        goto Lchk;
    }
    if (iVar2 != 0) {
        ok = 0;
        goto Lchk;
    }
    func_0202fcc0(param_1);
    func_020362f8(param_1);
    ok = 1;
Lchk:
    if (ok != 0) {
        return;
    }
    func_02054090(param_1);
}
