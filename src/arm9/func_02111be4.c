#include "ctx.h"

extern u32 data_0215be48;
extern void func_020fc594(u32, u32, u32);

void func_02111be4(u16 param_1, u16 param_2, u16 param_3)
{
    u8 *iVar1 = (u8 *)data_0215be48 + 0xc840;
    *(u32 *)(iVar1 + 4) = 2;
    *(u16 *)(iVar1 + 8) = param_1;
    *(u16 *)(iVar1 + 10) = param_2;
    *(u16 *)(iVar1 + 12) = param_3;
    func_020fc594(2, 8, 1);
}
