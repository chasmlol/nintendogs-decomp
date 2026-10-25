#include "ctx.h"

extern u8 *data_02159034;
extern void func_0206c7d4(u8 *p, u32 a, u32 b);

void func_02093160(u8 *param_1, s16 param_2)
{
    u8 *iVar1 = *(u8 **)(data_02159034 + param_2 * 24 + 0x14f4);
    func_0206c7d4(param_1, (u32)(iVar1 + 4), 0x85c);
    *(u16 *)(iVar1 + 0x8fe) = *(u16 *)(iVar1 + 0x8fe) | 1;
}
