#include "ctx.h"

typedef struct { u32 w[3]; } Tri;

extern s32 data_02142c9c;
extern s32 func_01ffdb08(s32 a);
extern void func_020c8e4c(s32 a, s32 *b);
extern s32 func_02028130(s32 a);
extern s32 func_020678b4(s32 *a, s32 *b);
extern s32 func_02067898(s32 a, s32 b);
extern s16 func_0206824c(s32 a);

void func_020ca708(s32 *param_1, s32 *param_2, s32 param_3)
{
    s32 iVar3;
    s64 lVar1;
    s32 fx;
    s16 sVar2;
    s64 l2;

    iVar3 = func_01ffdb08(param_3);
    *(Tri *)param_1 = *(Tri *)param_2;
    func_020c8e4c(iVar3, param_1 + 3);
    param_1[6] = 0;
    param_1[7] = 0x1000;
    param_1[8] = 0;
    iVar3 = func_02028130(iVar3);
    lVar1 = (s64)data_02142c9c * iVar3 + 0x800;
    fx = (s32)(lVar1 >> 12);
    iVar3 = func_020678b4(param_1 + 3, param_1);
    iVar3 = func_02067898(fx, iVar3);
    sVar2 = func_0206824c(iVar3);
    l2 = (s64)sVar2 * 0x1680000;
    param_1[9] = (s32)((l2 + 0x80000) >> 20);
}
