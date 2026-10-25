#pragma avoid_byte strb
#include "ctx.h"

extern void func_02026bac(u8 *p);
extern u8 func_020256a0(u8 *p);

static inline u8 SwapByte(u32 v, vu8 *p)
{
    u8 old;
    *(u8 *)(p) = (u8)(v);
    return old;
}

u8 func_02058e0c(u8 *p)
{
    *(u16 *)(p + 0x152) = 0xfc;
    SwapByte(10, (vu8 *)(p + 0x93));
    SwapByte(1, (vu8 *)(p + 0x97));
    func_02026bac(p);
    return func_020256a0(p);
}
