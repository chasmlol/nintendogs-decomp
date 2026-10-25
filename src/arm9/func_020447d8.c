#include "ctx.h"

extern s32 data_0213c41c[];

#define FX_Mul(a, b) ((s32)(((s64)(a) * (b) + 0x800) >> 12))

static inline s32 FX_Mul_i(s32 a, s32 b)
{
    return (s32)(((s64)a * b + 0x800) >> 12);
}

void func_020447d8(s32 *param_1, s32 *param_2, s32 *param_3, s32 param_4)
{
    s16 uv;
    u32 cls;
    int iv;
    u32 t;
    u32 k;
    s32 v2;
    k = param_4 * 100;
    iv = *param_3 * 0x10dcd + 1;
    *param_3 = iv;
    uv = (u16)(iv & 0xfff);
    t = FX_Mul(uv, 0x19a) + 0xf33;
    *param_1 = FX_Mul_i(*(s32 *)((u8 *)data_0213c41c + (int)k), t);
    *param_2 = FX_Mul(*(s32 *)((u8 *)data_0213c41c + k + 4), *param_1);
    v2 = *param_2;
    cls = 0;
    if (v2 >= 0xccd) {
        cls = (v2 <= 0x119a) ? 1 : 2;
    }
    switch (cls) {
    case 0:
        goto L0;
    case 1:
        goto L1;
    case 2:
        goto L2;
    default:
        return;
    }
L0:
    if (v2 < 0xa66) {
        *param_2 = 0xa66;
    }
    if (*param_2 > 0xc00) {
        *param_2 = 0xc00;
    }
    return;
L1:
    if (v2 < 0xe66) {
        *param_2 = 0xe66;
    }
    return;
L2:
    if (v2 < 0x1400) {
        *param_2 = 0x1400;
    }
}
