#pragma avoid_byte strb
#include "ctx.h"
#pragma opt_propagation off
#pragma opt_common_subs off

extern u32 func_02086498(u32 a, u32 b, u32 c, u32 d, u32 e, u32 f);

u32 func_020863e4(int param_1, u32 param_2)
{
    int pp;
    s32 i;
    u32 acc;
    u8 *base;
    u32 lo;
    s32 cnt;
    pp = (__typeof__(pp))(param_1);
    acc = 0;
    i = 0;
    cnt = *(u16 *)(pp + 0x1a);
    if (cnt > 0) {
        do {
            base = *(u8 **)(pp + 8);
            lo = *(u16 *)(base + (u32)i * 4);
            if (lo <= param_2) {
                if (param_2 <= *(u16 *)(base + (u32)i * 4 + 2)) {
                    return acc + param_2 - lo;
                }
            }
            acc = acc + (*(u16 *)(base + (u32)i * 4 + 2) - *(u16 *)(base + (u32)i * 4) + 1);
            i++;
        } while (i < cnt);
    }
    return func_02086498(param_2, 0, *(u16 *)(pp + 0x18) - 1, *(int *)(pp + 4), (u16)acc,
                         *(u16 *)(pp + 0x12));
}
