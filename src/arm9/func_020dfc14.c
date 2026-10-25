#pragma avoid_byte strb
#include "ctx.h"

extern u8 data_02144a74;
extern u8 data_0215b228;

static inline u8 SwapByte(u32 v, vu8 *p)
{
    u8 old;
    *(u8 *)(p) = (u8)(v);
    return old;
}

void func_020dfc14(void)
{
    u32 k;
    vu8 *a = (vu8 *)&data_02144a74;
    vu8 *b = (vu8 *)&data_0215b228;
    k = 255;
    SwapByte(1, a);
    SwapByte(k, b); return;
}
