#pragma avoid_byte strb
#include "ctx.h"
extern void func_0202675c(u8 *p);
extern u8 func_02025bb0(u8 *p);
static inline u8 SwapByte(u32 v, vu8 *p)
{
    u8 old;
    *(u8 *)(p) = (u8)(v);
    return old;
}
u8 func_ov004_0216d2cc(u8 *p)
{
    u32 w = 0x12;
    u8 *b = p + 256;
    *(u16 *)(b + 82) = (u16)w;
    SwapByte(1, p + 152);
    func_0202675c(p);
    return func_02025bb0(p);
}
