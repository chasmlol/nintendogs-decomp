#include "ctx.h"

extern u8 data_0214de58[];
extern u8 data_0214de6c[];
extern u8 data_0214de80[];
extern u8 data_0214de94[];
extern u8 data_0214deb0[];
extern u8 data_0214defc[];
extern u8 data_0214dee0[];
extern u8 data_0214dec8[];
extern u8 data_0214def8[];
extern s32 data_0215be48;
extern u8 data_0214df58[];
extern u8 data_0214df28[];
extern u8 data_0214df10[];
extern u8 data_0214df40[];

extern void func_0210ea40(s32 a, u32 b, void *c, u32 d);
extern s32 func_0210e968(s32 a, u32 b);
extern void func_02113090(s32 a, s32 b);
extern void func_021130c4(s32 a, s32 b);
extern void func_0211305c(s32 a, s32 b);
extern void func_02112ed0(s32 a, s32 b);
extern void func_02112e74(s32 a, s32 b);
extern void func_020fc76c(s32 a, u32 b, u32 c, u32 d, u32 e);
extern void func_020fc684(s32 a, u32 b, u32 c, u32 d, u32 e);
extern void func_020fc8b0(s32 a, s32 b, s32 c);
extern void func_02101cf4(void);
extern u16 *func_020fc938(s32 a, s32 b, s32 c, u32 d);
extern void func_02101894(s32 a, s32 b, s32 c, u32 d, s32 e);
extern void func_02101280(s32 a, u32 b);
extern void func_02101118(s32 a, s32 b, u32 c, u32 d, u16 *e);
extern void func_02112798(s32 a, u32 b, s32 c);
extern void func_021092fc(void);
extern void func_02107e1c(void);
extern void func_02108e24(s32 a);
extern void func_02097b94(s32 a, u32 b, s32 c, s32 d, s32 e);

void func_02120c14(u8 *param_1, u32 param_2, u32 param_3, u32 param_4)
{
    s32 *piVar2;
    u32 uVar10;
    s32 *piVar3;
    s32 iVar4;
    s32 iVar5;
    s32 iVar6;
    s32 iVar7;
    s32 iVar8;
    u16 *puVar9;
    u32 uVar1;

    piVar3 = (s32 *)(param_1 + 0x1cdc);
    func_0210ea40(0x22, 0x1cdc, (void *)param_3, param_4);
    iVar4 = func_0210e968(0x22, (u32)data_0214de58);
    iVar5 = func_0210e968(0x22, (u32)data_0214de6c);
    iVar6 = func_0210e968(0x22, (u32)data_0214de80);
    iVar7 = func_0210e968(0x22, (u32)data_0214de94);
    iVar8 = func_0210e968(0x22, (u32)data_0214deb0);
    func_02113090(2, iVar4);
    func_021130c4(2, iVar5);
    func_0211305c(2, iVar6);
    func_02112ed0(2, iVar7);
    func_02112e74(2, iVar8);
    func_020fc76c(0x22, (u32)data_0214dec8, (u32)data_0214dee0, (u32)data_0214def8, (u32)data_0214defc);
    piVar2 = &data_0215be48;
    *(s32 *)(*piVar2 + 0xc838) = 5;
    iVar4 = *piVar2 + 0xc000;
    *(s32 *)(iVar4 + 0x83c) = 1;
    func_0210ea40(0x33, iVar4, piVar2, 1);
    func_020fc684(0x33, (u32)data_0214df10, (u32)data_0214df28, (u32)data_0214df40, (u32)data_0214df58);
    func_020fc8b0(2, 0, 3);
    func_02101cf4();
    uVar10 = 0;
    do {
        puVar9 = func_020fc938(2, 0, 4000, uVar10);
        uVar1 = (u16)uVar10;
        func_02101894(0, iVar7, iVar5, uVar1, 0);
        func_02101280(0, uVar1);
        func_02101118(0, iVar6, uVar1, uVar1, puVar9);
        uVar10 = uVar10 + 1;
    } while ((s32)uVar10 < 7);
    iVar4 = 0;
    do {
        func_02112798(2, (u16)(iVar4 + 0xe), 0);
        iVar4 = iVar4 + 1;
    } while (iVar4 < 7);
    func_021092fc();
    func_02107e1c();
    func_02108e24(0);
    if (*piVar3 == 0) {
        func_02097b94(8, 0x2457, 0, 0, 1);
        *piVar3 = 1;
    }
    *(s32 *)(*(s32 *)&data_0215be48 + 0x1e30) = 3;
}
