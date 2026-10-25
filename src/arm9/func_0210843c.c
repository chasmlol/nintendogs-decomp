#pragma avoid_byte strb
#include "ctx.h"

extern u8 *data_0215be48;

void func_0210843c(u32 a, u8 b, u32 c)
{
    u8 *g = data_0215be48;
    u8 *q = g + 196;
    u32 v = *(u32 *)(q + 0x268);
    q = (u8 *)((u32)q + 596);
    if (v != 0) {
        return;
    }
    *(u32 *)q = 1;
    *(u32 *)(q + 4) = 30;
    *(u32 *)(q + 8) = a;
    q[12] = b;
    *(u32 *)(q + 16) = c;
}
