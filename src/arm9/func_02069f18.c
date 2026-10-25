#include "ctx.h"
s32 func_02069f18(void)
{
    s32 b = *(vu16 *)0x04000008;
    u32 a;
    b = (b & 0x1f00) >> 8;
    a = *(vu32 *)0x04000000;
    return ((a & 0x38000000) >> 27) * 0x10000 + 0x6000000 + b * 0x800;
}
