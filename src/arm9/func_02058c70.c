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
u8 func_02058c70(u8 *p)
{
    *(u16 *)(p + 256 + 82) = 0x103;
    SwapByte(10, p + 147);
    SwapByte(1, p + 151);
    func_02026bac(p);
    return func_020256a0(p);
}
