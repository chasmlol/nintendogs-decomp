#include "ctx.h"

void func_ov019_0215cad4(u8 *p, u32 *dst)
{
    u32 c;
    u32 b;
    u32 a;
    if (p == NULL) {
        return;
    }
    c = *(u32 *)(p + 0xa4);
    b = *(u32 *)(p + 0x98);
    a = *(u32 *)(p + 0x8c);
    dst[0] = a;
    dst[1] = b;
    dst[2] = c;
}
