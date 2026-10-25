#include "ctx.h"

extern s32 func_02036578(u8 *p);
extern void func_0204da64(u8 *p, s32 a, int b);
extern void func_020362ec(s32 a, s16 b);
extern void func_0202707c(s32 a, int b);
extern void func_02035be8(u8 *p);
extern s32 func_020289d0(u8 *p, int a, int b);
extern s32 func_0203592c(u8 *p, int a);
extern s32 func_020357c8(u8 *p, int a);
extern s32 func_0202fcc0(u8 *p);
extern void func_020362f8(u8 *p);
extern s32 func_0202fd7c(u8 *p);
extern s32 func_02053828(u8 *p, s32 a);
extern void func_0203e908(u8 *p, int a);

void func_0204b888(u8 *param_1)
{
    s32 bVar1;
    s32 iVar2;
    s32 iVar3;

    iVar2 = func_02036578(param_1);
    func_0204da64(param_1, iVar2, 1);
    if (iVar2 != 0 && *(u16 *)(param_1 + 0xfc) == 0x1e) {
        {
            s8 c88 = *(s8 *)(param_1 + 0x88);
            func_020362ec(iVar2, (s16)(s32)c88);
        }
        func_0202707c(iVar2, 10);
    }
    func_02035be8(param_1);
    iVar3 = func_020289d0(param_1, 0, 1);
    if (iVar3 != 0) {
        bVar1 = 1;
        goto test;
    }
    iVar3 = func_0203592c(param_1, 0);
    if (iVar3 != 0) {
        bVar1 = 1;
        goto test;
    }
    iVar3 = func_020357c8(param_1, 0);
    if (iVar3 != 0) {
        bVar1 = 1;
        goto test;
    }
    if (iVar2 != 0) {
        bVar1 = 0;
        goto test;
    }
    func_0202fcc0(param_1);
    func_020362f8(param_1);
    bVar1 = 1;
test:
    if (bVar1 != 0) {
        return;
    }
    iVar2 = func_02036578(param_1);
    if (*(u16 *)(param_1 + 0xfc) > 500) {
        func_020362f8(param_1);
        iVar3 = func_0202fd7c(param_1);
    } else if (iVar2 == 0) {
        func_020362f8(param_1);
        iVar3 = func_0202fcc0(param_1);
    } else if (*(u16 *)(param_1 + 0xfc) == 500) {
        iVar3 = func_02053828(param_1, iVar2);
    } else {
        iVar3 = 0;
    }
    if (iVar3 != 0) {
        return;
    }
    if (*(s16 *)(param_1 + 0xfa) == 0x1c) {
        func_0203e908(param_1, 0x283);
        *(u16 *)(param_1 + 0xfa) = 0;
        return;
    }
    if (*(s16 *)(param_1 + 0xfa) == 29) {
        func_0203e908(param_1, 0x284);
        *(u16 *)(param_1 + 0xfa) = 0;
    }
}
