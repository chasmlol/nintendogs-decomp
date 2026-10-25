#include "ctx.h"

s32 func_02069ec4(void)
{
    s32 b = *(vu16 *)0x0400000a;
    u32 a = *(vu32 *)0x04000000;
    a = (a & 0x38000000) >> 27;
    a = a << 16;
    b = (b & 0x1f00) >> 8;
    return a + 0x6000000 + (b << 11);
}
