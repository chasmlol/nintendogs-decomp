#pragma avoid_byte strb
#include "ctx.h"

static inline u8 SwapByte(u32 v, vu8 *p)
{
    u8 old;
    *(u8 *)(p) = (u8)(v);
    return old;
}

u8 func_0202813c(u8 *param_1)
{
    u8 *a = *(u8 **)(param_1 + 0x9e8);
    u8 *s = param_1 + 210;
    u8 *b;
    u8 *c;
    SwapByte(1, s);
    b = a + 116;
    c = b + 1;
    SwapByte(b[1] + 12, c);
top:
    if (b[1] < 24) {
        goto done;
    }
    SwapByte(*c - 24, c);
    goto top;
done:
    return b[1];
}
