#include "ctx.h"
extern u8 data_021493b8[];
extern u8 data_021493c8[];
extern u8 data_021493d8[];
extern u8 data_021493f0[];
extern u8 data_0215be48[];
extern u8 data_02149430[];
extern u8 data_02149404[];
extern u8 data_02149418[];
extern u8 data_0214942c[];
extern u8 data_02149380[];
extern u8 data_0214937c[];
extern u8 data_02149378[];
extern void func_0210ea40(s32 a);
extern u8 *func_0210e968(s32 a, u8 *b);
extern void func_02113090(s32 a, u8 *b);
extern void func_021130c4(s32 a, u8 *b);
extern void func_02112ed0(s32 a, u8 *b);
extern void func_02112e74(s32 a, u8 *b);
extern void func_020fc76c(s32 a, u8 *b, u8 *c, u8 *d, u8 *e);
extern void func_02107e1c(void);
extern void func_02117a58(u8 *p, s32 a, s32 b, s32 c, s32 d, s32 e, s32 f, s32 g, s32 h, s32 i, s32 j);
extern s32 func_02112bf0(s32 a, s32 b);
extern s32 func_02112bc0(s32 a, s32 b);
extern void func_02117f98(u8 *p, s32 a, u8 *b, s32 c, s32 d, s32 e, s32 f);
extern void func_02117cf0(u8 *p);

void func_021142bc(u32 *param_1)
{
    s32 iVar3;
    s16 a7, a6, a5, a9, a4, a8;
    u8 *piVar1;
    u8 *r4p, *r6p, *r5p;

    func_0210ea40(44);
    iVar3 = (s32)func_0210e968(44, data_021493b8);
    r4p = func_0210e968(44, data_021493c8);
    r6p = func_0210e968(44, data_021493d8);
    r5p = func_0210e968(44, data_021493f0);
    func_02113090(2, (u8 *)iVar3);
    func_021130c4(2, r4p);
    func_02112ed0(2, r6p);
    func_02112e74(2, r5p);
    *(s32 *)(*(u8 **)data_0215be48 + 0xc838) = 3;
    *(s32 *)(*(u8 **)data_0215be48 + 0xc83c) = 0;
    func_020fc76c(44, data_02149404, data_02149418, data_0214942c, data_02149430);
    *param_1 = 0;
    param_1[0x72b] = (u32)-1;
    func_02107e1c();
    func_02117a58((u8 *)(param_1 + 2), 2, 0, 1, 0, 3, 0, 2, 2, 10, 10);
    func_02117a58((u8 *)(param_1 + 0x11), 2, 1, 1, 1, 4, 0, 2, 2, 10, 10);
    func_02117a58((u8 *)(param_1 + 0x20), 2, 2, 1, 2, 5, 0, 2, 2, 10, 10);
    a7 = (s16)(func_02112bf0(2, 0) - 0x100);
    a6 = (s16)(func_02112bf0(2, 1) + 0x100);
    a5 = (s16)(func_02112bf0(2, 2) - 0x100);
    a9 = (s16)func_02112bc0(2, 0);
    a4 = (s16)func_02112bc0(2, 1);
    a8 = (s16)func_02112bc0(2, 2);
    func_02117f98((u8 *)(param_1 + 0x2f), 2, data_02149380, 0, a7, a9, 0x10);
    func_02117f98((u8 *)(param_1 + 0x37), 2, data_0214937c, 1, a6, a4, 0x10);
    func_02117f98((u8 *)(param_1 + 0x3f), 2, data_02149378, 2, a5, a8, 0x10);
    func_02117cf0((u8 *)(param_1 + 0x2f));
    func_02117cf0((u8 *)(param_1 + 0x37));
    func_02117cf0((u8 *)(param_1 + 0x3f));
}
