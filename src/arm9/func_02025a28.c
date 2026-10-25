#pragma avoid_byte strb
#include "ctx.h"

static inline u8 SwapFlag(u8 *base)
{
    u32 t;
    u8 v;
    t = (__typeof__(t))((u32)(base) + (175));
    v = 1;
    *(u8 *)(t) = (u8)(v);
    return v;
}

void func_02025a28(u8 *param_1)
{
    s32 a = *(s32 *)(*(u8 **)(param_1 + 0x9e8) + 8);
    *(s32 *)(param_1 + 0x920) = (s32)(((s64)a * 0x19a0 + 0x800) >> 12);
    SwapFlag(param_1); return;
}
