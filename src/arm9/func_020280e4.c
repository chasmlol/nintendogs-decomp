#include "ctx.h"

u32 func_020280e4(u8 *p, s32 i)
{
    u8 *q = *(u8 **)(p + 0x9e8);
    return (u32)(q + 0x540 + i * 4);
}
