#include "ctx.h"
s32 func_02069c04(void)
{
    s32 b = *(vu16 *)0x0400000a;
    u32 a = *(vu32 *)0x04000000;
    b = (s32)(b & 0x3c) >> 2;
    a = (a & 0x7000000) >> 24;
    return (s32)((a << 16) + 0x6000000 + (b << 14));
}
