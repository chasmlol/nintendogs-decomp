#pragma avoid_byte strb
#include "ctx.h"

extern void func_02026bac(u8 *p);
extern u8 func_02025548(u8 *p);

static inline u8 SwapByte(u32 v, vu8 *p)
{
    u8 old;
    *(u8 *)(p) = (u8)(v);
    return old;
}

u8 func_ov003_0216f5ec(u8 *p)
{
    *(u16 *)(p + 0x152) = 0;
    SwapByte(8, (vu8 *)(p + 0x93));
    SwapByte(9, (vu8 *)(p + 0x98));
    func_02026bac(p);
    return func_02025548(p);
}
