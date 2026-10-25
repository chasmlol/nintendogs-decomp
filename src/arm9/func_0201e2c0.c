#pragma avoid_byte strb
#include "ctx.h"
extern void func_020266f8(u8 *p);
extern u8 func_02025c5c(u8 *p);
static inline u8 SwapByte(u32 v, vu8 *p)
{
    u8 old;
    *(u8 *)(p) = (u8)(v);
    return old;
}
u8 func_0201e2c0(u8 *p)
{
    *(u16 *)(p + 0x152) = 0x16b;
    SwapByte(5, p + 147);
    func_020266f8(p);
    return func_02025c5c(p);
}
