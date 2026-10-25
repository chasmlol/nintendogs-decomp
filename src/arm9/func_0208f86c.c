#include "ctx.h"

void func_0208f86c(void *p, s16 i, u32 v)
{
    u8 *base = *(u8 **)(*(u8 **)((u8 *)p + 0x1c) + 0x5c);
    *(u32 *)(base + i * 12 + 8) = v;
}
