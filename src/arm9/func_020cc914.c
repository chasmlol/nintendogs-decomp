#include "ctx.h"

extern s32 data_02142e18;
extern s32 data_02142e1c;
extern s32 data_02142e20;
extern s32 data_02142e0c;
extern s32 data_02142e10;
extern s32 data_02142e14;

extern s32 func_01ffdb08(s32 a);
extern s32 func_02027468(s32 a);
extern void func_020c8e4c(s32 a, s32 *b);
extern s32 func_02028130(s32 a);
extern s32 func_020678b4(s32 *a, s32 *b);
extern s32 func_02067898(s32 a, s32 b);
extern s32 func_0206824c(s32 a);

typedef struct { s32 a; s32 b; s32 c; } Triple;

void func_020cc914(s32 *param_1, s32 *param_2, s32 param_3)
{
    s32 iVar3;
    s32 iVar4;
    s32 iVar7;
    s32 iVar6;
    s32 iVar9;
    s64 lVar1;
    s32 sVar2;

    iVar3 = func_01ffdb08(param_3);
    iVar4 = func_02027468(iVar3);
    if (iVar4 == 0) {
        iVar6 = data_02142e18;
        iVar7 = data_02142e1c;
        iVar9 = data_02142e20;
        iVar3 = func_01ffdb08(param_3);
        *(Triple *)param_1 = *(Triple *)param_2;
        param_1[1] = iVar9;
        func_020c8e4c(iVar3, param_1 + 3);
        iVar4 = func_02028130(iVar3);
        param_1[4] = (s32)(((s64)iVar7 * iVar4 + 0x800) >> 12);
        param_1[6] = 0;
        param_1[7] = 0x1000;
        param_1[8] = 0;
        iVar3 = func_02028130(iVar3);
        iVar4 = func_020678b4(param_1 + 3, param_1);
        lVar1 = (s64)iVar6 * iVar3 + 0x800;
        iVar3 = func_02067898((s32)(lVar1 >> 12), iVar4);
        sVar2 = func_0206824c(iVar3);
        lVar1 = (s64)sVar2 * 0x1680000 + 0x80000;
        param_1[9] = (s32)(lVar1 >> 20);
        return;
    }
    iVar4 = func_02027468(iVar3);
    if (iVar4 == 1) {
        s32 kVar7;
        s32 kVar6;
        s32 kVar9;
        kVar6 = data_02142e0c;
        kVar7 = data_02142e10;
        kVar9 = data_02142e14;
        iVar3 = func_01ffdb08(param_3);
        *(Triple *)param_1 = *(Triple *)param_2;
        param_1[1] = kVar9;
        func_020c8e4c(iVar3, param_1 + 3);
        iVar4 = func_02028130(iVar3);
        param_1[4] = (s32)(((s64)kVar7 * iVar4 + 0x800) >> 12);
        param_1[6] = 0;
        param_1[7] = 0x1000;
        param_1[8] = 0;
        iVar3 = func_02028130(iVar3);
        iVar4 = func_020678b4(param_1 + 3, param_1);
        lVar1 = (s64)kVar6 * iVar3 + 0x800;
        iVar3 = func_02067898((s32)(lVar1 >> 12), iVar4);
        sVar2 = func_0206824c(iVar3);
        lVar1 = (s64)sVar2 * 0x1680000 + 0x80000;
        param_1[9] = (s32)(lVar1 >> 20);
    }
}
