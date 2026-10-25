#pragma avoid_byte strb
#include "ctx.h"

extern void func_02039a28(u32 a, u32 b, u32 c, u32 d, u32 e, u32 f);

static inline u8 SwapByte(u32 v, vu8 *p)
{
    u8 old;
    *(u8 *)(p) = (u8)(v);
    return old;
}

void func_020398e4(u8 *p)
{
    u32 two;
    u8 *q;
    two = 2;
    q = p + 151;
    SwapByte(two, (vu8 *)q);
    func_02039a28((u32)p, two, 0x12, 0x14, 3, 200);
}
