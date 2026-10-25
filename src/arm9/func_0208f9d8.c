#include "ctx.h"

extern u32 func_0208e580(u32 *a, s32 b, u8 *c);

void func_0208f9d8(u8 *p, u32 *q, s32 r)
{
    u32 v;
    *(s16 *)(p + 0x6e) = (s16)r;
    v = func_0208e580(q, r, *(u8 **)(p + 0x1c) + 4);
    *(u32 *)(p + 0x78) = v;
}
