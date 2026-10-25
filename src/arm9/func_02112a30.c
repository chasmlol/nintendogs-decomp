#include "ctx.h"

extern u8 *data_0215be48;

s32 func_02112a30(s32 a, s32 b)
{
    u8 *q = data_0215be48 + 0x2800;
    return *(s16 *)(q + a * 0x800 + b * 0x10 + 0x48);
}
