#include "ctx.h"

extern u8 *data_02159034;
extern void func_0206c7d4(u32 a, u32 b, u32 c);

void func_0209493c(u32 param_1, s16 param_2, u32 param_3)
{
    u8 *iVar1 = data_02159034 + 0x155c + param_2 * 24;
    u32 v = *(u32 *)(iVar1 + 4) * (u16)param_3 + *(u32 *)(iVar1 + 0x10);
    func_0206c7d4(v + 0x140, param_1, 64);
}
