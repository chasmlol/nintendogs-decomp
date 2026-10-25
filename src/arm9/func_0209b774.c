#include "ctx.h"

u32 func_0209b774(s32 *param_1)
{
    s32 z;
    s32 x;
    u32 v;
    u32 r;
    if (param_1 == NULL) {
        goto ret0;
    }
    z = param_1[2];
    x = param_1[0];
    v = (u32)((x >> 12) * (x >> 12) + (z >> 12) * (z >> 12));
    *(vu16 *)0x040002b0 = 0;
    *(vu32 *)0x040002b8 = v;
    while (*(vu16 *)0x040002b0 & 0x8000) {
    }
    while (*(vu16 *)0x040002b0 & 0x8000) {
    }
    r = *(vu32 *)0x040002b4;
    return r;
ret0:
    return 0;
}
