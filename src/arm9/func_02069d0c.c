#include "ctx.h"
s32 func_02069d0c(void)
{
    u32 mode;
    u32 w;
    u32 base;
    u32 t;
    u32 b16;
    u32 x;
    mode = *(vu32 *)0x04000000 & 7;
    w = *(vu16 *)0x0400000e;
    base = (*(vu32 *)0x04000000 & 0x38000000) >> 27;
    t = w & 0x1f00;
    b16 = base << 16;
    x = t >> 8;
    switch (mode) {
    case 0:
    case 1:
    case 2:
        return (s32)(b16 + 0x6000000 + x * 0x800);
    case 3:
    case 4:
    case 5:
        if ((w & 0x80) != 0) {
            return (s32)((x << 14) + 0x6000000);
        }
        return (s32)(b16 + 0x6000000 + (x << 11));
    case 6:
        return 0;
    default:
        return 0;
    }
}
