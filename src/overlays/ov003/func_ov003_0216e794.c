#pragma avoid_byte strb
#include "ctx.h"
extern void func_02026514(u8 *p);
extern u8 func_02025bb0(u8 *p);
static inline u8 SwapByte(u32 v, vu8 *p)
{
    u8 old;
    *(u8 *)(p) = (u8)(v);
    return old;
}
u8 func_ov003_0216e794(u8 *p)
{
    u32 w = 0x8e;
    u8 *b = p + 256;
    *(u16 *)(b + 82) = (u16)w;
    SwapByte(5, p + 147);
    func_02026514(p);
    return func_02025bb0(p);
}
