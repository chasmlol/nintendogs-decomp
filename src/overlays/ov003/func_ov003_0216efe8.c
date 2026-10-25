#pragma avoid_byte strb
#include "ctx.h"
extern void func_02026638(u8 *p);
extern u8 func_02025bb0(u8 *p);
static inline u8 SwapByte(u32 v, vu8 *p)
{
    u8 old;
    *(u8 *)(p) = (u8)(v);
    return old;
}
u8 func_ov003_0216efe8(u8 *p)
{
    *(u16 *)(p + 256 + 82) = 0x10;
    SwapByte(5, p + 147);
    SwapByte(2, p + 151);
    func_02026638(p);
    return func_02025bb0(p);
}
