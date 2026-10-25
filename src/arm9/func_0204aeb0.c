#include "ctx.h"
extern u8 *func_02036578(u8 *p);
extern u32 func_02028124(u8 *p);
extern void func_0202508c(u8 *p, s32 a, s32 b, u32 c);
extern void func_02039448(u8 *p);
extern void func_02027654(u8 *p, u8 *q);
extern void func_02037450(u8 *p, s32 a);
extern void func_02035be8(u8 *p);
extern s32 func_020289d0(u8 *p, s32 a, s32 b);
extern s32 func_0203592c(u8 *p, s32 a);
extern s32 func_020357c8(u8 *p, s32 a);
extern void func_020362f8(u8 *p);
extern void func_0202fcc0(u8 *p);

void func_0204aeb0(u8 *param_1)
{
    u8 *iVar2;
    s32 iVar4;
    s32 bVar1;
    s32 uVar3;
    s64 lv;
    s32 x;
    s32 y;

    iVar2 = func_02036578(param_1);
    uVar3 = (s32)func_02028124(param_1);
    lv = (s64)uVar3 * 279 + 0x800;
    func_0202508c(param_1, 16, 38, (u32)(lv >> 12));
    if (iVar2 != NULL) {
        func_02039448(param_1);
        func_02027654(iVar2, param_1 + 0x278);
        func_02037450(param_1, 0x300);
    }
    func_02035be8(param_1);
    iVar4 = func_020289d0(param_1, 0, 1);
    if (iVar4 != 0) {
        return;
    }
    if (func_0203592c(param_1, 0)) {
        return;
    }
    iVar4 = func_020357c8(param_1, 0);
    if (iVar4 != 0) {
        return;
    }
    if (iVar2 == NULL) {
        goto zero;
    }
    x = *(s16 *)(iVar2 + 0xea);
    if (x < 0x282) {
        goto zA;
    }
    if (x <= 0x284) {
        bVar1 = 1;
        goto tA;
    }
zA:
    bVar1 = 0;
tA:
    if (bVar1 != 0) {
        bVar1 = 1;
        goto t1;
    }
    if (x < 0x259) {
        goto zB;
    }
    if (x <= 0x25f) {
        bVar1 = 1;
        goto tB;
    }
zB:
    bVar1 = 0;
tB:
    if (bVar1 == 0) {
        goto z3;
    }
    y = *(s16 *)(iVar2 + 0xee);
    if (y < 0x282) {
        goto zC;
    }
    if (y <= 0x284) {
        bVar1 = 1;
        goto tC;
    }
zC:
    bVar1 = 0;
tC:
    if (bVar1 != 0) {
        bVar1 = 1;
        goto t1;
    }
z3:
    bVar1 = 0;
t1:
    if (bVar1 != 0) {
        return;
    }
zero:
    func_020362f8(param_1);
    func_0202fcc0(param_1);
}
