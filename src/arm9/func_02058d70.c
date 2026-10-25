#pragma avoid_byte strb
#include "ctx.h"

static inline void SwapV(u32 v, vu8 *p)
{
    *(u8 *)(p) = (u8)(v);
}

extern void func_02026bac(u8 *p);
extern u8 func_020256a0(u8 *p);

u8 func_02058d70(u8 *param_1)
{
    s32 k = 0xff;
    u8 *q = param_1 + 256;
    *(s16 *)(q + 82) = k;
    SwapV(1, param_1 + 151);
    func_02026bac(param_1);
    return func_020256a0(param_1);
}
