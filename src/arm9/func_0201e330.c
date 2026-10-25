#pragma avoid_byte strb
#include "ctx.h"

extern void func_02025e34(u8 *p);
extern u8 func_02025c5c(u8 *p);

static inline u8 SwapByte(u32 v, vu8 *p)
{
    u8 old;
    *(u8 *)(p) = (u8)(v);
    return old;
}

u8 func_0201e330(u8 *param_1)
{
    vu8 *q = (vu8 *)(param_1 + 0x93);
    *(u16 *)(param_1 + 0x152) = 360;
    SwapByte(5, q);
    func_02025e34(param_1);
    return func_02025c5c(param_1);
}
