#include "ctx.h"

extern u8 *data_02159034;

s32 func_02093850(void)
{
    u8 *q = data_02159034 + 0x1000;
    return *(s32 *)(q + 0x41c) + 4;
}
