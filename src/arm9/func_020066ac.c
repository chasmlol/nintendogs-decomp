#pragma avoid_byte strb
#include "ctx.h"

static inline u8 SwapByte(u32 v, vu8 *p)
{
    u8 old;
    *(u8 *)(p) = (u8)(v);
    return old;
}

void func_020066ac(u8 *p)
{
    u32 c = 0xff;
    SwapByte(c, (vu8 *)p);
    SwapByte(c, (vu8 *)(p + 1));
    *(u16 *)(p + 2) = 0;
}
