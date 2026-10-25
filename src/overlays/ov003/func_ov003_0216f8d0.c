#pragma avoid_byte strb
#include "ctx.h"

extern void func_0202675c(u8 *p);
extern void func_02025974(u8 *p);

static inline u8 SwapByte(u32 v, vu8 *p)
{
    u8 old;
    *(u8 *)(p) = (u8)(v);
    return old;
}

void func_ov003_0216f8d0(u8 *p)
{
    u8 old;
    *(s16 *)(p + 0x152) = 0x141;
    SwapByte(7, (vu8 *)(p + 0x93));
    SwapByte(5, (vu8 *)(p + 0x98));
    SwapByte(1, (vu8 *)(p + 0xab));
    func_0202675c(p);
    func_02025974(p);
    old = SwapByte(2, (vu8 *)(p + 0xb2));
    return;
}
