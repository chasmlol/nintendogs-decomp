#pragma avoid_byte strb
#include "ctx.h"

static inline u8 SwapByte(u32 v, vu8 *p)
{
    u8 old;
    *(u8 *)(p) = (u8)(v);
    return old;
}

void func_02025650(u8 *param_1)
{
    s32 x;
    u32 q;
    x = *(s32 *)(*(u8 **)(param_1 + 0x9e8) + 8);
    *(u32 *)(param_1 + 0x920) = (u32)(((s64)x * 9020 + 0x800) >> 12);
    q = (__typeof__(q))((u32)(param_1) + (175));
    SwapByte(0, (vu8 *)q); return;
}
