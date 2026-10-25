#include "ctx.h"

#define FXM(a, b) ((u32)((((s64)(s32)(a) * (s64)(s32)(b)) + 0x800) >> 12))

extern s32 data_0215942c;
extern u32 func_02028124(u8 *p);
extern s32 func_02024d40(u8 *p, s32 a, s32 b, u32 c);
extern s32 func_0203567c(u8 *p);
extern s32 func_020385e4(u8 *p);
extern void func_0203e908(u8 *p, s32 v);

void func_ov003_02180114(u8 *param_1)
{
    u32 uVar1;
    u32 uVar2;
    u32 uVar4;
    u32 uVar5;
    s32 iVar3;
    u16 v;

    uVar1 = func_02028124(param_1);
    uVar4 = -FXM(uVar1, -168);
    uVar2 = func_02028124(param_1);
    uVar5 = -FXM(uVar2, -217);
    iVar3 = func_02024d40(param_1, 11, 34, uVar5);
    if (iVar3 == 0) {
        func_02024d40(param_1, 35, 62, uVar4);
    }
    iVar3 = func_0203567c(param_1);
    if (iVar3 == 0) {
        return;
    }
    v = *(u16 *)data_0215942c;
    if (v == 1) {
        goto special;
    }
    if (v != 4) {
        goto sw;
    }
special:
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
