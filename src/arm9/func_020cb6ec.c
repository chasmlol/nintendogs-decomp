#include "ctx.h"

#define FX_Mul(a, b) ((s32)((((s64)(a) * (s64)(b)) + 0x800) >> 12))

typedef struct {
    u32 w[3];
} T3;

extern s32 data_02142d44;
extern s32 data_02142d48;
extern s32 data_02142d4c;
extern s32 func_01ffdb08(s32 a);
extern void func_020c8e4c(s32 a, s32 *b);
extern s32 func_02028130(s32 a);
extern s32 func_020678b4(s32 *a, s32 *b);
extern s32 func_02067898(s32 a, s32 b);
extern s16 func_0206824c(s32 a);

void func_020cb6ec(s32 *param_1, s32 *param_2, s32 param_3)
{
    s32 iVar7;
    s32 iVar6;
    s32 iVar8;
    s32 iVar3;
    s32 iVar4;
    s16 sVar2;

    iVar6 = data_02142d44;
    iVar8 = data_02142d48;
    iVar7 = data_02142d4c;
    iVar3 = func_01ffdb08(param_3);
    *(T3 *)param_1 = *(T3 *)param_2;
    param_1[1] = iVar7;
    func_020c8e4c(iVar3, param_1 + 3);
    iVar4 = func_02028130(iVar3);
    param_1[4] = FX_Mul(iVar8, iVar4);
    param_1[6] = 0;
    param_1[7] = 0x1000;
    param_1[8] = 0;
    iVar3 = func_02028130(iVar3);
    iVar4 = func_020678b4(param_1 + 3, param_1);
    iVar3 = func_02067898(FX_Mul(iVar6, iVar3), iVar4);
    sVar2 = func_0206824c(iVar3);
    param_1[9] = (s32)((((s64)sVar2) * 23592960 + 0x80000) >> 20);
}
