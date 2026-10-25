#include "ctx.h"

extern u32 data_0215be48;

void func_021259f0(void)
{
    u8 *q = *(u8 **)&data_0215be48 + 0x4000;
    *(u32 *)(q + 0x868) = 1;
}
