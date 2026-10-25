#include "ctx.h"
u32 func_020ab4c0(u8 *o)
{
    u32 r = 0;
    if (*(s32 *)(o + 0xc0) >= 0x2a30) {
        *(u16 *)(o + 46) = 2;
        *(u16 *)(o + 48) = r;
        *(u16 *)(o + 256) = 7;
        r = 1;
    }
    return r;
}
