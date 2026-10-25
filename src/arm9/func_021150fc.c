#include "ctx.h"

extern u8 *data_0215be48;

u32 func_021150fc(void)
{
    u8 *q = data_0215be48 + 0x1000;
    return *(u32 *)(q + 0xd80);
}
