#include "ctx.h"

extern u32 data_02142e3c;

typedef struct { u32 w[3]; } T3;

#define FX_Mul(a, b) ((s32)(((s64)(a) * (b) + 0x800) >> 12))
#define FX20(a, b) ((s32)(((s64)(a) * (b) + 0x80000) >> 20))

s32 func_01ffdb08(s32 a);
void func_020c8e4c(s32 a, s32 *b);
s32 func_02028130(s32 a);
s32 func_020678b4(s32 *a, s32 *b);
s32 func_02067898(s32 a, s32 b);
s32 func_0206824c(s32 a);

void func_020ccd5c(s32 *param_1, s32 *param_2, s32 param_3)
{
    s32 iVar4;
    s32 iVar5;
    s32 iVar6;
    s32 sVar3;

    iVar4 = func_01ffdb08(param_3);
    *(T3 *)param_1 = *(T3 *)param_2;
    func_020c8e4c(iVar4, param_1 + 3);
    param_1[6] = 0;
    param_1[7] = 0x1000;
    param_1[8] = 0;
    iVar6 = (s32)data_02142e3c;
    iVar4 = func_02028130(iVar4);
    iVar5 = func_020678b4(param_1 + 3, param_1);
    iVar4 = func_02067898(FX_Mul(iVar4, iVar6), iVar5);
    sVar3 = func_0206824c(iVar4);
    param_1[9] = FX20(sVar3, 0x1680000);
}
