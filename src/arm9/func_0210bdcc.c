#include "ctx.h"

extern u8 *data_0215be48;

void func_0210bdcc(void)
{
    u8 *q = data_0215be48 + 0x4000;
    *(u32 *)(q + 0x868) = 1;
}
