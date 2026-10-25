#include "ctx.h"
s32 func_02069a94(void)
{
    s32 m;
    u32 a = *(vu32 *)0x04001000;
    u32 b = *(vu16 *)0x0400100e;
    m = a & 7;
    if (m < 3) {
        goto calc;
    }
    if (m >= 6) {
        goto zero;
    }
    if (b & 0x80) {
        goto zero;
    }
calc:
    return (s32)(((b & 60) >> 2) << 14) + 0x6200000;
zero:
    return 0;
}
