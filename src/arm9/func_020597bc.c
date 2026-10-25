#include "ctx.h"

extern void func_02026c24(s32 a);
extern u8 func_020256fc(s32 a);

u8 func_020597bc(s32 param_1)
{
    u8 uVar1;
    *(u16 *)(param_1 + 0x152) = 0xea;
    func_02026c24(param_1);
    uVar1 = func_020256fc(param_1);
    return uVar1;
}
