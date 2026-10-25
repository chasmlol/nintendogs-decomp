#include "ctx.h"
extern u8 *data_02159428;
s32 func_020c8164(u32 a, s32 b)
{
    u8 *d = data_02159428;
    s32 t = b;
    s32 base = *(s32 *)(d + 0xc) + 0x1b34;
    if (b < 2048) {
        t = b << 1;
        t = 4096 - t;
        base = base - t;
    }
    if (a > 60) {
        a = 60;
    }
    return (60 - (s32)a) * 0x199 + base;
}
