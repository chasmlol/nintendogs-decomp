#pragma avoid_byte strb
#include "ctx.h"

static inline void SwapV(u32 v, vu8 *p)
{
    *(u8 *)(p) = (u8)(v);
}

extern void func_0202675c(u8 *p);
extern u8 func_02025bb0(u8 *p);

u8 func_ov006_02165a8c(u8 *param_1)
{
    s32 k = 18;
    u8 *q = param_1 + 256;
    *(s16 *)(q + 82) = k;
    SwapV(1, param_1 + 171);
    func_0202675c(param_1);
    return func_02025bb0(param_1);
}
