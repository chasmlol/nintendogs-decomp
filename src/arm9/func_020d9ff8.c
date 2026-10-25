#include "ctx.h"

extern void func_020c7434(u8 *a, u32 b, u32 c, u32 d);

void func_020d9ff8(u8 *p, u32 y)
{
    void (*fp)(u8 *, u32, u32, u32) = func_020c7434;
    fp(p, y, *(u32 *)(*(u8 **)(*(u8 **)(p + 0x214)) + 8), 0);
}
