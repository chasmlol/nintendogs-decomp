#include "ctx.h"

#define FX_Mul(a, b) ((s32)((((s64)(a) * (s64)(b)) + 0x800) >> 12))

extern s32 data_02142bec;
extern s32 data_02142bf4;
extern s32 data_02142bf8;
extern s32 data_02142bf0;
extern s32 func_01ffdb08(s32 a);
extern void func_020c8e4c(s32 a, s32 *b);
extern s32 func_02028130(s32 a);
extern s32 func_020678b4(s32 *a, s32 *b);
extern s32 func_02067898(s32 a, s32 b);
extern s16 func_0206824c(s32 a);

void func_020c9404(s32 *param_1, s32 param_2)
{
    s32 iVar4;
    s32 iVar5;
    s32 iVar6;
    s16 sVar3;
    s32 t0;
    s32 t1;

    iVar4 = func_01ffdb08(param_2);
    func_020c8e4c(iVar4, param_1 + 3);
    iVar6 = data_02142bec;
    iVar5 = func_02028130(iVar4);
    param_1[4] = FX_Mul(iVar5, iVar6);
    iVar6 = data_02142bf4;
    iVar5 = func_02028130(iVar4);
    iVar5 = FX_Mul(iVar5, iVar6) + param_1[5];
    t1 = data_02142bf8;
    t0 = param_1[3];
    *param_1 = t0;
    param_1[1] = t1;
    param_1[2] = iVar5;
    param_1[6] = 0;
    param_1[7] = 0x1000;
    param_1[8] = 0;
    iVar6 = data_02142bf0;
    iVar4 = func_02028130(iVar4);
    iVar5 = func_020678b4(param_1 + 3, param_1);
    iVar4 = func_02067898(FX_Mul(iVar4, iVar6), iVar5);
    sVar3 = func_0206824c(iVar4);
    param_1[9] = (s32)((((s64)sVar3) * 23592960 + 0x80000) >> 20);
}
