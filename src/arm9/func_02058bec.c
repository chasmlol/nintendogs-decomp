#pragma avoid_byte strb
#include "ctx.h"

extern void func_02026bac(u8 *p);
extern u32 func_020256a0(u8 *p);

static inline void SwapB(u32 v, u8 *p)
{
    *(u8 *)(p) = (u8)(v);
}

u32 func_02058bec(u8 *param_1)
{
    *(u16 *)(param_1 + 338) = 0x105;
    SwapB(10, param_1 + 147);
    SwapB(1, param_1 + 151);
    func_02026bac(param_1);
    return func_020256a0(param_1);
}
