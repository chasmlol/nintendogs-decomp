#include "ctx.h"

void func_020c1d60(u8 *a, u32 b);
void func_020bd858(u8 *a);
void func_020bcbb8(u8 *a);

void func_020c1f68(u8 *param_1)
{
    u8 *iVar3;
    u32 *piVar1;
    u32 iVar2;
    iVar3 = *(u8 **)(param_1 + 0x1b0);
    *(u16 *)(iVar3 + 156) = 0;
    func_020c1d60(iVar3, *(u32 *)(param_1 + 0x28));
    piVar1 = *(u32 **)(iVar3 + 0x214);
    *piVar1 = *(u32 *)(param_1 + 0x1bc);
    iVar2 = *piVar1;
    *(u16 *)(iVar2 + 32) = (u16)(*(u16 *)(iVar2 + 32) | 1);
    func_020bd858(iVar3);
    func_020bcbb8(iVar3);
}
