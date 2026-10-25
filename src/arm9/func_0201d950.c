#pragma avoid_byte strb
#include "ctx.h"

extern void func_02026aac(u8 *p);
extern u8 func_02025bb0(u8 *p);

static inline u8 SwapByte(u32 v, vu8 *p)
{
    u8 old;
    *(u8 *)(p) = (u8)(v);
    return old;
}

u8 func_0201d950(u8 *p)
{
    *(u16 *)(p + 0x152) = 0x13;
    SwapByte(5, (vu8 *)(p + 0x93));
    func_02026aac(p);
    return func_02025bb0(p);
}
