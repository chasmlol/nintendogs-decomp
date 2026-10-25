#pragma avoid_byte strb
#include "ctx.h"

extern void func_02039a28(u8 *p, s32 a, s32 b, s32 c, s32 d, s32 e);

static inline u8 SwapByte(u32 v, vu8 *p)
{
    u8 old;
    *(u8 *)(p) = (u8)(v);
    return old;
}

void func_0203996c(u8 *p)
{
    SwapByte(1, (vu8 *)(p + 0x97));
    func_02039a28(p, 2, 3, 16, 12, 100);
}
