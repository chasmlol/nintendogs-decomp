#include "ctx.h"

void func_02069f94(u16 *p, u32 a, s32 b)
{
    if (b < 0) {
        a = a | 192;
        p[0] = (u16)a;
        p[2] = (u16)(-b);
    } else {
        a = a | 128;
        p[0] = (u16)a;
        p[2] = (u16)b;
    }
}
