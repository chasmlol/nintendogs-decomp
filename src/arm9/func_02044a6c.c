#include "ctx.h"

extern u32 data_0214f464;

s32 func_02044a6c(s32 param_1, s32 param_2)
{
    u8 *base = (u8 *)data_0214f464;
    if (*(s8 *)(base + param_1 + 25) != 0) {
        u8 *q = base + 0x64c8;
        return (s32)(q + param_1 * 1280 + param_2 * 64);
    }
    return 0;
}
