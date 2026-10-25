#include "ctx.h"

extern u32 data_0215be48;

void func_020f87a8(void)
{
    u32 b = data_0215be48;
    b += 0x4000;
    *(u32 *)(b + 0x868) = 1;
}
