#include "ctx.h"

extern u32 data_0215be48;

void func_02111b3c(void)
{
    u8 *q = *(u8 **)&data_0215be48 + 0xc000;
    *(u32 *)(q + 0x844) = 4;
}
