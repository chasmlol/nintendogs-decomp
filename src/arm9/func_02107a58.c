#include "ctx.h"

extern u8 data_02147e70[];
extern u8 data_02147e80[];
extern u8 data_02147e90[];
extern u8 data_02147ea4[];
extern u8 data_02147eb4[];
extern u8 data_02147ec4[];
extern u8 data_02147ed4[];
extern u8 data_02147ed8[];
extern u32 data_0215be48;
extern void func_0210ea40(s32 a, s32 b, s32 c, u32 d);
extern void func_02109238(void);
extern s32 func_0210e968(s32 a, void *b);
extern void func_02113090(s32 a, s32 b);
extern void func_021130c4(s32 a, s32 b);
extern void func_02112ed0(s32 a, s32 b);
extern void func_02112e74(s32 a, s32 b);
extern void func_021121a4(void);
extern void func_02112798(s32 a, s32 b, s32 c);
extern void func_02112978(s32 a, s32 b, s32 c, s32 d);
extern void func_02101cf4(void);
extern s32 func_02112e34(s32 a);
extern s32 func_02112e54(s32 a);
extern void func_02101894(s32 a, s32 b, s32 c, s32 d, s32 e);
extern void func_02109b50(void);
extern void func_020fc76c(s32 a, void *b, void *c, void *d, void *e);
extern void func_02109ac0(s32 a);
extern void func_020fc8b0(s32 a, s32 b, s32 c);

void func_02107a58(u32 *param_1, s32 param_2, s32 param_3, u32 param_4)
{
    s32 iVar4;
    s32 iVar5;
    s32 iVar6;
    s32 iVar7;
    u32 *piVar1;
    u8 *pcVar2;
    u8 *pcVar3;

    func_0210ea40(9, param_2, param_3, param_4);
    func_02109238();
    iVar4 = func_0210e968(9, data_02147e70);
    iVar5 = func_0210e968(9, data_02147e80);
    iVar6 = func_0210e968(9, data_02147e90);
    iVar7 = func_0210e968(9, data_02147ea4);
    func_02113090(2, iVar4);
    func_021130c4(2, iVar5);
    func_02112ed0(2, iVar6);
    func_02112e74(2, iVar7);
    func_021121a4();
    func_02112798(2, 3, 1);
    func_02112798(2, 4, 1);
    func_02112978(2, 3, 0, 0);
    func_02112978(2, 4, 0, 0);
    func_02101cf4();
    iVar4 = func_02112e34(2);
    iVar5 = func_02112e54(2);
    func_02101894(0, iVar4, iVar5, 4, 0);
    func_02109b50();
    pcVar2 = data_02147ed8;
    piVar1 = &data_0215be48;
    *(u32 *)((u8 *)*piVar1 + 0xc838) = 1;
    pcVar3 = data_02147eb4;
    *(u32 *)((u8 *)*piVar1 + 0xc83c) = 1;
    func_020fc76c(9, pcVar3, data_02147ec4, data_02147ed4, pcVar2);
    func_02109ac0(1);
    func_020fc8b0(2, 2, 5);
    *param_1 = 0;
    *(u16 *)(param_1 + 3) = 500;
    *(u16 *)((u8 *)param_1 + 0xe) = 0;
    param_1[0x704] = 0;
    *(u16 *)((u8 *)param_1 + 0x1c16) = 0;
    *(u16 *)(param_1 + 0x705) = 0;
}
