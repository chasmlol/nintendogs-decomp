#include "ctx.h"

typedef struct { s32 a; s32 b; s32 c; } V3;

extern s32 data_0215942c;
extern s32 func_020364cc(u8 *p);
extern s32 func_020289d0(u8 *p, s32 a, s32 b);
extern s32 func_0203592c(u8 *p, s32 b);
extern s32 func_020c1f34(s32 a);
extern s32 func_02026c40(u8 *p, s32 b);
extern void func_0202fd7c(u8 *p);
extern void func_020362f8(u8 *p);
extern void func_0203e908(u8 *p, s32 v);
extern void func_ov003_0219a368(u8 *p);

void func_ov003_02195c04(u8 *param_1)
{
    s32 iVar3;
    s32 iVar4;
    s32 b1;
    s32 b2;

    iVar3 = func_020364cc(param_1);
    if (iVar3 != 0) {
        *(V3 *)(param_1 + 0x3b4) = *(V3 *)(iVar3 + 0xbc);
    }
    iVar4 = func_020289d0(param_1, 4, 1);
    if (iVar4 != 0) {
        return;
    }
    if (*(u16 *)(param_1 + 0xfc) <= 100) {
        return;
    }
    if (func_0203592c(param_1, iVar3) != 0) {
        return;
    }
    *(s32 *)(param_1 + 0x488) = *(s32 *)(param_1 + 0x488) + 1;
    if (*(u16 *)data_0215942c == 0x8003) {
        b2 = 0;
        goto LAB;
    }
    if (*(s16 *)(param_1 + 0xfa) == 0x23) {
        b2 = 0;
        goto LAB;
    }
    if (iVar3 == 0) {
        goto five_d;
    }
    if (*(s16 *)(iVar3 + 0x90) == 0 || *(s16 *)(iVar3 + 0x90) == 2) {
        b1 = 1;
    } else if (*(s16 *)(iVar3 + 0x94) == 0x35 && func_020c1f34(iVar3) == 0) {
        b1 = 1;
    } else {
        b1 = 0;
    }
    if (!b1) {
        goto notb1;
    }
five_d:
    func_0203e908(param_1, 0x5d);
    func_020362f8(param_1);
    b2 = 1;
    goto LAB;
notb1:
    if (func_02026c40(param_1, iVar3) != 0) {
        func_0202fd7c(param_1);
        func_020362f8(param_1);
        b2 = 1;
    } else {
        b2 = 0;
    }
LAB:
    if (b2 != 0) {
        return;
    }
    func_ov003_0219a368(param_1);
}
