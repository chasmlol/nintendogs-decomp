#include "ctx.h"

#define FX_Mul(a, b) ((s32)(((s64)(a) * (b) + 0x800) >> 12))

extern u8 *data_0215942c;
extern s32 func_02028124(u8 *p);
extern s32 func_02024d40(u8 *p, u32 a, u32 b, s32 c);
extern s32 func_0203567c(u8 *p);
extern s32 func_020385e4(u8 *p);
extern void func_0203e908(u8 *p, u32 a);

void func_ov003_021802a0(u8 *param_1)
{
    s32 uVar1;
    s32 uVar2;
    s32 uVar4;
    s32 uVar5;
    s32 iVar3;
    u16 x;

    uVar1 = func_02028124(param_1);
    uVar4 = FX_Mul(uVar1, -168);
    uVar2 = func_02028124(param_1);
    uVar5 = FX_Mul(uVar2, -217);
    iVar3 = func_02024d40(param_1, 11, 34, uVar5);
    if (iVar3 == 0) {
        func_02024d40(param_1, 35, 62, uVar4);
    }
    iVar3 = func_0203567c(param_1);
    if (iVar3 == 0) {
        return;
    }
    x = *(u16 *)data_0215942c;
    if (x == 1 || x == 4) {
        func_0203e908(param_1, 0x3ab);
        return;
    }
    iVar3 = func_020385e4(param_1);
    switch (iVar3) {
    case 0:
        func_0203e908(param_1, 0x3ab);
        return;
    case 1:
        func_0203e908(param_1, 0x3ad);
        return;
    case 2:
        func_0203e908(param_1, 0x3ae);
        return;
    case 3:
        func_0203e908(param_1, 0x3af);
        return;
    }
}
