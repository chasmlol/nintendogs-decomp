#include "ctx.h"
#pragma opt_lifetimes off

/* the callees take only the arguments the caller sets (the target leaves r1-r3 alone for 1-arg calls) */
extern s32 func_0210f404(s32 a);
extern void func_0210ea40(s32 a);
extern s32 func_0210e968(s32 a, u32 b);
extern void func_02113090(s32 a, s32 b);
extern void func_021130c4(s32 a, s32 b);
extern void func_0211305c(s32 a, s32 b);
extern void func_02112ed0(s32 a, s32 b);
extern void func_02112e74(s32 a, s32 b);
extern void func_020fc8b0(s32 a, s32 b, s32 c);
extern void func_020fc76c(s32 a, s32 b, s32 c, s32 d, s32 e);
extern void func_02101cf4(void);
extern void func_02101894(s32 a, s32 b, s32 c, s32 d, s32 e);
extern void func_02101280(s32 a, s32 b);
extern void func_0211216c(s32 a, s32 b);
extern void func_02112958(s32 a, s32 b, s32 c);
extern s32 func_0210ee14(s32 a, s32 *b, s32 c);
extern s32 func_0211b7c4(s32 *a, s32 b, s32 c);
extern s32 func_0211b9e0(s32 *a, s32 b, s32 c);
extern s32 func_0211b6d0(s32 *a, s32 b, s32 c);
extern void func_02121170(s32 *a, s32 b, u32 *c, u16 *d, s32 e, s32 f, s32 g, s32 h, s32 i);
extern void func_02112798(s32 a, s32 b, s32 c);
extern void func_02112978(s32 a, s32 b, s32 c, s32 d);
extern void func_02108e24(s32 a);
extern void func_021005ac(void);

extern u8 data_02147bc0[];
extern u8 data_02147bd0[];
extern u8 data_02147be0[];
extern u8 data_02147bf0[];
extern u8 data_02147c04[];
extern u8 data_02147c54[];
extern u8 data_02147c14[];
extern u8 data_02147c28[];
extern u8 data_02147c3c[];
extern s32 *data_0215be48;
extern u8 data_02147b48[];
extern u8 data_02147b50[];

typedef struct { u32 w[4]; } Quad;
typedef struct { u16 h[4]; } H4;

void func_021001e4(s32 *param_1, u32 param_2, u32 param_3, u32 param_4)
{
    s32 lc;
    s32 *piVar9;
    s32 iVar4;
    s32 iVar7;
    s32 iVar1;
    s16 sVar3;
    s32 iVar5;
    s32 iVar6;
    s32 iVar8;
    u8 *pb;
    u16 local_3c[4];
    Quad local_34;

    piVar9 = (s32 *)((u8 *)param_1 + 0x1c28);
    iVar1 = 0x1c6c;
    pb = (u8 *)param_1 + iVar1;
    iVar4 = func_0210f404(param_1[0x70a]);
    param_1[0] = iVar4;
    func_0210ea40(param_1[0]);
    func_0210ea40(0xb);
    iVar5 = func_0210e968(0xb, (u32)data_02147bc0);
    iVar4 = func_0210e968(0xb, (u32)data_02147bd0);
    iVar6 = func_0210e968(0xb, (u32)data_02147be0);
    iVar7 = func_0210e968(0xb, (u32)data_02147bf0);
    iVar8 = func_0210e968(0xb, (u32)data_02147c04);
    func_02113090(2, iVar5);
    func_021130c4(2, iVar4);
    func_0211305c(2, iVar6);
    func_02112ed0(2, iVar7);
    func_02112e74(2, iVar8);
    func_020fc8b0(2, 0, 3);
    func_020fc76c(0xb, (s32)data_02147c14, (s32)data_02147c28, (s32)data_02147c3c, (s32)data_02147c54);
    *(u32 *)((u8 *)data_0215be48 + 0xc838) = 7;
    *(u32 *)((u8 *)data_0215be48 + 0xc83c) = 1;
    param_1[0x250] = 0;
    param_1[0x252] = 0;
    func_02101cf4();
    func_02101894(0, iVar7, iVar4, 6, 0);
    func_02101280(0, 6);
    lc = 0;
    do {
        func_02101894(0, iVar7, iVar4, lc, 0);
        func_02101280(0, lc);
        lc = lc + 1;
    } while (lc < 6);
    func_0211216c(1, 1);
    func_0211216c(0, 1);
    func_0211216c(3, 1);
    func_0211216c(2, 3);
    func_02112958(2, 6, 1);
    func_02112958(2, 0x27, 1);
    func_02112958(2, 0x28, 1);
    iVar5 = piVar9[1];
    if (iVar5 == 0) {
        iVar5 = func_0210ee14(*piVar9, param_1 + 0x1b, 0x46);
        param_1[0x24e] = iVar5;
    } else if (iVar5 == 2) {
        iVar5 = func_0211b7c4(param_1 + 0x1b, 0x46, *piVar9);
        param_1[0x24e] = iVar5;
    } else if (iVar5 == 1) {
        iVar5 = func_0211b9e0(param_1 + 0x1b, 0x46, *piVar9);
        param_1[0x24e] = iVar5;
    }
    if (*(s16 *)((u8 *)piVar9 + 8) != -1) {
        iVar5 = func_0211b6d0(param_1 + 0x1b, param_1[0x24e], (s32)*(s16 *)((u8 *)piVar9 + 8));
        if (iVar5 >= 0) {
            *(s16 *)(pb + *piVar9 * 2 + 4) = (s16)iVar5;
        }
    }
    {
        H4 h = *(const H4 *)data_02147b48;
        Quad q = *(const Quad *)data_02147b50;
        func_02121170(param_1 + 1, (s32)func_021005ac, (u32 *)&q, h.h, 4, 6, 0x24, param_1[0x24e],
                      (s32)*(s16 *)(pb + *piVar9 * 2 + 4));
    }
    func_02112798(2, 0xd, 0);
    func_02112798(2, 0xe, 0);
    func_02112798(2, 0x1b, 0);
    func_02112798(2, 0x1c, 0);
    func_02112798(2, 0x1d, 0);
    func_02112978(2, 6, -255, 0);
    func_02112978(2, 0x27, -255, 0);
    func_02112978(2, 0x28, -255, 0);
    func_02108e24(0);
}
