#include "ctx.h"

extern u8 *data_0215be48;

void func_020fcf48(void)
{
    u8 *q;
    *(u32 *)(*(u8 * volatile *)&data_0215be48 + 0xac) = 2;
    q = *(u8 * volatile *)&data_0215be48;
    q += 0x4000;
    *(u32 *)(q + 0x880) = 1;
    q = *(u8 * volatile *)&data_0215be48;
    q += 0x4000;
    *(u32 *)(q + 0x864) = 1;
}
