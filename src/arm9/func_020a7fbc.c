#include "ctx.h"

extern u16 *data_0215942c;
extern void func_020a85c4(u16 *p, u32 v);

void func_020a7fbc(u16 param_1, u16 param_2, u16 param_3, u16 param_4)
{
    s16 sVar1;
    s32 iVar2;
    u16 *puVar3;
    u8 *q;

    puVar3 = data_0215942c;
    func_020a85c4(puVar3, 0x8003);
    puVar3[2] = param_4;
    puVar3[7] = param_1;
    puVar3[3] = param_2;
    puVar3[4] = param_3;
    sVar1 = (s16)puVar3[7];
    iVar2 = (s32)sVar1;
    q = (u8 *)puVar3 + 32;
    *(u16 *)(q + iVar2 * 20) = *(u16 *)(q + iVar2 * 20) | 1;
    *(u16 *)(q + iVar2 * 20 + 2) = sVar1;
}
