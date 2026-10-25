#pragma avoid_byte strb
#include "ctx.h"
extern void func_02026bac(u8 *p);
extern u8 func_020255a4(u8 *p);
static inline u8 SwapByte(u32 v, vu8 *p)
{
    u8 old;
    *(u8 *)(p) = (u8)(v);
    return old;
}
u8 func_ov003_02168004(u8 *p)
{
    u32 w = 0xfd;
    u8 *b = p + 256;
    *(u16 *)(b + 82) = (u16)w;
    SwapByte(1, p + 151);
    func_02026bac(p);
    return func_020255a4(p);
}
