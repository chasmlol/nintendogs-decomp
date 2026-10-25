#include "ctx.h"

void func_0207808c(u8 *param_1, s32 param_2, u32 param_3)
{
    u8 *e = param_1 + *(s32 *)(param_1 + 8);
    u8 *b = e + 4;
    u32 off = *(u16 *)(e + 10);
    u32 v = *(u16 *)(b + off);
    u8 *q = b + off + v * param_2;
    u8 *t = e + *(u32 *)(q + 4);
    *(u32 *)(t + 8) = (*(u32 *)(t + 8) & 0xffff8000u) | param_3;
}
