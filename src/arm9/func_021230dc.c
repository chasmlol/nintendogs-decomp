#include "ctx.h"

extern u32 data_0214dfa4[];
extern u32 data_0214dfbc[];
extern u32 data_0214dfd4[];
extern u32 data_0214dfec[];
extern u32 data_0214e00c[];
extern u32 data_0214e028[];
extern u32 data_0214e044[];
extern u32 data_0214e060[];
extern u32 data_0214e064[];
extern u32 data_0214e080[];
extern u32 data_0214e098[];
extern u32 data_0214e0b0[];
extern u32 data_0214e0c8[];
extern u32 data_0215be48[];
extern u8 *data_02159030;

extern void func_0210ea40(u32 a, u32 b, u32 c, u32 d);
extern u32 func_0210e968(u32 a, void *b);
extern void func_02113090(u32 a, u32 b);
extern void func_021130c4(u32 a, u32 b);
extern void func_0211305c(u32 a, u32 b);
extern void func_02112ed0(u32 a, u32 b);
extern void func_02112e74(u32 a, u32 b);
extern void func_020fc76c(u32 a, void *b, void *c, void *d, void *e);
extern void func_020fc684(u32 a, void *b, void *c, void *d, void *e);
extern void func_020fc8b0(u32 a, u32 b, u32 c);
extern void func_02101cf4(void);
extern u16 *func_02090cac(u32 a, u32 b, u32 c);
extern void func_02101894(u32 a, u32 b, u32 c, u32 d, u32 e);
extern void func_02101280(u32 a, u32 b);
extern void func_02101118(u32 a, u32 b, u32 c, u32 d, void *e);
extern s32 func_020930a4(void);
extern void func_021127b8(u32 a, u32 b, u32 c);
extern void func_02112798(u32 a, u32 b, u32 c);
extern void func_021092fc(void);
extern void func_02108e24(u32 a);

void func_021230dc(u32 param_1, u32 param_2, u32 param_3, u32 param_4)
{
    s32 iVar2, iVar3, iVar4, iVar5, iVar6;
    u16 *puVar7;
    u32 uVar8;
    u8 *q2;
    u32 one;

    func_0210ea40(0x2d, param_2, param_3, param_4);
    iVar2 = func_0210e968(0x2d, data_0214dfa4);
    iVar3 = func_0210e968(0x2d, data_0214dfbc);
    iVar4 = func_0210e968(0x2d, data_0214dfd4);
    iVar5 = func_0210e968(0x2d, data_0214dfec);
    iVar6 = func_0210e968(0x2d, data_0214e00c);
    func_02113090(2, iVar2);
    func_021130c4(2, iVar3);
    func_0211305c(2, iVar4);
    func_02112ed0(2, iVar5);
    func_02112e74(2, iVar6);
    func_020fc76c(0x2d, data_0214e028, data_0214e044, data_0214e060, data_0214e064);
    *(u32 *)(*(u8 **)data_0215be48 + 0xc838) = 5;
    one = 1;
    q2 = *(u8 **)data_0215be48 + 0xc000;
    *(u32 *)(q2 + 0x83c) = one;
    func_0210ea40(0x36, (u32)q2, (u32)data_0215be48, one);
    func_020fc684(0x36, data_0214e080, data_0214e098, data_0214e0b0, data_0214e0c8);
    func_020fc8b0(2, 1, 8);
    func_02101cf4();
    puVar7 = func_02090cac(*(u32 *)(data_02159030 + 0x24), 0x251d, 0);
    func_02101894(0, iVar5, iVar3, 8, 0);
    func_02101280(0, 8);
    func_02101118(0, iVar4, 8, 0, puVar7);
    {
        u16 local_1c[4] = {0, 0, 0, 0};
        iVar2 = func_020930a4();
        local_1c[0] = (u16)(iVar2 + 0x30);
        local_1c[1] = 0x2f;
        local_1c[2] = 0x35;
        local_1c[3] = 0;
        func_02101894(0, iVar5, iVar3, 9, 0);
        func_02101280(0, 9);
        func_02101118(0, iVar4, 9, 1, local_1c);
    }
    uVar8 = 0;
    do {
        func_021127b8(2, (u16)uVar8, 1);
        uVar8 = uVar8 + 1;
    } while ((s32)uVar8 < 4);
    func_02112798(2, 0, 0);
    func_02112798(2, 1, 0);
    func_02112798(2, 2, 0);
    func_02112798(2, 3, 0);
    func_02112798(2, 4, 0);
    func_02112798(2, 5, 0);
    func_02112798(2, 6, 0);
    func_02112798(2, 7, 0);
    func_021092fc();
    func_02108e24(0);
    *(u32 *)(*(u8 **)data_0215be48 + 0x1e30) = 3;
}
