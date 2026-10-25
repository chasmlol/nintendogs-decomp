#pragma avoid_byte strb
#include "ctx.h"

#define FX_Mul(a, b) ((s32)(((s64)(a) * (b) + 0x800) >> 12))

static inline u8 SwapAt(u8 *base, u32 v)
{
    u8 old;
    vu8 *p;
    p = (__typeof__(p))((u32)(base) + (175));
    *(u8 *)(p) = (u8)(v);
    return old;
}

void func_02025600(u8 *param_1)
{
    s32 a = *(s32 *)(*(u8 **)(param_1 + 0x9e8) + 8);
    *(s32 *)(param_1 + 0x920) = FX_Mul(a, 0x1cd4);
    SwapAt(param_1, 0); return;
}
