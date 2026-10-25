#include "ctx.h"

extern u8 *data_0215be48;
extern u8 data_0214a120[];
extern u8 data_0214a12c[];
extern u8 data_0214a138[];
extern u8 data_0214a154[];
extern u8 data_0214a16c[];
extern u8 data_0214a1a4[];
extern u8 data_0214a178[];
extern u8 data_0214a18c[];
extern u8 data_0214a1a0[];
extern u8 data_0214a0c8[];
extern u8 data_0214a0d4[];
extern u8 data_0214a09c[];
extern u8 data_0214a0e0[];

extern void func_0210ea40(s32 a);
extern u32 func_0210e968(s32 a, u8 *b);
extern void func_02113090(s32 a, s32 b);
extern void func_021130c4(s32 a, s32 b);
extern void func_02112ed0(s32 a, s32 b);
extern void func_02112e74(s32 a, s32 b);
extern void func_0211305c(s32 a, s32 b);
extern void func_02101cf4(void);
extern s32 func_02112e34(s32 a);
extern s32 func_02112e54(s32 a);
extern s32 func_02112e14(s32 a);
extern s32 func_02101894(s32 a, s32 b, s32 c, s32 d, s32 e);
extern void func_02101be4(s32 a, s32 b);
extern void func_021017d4(s32 a, s32 b, s32 c);
extern u32 func_02109390(s16 a);
extern s32 func_02116aa0(s32 a);
extern void func_02101118(s32 a, s32 b, s32 c, s32 d, u32 e);
extern s32 func_01ffdb08(s16 a);
extern void func_02112744(s32 a, u8 *b, s32 c);
extern void func_021128a8(s32 a, s32 b, s32 c);
extern void func_0211216c(s32 a, s32 b);
extern void func_020fc76c(s32 a, u8 *b, u8 *c, u8 *d, u8 *e);
extern void func_020fc084(u8 *a, s32 b, s32 c, s32 d, s32 e, s32 f, s32 g, s32 h);
extern u32 func_0210bda8(void);
extern void func_02112798(s32 a, s32 b, s32 c);
extern void func_021092fc(void);
extern void func_02107dd8(void);
extern s32 func_020937d8(void);

void func_02117220(u32 *param_1)
{
    s32 iVar4, iVar5, iVar6, iVar7, iVar8;
    s32 i;
    u32 *g;
    u8 *puVar9;
    s32 iv;

    func_0210ea40(0x1c);
    if (*(s32 *)(*(u8 **)&data_0215be48 + 0xa8) == 3) {
        func_0210ea40(0x1a);
    }
    iVar4 = func_0210e968(0x1c, data_0214a120);
    iVar5 = func_0210e968(0x1c, data_0214a12c);
    iVar6 = func_0210e968(0x1c, data_0214a138);
    iVar7 = func_0210e968(0x1c, data_0214a154);
    iVar8 = func_0210e968(0x1c, data_0214a16c);
    func_02113090(2, iVar4);
    func_021130c4(2, iVar5);
    func_02112ed0(2, iVar6);
    func_02112e74(2, iVar7);
    func_0211305c(2, iVar8);
    *(s32 *)(*(u8 **)&data_0215be48 + 0xc838) = 1;
    *(s32 *)(*(u8 **)&data_0215be48 + 0xc83c) = 1;
    func_020fc76c(0x1c, data_0214a178, data_0214a18c, data_0214a1a0, data_0214a1a4);
    func_0211216c(2, 2);
    *param_1 = 0;
    func_02101cf4();
    iVar4 = func_02112e34(2);
    iVar5 = func_02112e54(2);
    iVar6 = func_02112e14(2);
    for (i = 0; i < 3; i++) {
        iVar8 = func_02101894(0, iVar4, iVar5, i + 10, *(s32 *)(*(u8 **)&data_0215be48 + 0x4844));
        func_02101be4(iVar8, 0);
        func_021017d4(0, iVar8, 14);
    }
    for (i = 0; i < 3; i++) {
        puVar9 = (u8 *)(u32)func_02109390((s16)i);
        if (puVar9 != 0) {
            if (func_02116aa0(i) != 0) {
                func_02101118(0, iVar6, i + 10, i + 3, (u32)puVar9);
            } else {
                func_02101118(0, iVar6, i + 10, i, (u32)puVar9);
            }
        }
    }
    for (i = 0; i < 3; i++) {
        if (func_01ffdb08((s16)i) != 0) {
            func_02112744(2, ((u8 **)data_0214a0c8)[i], 1);
            func_02112744(2, ((u8 **)data_0214a0d4)[i], 0);
            if (func_02116aa0(i) != 0) {
                func_021128a8(2, (u16)(i + 4), 2);
            }
        } else {
            func_02112744(2, ((u8 **)data_0214a0c8)[i], 0);
            func_02112744(2, ((u8 **)data_0214a0d4)[i], 1);
        }
    }
    g = (u32 *)(*(u8 **)&data_0215be48 + 0x53f4);
    func_020fc084((u8 *)param_1 + 8, 2, 0x15, 0x20, 4, g[0], 0, 0);
    func_020fc084((u8 *)param_1 + 48, 2, 0x15, 0x24, 2, g[1], 0, 0);
    func_020fc084((u8 *)param_1 + 88, 2, 0x15, 0x27, 2, g[2], 0, 0);
    func_020fc084((u8 *)param_1 + 128, 2, 0x15, 0x29, 2, g[3], 0, 0);
    func_020fc084((u8 *)param_1 + 168, 2, 0x15, 0x2c, 2, g[4], 0, 0);
    func_02112798(2, 0x1f, 0);
    iv = func_0210bda8();
    func_02112744(2, data_0214a09c, iv);
    func_02112744(2, data_0214a0e0, iv == 0);
    func_021092fc();
    func_02107dd8();
    g = (u32 *)*(u8 **)&data_0215be48;
    iv = *(s32 *)((u8 *)g + 0xa8);
    if (iv == 0) {
        goto Z0;
    }
    if (iv == 4) {
        goto Z4;
    }
    if (iv == 14) {
        *(s32 *)((u8 *)g + 0x5034) = 0;
    }
    return;
Z0:
    iv = func_020937d8();
    if (iv == 0) {
        goto S1;
    }
    if (iv != 1) {
        goto S0;
    }
S1:
    *(s32 *)(*(u8 **)&data_0215be48 + 0x5034) = 1;
    return;
S0:
    *(s32 *)(*(u8 **)&data_0215be48 + 0x5034) = 0;
    return;
Z4:
    *(s32 *)((u8 *)g + 0x5034) = 0;
}
