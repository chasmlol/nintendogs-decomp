#include "ctx.h"

void func_0207a7a4(u32 *param_1, s32 *param_2, s32 param_3)
{
    u8 *q = (u8 *)param_2[2];
    s32 k = param_2[0] >> 12;
    u32 u = k * *(u16 *)(q + 6) + param_3;
    *param_1 = *(u32 *)(q + (u >> 5) * 4 + 0xc) & (1u << (u & 31));
}
