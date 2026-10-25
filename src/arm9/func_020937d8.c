#include "ctx.h"

extern u8 *data_02159034;

s32 func_020937d8(void)
{
    u8 *q = data_02159034 + 0x1000;
    u8 *r = *(u8 **)(q + 0x41c);
    return (s8)r[0x8a];
}
