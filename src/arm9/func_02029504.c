#pragma avoid_byte strb
#include "ctx.h"

static inline u8 SwapByte(u8 v, vu8 *p)
{
    u8 old;
    *(u8 *)(p) = (u8)(v);
    return old;
}

void func_02029504(u8 *param_1)
{
    u8 zero = 0;
    u8 r;
    SwapByte(zero, param_1 + 0xa8);
    *(u16 *)(param_1 + 0x112) = zero;
    *(u16 *)(param_1 + 0xf0) = 0x6f;
    SwapByte(zero, param_1 + 0xa5);
    r = SwapByte(zero, param_1 + 0xa3);
    return;
}
