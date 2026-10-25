#pragma avoid_byte strb
#include "ctx.h"

static inline u8 SwapByte(u32 v, vu8 *p)
{
    u8 old;
    *(u8 *)(p) = (u8)(v);
    return old;
}

void func_02028184(int param_1)
{
    vu8 *ptr = (vu8 *)(param_1 + 0xd2);
    SwapByte(1, ptr); return;
}
