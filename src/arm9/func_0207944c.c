#include "ctx.h"
#pragma opt_lifetimes off
#pragma opt_common_subs off

void func_0207944c(u32 *param_1, u32 param_2, u32 param_3, s32 param_4)
{
    u32 k;
    u32 lim;

    param_2 = (u32)((s32)param_2 >> 12);
    param_4 = param_4 + (s32)((u32 *)param_3)[1];
    param_3 = *(u32 *)param_3;
    if ((param_3 & 0xc0000000) == 0) goto plain;
    lim = (param_3 & 0x1fff0000) >> 16;
    if ((param_3 & 0x40000000) == 0) goto b31;
    if ((param_2 & 1) == 0) goto even1;
    if (param_2 > lim) {
        param_2 = (lim >> 1) + 1;
        goto plain;
    }
    k = param_2 >> 1;
    goto pair;
even1:
    param_2 = param_2 >> 1;
    goto plain;
b31:
    k = param_2 & 3;
    if (k == 0) goto q0;
    if (param_2 > lim) {
        param_2 = k + (lim >> 2);
        goto plain;
    }
    if ((param_2 & 1) == 0) goto h1;
    if ((param_2 & 2) != 0) {
        lim = param_2 >> 2;
        k = lim + 1;
    } else {
        k = param_2 >> 2;
        lim = k + 1;
    }
    if ((param_3 & 0x20000000) == 0) goto w3;
    {
        s32 s0 = *(s16 *)(param_4 + k * 2);
        *param_1 = (s32)(s0 * 3 + *(s16 *)(param_4 + lim * 2)) >> 2;
    }
    return;
w3:
    {
        s64 t = (s64)*(s32 *)(param_4 + k * 4) << 1;
        *param_1 = (u32)((t + *(s32 *)(param_4 + k * 4) + *(s32 *)(param_4 + lim * 4)) >> 2);
    }
    return;
h1:
    k = param_2 >> 2;
    goto pair;
q0:
    param_2 = param_2 >> 2;
    goto plain;
pair:
    if ((param_3 & 0x20000000) == 0) goto w2;
    {
        s16 s1 = *(s16 *)(param_4 + k * 2);
        s16 s2 = *(s16 *)(param_4 + k * 2 + 2);
        *param_1 = (s32)(s1 + s2) >> 1;
    }
    return;
w2:
    *param_1 = (*(s32 *)(param_4 + k * 4) >> 1) + (*(s32 *)(param_4 + k * 4 + 4) >> 1);
    return;
plain:
    if ((param_3 & 0x20000000) != 0) {
        *param_1 = (u32)(s32)*(s16 *)(param_4 + param_2 * 2);
    } else {
        *param_1 = *(u32 *)(param_4 + param_2 * 4);
    }
}
