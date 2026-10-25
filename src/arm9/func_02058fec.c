#pragma avoid_byte strb
#include "ctx.h"
extern void func_02026494(u8 *p);
extern u8 func_02025548(u8 *p);
static inline u8 SwapByte(u32 v, vu8 *p)
{
    u8 old;
    *(u8 *)(p) = (u8)(v);
    return old;
}
u8 func_02058fec(u8 *p)
{
    *(u16 *)(p + 256 + 82) = 8;
    SwapByte(2, p + 147);
    SwapByte(1, p + 151);
    func_02026494(p);
    return func_02025548(p);
}
