#include "ctx.h"

extern u8 *data_0215be48;

u32 func_02108480(void)
{
    u8 *q = data_0215be48 + 0x11000;
    return *(u32 *)(q + 0x168);
}
