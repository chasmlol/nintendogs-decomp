#include "ctx.h"

u32 func_02069ef8(void)
{
    s32 v = *(vu16 *)0x04001008 & 0x1f00;
    return (v >> 8) * 0x800 + 0x6200000;
}
