#pragma avoid_byte strb
#include "ctx.h"

static inline u8 SwapByte(u32 v, vu8 *p)
{
    u8 old;
    *(u8 *)(p) = (u8)(v);
    return old;
}

void func_0208f840(void *p, u8 v)
{
    SwapByte(v, (vu8 *)((u8 *)p + 0x23)); return;
}
