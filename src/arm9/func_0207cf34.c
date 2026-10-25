#include "ctx.h"

extern void func_0207d018(u32 *p, u32 v);
extern void func_0207cfb4(u32 *p, u32 v);

void func_0207cf34(u32 *param_1, u32 param_2, u32 param_3)
{
    u32 iVar1;
    u32 uVar2;
    u8 *q;

    if (param_2 == 0) {
        func_0207d018(param_1, param_3);
        return;
    }
    if (param_2 == param_1[0]) {
        func_0207cfb4(param_1, param_3);
        return;
    }
    uVar2 = *(u16 *)((u8 *)param_1 + 10);
    q = (u8 *)param_3 + uVar2;
    iVar1 = *(u32 *)(param_2 + uVar2);
    *(u32 *)q = iVar1;
    *(u32 *)(q + 4) = param_2;
    *(u32 *)(iVar1 + uVar2 + 4) = param_3;
    *(u32 *)(param_2 + *(u16 *)((u8 *)param_1 + 10)) = param_3;
    *(u16 *)((u8 *)param_1 + 8) = *(u16 *)((u8 *)param_1 + 8) + 1;
}
