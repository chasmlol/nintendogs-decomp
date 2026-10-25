#include "ctx.h"

s32 func_02027ec8(void *p, s32 b)
{
    u8 *base = *(u8 **)((u8 *)p + 0x9e8);
    s32 off = ((s32)((b + 8) * 0x10000)) >> 15;
    return *(s16 *)(base + off + 0x18);
}
