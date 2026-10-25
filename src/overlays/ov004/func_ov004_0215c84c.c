#pragma avoid_byte strb
#include "ctx.h"

extern u8 *data_ov004_02170320;

static inline u8 SwapByte(u32 v, vu8 *p)
{
    u8 old;
    *(u8 *)(p) = (u8)(v);
    return old;
}

void func_ov004_0215c84c(void)
{
    u8 *g = data_ov004_02170320;
    u32 r = (s8)*g;
    if (r == 2) {
        u8 *q = g + 0x3000;
        r = SwapByte(1, (vu8 *)(q + 0x6cc));
    }
    return;
}
