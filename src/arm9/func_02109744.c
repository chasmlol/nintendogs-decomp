#include "ctx.h"

void func_02109744(u8 *p)
{
    u8 *q = p + 0x1000;
    u32 v = *(u32 *)(q + 0xc48);
    u8 *r = p + 0x1c48;
    if (v != 4) {
        *(u32 *)(r + 4) = v;
    }
}
