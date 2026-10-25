#include "ctx.h"

extern u8 data_02148a1c[];
extern u8 data_02148a34[];
extern u8 data_02148a4c[];
extern u8 data_02148a64[];
extern u8 data_02148a84[];
extern u8 *data_0215be48;
extern u8 data_02148adc[];
extern u8 data_02148aa0[];
extern u8 data_02148abc[];
extern u8 data_02148ad8[];
extern u8 data_021489d8[];
extern u8 data_021489d0[];
extern u8 data_021489e0[];

extern void func_0210ea40(s32 a, s32 b, u8 *c, u32 d);
extern s32 func_0210e968(s32 a, u8 *b);
extern void func_02113090(s32 a, s32 b);
extern void func_021130c4(s32 a, s32 b);
extern void func_0211305c(s32 a, s32 b);
extern void func_02112ed0(s32 a, s32 b);
extern void func_02112e74(s32 a, s32 b);
extern void func_020fc76c(s32 a, u8 *b, u8 *c, u8 *d, u8 *e);
extern void func_02117a58(u32 *a, s32 b, s32 c, s32 d, s32 e, s32 f, s32 g, s32 h, s32 i, s32 j, s32 k);
extern s32 func_02112bf0(s32 a, s32 b);
extern s32 func_02112bc0(s32 a, s32 b);
extern void func_02117f98(u32 *a, s32 b, u8 *c, s32 d, s32 e, s32 f, s32 g);
extern void func_02117cf0(u32 *a);

void func_02111434(u32 *param_1, u32 param_2, u32 param_3, u32 param_4)
{
    s32 iVar3;
    s32 iVar4;
    s32 iVar5;
    s32 iVar6;
    s32 iVar7;
    s32 iVar8;
    s32 i;
    u32 *puVar9;
    u32 off;
    s16 sA;
    s16 sB;
    s16 sC;
    s16 sD;
    s16 sE;
    s16 sF;

    off = 0x1c84;
    puVar9 = (u32 *)((u8 *)param_1 + off);
    *param_1 = 0;
    param_1[0x721] = 1;
    *(s16 *)((u8 *)puVar9 + 4) = -1;
    func_0210ea40(15, -1, (u8 *)puVar9, param_4);
    iVar3 = func_0210e968(15, data_02148a1c);
    iVar4 = func_0210e968(15, data_02148a34);
    iVar5 = func_0210e968(15, data_02148a4c);
    iVar6 = func_0210e968(15, data_02148a64);
    iVar7 = func_0210e968(15, data_02148a84);
    func_02113090(2, iVar3);
    func_021130c4(2, iVar4);
    func_0211305c(2, iVar5);
    func_02112ed0(2, iVar6);
    func_02112e74(2, iVar7);
    *(u32 *)(data_0215be48 + 0xc838) = 3;
    *(u32 *)(data_0215be48 + 0xc83c) = 0;
    func_020fc76c(15, data_02148aa0, data_02148abc, data_02148ad8, data_02148adc);
    i = 0;
    puVar9 = param_1 + 1;
    do {
        func_02117a58(puVar9, 2, (u16)i, 1, 0, 1, 0, 0, 0, 10, 10);
        i = i + 1;
        puVar9 = puVar9 + 0xf;
    } while (i < 3);
    sA = (s16)(func_02112bf0(2, 3) + 0x80);
    sB = (s16)(func_02112bf0(2, 4) - 0x80);
    sC = (s16)(func_02112bf0(2, 5) + 0x80);
    sD = (s16)func_02112bc0(2, 3);
    sE = (s16)func_02112bc0(2, 4);
    sF = (s16)func_02112bc0(2, 5);
    func_02117f98(param_1 + 0x2e, 2, data_021489d8, 3, sA, sD, 0x14);
    func_02117f98(param_1 + 0x36, 2, data_021489d0, 4, sB, sE, 0x14);
    func_02117f98(param_1 + 0x3e, 2, data_021489e0, 5, sC, sF, 0x14);
    func_02117cf0(param_1 + 0x2e);
    func_02117cf0(param_1 + 0x36);
    func_02117cf0(param_1 + 0x3e);
}
