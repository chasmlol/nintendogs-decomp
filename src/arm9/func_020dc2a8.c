#include "ctx.h"

extern s32 func_020dbe74(u32 a, u32 b, u32 *c);

s32 func_020dc2a8(u8 *p0, u8 *p1)
{
    s32 r;
    s32 out;
    out = 0;
    r = func_020dbe74(*(u32 *)(p0 + 0x14), *(u32 *)(p1 + 0x14), (u32 *)(p1 + 8));
    if (r > 0) {
        out = r;
    }
    return out;
}
