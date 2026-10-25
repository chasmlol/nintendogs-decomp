#include "ctx.h"

#define FX_Mul(a, b) ((s32)(((s64)(a) * (s64)(b) + 0x800) >> 12))

extern s32 func_02067898(s32 a, s32 b);
extern s32 func_0206782c(s32 a);

void func_020e2480(s32 *param_1, s32 *param_2, s32 *param_3, s32 param_4)
{
    s32 iVar5;

    iVar5 = 0x1000 - param_4;
    param_3[0] = FX_Mul(iVar5, param_1[0]) + FX_Mul(param_4, param_2[0]);
    param_3[1] = FX_Mul(iVar5, param_1[1]) + FX_Mul(param_4, param_2[1]);
    param_3[2] = FX_Mul(iVar5, param_1[2]) + FX_Mul(param_4, param_2[2]);
    param_3[3] = FX_Mul(iVar5, param_1[3]) + FX_Mul(param_4, param_2[3]);
    {
        s32 p0 = *(volatile s32 *)&param_3[0];
        s32 p1 = *(volatile s32 *)&param_3[1];
        s32 p2 = *(volatile s32 *)&param_3[2];
        s32 p3 = *(volatile s32 *)&param_3[3];
        iVar5 = func_02067898(0x1000, FX_Mul(p0, p0) + FX_Mul(p1, p1) + FX_Mul(p2, p2) + FX_Mul(p3, p3));
    }
    iVar5 = func_0206782c(iVar5);
    param_3[0] = FX_Mul(param_3[0], iVar5);
    param_3[1] = FX_Mul(param_3[1], iVar5);
    param_3[2] = FX_Mul(param_3[2], iVar5);
    param_3[3] = FX_Mul(param_3[3], iVar5);
}
