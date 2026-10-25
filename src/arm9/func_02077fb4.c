#include "ctx.h"

void func_02077fb4(u8 *param_1, u32 param_2, u32 param_3)
{
    u8 *q = param_1 + *(u32 *)(param_1 + 8);
    u8 *e = q + 4;
    u32 off = *(u16 *)(q + 10);
    u16 val = *(u16 *)(e + off);
    u32 t = (u32)(e + off) + val * param_2;
    u8 *r1 = q + *(u32 *)(t + 4);
    *(u32 *)(r1 + 12) = (*(u32 *)(r1 + 12) & 0xc0ffffff) | (param_3 << 24);
}
