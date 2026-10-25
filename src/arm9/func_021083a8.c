#include "ctx.h"

extern u32 data_0215be48;

void func_021083a8(void)
{
    u8 *q = (u8 *)data_0215be48 + 0xc4;
    *(u32 *)(q + 0x254) = 0;
    *(u32 *)(q + 0x268) = 0;
}
