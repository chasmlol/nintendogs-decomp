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
u8 func_0205a2b8(u8 *p)
{
    u8 *c = p + 147;
    u32 one = 4;
    *(u16 *)(p + 256 + 82) = 0;
    SwapByte(one, c);
    func_02026bac(p);
    return func_02025548(p);
}
