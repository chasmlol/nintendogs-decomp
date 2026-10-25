#include "ctx.h"

extern u8 *data_02159464;

void func_020bbc20(void)
{
    u8 *q = data_02159464 + 0x200;
    *(u16 *)(q + 0xec) = 2;
}
