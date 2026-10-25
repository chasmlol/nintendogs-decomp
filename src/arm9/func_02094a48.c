#include "ctx.h"

extern u32 data_02159034;
extern void func_0206c7d4(u8 *, u8 *, u32);

void func_02094a48(u8 *param_1, s16 param_2, u32 param_3)
{
    u8 *iVar1 = (u8 *)data_02159034 + 0x1484 + param_2 * 24;
    u8 *r4 = (u8 *)(*(u32 *)(iVar1 + 4) * (u16)param_3 + *(u32 *)(iVar1 + 0x10));
    func_0206c7d4(param_1, r4 + 4, 0x13c);
    *(u16 *)(r4 + 0x186) = *(u16 *)(r4 + 0x186) | 1;
}
