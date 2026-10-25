#pragma avoid_byte strb
#include "ctx.h"

extern void func_02026bac(u8 *p);
extern s32 func_020256a0(u8 *p);

static inline void SwapByte(u32 v, vu8 *p)
{
    *(u8 *)(p) = (u8)(v);
}

s32 func_02058ef4(u8 *param_1)
{
    *(u16 *)((u32)(param_1 + 256) + 82) = 248;
    SwapByte(10, (vu8 *)(param_1 + 147));
    SwapByte(1, (vu8 *)(param_1 + 151));
    func_02026bac(param_1);
    return func_020256a0(param_1);
}
