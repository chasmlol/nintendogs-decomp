#include "ctx.h"

extern u8 *data_02159034;

s32 func_02093278(s32 i)
{
    u8 *q = data_02159034 + 0x1000;
    u8 *s = *(u8 **)(q + 0x41c) + 0xb8;
    return (s32)(s + i * 8);
}
