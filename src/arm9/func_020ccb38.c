#include "ctx.h"

typedef struct { u32 a; u32 b; u32 c; } Tri3;

extern s32 data_02142e30;
extern s32 data_02142e34;
extern s32 data_02142e38;
extern s32 data_02142e24;
extern s32 data_02142e28;
extern s32 data_02142e2c;
extern s32 func_01ffdb08(s32 v);
extern s32 func_02027468(s32 v);
extern void func_020c8e4c(s32 a, s32 *b);
extern s32 func_02028130(s32 v);
extern s32 func_020678b4(s32 *a, s32 *b);
extern s32 func_02067898(s32 a, s32 b);
extern s16 func_0206824c(s32 a);

#define FXM(a, b) ((s32)((((s64)(a) * (b)) + 0x800) >> 12))

void func_020ccb38(s32 *param_1, s32 *param_2, s32 param_3)
{
    s32 iVar3;
    s32 iVar4;
    s32 iVar9;
    s16 sVar2;

    iVar3 = func_01ffdb08(param_3);
    iVar4 = func_02027468(iVar3);
    if (iVar4 == 0) {
        s32 kB;
        s32 kA;
        s32 kC;
        kA = data_02142e30;
        kB = data_02142e34;
        kC = data_02142e38;
        iVar3 = func_01ffdb08(param_3);
        *(Tri3 *)param_1 = *(Tri3 *)param_2;
        param_1[1] = kC;
        func_020c8e4c(iVar3, param_1 + 3);
        iVar4 = func_02028130(iVar3);
        param_1[4] = FXM(kB, iVar4);
        param_1[6] = 0;
        param_1[7] = 0x1000;
        param_1[8] = 0;
        iVar3 = func_02028130(iVar3);
        iVar4 = func_020678b4(param_1 + 3, param_1);
        iVar9 = FXM(kA, iVar3);
        iVar3 = func_02067898(iVar9, iVar4);
        sVar2 = func_0206824c(iVar3);
        param_1[9] = (s32)(((s64)(s32)sVar2 * 0x1680000 + 0x80000) >> 20);
        return;
    }
    iVar3 = func_02027468(iVar3);
    if (iVar3 == 1) {
        s32 kB;
        s32 kA;
        s32 kC;
        kA = data_02142e24;
        kB = data_02142e28;
        kC = data_02142e2c;
        iVar3 = func_01ffdb08(param_3);
        *(Tri3 *)param_1 = *(Tri3 *)param_2;
        param_1[1] = kC;
        func_020c8e4c(iVar3, param_1 + 3);
        iVar4 = func_02028130(iVar3);
        param_1[4] = FXM(kB, iVar4);
        param_1[6] = 0;
        param_1[7] = 0x1000;
        param_1[8] = 0;
        iVar3 = func_02028130(iVar3);
        iVar4 = func_020678b4(param_1 + 3, param_1);
        iVar9 = FXM(kA, iVar3);
        iVar3 = func_02067898(iVar9, iVar4);
        sVar2 = func_0206824c(iVar3);
        param_1[9] = (s32)(((s64)(s32)sVar2 * 0x1680000 + 0x80000) >> 20);
    }
}
