#include "ctx.h"

extern u8 *data_0215be48;

void func_020fc898(u32 param_1)
{
    u8 *q = data_0215be48 + 0x1000;
    *(vu32 *)(q + 0xde4) = param_1;
}
