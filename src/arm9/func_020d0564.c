#include "ctx.h"

extern s64 data_02126728;
extern s32 func_02006a30(s32 *a, s32 *b);
extern s32 func_020ce77c(s32 a, s32 b, s32 c, s32 d);

typedef struct { s32 a, b, c; } Vec3;

#define FX_Mul(a, b) ((s32)(((s64)(a) * (b) + 0x800) >> 12))

void func_020d0564(s32 *param_1, s32 *param_2, s32 *param_3, s32 param_4, s32 param_5, s32 param_6)
{
    s64 lVar1;
    s32 iVar3;

    iVar3 = 0;
    param_1[0] = param_2[0] + FX_Mul(param_4, param_3[0] - param_2[0]);
    param_1[1] = param_2[1] + FX_Mul(param_4, param_3[1] - param_2[1]);
    param_1[2] = param_2[2] + FX_Mul(param_4, param_3[2] - param_2[2]);
    param_1[3] = param_2[3] + FX_Mul(param_5, param_3[3] - param_2[3]);
    param_1[4] = param_2[4] + FX_Mul(param_5, param_3[4] - param_2[4]);
    param_1[5] = param_2[5] + FX_Mul(param_5, param_3[5] - param_2[5]);
    param_1[6] = param_2[6] + FX_Mul(param_5, param_3[6] - param_2[6]);
    param_1[7] = param_2[7] + FX_Mul(param_5, param_3[7] - param_2[7]);
    param_1[8] = param_2[8] + FX_Mul(param_5, param_3[8] - param_2[8]);
    lVar1 = (s64)param_1[6] * param_1[6] + (s64)param_1[7] * param_1[7] + (s64)param_1[8] * param_1[8];
    if (lVar1 >= data_02126728) {
        iVar3 = func_02006a30(param_1 + 6, param_1 + 6);
    }
    if (iVar3 == 0) {
        *(Vec3 *)(param_1 + 6) = *(Vec3 *)(param_3 + 6);
    }
    param_1[9] = func_020ce77c(param_2[9], param_3[9], param_6, 0x17);
}
