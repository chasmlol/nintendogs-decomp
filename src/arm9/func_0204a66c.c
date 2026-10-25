#include "ctx.h"

extern s32 func_02036578(u8 *p);
extern void func_0204d0bc(u8 *p, s32 a);
extern void func_020362ec(s32 a, s32 b);
extern void func_0202707c(s32 a, s32 b);
extern void func_02035be8(u8 *p);
extern s32 func_020289d0(u8 *p, s32 a, s32 b);
extern s32 func_0203592c(u8 *p, s32 a);
extern s32 func_020357c8(u8 *p, s32 a);
extern void func_0202fcc0(u8 *p);
extern void func_020362f8(u8 *p);
extern void func_0202fd7c(u8 *p);
extern void func_0205226c(u8 *p, s32 a);
extern void func_02051ae0(u8 *p, s32 a);

void func_0204a66c(u8 *param_1)
{
    s32 iVar3;
    s32 iVar2;
    s32 bVar1;
    u8 *p1c = param_1;

    iVar2 = func_02036578(param_1);
    func_0204d0bc(p1c, iVar2);
    if (iVar2 != 0 && *(u16 *)(p1c + 0xfc) == 30) {
        iVar3 = *(s8 *)(p1c + 0x88);
        func_020362ec(iVar2, (s16)iVar3);
        func_0202707c(iVar2, 14);
    }
    func_02035be8(p1c);
    if (func_020289d0(p1c, 0, 1) != 0) {
        bVar1 = 1;
        goto test;
    }
    if (func_0203592c(p1c, 0) != 0) {
        bVar1 = 1;
        goto test;
    }
    if (func_020357c8(p1c, 0) != 0) {
        bVar1 = 1;
        goto test;
    }
    if (iVar2 != 0) {
        bVar1 = 0;
        goto test;
    }
    func_0202fcc0(p1c);
    func_020362f8(p1c);
    bVar1 = 1;
test:
    if (bVar1 != 0) {
        return;
    }
    iVar2 = func_02036578(p1c);
    if (*(u16 *)(p1c + 0xfc) > 400) {
        func_020362f8(p1c);
        func_0202fd7c(p1c);
        return;
    }
    if (iVar2 == 0) {
        func_020362f8(p1c);
        func_0202fcc0(p1c);
        return;
    }
    if (*(s32 *)(p1c + 0x468) == 1) {
        func_0205226c(p1c, iVar2);
        return;
    }
    if (*(s32 *)(p1c + 0x468) >= 3) {
        func_02051ae0(p1c, iVar2);
    }
}
