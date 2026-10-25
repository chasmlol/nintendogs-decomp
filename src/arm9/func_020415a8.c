#pragma avoid_byte strb
#include "ctx.h"

static inline u8 SwapByte(u32 v, vu8 *p)
{
    u8 old;
    *(u8 *)(p) = (u8)(v);
    return old;
}

void func_020415a8(u8 *param_1)
{
    u32 one;
    u16 big;
    u16 zero;
    u8 *q;

    one = 1;
    q = param_1 + 210;
    SwapByte(one, (vu8 *)q);
    big = 0x2710;
    zero = 0;
    *(u16 *)(*(u8 **)(param_1 + 0x9e8) + 24) = big;
    SwapByte(one, (vu8 *)q);
    *(u16 *)(*(u8 **)(param_1 + 0x9e8) + 28) = zero;
    SwapByte(one, (vu8 *)q);
    *(u16 *)(*(u8 **)(param_1 + 0x9e8) + 26) = big;
    SwapByte(one, (vu8 *)q);
    *(u16 *)(*(u8 **)(param_1 + 0x9e8) + 34) = zero;
    SwapByte(one, (vu8 *)q);
    *(u16 *)(*(u8 **)(param_1 + 0x9e8) + 36) = zero;
}
