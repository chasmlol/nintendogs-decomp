#pragma avoid_byte strb
#include "ctx.h"

extern void func_0202615c(u8 *p);
extern void func_02025974(u8 *p);

static inline u8 SwapByte(u32 v, vu8 *p)
{
    u8 old;
    *(u8 *)(p) = (u8)(v);
    return old;
}

void func_ov003_0216fa40(u8 *p)
{
    u8 old;
    *(s16 *)(p + 0x152) = 0x13e;
    SwapByte(10, (vu8 *)(p + 0x93));
    func_0202615c(p);
    func_02025974(p);
    old = SwapByte(2, (vu8 *)(p + 0xb2));
    return;
}
