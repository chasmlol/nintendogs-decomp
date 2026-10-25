#include "ctx.h"

extern u8 *data_02159034;

s32 func_02092af0(s16 i)
{
    u8 *q = data_02159034 + 0x1000;
    s32 base = *(s32 *)(q + 0x434) + 4;
    return i * 164 + base;
}
