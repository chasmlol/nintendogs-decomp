#include "ctx.h"

extern u32 data_02159034;

u16 func_02093e0c(void)
{
    u8 *q = *(u8 **)&data_02159034 + 0x1000;
    u8 *r = *(u8 **)(q + 0x41c);
    return *(u16 *)(r + 0x7c);
}
