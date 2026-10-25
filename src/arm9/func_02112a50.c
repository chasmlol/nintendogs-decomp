#include "ctx.h"

extern u8 *data_0215be48;

void func_02112a50(s32 param_1, s32 param_2, u16 param_3, u16 param_4)
{
    u8 *q;
    q = data_0215be48;
    q = q + 0x283c;
    q = q + param_1 * 0x800 + param_2 * 0x10;
    *(u16 *)(q + 10) = param_3;
    *(u16 *)(q + 12) = param_4;
}
