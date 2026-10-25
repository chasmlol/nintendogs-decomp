#pragma avoid_byte strb
#include "ctx.h"

extern s32 func_02028124(u8 *p);
extern u8 func_02025bb0(u8 *p);

#define FX_Mul(a, b) ((u32)((((s64)(a) * (b)) + 0x800) >> 12))

static inline void SwapByte(u32 v, vu8 *p)
{
    *(u8 *)(p) = (u8)(v);
}

u8 func_ov003_0216ef6c(u8 *p)
{
    s32 x;

    *(u16 *)(p + 0x152) = 0x8e;
    SwapByte(1, p + 0x98);
    x = func_02028124(p);
    *(u32 *)(p + 0x240) = FX_Mul(x, -76);
    *(u32 *)(p + 0x244) = 0x111;
    *(u32 *)(p + 0x24c) = 0xb36;
    return func_02025bb0(p);
}
