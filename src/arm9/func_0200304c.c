#include "ctx.h"

extern u8 data_0214e73c[];
extern u8 data_0214e754[];
extern u8 data_02136920[];
extern u8 data_02000000[];
extern void func_0200314c(void);
extern void func_02005938(void);
extern u32 func_020803ec(u32 v);
extern void func_02003120(void);
extern u32 func_02080400(u32 v);
extern u32 func_02003970(u32 a, u32 b);
extern u32 func_0207d56c(u32 a, u32 b, u32 c);
extern void func_02002fd0(u8 *p, u32 v);
extern void func_020063cc(void);

void func_0200304c(void)
{
    u32 uVar1;
    u32 iVar2;
    u32 iVar3;
    u32 iVar4;
    u32 *puVar5;

    func_0200314c();
    func_02005938();
    *(u32 *)(data_0214e73c + 0xc) = (u32)data_02000000;
    uVar1 = func_020803ec(0);
    *(u32 *)(data_0214e73c + 0x10) = uVar1;
    func_02003120();
    iVar2 = func_020803ec(0);
    iVar2 = func_02080400(0) - iVar2;
    uVar1 = func_020803ec(0);
    uVar1 = func_02003970(uVar1, iVar2);
    *(u32 *)(data_0214e73c + 0x14) = uVar1;
    iVar2 = func_020803ec(4);
    iVar2 = func_02080400(4) - iVar2;
    if (iVar2 == 0) {
        *(u32 *)(data_0214e73c + 0x34) = 0;
    } else {
        iVar4 = func_020803ec(4);
        puVar5 = (u32 *)func_0207d56c(iVar4, iVar2, 1);
        *(u32 **)(data_0214e73c + 0x34) = puVar5;
    }
    func_02002fd0(data_0214e754, 0);
    *(u32 *)(data_0214e73c + 0x18) = (u32)data_02136920;
    func_020063cc();
}
