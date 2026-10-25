#include "ctx.h"

extern u32 data_02159464;

void func_020bbc3c(void)
{
    u8 *q = *(u8 **)&data_02159464 + 0x200;
    *(u16 *)(q + 0xec) = 1;
}
