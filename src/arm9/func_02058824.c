#pragma avoid_byte strb
#include "ctx.h"
extern void func_02026bac(u8 *p);
extern u8 func_020254ec(u8 *p);
static inline u8 SwapByte(u32 v, vu8 *p)
{
    u8 old;
    *(u8 *)(p) = (u8)(v);
    return old;
}
u8 func_02058824(u8 *p)
{
    *(u16 *)(p + 256 + 82) = 0x11d;
    SwapByte(10, p + 147);
    func_02026bac(p);
    return func_020254ec(p);
}
