#include "ctx.h"

u32 func_02074564(u8 *param_1, u8 *param_2)
{
    u8 c = *param_1;
    if (c == 'J') {
        goto vblk;
    }
    if (c == 'M') {
        goto mblk;
    }
    if (c != 'V') {
        goto zero;
    }
    goto vblk;
mblk:
    return ((u32)param_2[0x18] * 2 + 0x1c) & ~3u;
vblk:
    return ((u32)param_2[0x17] * 2 + 0x1c) & ~3u;
zero:
    return 0;
}
