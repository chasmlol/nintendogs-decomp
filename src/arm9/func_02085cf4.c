#include "ctx.h"

u16 func_02085cf4(void *p, s32 i)
{
    u8 *base = (u8 *)p + *(u32 *)((u8 *)p + 8);
    return *(u16 *)(base + i * 6 + 4);
}
