#include "ctx.h"

extern u32 data_02159428;

extern s32 func_0206782c(s32 a);
extern s32 func_02067898(s32 a, s32 b);

#define FX_SQ(x) ((s32)((((s64)(x) * (x)) + 0x800) >> 12))
#define FX_Mul(a, b) ((s32)((((s64)(a) * (b)) + 0x800) >> 12))

u32 func_020c1a78(s32 *param_1, s32 *param_2)
{
    s32 iVar4;
    s32 iVar5;
    s32 sum;
    s32 r;

    iVar4 = (*(s32 *)(*(u8 **)&data_02159428 + 0xc)) << 1;
    sum = FX_SQ(param_1[0]) + FX_SQ(param_1[2]);
    iVar5 = iVar4 / 3;
    if (sum > FX_SQ(iVar5)) {
        r = func_0206782c(sum);
        r = func_02067898(iVar5 - r, r);
        param_2[0] = param_2[0] + FX_Mul(param_1[0], r);
        param_2[2] = param_2[2] + FX_Mul(param_1[2], r);
        return 1;
    }
    return 0;
}
