#include "ctx.h"
extern void func_02073628(u32 a, u32 b, u32 c);
void func_02070ac8(u32 *p0, u32 p1, u32 p2)
{
    u8 *o = (u8 *)p0[0];
    if (o == NULL) {
        return;
    }
    if (*(u8 *)(o + 0x2c) != 2) {
        func_02073628((u32)(o + 0x1c), p1 << 8, p2);
    }
}
