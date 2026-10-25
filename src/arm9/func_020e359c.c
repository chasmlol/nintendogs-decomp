#include "ctx.h"

extern void func_020c723c(u8 *p, s32 v);

void func_020e359c(u8 *param_1, s32 param_2)
{
    u8 *iVar1 = *(u8 **)(param_1 + 0x214);
    func_020c723c(param_1, param_2);
    *(u32 *)(iVar1 + 0x10) = 0;
    *(u32 *)(iVar1 + 0x14) = 0;
}
