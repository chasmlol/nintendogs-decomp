#include "ctx.h"

extern u8 *data_02159034;

u32 func_0209406c(void)
{
    u8 *q = data_02159034 + 0x1000;
    u8 *r = *(u8 **)(q + 0x41c);
    return *(u32 *)(r + 0x78);
}
