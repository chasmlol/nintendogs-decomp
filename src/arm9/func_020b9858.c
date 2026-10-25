#include "ctx.h"

extern u8 *data_02159444;

void func_020b9858(u16 param_1, u16 param_2)
{
    u8 *p = data_02159444;
    u32 off = 0x10e;
    u8 *r = p + off;
    *(u16 *)(p + 0x100 + 14) = param_1;
    *(u16 *)(r + 2) = param_2;
}
