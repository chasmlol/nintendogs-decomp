#include "ctx.h"

s32 func_02069ae4(void)
{
    s32 a = *(vu32 *)0x04000000 & 7;
    u32 h = *(vu16 *)0x0400000e;
    u32 v2;
    if (a < 3) {
        goto body;
    }
    if (a >= 6) {
        goto ret0;
    }
    if ((h & 0x80) != 0) {
        goto ret0;
    }
body:
    v2 = *(vu32 *)0x04000000;
    return (((v2 & 0x7000000) >> 24) << 16) + 0x6000000 + ((h & 0x3c) >> 2) * 0x4000;
ret0:
    return 0;
}
