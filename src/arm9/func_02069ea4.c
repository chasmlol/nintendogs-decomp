#include "ctx.h"

s32 func_02069ea4(void)
{
    s32 v = *(vu16 *)0x0400100a & 0x1f00;
    return (v >> 8) * 0x800 + 0x6200000;
}
