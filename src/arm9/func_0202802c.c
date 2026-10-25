#pragma avoid_byte strb
#include "ctx.h"
#pragma opt_propagation off
#pragma opt_common_subs off

static inline u8 SwapByte(u32 v, vu8 *p)
{
    u8 old;
    *(u8 *)(p) = (u8)(v);
    return old;
}

void func_0202802c(u8 *param_1, u32 param_2, s32 param_3)
{
    u8 *base;
    s32 idx = (s16)param_2;
    s32 c;
    s32 lo;
    s32 hi;
    s16 sv = *(s16 *)(*(u8 **)(param_1 + 0x9e8) + idx * 2 + 80);
    s32 v;
    SwapByte(1, param_1 + 210);
    v = param_3 + sv;
    base = *(u8 * volatile *)(param_1 + 0x9e8);
    c = *(s16 *)(base + idx * 2 + 60);
    lo = c - 5000;
    hi = c + 5000;
    if (v < lo) {
        v = lo;
    }
    if (v > hi) {
        v = hi;
    }
    if (v < 0) {
        v = 0;
    }
    if (v > 10000) {
        v = 10000;
    }
    *(s16 *)(base + idx * 2 + 80) = (s16)v;
}
