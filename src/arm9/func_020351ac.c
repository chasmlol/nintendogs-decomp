#include "ctx.h"
u32 func_020351ac(u8 *o)
{
    s32 v = *(s16 *)(o + 0xea);
    if (v >= 0x309 && v <= 0x30e) {
        return *(u8 *)(o + 0xaa) == 2;
    }
    if (v >= 0x360 && v <= 0x37b) {
        return *(u8 *)(o + 0xaa) == 2;
    }
    if (v >= 0x3ba && v <= 0x3bf) {
        return *(u8 *)(o + 0xaa) == 2;
    }
    if (v >= 0x413 && v <= 0x41c) {
        return *(u8 *)(o + 0xaa) == 2;
    }
    return 0;
}
