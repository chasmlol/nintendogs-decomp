#include "ctx.h"

extern u8 *func_02036578(u8 *p);
extern void func_0204d8f4(u8 *p, u8 *q);
extern void func_02035be8(u8 *p);
extern s32 func_020289d0(u8 *p, s32 a, s32 b);
extern s32 func_0203592c(u8 *p, s32 a);
extern s32 func_020357c8(u8 *p, s32 a);
extern void func_020362f8(u8 *p);
extern void func_0202fcc0(u8 *p);

void func_0204a4c4(u8 *param_1)
{
    u8 *iVar2;
    s32 iVar3;
    s32 bVar1;

    iVar2 = func_02036578(param_1);
    func_0204d8f4(param_1, iVar2);
    func_02035be8(param_1);
    iVar3 = func_020289d0(param_1, 0, 1);
    if (iVar3 != 0) {
        return;
    }
    iVar3 = func_0203592c(param_1, 0);
    if (iVar3 != 0) {
        return;
    }
    iVar3 = func_020357c8(param_1, 0);
    if (iVar3 != 0) {
        return;
    }
    if (iVar2 != 0) {
        if (*(s16 *)(iVar2 + 0xea) < 655) {
            goto no;
        }
        if (656 < *(s16 *)(iVar2 + 0xea)) {
            goto no;
        }
        bVar1 = 1;
        goto test;
no:
        bVar1 = 0;
test:
        if (bVar1) {
            return;
        }
    }
    func_020362f8(param_1);
    func_0202fcc0(param_1);
}
