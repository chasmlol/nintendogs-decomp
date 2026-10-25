#pragma avoid_byte strb
#include "ctx.h"

extern void func_02026c24(u8 *p);
extern u8 func_02025548(u8 *p);

static inline u8 SwapByte(u32 v, vu8 *p)
{
    u8 old;
    *(u8 *)(p) = (u8)(v);
    return old;
}

u8 func_0202052c(u8 *param_1)
{
    vu8 *q = (vu8 *)(param_1 + 0x93);
    *(u16 *)(param_1 + 0x152) = 107;
    SwapByte(10, q);
    func_02026c24(param_1);
    return func_02025548(param_1);
}
