#include "ctx.h"

extern u8 *data_02159034;

s32 func_020955c0(s16 param_1)
{
    u8 *q = data_02159034 + param_1 * 24;
    u8 *r = q + 0x1000;
    return *(volatile s32 *)(r + 0x44c) + 4;
}
