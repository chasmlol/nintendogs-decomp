#include "ctx.h"

extern u32 data_0215be48;

void func_02107f8c(u32 v)
{
    u8 *q = *(u8 **)&data_0215be48 + 0x1000;
    *(u32 *)(q + 0xd14) = v;
}
