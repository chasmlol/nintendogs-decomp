#include "ctx.h"

extern u8 *data_0215942c;
extern s32 func_02028124(u8 *p);
extern s32 func_02024d40(u8 *p, s32 a, s32 b, s32 c);
extern s32 func_0203567c(u8 *p);
extern void func_0203e908(u8 *p, s32 a);
extern s32 func_020385e4(u8 *p);

#define FX_Mul(a, b) ((s32)(((s64)(a) * (b) + 0x800) >> 12))

void func_ov003_02180424(u8 *param_1)
{
    s32 uVar1;
    s32 uVar2;
    s32 negU4;
    s32 iVar3;

    uVar1 = func_02028124(param_1);
    negU4 = -FX_Mul(uVar1, 94);
    uVar2 = func_02028124(param_1);
    iVar3 = func_02024d40(param_1, 11, 36, -FX_Mul(uVar2, 163));
    if (iVar3 == 0) {
        func_02024d40(param_1, 46, 80, negU4);
    }
    iVar3 = func_0203567c(param_1);
    if (iVar3 == 0) {
        return;
    }
    if (*(u16 *)data_0215942c == 1) {
        goto d0;
    }
    if (*(u16 *)data_0215942c != 4) {
        goto sw;
    }
d0:
    func_0203e908(param_1, 0x3ab);
    return;
sw:
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
    }
    return;
}
