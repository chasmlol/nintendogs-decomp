#pragma avoid_byte strb
#include "ctx.h"

static inline u8 SwapByte(u32 v, vu8 *p)
{
    u8 old;
    *(u8 *)(p) = (u8)(v);
    return old;
}

void func_02026fc8(u8 *p)
{
    SwapByte(0, (vu8 *)(p + 0xaa)); return;
}
