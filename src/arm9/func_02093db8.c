#include "ctx.h"

extern u8 *data_02159034;

s32 func_02093db8(void)
{
    u8 *q = data_02159034 + 0x1000;
    return *(s8 *)(*(u8 **)(q + 0x41c) + 0x88);
}
