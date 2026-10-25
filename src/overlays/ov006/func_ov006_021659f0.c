#pragma avoid_byte strb
#include "ctx.h"

extern void func_020268dc(u8 *p);
extern u8 func_02025bb0(u8 *p);

static inline void SwapOne(u8 *p)
{
    u32 v = 1;
    *(u8 *)(p) = (u8)(v);
}

u8 func_ov006_021659f0(u8 *param_1)
{
    *(u16 *)(param_1 + 0x152) = 0x15;
    SwapOne(param_1 + 171);
    func_020268dc(param_1);
    return func_02025bb0(param_1);
}
