#include "ctx.h"

extern void func_020c7434(u32 a, u32 b, u32 c, u32 d);

void func_020e8818(u8 *p, u32 b)
{
    u8 *q = *(u8 **)(p + 0x214);
    func_020c7434((u32)p, b, *(u32 *)(*(u8 **)q + 8), 0);
}
