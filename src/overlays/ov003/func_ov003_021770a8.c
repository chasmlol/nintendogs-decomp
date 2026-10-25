#include "ctx.h"

extern void func_020393d8(s32 a, s32 b);
extern s32 func_02035770(s32 a, s32 b);
extern void func_0203e908(s32 a, s16 b);

void func_ov003_021770a8(s32 param_1)
{
    s32 iVar1;
    func_020393d8(param_1, 0xfdc4);
    iVar1 = func_02035770(param_1, 30);
    if (iVar1 != 0) {
        func_0203e908(param_1, 0x3a6);
        return;
    }
}
