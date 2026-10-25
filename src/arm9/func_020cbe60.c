#include "ctx.h"

typedef struct { u32 a; u32 b; u32 c; } Tri3;

extern s32 data_02142da0;
extern s32 data_02142da4;
extern s32 data_02142da8;
extern s32 data_02142d94;
extern s32 data_02142d98;
extern s32 data_02142d9c;
extern s32 func_01ffdb08(s32 a);
extern s32 func_02027468(s32 a);
extern void func_020c8e4c(s32 a, s32 *b);
extern s32 func_02028130(s32 a);
extern s32 func_020678b4(s32 *a, s32 *b);
extern s32 func_02067898(s32 a, s32 b);
extern s16 func_0206824c(s32 a);

static inline s32 mulr(s32 k, s32 x)
{
    s64 v = (s64)k * (s64)x + 0x800;
    return (s32)(u32)(v >> 12);
}

void func_020cbe60(s32 *param_1, s32 *param_2, s32 param_3)
{
    s32 iVar3;
    s32 iVar4;
    s16 sVar2;
    s64 t;

    iVar3 = func_01ffdb08(param_3);
    iVar4 = func_02027468(iVar3);
    if (iVar4 == 0) {
        s32 k7;
        s32 k6;
        s32 k9;
        k6 = data_02142da0;
        k7 = data_02142da4;
        k9 = data_02142da8;
        iVar3 = func_01ffdb08(param_3);
        *(Tri3 *)param_1 = *(Tri3 *)param_2;
        param_1[1] = k9;
        func_020c8e4c(iVar3, param_1 + 3);
        iVar4 = func_02028130(iVar3);
        param_1[4] = mulr(k7, iVar4);
        param_1[6] = 0;
        param_1[7] = 0x1000;
        param_1[8] = 0;
        iVar3 = func_02028130(iVar3);
        iVar4 = func_020678b4(param_1 + 3, param_1);
        iVar3 = func_02067898(mulr(k6, iVar3), iVar4);
        sVar2 = func_0206824c(iVar3);
        t = (s64)sVar2 * 0x1680000 + 0x80000;
        param_1[9] = (s32)(t >> 20);
        return;
    }
    iVar3 = func_02027468(iVar3);
    if (iVar3 == 1) {
        s32 k7;
        s32 k6;
        s32 k9;
        k6 = data_02142d94;
        k7 = data_02142d98;
        k9 = data_02142d9c;
        iVar3 = func_01ffdb08(param_3);
        *(Tri3 *)param_1 = *(Tri3 *)param_2;
        param_1[1] = k9;
        func_020c8e4c(iVar3, param_1 + 3);
        iVar4 = func_02028130(iVar3);
        param_1[4] = mulr(k7, iVar4);
        param_1[6] = 0;
        param_1[7] = 0x1000;
        param_1[8] = 0;
        iVar3 = func_02028130(iVar3);
        iVar4 = func_020678b4(param_1 + 3, param_1);
        iVar3 = func_02067898(mulr(k6, iVar3), iVar4);
        sVar2 = func_0206824c(iVar3);
        t = (s64)sVar2 * 0x1680000 + 0x80000;
        param_1[9] = (s32)(t >> 20);
    }
}
