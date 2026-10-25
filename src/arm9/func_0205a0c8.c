#pragma avoid_byte strb
#include "ctx.h"

extern void func_02025e34(u8 *p);
extern u8 func_02025bb0(u8 *p);

static inline u8 SwapByte(u32 v, vu8 *p)
{
    u8 old;
    *(u8 *)(p) = (u8)(v);
    return old;
}

u8 func_0205a0c8(u8 *p)
{
    *(s16 *)(p + 0x152) = 0x167;
    SwapByte(2, (vu8 *)(p + 0x93));
    func_02025e34(p);
    return func_02025bb0(p);
}
