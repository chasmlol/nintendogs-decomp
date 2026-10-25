#include "ctx.h"
u32 func_020350bc(u8 *o)
{
    s32 v = *(s16 *)(o + 0xea);
    if (v >= 0x413 && v <= 0x414) {
        return 1;
    }
    if (v >= 0x416 && v <= 0x41c) {
        return 1;
    }
    if (v >= 0x47c && v <= 0x47d) {
        return 1;
    }
    return 0;
}
