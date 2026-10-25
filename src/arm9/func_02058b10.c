#pragma avoid_byte strb
#include "ctx.h"

extern void func_02026bac(u8 *p);
extern u8 func_020256a0(u8 *p);

static inline u8 SwapByte(u32 v, vu8 *p)
{
    u8 old;
    *(u8 *)(p) = (u8)(v);
    return old;
}

u8 func_02058b10(u8 *param_1)
{
    vu8 *q = (vu8 *)(param_1 + 0x97);
    *(s16 *)(param_1 + 0x152) = 0x109;
    SwapByte(1, q);
    func_02026bac(param_1);
    return func_020256a0(param_1);
}
