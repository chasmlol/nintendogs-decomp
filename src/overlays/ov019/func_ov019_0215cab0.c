#include "ctx.h"

void func_ov019_0215cab0(u8 *p, u32 *d)
{
    u32 a, b, c;
    if (p == NULL) {
        return;
    }
    c = *(u32 *)(p + 0xa8);
    b = *(u32 *)(p + 0x9c);
    a = *(u32 *)(p + 0x90);
    d[0] = a;
    d[1] = b;
    d[2] = c;
}
