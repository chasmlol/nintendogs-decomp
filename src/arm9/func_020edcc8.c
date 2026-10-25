#include "ctx.h"

extern u8 data_0213300c[];
extern u32 func_0210948c(u8 *p);
extern void func_020c5fec(u8 *p);
extern u32 func_02085cb8(u32 a);
extern u32 func_02085cc0(u32 a);
extern void func_0207c910(u32 a, u32 b, u32 c, u32 d);

void func_020edcc8(u8 *param_1)
{
    int iVar4;
    u32 uVar2;
    u32 iVar3;

    if (func_0210948c(param_1) == 0) {
        return;
    }
    iVar4 = *(volatile int *)(param_1 + 0x214);
    func_020c5fec(param_1);
    uVar2 = func_02085cb8(*(u32 *)(iVar4 + 0x68));
    iVar3 = func_02085cc0(*(u32 *)(iVar4 + 0x68));
    func_0207c910(0x23, 0, iVar3, uVar2);
    func_0207c910(0x1a, 0, *(u32 *)(iVar4 + 0x98) + 0xc, 0x400);
    func_0207c910(0x1b, 0, *(u32 *)(iVar4 + 0x9c) + 0xc, 0x400);
    func_0207c910(0x19, 0, *(u32 *)(iVar4 + 0xa0) + 0xc, 0x800);
    func_0207c910(0x16, 0, *(u32 *)(*(u32 *)(iVar4 + 0x8c) + 0x14), 0x2000);
    func_0207c910(0x15, 0, *(u32 *)(*(u32 *)(iVar4 + 0x90) + 0x14), 0x4000);
    func_0207c910(0x1e, 0, *(u32 *)(*(u32 *)(iVar4 + 0x88) + 0xc), 0x1c0);
    func_0207c910(0x1f, 0, *(u32 *)(*(u32 *)(iVar4 + 0x94) + 0xc), 0x1c0);
    {
        u8 *tb = data_0213300c;
        func_0207c910(0x1f, 0x24, (u32)(tb + *(u8 *)(iVar4 + 4) * 8), 2);
    }
    {
        u8 *tb = data_0213300c;
        func_0207c910(0x1f, 0x26, (u32)(tb + *(u8 *)(iVar4 + 4) * 8 + 2), 2);
    }
    {
        u8 *tb = data_0213300c;
        func_0207c910(0x1f, 0x3c, (u32)(tb + *(u8 *)(iVar4 + 4) * 8 + 4), 2);
    }
    {
        u8 *tb = data_0213300c;
        func_0207c910(0x1f, 0x3e, (u32)(tb + *(u8 *)(iVar4 + 4) * 8 + 6), 2);
    }
    *(u32 *)(iVar4 + 0x154) = 1;
}
