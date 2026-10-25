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

u8 func_02058bb4(u8 *p)
{
    *(s16 *)(p + 0x152) = 0x106;
    SwapByte(1, (vu8 *)(p + 0x97));
    func_02026bac(p);
    return func_020256a0(p);
}
