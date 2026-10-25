#include "ctx.h"

extern u32 data_02159034;

BOOL func_02093c2c(void)
{
    u8 *q = *(u8 **)&data_02159034 + 0x1000;
    u8 *r = *(u8 **)(q + 0x41c);
    return *(s8 *)(r + 137) != 0;
}
