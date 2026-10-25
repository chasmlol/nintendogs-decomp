#pragma avoid_byte strb
#include "ctx.h"

static inline void SwapV(u32 v, vu8 *p)
{
    *(u8 *)(p) = (u8)(v);
}

extern void func_02026bac(u8 *p);
extern u8 func_020255a4(u8 *p);

u8 func_ov003_021680ec(u8 *param_1)
{
    s32 k = 249;
    u8 *q = param_1 + 256;
    *(s16 *)(q + 82) = k;
    SwapV(1, param_1 + 151);
    func_02026bac(param_1);
    return func_020255a4(param_1);
}
