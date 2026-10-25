#include "ctx.h"
extern u8 *func_02036578(u8 *p);
extern void func_02027668(u8 *p, s32 *q);
extern void func_02067e34(u8 *a, s32 *b, u8 *c);
extern void func_02027654(u8 *p, u8 *q);
extern void func_0203942c(u8 *p);
extern void func_02037450(u8 *p, s32 a);
extern void func_02035be8(u8 *p);
extern s32 func_020289d0(u8 *p, s32 a, s32 b);
extern s32 func_0203592c(u8 *p, s32 a);
extern s32 func_020357c8(u8 *p, s32 a);
extern void func_020362f8(u8 *p);
extern void func_0202fcc0(u8 *p);

void func_0204aa60(u8 *param_1)
{
    u8 *iVar2;
    s32 iVar3;
    s32 bVar1;
    s32 aiStack_18[3];

    iVar2 = func_02036578(param_1);
    if (iVar2 != NULL) {
        func_02027668(iVar2, aiStack_18);
        func_02067e34(param_1 + 0x2a0, aiStack_18, param_1 + 0x26c);
        func_02027654(iVar2, param_1 + 0x3b4);
        func_0203942c(param_1);
        func_02037450(param_1, 0x302);
    }
    func_02035be8(param_1);
    iVar3 = func_020289d0(param_1, 0, 1);
    if (iVar3 != 0) {
        return;
    }
    bVar1 = func_0203592c(param_1, 0);
    if (bVar1) {
        return;
    }
    iVar3 = func_020357c8(param_1, 0);
    if (iVar3 != 0) {
        return;
    }
    if (iVar2 != NULL) {
        s16 v = *(s16 *)(iVar2 + 0xea);
        if (v < 0x289) {
            goto zero;
        }
        if (v <= 0x28a) {
            bVar1 = 1;
            goto test;
        }
zero:
        bVar1 = 0;
test:
        if (bVar1) {
            return;
        }
    }
    func_020362f8(param_1);
    func_0202fcc0(param_1);
}
