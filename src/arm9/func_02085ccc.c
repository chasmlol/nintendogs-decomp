#include "ctx.h"

s32 func_02085ccc(u8 *p, s32 i)
{
    u32 o8 = *(u32 *)(p + 8);
    u32 oc = *(u32 *)(p + 0xc);
    u8 *a = p + o8;
    u16 v = *(u16 *)(a + i * 6 + 2);
    u8 *b = p + oc;
    return v * 12 + (s32)b;
}
