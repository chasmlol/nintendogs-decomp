#pragma avoid_byte strb
#include "ctx.h"
#define FX_Mul(a, b) ((s32)(((s64)(a) * (b) + 0x800) >> 12))
static inline u8 SwapAt(u8 *base)
{
    u8 *p;
    u32 v;
    u8 old;
    p = (__typeof__(p))((u32)(base) + (175));
    v = 1;
    *(u8 *)(p) = (u8)(v);
    return old;
}
void func_02025434(u8 *o)
{
    s32 v = *(s32 *)(*(u8 **)(o + 0x9e8) + 8);
    *(s32 *)(o + 0x920) = FX_Mul(v, 2706);
    SwapAt(o); return;
}
