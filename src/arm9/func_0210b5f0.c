#include "ctx.h"

void func_0210b5f0(u8 *p, u32 *d, u32 v)
{
    u16 n = *(u16 *)(p + 6);
    s32 i = 0;
    if ((s32)n <= 0) {
        return;
    }
    do {
        i = i + 1;
        *d = v;
        d = d + 4;
    } while (i < (s32)n);
}
