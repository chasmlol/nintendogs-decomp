#pragma avoid_byte strb
#include "ctx.h"
extern void func_020264f4(u8 *p);
extern u8 func_020255a4(u8 *p);
static inline u8 SwapByte(u32 v, vu8 *p)
{
    u8 old;
    *(u8 *)(p) = (u8)(v);
    return old;
}
u8 func_ov005_02165878(u8 *p)
{
    u32 w = 0x2e;
    u8 *b = p + 256;
    *(u16 *)(b + 82) = (u16)w;
    SwapByte(5, p + 147);
    func_020264f4(p);
    return func_020255a4(p);
}
