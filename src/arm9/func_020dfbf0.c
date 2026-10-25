#pragma avoid_byte strb
#include "ctx.h"

extern u32 data_02144a74;
extern u32 data_0215b228;

static inline u8 SwapByte(u32 v, vu8 *p)
{
    u8 old;
    *(u8 *)(p) = (u8)(v);
    return old;
}

void func_020dfbf0(void)
{
    u32 c;
    vu8 *p1;
    vu8 *p2;
    p1 = (vu8 *)&data_02144a74;
    p2 = (vu8 *)&data_0215b228;
    c = 31;
    SwapByte(1, p1);
    SwapByte(c, p2); return;
}
