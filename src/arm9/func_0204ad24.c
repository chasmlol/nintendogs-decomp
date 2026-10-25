#include "ctx.h"
extern u8 *func_02036578(u8 *p);
extern void func_0204d2c8(u8 *p, u8 *q);
extern void func_020362ec(u8 *p, s32 a);
extern void func_0202707c(u8 *p, s32 a);
extern void func_02035be8(u8 *p);
extern s32 func_020289d0(u8 *p, s32 a, s32 b);
extern s32 func_0203592c(u8 *p, s32 a);
extern s32 func_020357c8(u8 *p, s32 a);
extern void func_0202fcc0(u8 *p);
extern void func_020362f8(u8 *p);
extern void func_0202fd7c(u8 *p);
extern void func_0203e908(u8 *p, s32 a);
extern void func_020529e4(u8 *p, u8 *q);

void func_0204ad24(u8 *param_1)
{
    u8 *iVar3;
    s32 iVar4;
    s32 bVar2;
    u16 uVar1;
    u8 *pp;

    iVar3 = func_02036578(param_1);
    pp = param_1;
    func_0204d2c8(pp, iVar3);
    if (iVar3 != NULL && *(u16 *)(pp + 0xfc) == 30) {
        s32 t = *(s8 *)(pp + 0x88);
        func_020362ec(iVar3, (s16)t);
        func_0202707c(iVar3, 12);
    }
    func_02035be8(pp);
    iVar4 = func_020289d0(pp, 0, 1);
    if (iVar4 != 0) {
        bVar2 = 1;
        goto J;
    }
    bVar2 = func_0203592c(pp, 0);
    if (bVar2 != 0) {
        bVar2 = 1;
        goto J;
    }
    iVar4 = func_020357c8(pp, 0);
    if (iVar4 != 0) {
        bVar2 = 1;
        goto J;
    }
    if (iVar3 != NULL) {
        bVar2 = 0;
        goto J;
    }
    func_0202fcc0(pp);
    func_020362f8(pp);
    bVar2 = 1;
J:
    if (bVar2 != 0) {
        return;
    }
    iVar3 = func_02036578(pp);
    uVar1 = *(u16 *)(pp + 0xfc);
    if (uVar1 > 200) {
        func_020362f8(pp);
        func_0202fd7c(pp);
        return;
    }
    if (iVar3 == NULL) {
        func_020362f8(pp);
        func_0202fcc0(pp);
        return;
    }
    if (uVar1 == 60) {
        if (*(s16 *)(iVar3 + 0xea) == 652) {
            func_0203e908(pp, 0x28a);
        }
        return;
    }
    if (uVar1 == 200) {
        func_020529e4(pp, iVar3);
    }
}
