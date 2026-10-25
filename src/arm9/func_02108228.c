#include "ctx.h"

extern u8 *data_0215be48;

void func_02108228(void)
{
    u8 *q = data_0215be48 + 0x1000;
    *(u32 *)(q + 0xce0) = 0;
    q = data_0215be48 + 0x4000;
    *(u32 *)(q + 0x8c0) = 0;
}
