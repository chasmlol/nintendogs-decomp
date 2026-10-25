#pragma avoid_byte strb
#include "ctx.h"
extern void func_02026c24(u8 *p);
extern u8 func_02025548(u8 *p);
static inline u8 SwapByte(u32 v, vu8 *p)
{
    u8 old;
    *(u8 *)(p) = (u8)(v);
    return old;
}
u8 func_02020560(u8 *p)
{
    *(u16 *)(p + 0x152) = 0x6a;
    SwapByte(10, p + 147);
    func_02026c24(p);
    return func_02025548(p);
}
