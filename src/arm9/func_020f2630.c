#include "ctx.h"

extern u32 data_0215be48;

void func_020f2630(void)
{
    u8 *q;
    q = (u8 *)data_0215be48 + 0x4000;
    *(u32 *)(q + 0x868) = 1;
}
