#include "ctx.h"

extern s32 data_02142d20;
extern s32 data_02142d24;
extern s32 data_02142d28;
extern s32 data_02142d14;
extern s32 data_02142d18;
extern s32 data_02142d1c;
extern s32 func_01ffdb08(s32 v);
extern s32 func_02027468(s32 v);
extern void func_020c8e4c(s32 a, s32 *b);
extern s32 func_02028130(s32 v);
extern s32 func_020678b4(s32 *a, s32 *b);
extern s32 func_02067898(s32 a, s32 b);
extern s16 func_0206824c(s32 a);

typedef struct { s32 w[3]; } T12;

#define FXM(a, b) ((s32)((((s64)(s32)(a)) * (s32)(b) + 0x800) >> 12))

void func_020cb2a4(s32 *param_1, s32 *param_2, s32 param_3)
{
    s32 iVar3;
    s32 iVar4;
    s32 iVar5;
    s16 sVar2;

    iVar3 = func_01ffdb08(param_3);
    iVar4 = func_02027468(iVar3);
    if (iVar4 == 0) {
        s32 iVar9;
        s32 iVar7;
        s32 iVar6;
        iVar6 = data_02142d20;
        iVar7 = data_02142d24;
        iVar9 = data_02142d28;
        iVar3 = func_01ffdb08(param_3);
        *(T12 *)param_1 = *(T12 *)param_2;
        param_1[1] = iVar9;
        func_020c8e4c(iVar3, param_1 + 3);
        iVar4 = func_02028130(iVar3);
        param_1[4] = FXM(iVar7, iVar4);
        param_1[6] = 0;
        param_1[7] = 0x1000;
        param_1[8] = 0;
        iVar3 = func_02028130(iVar3);
        iVar4 = func_020678b4(param_1 + 3, param_1);
        iVar9 = FXM(iVar6, iVar3);
        iVar3 = func_02067898(iVar9, iVar4);
        sVar2 = func_0206824c(iVar3);
        param_1[9] = (s32)(((s64)(s32)sVar2 * 0x1680000 + 0x80000) >> 20);
        return;
    }
    iVar3 = func_02027468(iVar3);
    if (iVar3 == 1) {
        s32 iVar9;
        s32 iVar7;
        s32 iVar6;
        iVar6 = data_02142d14;
        iVar7 = data_02142d18;
        iVar9 = data_02142d1c;
        iVar3 = func_01ffdb08(param_3);
        *(T12 *)param_1 = *(T12 *)param_2;
        param_1[1] = iVar9;
        func_020c8e4c(iVar3, param_1 + 3);
        iVar4 = func_02028130(iVar3);
        param_1[4] = FXM(iVar7, iVar4);
        param_1[6] = 0;
        param_1[7] = 0x1000;
        param_1[8] = 0;
        iVar3 = func_02028130(iVar3);
        iVar4 = func_020678b4(param_1 + 3, param_1);
        iVar9 = FXM(iVar6, iVar3);
        iVar3 = func_02067898(iVar9, iVar4);
        sVar2 = func_0206824c(iVar3);
        param_1[9] = (s32)(((s64)(s32)sVar2 * 0x1680000 + 0x80000) >> 20);
    }
}
