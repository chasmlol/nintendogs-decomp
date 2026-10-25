#pragma avoid_byte strb
#include "ctx.h"

void func_0202c0ec(u8 *p)
{
    u16 z;
    vu8 *q = p + 0x93;
    u8 old;
    { z = (__typeof__(z))(0); *(u8 *)(q) = (u8)(z); }
    *(u16 *)(p + 0x12e) = z;
    {
        u32 k = 0x1000;
        *(u32 *)(p + 0x454) = k;
        *(u32 *)(p + 0x450) = k;
    }
}
