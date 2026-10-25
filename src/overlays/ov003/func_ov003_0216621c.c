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
u8 func_ov003_0216621c(u8 *p)
{
    u32 w = 0x115;
    u8 *b = p + 256;
    *(u16 *)(b + 82) = (u16)w;
    SwapByte(4, p + 151);
    func_020264f4(p);
    return func_020255a4(p);
}
