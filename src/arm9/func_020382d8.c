#include "ctx.h"
u32 func_020382d8(u8 *o)
{
    s32 v = *(s32 *)(*(u8 **)(o + 0x9e8) + 0xc);
    s32 k;
    if (v < 0xccd) {
        k = 0;
    } else if (v <= 0x119a) {
        k = 1;
    } else {
        k = 2;
    }
    if (k == 0) {
        goto r22;
    }
    if (k == 1) {
        goto r21;
    }
    if (k != 2) {
        goto r21;
    }
    goto r20;
r22:
    return 22;
r21:
    return 21;
r20:
    return 20;
}
