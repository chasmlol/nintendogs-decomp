#include "ctx.h"

extern int *data_0215be48;
extern int *data_02159424;
extern int *data_02159030;
extern void func_02101cf4(void);
extern u32 func_02112e34(int a);
extern u32 func_02112e54(int a);
extern u32 func_02112e14(int a);
extern s32 func_02101894(int a, int b, int c, int d, int e);
extern void func_02101be4(int a, int b);
extern void func_021017d4(int a, int b, int c);
extern u32 func_02109390(int a);
extern void func_02112798(int a, int b, int c);
extern void func_02101118(int a, int b, int c, int d, int e);
extern void func_02090bb4(int a, int b, int c, int d, int e);

void func_021116e0(void)
{
    s32 iVar1;
    s32 iVar2;
    s32 iVar3;
    s32 iVar4;
    s32 iVar5;
    u16 *puVar5;
    s16 uVar8;
    s32 iVar7;
    s32 sel;
    s32 cfg;

    func_02101cf4();
    iVar1 = func_02112e34(2);
    iVar2 = func_02112e54(2);
    iVar3 = func_02112e14(2);
    uVar8 = 0;
    iVar7 = *(s32 *)((u8 *)data_0215be48 + 0x4844);
    do {
        iVar4 = func_02101894(0, iVar1, iVar2, (u32)(uVar8 + 7), iVar7);
        func_02101be4(iVar4, 0);
        func_021017d4(0, iVar4, 14);
        puVar5 = (u16 *)func_02109390(uVar8);
        if (puVar5 == 0) goto LNULL;
        func_02101118(0, iVar3, (u32)(uVar8 + 7), uVar8 + 1, (int)puVar5);
        func_02112798(2, (u16)uVar8, 1);
        func_02112798(2, (u16)(uVar8 + 3), 1);
        func_02112798(2, (u16)(uVar8 + 7), 1);
        goto LTAIL;
    LNULL:
        func_02112798(2, (u16)uVar8, 0);
        func_02112798(2, (u16)(uVar8 + 3), 0);
        func_02112798(2, (u16)(uVar8 + 7u), 0);
    LTAIL:
        uVar8 = (s16)(uVar8 + 1);
    } while (uVar8 < 3);

    cfg = *(s32 *)((u8 *)data_02159030 + 4);
    sel = 0;
    if (*(s16 *)*(s32 *)((u8 *)data_02159424 + 4) != 7) {
        iVar4 = 0;
    } else {
        iVar4 = *(s16 *)((u8 *)*(s32 *)(*(s32 *)((u8 *)data_02159424 + 4) + 0x1c) + 4);
    }
    switch (iVar4) {
    case 0:
    case 6:
    case 7:
        sel = 0;
        break;
    case 1:
    case 2:
    case 3:
        sel = 1;
        break;
    case 4:
    case 5:
        sel = 2;
        break;
    default:
        break;
    }
    func_02090bb4(cfg, 0x44c, sel, (int)((u8 *)data_0215be48 + 0x48c8), 0x200);
    iVar5 = func_02101894(0, iVar1, iVar2, 6, iVar7);
    func_02101be4(iVar5, 0);
    func_021017d4(0, iVar5, 0);
    func_02101118(0, iVar3, 6, 0, (int)((u8 *)data_0215be48 + 0x48c8));
}
