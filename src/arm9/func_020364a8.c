#include "ctx.h"

extern void func_0200c498(u32 a, s32 b);

void func_020364a8(u8 *p)
{
    void (*fp)(u32, s32) = func_0200c498;
    fp(9, (s16)(*(s16 *)(p + 0x13e) - 45));
}
