#pragma avoid_byte strb
#include "ctx.h"

static inline u8 SwapByte(u32 v, vu8 *p)
{
    u8 old;
    *(u8 *)(p) = (u8)(v);
    return old;
}

extern void func_0202675c(u8 *p);
extern u8 func_02025600(u8 *p);

u8 func_ov003_02166134(u8 *param_1)
{
    *(u16 *)(param_1 + 0x152) = 0x12;
    SwapByte(5, (vu8 *)(param_1 + 0x93));
    func_0202675c(param_1);
    return func_02025600(param_1);
}
