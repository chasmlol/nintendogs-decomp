#pragma avoid_byte strb
#include "ctx.h"

extern void func_02026514(u8 *p);
extern u8 func_02025bb0(u8 *p);

static inline u8 SwapByte(u32 v, vu8 *p)
{
    u8 old;
    *(u8 *)(p) = (u8)(v);
    return old;
}

u8 func_ov004_0216d3c8(u8 *p)
{
    *(u16 *)(p + 0x152) = 0x8e;
    SwapByte(5, (vu8 *)(p + 0x93));
    SwapByte(1, (vu8 *)(p + 0x98));
    func_02026514(p);
    return func_02025bb0(p);
}
