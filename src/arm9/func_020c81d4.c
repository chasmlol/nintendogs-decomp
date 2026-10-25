#include "ctx.h"

#define FX_Mul(a, b) ((s32)(((s64)(a) * (b) + 0x800) >> 12))

extern void func_02027640(u8 *p, s32 *out);
extern s32 func_02027500(u8 *p);
extern s32 func_0206782c(s32 a);
extern s32 func_02067898(s32 a, s32 b);

u32 func_020c81d4(u8 *param_1, s32 *param_2, s32 param_3, s32 *param_4)
{
    s32 loc[3];
    s32 iVar10;
    s32 dx;
    s32 dy;
    s32 dz;
    s32 sum;
    s32 k;
    s32 neg;
    s32 s;
    func_02027640(param_1, loc);
    iVar10 = param_3 + func_02027500(param_1);
    dy = param_2[1] - loc[1];
    if (dy >= iVar10) {
        goto FAIL;
    }
    neg = -iVar10;
    if (dy <= neg) {
        goto FAIL;
    }
    dx = param_2[0] - loc[0];
    if (dx >= iVar10) {
        goto FAIL;
    }
    if (dx <= neg) {
        goto FAIL;
    }
    dz = param_2[2] - loc[2];
    if (dz >= iVar10) {
        goto FAIL;
    }
    if (dz <= neg) {
        goto FAIL;
    }
    sum = FX_Mul(dx, dx) + FX_Mul(dy, dy) + FX_Mul(dz, dz);
    if (sum == 0) {
        goto FAIL;
    }
    if (sum >= FX_Mul(iVar10, iVar10)) {
        goto FAIL;
    }
    s = func_0206782c(sum);
    k = func_02067898(iVar10 - s, s);
    param_4[0] = param_4[0] + FX_Mul(dx, k);
    param_4[1] = param_4[1] + FX_Mul(dy, k);
    param_4[2] = param_4[2] + FX_Mul(dz, k);
    return 1;
FAIL:
    return 0;
}
