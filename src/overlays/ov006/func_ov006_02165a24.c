#pragma avoid_byte strb
#include "ctx.h"
extern void func_02026938(u8 *p);
extern u8 func_02025bb0(u8 *p);
static inline u8 SwapByte(u32 v, vu8 *p)
{
    u8 old;
    *(u8 *)(p) = (u8)(v);
    return old;
}
u8 func_ov006_02165a24(u8 *p)
{
    u32 w = 0x14;
    u8 *b = p + 256;
    *(u16 *)(b + 82) = (u16)w;
    SwapByte(1, p + 171);
    func_02026938(p);
    return func_02025bb0(p);
}
