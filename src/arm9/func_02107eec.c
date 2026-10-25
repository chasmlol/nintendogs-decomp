#include "ctx.h"

extern u32 data_0215be48;

u32 func_02107eec(void)
{
    u32 p;
    u32 r;
    u8 *q;
    p = data_0215be48;
    r = 0;
    if (*(u32 *)(p + 0xb8) == 2) {
        q = (u8 *)p + 0x1000;
        r = *(u32 *)(q + 0xd18);
    }
    return r;
}
