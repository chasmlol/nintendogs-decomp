#include "ctx.h"

extern u32 data_02159034;

u32 func_02093720(void)
{
    u8 *q = (u8 *)(*(u32 *)&data_02159034 + 0x1000);
    return *(u32 *)(q + 0x41c) + 0x60;
}
