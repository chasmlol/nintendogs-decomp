#include "ctx.h"

extern u32 data_0215be48;

void func_0210e230(u32 v)
{
    u8 *q = *(u8 **)&data_0215be48 + 0x1000;
    *(u32 *)(q + 0xd20) = v;
}
