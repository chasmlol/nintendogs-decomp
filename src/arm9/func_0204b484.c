#include "ctx.h"

extern s32 func_02036578(int a);
extern void func_02027668(int a, int b);
extern void func_02067e34(int a, int b, int c);
extern void func_02027654(int a, int b);
extern void func_0203942c(int a);
extern void func_02037450(int a, int b);
extern void func_02035be8(int a);
extern s32 func_020289d0(int a, int b, int c);
extern s32 func_0203592c(int a, int b);
extern s32 func_020357c8(int a, int b);
extern void func_020362f8(int a);
extern void func_0202fcc0(int a);
extern void func_0202fd7c(int a);
extern s32 func_0203567c(int a);
extern s32 func_02027710(int a, int b);
extern u32 func_020449bc(void);
extern void func_020362ec(int a, s16 b);
extern void func_0203e908(int a, int b);
extern void func_0202707c(int a, int b);

void func_0204b484(int param_1)
{
    int iVar2;
    int iVar3;
    u32 uVar4;
    int bVar1;
    s8 t1;
    int t2;
    int aiStack_18[3];

    iVar2 = func_02036578(param_1);
    if (iVar2 != 0) {
        func_02027668(iVar2, (int)aiStack_18);
        func_02067e34(param_1 + 0x2a0, (int)((u32)aiStack_18 | 0), param_1 + 0x26c);
        func_02027654(iVar2, param_1 + 0x3b4);
        func_0203942c(param_1);
        func_02037450(param_1, 0x302);
    }
    func_02035be8(param_1);
    if (func_020289d0(param_1, 0, 1) != 0) {
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
    if (bVar1) {
        return;
    }
    iVar2 = func_02036578(param_1);
    if (*(u16 *)(param_1 + 0xfc) > 200) {
        func_020362f8(param_1);
        func_0202fd7c(param_1);
        return;
    }
    if (iVar2 == 0) {
        func_020362f8(param_1);
        func_0202fcc0(param_1);
        return;
    }
    if (func_0203567c(iVar2) == 0) {
        return;
    }
    iVar3 = func_02027710(param_1, iVar2);
    if (iVar3 != -1) {
        if (iVar3 == 0) {
            goto zero;
        }
        if (iVar3 != 1) {
            return;
        }
        func_020362f8(param_1);
        func_0202fd7c(param_1);
        return;
zero:
        func_020362f8(param_1);
        func_0202fd7c(param_1);
        return;
    }
    uVar4 = func_020449bc();
    if ((uVar4 & 0x100) == 0) {
        func_0202fd7c(param_1);
        return;
    }
    t1 = (s8)(*(s8 *)(param_1 + 139) - 4);
    if ((u8)t1 <= 1) {
        return;
    }
    t1 = (s8)(*(s8 *)(iVar2 + 139) - 4);
    if ((u8)t1 <= 1) {
        return;
    }
    t2 = *(s8 *)(iVar2 + 136);
    func_020362ec(param_1, (s16)t2);
    func_0203e908(param_1, 0x273);
    t2 = *(s8 *)(param_1 + 136);
    func_020362ec(iVar2, (s16)t2);
    func_0202707c(iVar2, 22);
}
