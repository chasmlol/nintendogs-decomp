#include "ctx.h"

void func_020e7874(u32 param_1, u32 param_2)
{
    u32 *p = (u32 *)(param_1 + 0x16c);
    *p = *p & (u32)((1u << param_2) == 0);
    *(u32 *)(param_1 + 0xb4) = *(u32 *)(param_1 + 0xb4) + 0x52;
}
