#pragma avoid_byte strb
#include "ctx.h"

static inline void SwapV(u32 v, vu8 *p)
{
    *(u8 *)(p) = (u8)(v);
}

extern void func_020268dc(u8 *p);
extern u8 func_02025bb0(u8 *p);

u8 func_ov003_0217013c(u8 *param_1)
{
    s32 k = 21;
    u8 *q = param_1 + 256;
    *(s16 *)(q + 82) = k;
    SwapV(5, param_1 + 147);
    func_020268dc(param_1);
    return func_02025bb0(param_1);
}
