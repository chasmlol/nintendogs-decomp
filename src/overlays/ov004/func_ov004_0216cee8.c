#pragma avoid_byte strb
#include "ctx.h"

extern void func_02026800(u8 *p);
extern u8 func_02025bb0(u8 *p);

static inline u8 SwapByte(u32 v, vu8 *p)
{
    u8 old;
    *(u8 *)(p) = (u8)(v);
    return old;
}

void func_ov004_0216cee8(u8 *p)
{
    u8 old;
    *(u16 *)(p + 0x152) = 0x16;
    *(u16 *)(p + 0x154) = 0xb;
    SwapByte(2, (vu8 *)(p + 0x97));
    func_02026800(p);
    func_02025bb0(p);
    old = SwapByte(1, (vu8 *)(p + 0xb2));
    return;
}
