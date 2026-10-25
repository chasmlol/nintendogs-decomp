#include "ctx.h"

#define FXM(a, b) ((u32)((((s64)(s32)(a) * (s64)(s32)(b)) + 0x800) >> 12))

extern s32 data_02142be4;
extern s32 data_02142be8;
extern s32 data_02142bdc;
extern s32 data_02142bd8;
extern s32 data_02142be0;
extern s32 func_01ffdb08(s32 a);
extern void func_020c8e4c(s32 a, s32 *b);
extern void func_02027668(s32 a, s32 *b);
extern void func_02027690(s32 a, s32 *b);
extern s32 func_02028130(s32 a);
extern void func_01ff832c(u32 a, s32 *b, s32 *c, s32 *d);
extern s32 func_020678b4(s32 *a, s32 *b);
extern s32 func_02067898(u32 a, s32 b);
extern s16 func_0206824c(s32 a);

void func_020c92a0(s32 *param_1, s32 param_2)
{
    s32 aiStack_20[4];
    s32 iVar4;
    s32 iVar5;
    s32 iVar6;
    s32 *piVar2;
    s16 sVar3;

    iVar4 = func_01ffdb08(param_2);
    iVar6 = data_02142be4;
    iVar5 = data_02142be8;
    param_1[0] = 0;
    param_1[1] = iVar5;
    param_1[2] = iVar6;
    func_020c8e4c(iVar4, param_1 + 3);
    func_02027668(iVar4, param_1 + 3);
    func_02027690(iVar4, aiStack_20);
    iVar6 = data_02142bdc;
    iVar5 = func_02028130(iVar4);
    param_1[4] = FXM(iVar5, iVar6);
    iVar6 = data_02142bd8;
    iVar5 = func_02028130(iVar4);
    func_01ff832c(FXM(iVar5, iVar6), aiStack_20, param_1 + 3, param_1 + 3);
    param_1[6] = 0;
    param_1[7] = 0x1000;
    piVar2 = &data_02142be0;
    param_1[8] = 0;
    iVar6 = *piVar2;
    iVar4 = func_02028130(iVar4);
    iVar5 = func_020678b4(param_1 + 3, param_1);
    iVar4 = func_02067898(FXM(iVar4, iVar6), iVar5);
    sVar3 = func_0206824c(iVar4);
    param_1[9] = (s32)(u32)((((s64)sVar3 * 0x1680000) + 0x80000) >> 20);
}
