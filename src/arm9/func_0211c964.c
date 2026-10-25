#include "ctx.h"

extern u8 data_0214d078[];
extern u8 data_0214d090[];
extern u8 data_0214d0a8[];
extern u8 data_0214d0c0[];
extern u8 data_0214d0e0[];
extern u8 data_0214d138[];
extern u8 data_0214d0fc[];
extern u8 data_0214d118[];
extern u8 data_0214d134[];
extern u8 *data_0215be48;

extern void func_0210ea40(s32 a);
extern s32 func_0210e968(s32 a, u8 *b);
extern void func_02113090(s32 a, s32 b);
extern void func_021130c4(s32 a, s32 b);
extern void func_0211305c(s32 a, s32 b);
extern void func_02112ed0(s32 a, s32 b);
extern void func_02112e74(s32 a, s32 b);
extern void func_020fc76c(s32 a, u8 *b, u8 *c, u8 *d, u8 *e);
extern void func_021127b8(s32 a, s32 b, s32 c);
extern void func_02112798(s32 a, s32 b, s32 c);

void func_0211c964(void)
{
    s32 iVar2;
    s32 iVar3;
    s32 iVar4;
    s32 iVar5;
    s32 iVar6;

    func_0210ea40(0x29);
    iVar2 = func_0210e968(0x29, data_0214d078);
    iVar3 = func_0210e968(0x29, data_0214d090);
    iVar4 = func_0210e968(0x29, data_0214d0a8);
    iVar5 = func_0210e968(0x29, data_0214d0c0);
    iVar6 = func_0210e968(0x29, data_0214d0e0);
    func_02113090(2, iVar2);
    func_021130c4(2, iVar3);
    func_0211305c(2, iVar4);
    func_02112ed0(2, iVar5);
    func_02112e74(2, iVar6);
    func_020fc76c(0x29, data_0214d0fc, data_0214d118, data_0214d134, data_0214d138);
    *(u32 *)(data_0215be48 + 0xc838) = 5;
    *(u32 *)(data_0215be48 + 0xc83c) = 1;
    func_021127b8(2, 0, 1);
    func_021127b8(2, 2, 1);
    func_02112798(2, 0, 0);
    func_02112798(2, 2, 0);
    func_02112798(2, 1, 0);
    func_02112798(2, 3, 0);
}
