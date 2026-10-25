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
u8 func_ov003_02164c94(u8 *p)
{
    *(u16 *)(p + 256 + 82) = 0x1e6;
    SwapByte(1, p + 151);
    func_020264f4(p);
    return func_020255a4(p);
}
