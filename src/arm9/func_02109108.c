#include "ctx.h"

extern u8 *data_0215be48;

void func_02109108(u32 v)
{
    u8 *q = data_0215be48 + 0x5000;
    *(u32 *)(q + 0x8c) = v;
}
