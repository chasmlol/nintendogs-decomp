#include "ctx.h"

typedef struct { u32 w[3]; } T3;

extern u32 data_02142dd0;
extern u32 data_02142dd4;
extern u32 data_02142dd8;
extern u32 data_02142dc4;
extern u32 data_02142dc8;
extern u32 data_02142dcc;
extern s32 func_01ffdb08(int a);
extern s32 func_02027468(int a);
extern void func_020c8e4c(int a, void *b);
extern u32 func_02028130(int a);
extern s32 func_020678b4(void *a, void *b);
extern s32 func_02067898(u32 a, s32 b);
extern s16 func_0206824c(s32 a);

void func_020cc2a8(int *param_1, int *param_2, int param_3)
{
    s32 iVar7;
    s32 iVar3b;
    int *q1;
    int *q2;
    s32 q3;
    s32 iVar9;
    s32 iVar3c;
    s32 iVar6;
    s32 iVar3a;
    s32 iVar4;
    s64 lVar1;
    s16 sVar2;
    s32 iVar3cb;
    s32 iVar9b;
    s32 iVar6b;

    q3 = param_3;
    q1 = param_1;
    q2 = param_2;
    iVar3a = func_01ffdb08(q3);
    iVar4 = func_02027468(iVar3a);
    if (iVar4 == 0) {
        iVar6 = data_02142dd0;
        iVar9 = data_02142dd4;
        iVar7 = data_02142dd8;
        iVar3b = func_01ffdb08(q3);
        *(T3 *)q1 = *(T3 *)q2;
        q1[1] = iVar7;
        func_020c8e4c(iVar3b, q1 + 3);
        iVar4 = func_02028130(iVar3b);
        q1[4] = (s32)(((s64)iVar9 * (s64)iVar4 + 0x800) >> 12);
        q1[6] = 0;
        q1[7] = 0x1000;
        q1[8] = 0;
        iVar3c = func_02028130(iVar3b);
        iVar4 = func_020678b4(q1 + 3, q1);
        lVar1 = (s64)iVar6 * (s64)iVar3c + 0x800;
        iVar4 = func_02067898((u32)(lVar1 >> 12), iVar4);
        sVar2 = func_0206824c(iVar4);
        lVar1 = (s64)(s32)sVar2 * (u32)0x1680000;
        q1[9] = (s32)((lVar1 + 0x80000) >> 20);
        return;
    }
    iVar4 = func_02027468(iVar3a);
    if (iVar4 != 1) {
        return;
    }
    iVar6b = data_02142dc4;
    iVar9b = data_02142dc8;
    iVar7 = data_02142dcc;
    iVar3b = func_01ffdb08(q3);
    *(T3 *)q1 = *(T3 *)q2;
    q1[1] = iVar7;
    func_020c8e4c(iVar3b, q1 + 3);
    iVar4 = func_02028130(iVar3b);
    q1[4] = (s32)(((s64)iVar9b * (s64)iVar4 + 0x800) >> 12);
    q1[6] = 0;
    q1[7] = 0x1000;
    q1[8] = 0;
    iVar3cb = func_02028130(iVar3b);
    iVar4 = func_020678b4(q1 + 3, q1);
    lVar1 = (s64)iVar6b * (s64)iVar3cb + 0x800;
    iVar4 = func_02067898((u32)(lVar1 >> 12), iVar4);
    sVar2 = func_0206824c(iVar4);
    lVar1 = (s64)(s32)sVar2 * (u32)0x1680000;
    q1[9] = (s32)((lVar1 + 0x80000) >> 20);
}
