#pragma avoid_byte strb
#include "ctx.h"

extern void func_0202675c(u8 *p);
extern u8 func_02025650(u8 *p);

static inline u8 SwapByte(u32 v, vu8 *p)
{
    u8 old;
    *(u8 *)(p) = (u8)(v);
    return old;
}

u8 func_ov003_0216e108(u8 *p)
{
    *(u16 *)(p + 0x152) = 0x12;
    SwapByte(2, (vu8 *)(p + 0x93));
    func_0202675c(p);
    return func_02025650(p);
}
