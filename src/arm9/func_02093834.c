#include "ctx.h"

extern u32 data_02159034;

s32 func_02093834(void)
{
    u8 *q = *(u8 **)&data_02159034 + 0x1000;
    u8 *r = *(u8 **)(q + 0x41c);
    return (s32)*(s8 *)(r + 0x87);
}
