#include "ctx.h"

extern u32 data_021487d8;
extern u32 data_021487e4;
extern u32 data_021487f4;
extern void func_0205f050(u8 *dst, u32 n, u32 src, u32 v);
extern u32 func_0210e968(u32 a, u8 *b);
extern u32 *func_02006b78(u32 a);
extern void func_0210f14c(u32 a, u32 b, u32 c, u32 d, u32 e, u32 f, u32 g, u32 h);

u32 func_0210f2ec(u32 param_1, u32 param_2, u32 param_3, u32 param_4, u32 param_5, u32 param_6, u32 param_7)
{
    u8 acStack_e0[64];
    u8 acStack_a0[64];
    u8 acStack_60[68];
    u32 uVar5;
    u32 iVar1;
    u32 iVar2;
    u32 p2c = param_2;
    u32 p3c = param_3;
    u32 p4c = param_4;
    u32 iVar3;
    u32 *piVar4;

    uVar5 = 0;
    func_0205f050(acStack_e0, 64, (u32)&data_021487d8, p4c);
    func_0205f050(acStack_a0, 64, (u32)&data_021487e4, p4c);
    func_0205f050(acStack_60, 64, (u32)&data_021487f4, p4c);
    iVar1 = func_0210e968(param_1, acStack_e0);
    iVar2 = func_0210e968(param_1, acStack_a0);
    iVar3 = func_0210e968(param_1, acStack_60);
    if (iVar1 != 0 && iVar2 != 0 && iVar3 != 0) {
        piVar4 = func_02006b78(iVar3);
        func_0210f14c(p2c, p3c, param_5, iVar1, iVar2, (u32)piVar4, (u16)param_6, (u16)param_7);
        uVar5 = 1;
    }
    return uVar5;
}
