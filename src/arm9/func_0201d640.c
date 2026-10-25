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

void func_0201d640(u8 *p)
{
    u8 old;
    *(u16 *)(p + 0x152) = 0x13;
    func_02026aac(p);
    func_02025bb0(p);
    SwapByte(*(u8 *)(p + 0xb5) | 2, (vu8 *)(p + 0xb5));
    old = SwapByte(*(u8 *)(p + 0xb5) | 4, (vu8 *)(p + 0xb5));
    return;
}
