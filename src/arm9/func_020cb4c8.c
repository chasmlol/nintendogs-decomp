#include "ctx.h"
typedef struct { s32 w[3]; } T3;
#define FX(a, b) ((s32)(((s64)(a) * (b) + 0x800) >> 12))

extern s32 data_02142d38;
extern s32 data_02142d3c;
extern s32 data_02142d40;
extern s32 data_02142d2c;
extern s32 data_02142d30;
extern s32 data_02142d34;
extern s32 func_01ffdb08(s32 a);
extern s32 func_02027468(s32 a);
extern void func_020c8e4c(s32 a, s32 *b);
extern s32 func_02028130(s32 a);
extern s32 func_020678b4(s32 *a, s32 *b);
extern s32 func_02067898(s32 a, s32 b);
extern s16 func_0206824c(s32 a);

void func_020cb4c8(s32 *param_1, s32 *param_2, s32 param_3)
{
    s32 iVar9;
    s32 iVar7;
    s32 iVar6;
    s32 iVar3;
    s32 iVar4;
    s16 sVar2;

    iVar3 = func_01ffdb08(param_3);
    iVar4 = func_02027468(iVar3);
    if (iVar4 == 0) {
        iVar6 = data_02142d38;
        iVar7 = data_02142d3c;
        iVar9 = data_02142d40;
        iVar3 = func_01ffdb08(param_3);
        *(T3 *)param_1 = *(T3 *)param_2;
        param_1[1] = iVar9;
        func_020c8e4c(iVar3, param_1 + 3);
        iVar4 = func_02028130(iVar3);
        param_1[4] = FX(iVar7, iVar4);
        param_1[6] = 0;
        param_1[7] = 0x1000;
        param_1[8] = 0;
        iVar3 = func_02028130(iVar3);
        iVar4 = func_020678b4(param_1 + 3, param_1);
        iVar3 = func_02067898(FX(iVar6, iVar3), iVar4);
        sVar2 = func_0206824c(iVar3);
        param_1[9] = (s32)((((s64)(s32)sVar2 * 0x1680000u) + 0x80000) >> 20);
        return;
    }
    iVar3 = func_02027468(iVar3);
    if (iVar3 != 1) {
        return;
    }
    {
        s32 iVar9b;
        s32 iVar7b;
        s32 iVar6b;
        iVar6b = data_02142d2c;
        iVar7b = data_02142d30;
        iVar9b = data_02142d34;
        iVar3 = func_01ffdb08(param_3);
        *(T3 *)param_1 = *(T3 *)param_2;
        param_1[1] = iVar9b;
        func_020c8e4c(iVar3, param_1 + 3);
        iVar4 = func_02028130(iVar3);
        param_1[4] = FX(iVar7b, iVar4);
        param_1[6] = 0;
        param_1[7] = 0x1000;
        param_1[8] = 0;
        iVar3 = func_02028130(iVar3);
        iVar4 = func_020678b4(param_1 + 3, param_1);
        iVar3 = func_02067898(FX(iVar6b, iVar3), iVar4);
        sVar2 = func_0206824c(iVar3);
        param_1[9] = (s32)((((s64)(s32)sVar2 * 0x1680000u) + 0x80000) >> 20);
    }
}
