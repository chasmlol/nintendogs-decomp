#include "ctx.h"

extern u32 data_02159034;
extern void func_0206c7d4(u8 *, u8 *, u32);

void func_02095578(u8 *param_1, s16 param_2)
{
    u8 *iVar1;
    iVar1 = *(u8 **)((u8 *)data_02159034 + param_2 * 24 + 0x144c);
    func_0206c7d4(param_1, iVar1 + 4, 0x85c);
    *(u16 *)(iVar1 + 0x8fe) = *(u16 *)(iVar1 + 0x8fe) | 1;
}
