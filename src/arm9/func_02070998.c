#include "ctx.h"
extern void func_020899f4(u32 a, u32 b, u32 c);
void func_02070998(u32 *p0, u32 p1, u32 p2)
{
    if (p0[0] != 0) {
        func_020899f4(*(u8 *)(p0[0] + 0x3c), p1, p2);
    }
}
