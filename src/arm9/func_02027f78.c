#include "ctx.h"

s32 func_02027f78(u8 *p, s32 i)
{
    u8 *base = *(u8 **)(p + 0x9e8);
    return *(s16 *)(base + (((s32)(i << 16)) >> 15) + 0x18);
}
