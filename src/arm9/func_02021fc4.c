#pragma avoid_byte strb
#include "ctx.h"

extern u8 *data_0214f464;

static inline u8 SwapByte(u32 v, vu8 *p)
{
    u8 old;
    *(u8 *)(p) = (u8)(v);
    return old;
}

void func_02021fc4(void)
{
    SwapByte(0, data_0214f464 + 11); return;
}
