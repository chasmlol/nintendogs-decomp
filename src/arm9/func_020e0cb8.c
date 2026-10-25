#pragma avoid_byte strb
#include "ctx.h"
#pragma opt_loop_invariants off
#pragma opt_common_subs off
#pragma opt_lifetimes off

extern s32 func_02067898(s32 a, s32 b);

#define FX_Mul(a, b) ((s32)(((s64)(a) * (b) + 0x800) >> 12))

void func_020e0cb8(u8 *param_1, s32 param_2, u32 param_3, s32 param_4, s16 param_5, s32 param_6)
{
    s32 from;
    s32 max;
    s32 mode;
    u32 i;
    s32 cur;
    u8 *p;
    s32 val;
    u32 count;
    s32 v;
    u8 *buf;
    s32 start;

    mode = param_6;
    v = param_5;
    start = param_2;
    max = (mode == 1) ? 0x7fff : 0xff;
    count = param_3 - start;
    from = param_4;
    buf = param_1;
    v = func_02067898(func_02067898((v - from) << 12, count << 12), max << 12);
    cur = (from / max) << 12;
    i = 0;
    if (i < count) {
        p = buf + start;
        do {
            if (mode == 1) {
                val = ((s16 *)(buf + start * 2))[i] << 12;
                ((s16 *)(buf + start * 2))[i] = FX_Mul(val, cur) >> 12;
            } else {
                val = *(s8 *)p << 12;
                *p = FX_Mul(val, cur) >> 12;
            }
            i++;
            cur += v;
            p++;
        } while (i < count);
    }
}
