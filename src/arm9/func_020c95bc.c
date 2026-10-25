#include "ctx.h"
extern u8 data_02142c28[];
extern u8 data_02142c2c[];
extern u8 data_02142c30[];
extern u8 data_02142c34[];
extern u8 data_0215949c[];
extern u8 data_02142c24[];
extern u8 data_02142c1c[];
extern u8 data_02142c20[];
extern u8 data_02142c14[];
extern u8 data_02142c18[];
extern s32 func_01ffdb08(s32 a);
extern s32 func_02028130(s32 a);
extern void func_02027668(s32 a, s32 *b);
extern s32 func_02067898(s32 a, s32 b);
extern s16 func_0206824c(s32 a);

#define FXP(a, b) ((s32)((((s64)(a) * (s64)(b)) + 0x800) >> 12))

void func_020c95bc(u32 *param_1, s32 param_2)
{
    s32 iVar4;
    s32 iVar5;
    s32 iVar6;
    s32 iVar7;
    s32 p1;
    s32 p2;
    s16 sVar3;

    iVar4 = func_01ffdb08(param_2);
    iVar6 = *(s32 *)data_02142c28;
    iVar5 = func_02028130(iVar4);
    p2 = *(s32 *)data_02142c2c + FXP(iVar5, iVar6);
    iVar7 = *(s32 *)data_02142c30;
    iVar5 = func_02028130(iVar4);
    p1 = *(s32 *)data_02142c34 + FXP(iVar5, iVar7);
    param_1[0] = *(u32 *)data_0215949c;
    param_1[1] = p1;
    param_1[2] = p2;
    func_02027668(iVar4, (s32 *)&param_1[3]);
    param_1[3] = FXP((s32)param_1[3], *(s32 *)data_02142c24);
    iVar6 = *(s32 *)data_02142c1c;
    iVar5 = func_02028130(iVar4);
    param_1[4] = *(u32 *)data_02142c20 + FXP(iVar5, iVar6);
    param_1[5] = 0;
    param_1[6] = 0;
    param_1[7] = 0x1000;
    param_1[8] = 0;
    iVar7 = *(s32 *)data_02142c28;
    iVar5 = func_02028130(iVar4);
    iVar6 = *(s32 *)data_02142c14;
    iVar4 = func_02028130(iVar4);
    iVar4 = func_02067898(*(s32 *)data_02142c18 + FXP(iVar4, iVar6),
                          *(s32 *)data_02142c2c + FXP(iVar5, iVar7));
    sVar3 = func_0206824c(iVar4);
    param_1[9] = (u32)((((s64)sVar3 * 0x1680000) + 0x80000) >> 20);
}
