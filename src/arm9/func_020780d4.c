#include "ctx.h"

void func_020780d4(u8 *param_1, u32 param_2, u32 param_3)
{
    u8 *a = param_1 + *(u32 *)(param_1 + 8);
    u8 *b = a + 4;
    u32 off = *(u16 *)(a + 10);
    u32 m = *(u16 *)(b + off);
    u8 *c = b + off;
    u32 val = *(u32 *)(c + m * param_2 + 4);
    u8 *d = a + val;
    *(u32 *)(d + 4) = (*(u32 *)(d + 4) & 0x8000ffff) | (param_3 << 16);
}
