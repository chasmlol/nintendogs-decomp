#include "ctx.h"

void func_020a86e0(u8 *param_1, s16 param_2, u16 param_3, u16 param_4)
{
    u8 *iVar1;
    param_1 += 0x18;
    *(s16 *)(param_1 + param_2 * 10) = param_2;
    iVar1 = param_1 + param_2 * 10;
    *(s16 *)(iVar1 + 2) = -2;
    *(u16 *)(iVar1 + 4) = param_3;
    *(u16 *)(iVar1 + 6) = param_4;
}
