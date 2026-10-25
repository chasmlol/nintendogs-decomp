#include "ctx.h"

extern u32 data_0215be48;

u8 func_02108498(void)
{
    u8 *q = (u8 *)data_0215be48 + 0x11000;
    return *(u8 *)(q + 0x164);
}
