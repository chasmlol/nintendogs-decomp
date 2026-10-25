#include "ctx.h"

extern void func_020c7544(u32, u32, u32, u32, u32, u32);

void func_020efea0(u8 *param_1, u32 param_2, u32 param_3)
{
    u8 *lr = *(u8 **)(*(u8 **)(param_1 + 0x214));
    func_020c7544((u32)param_1, param_2, param_3, *(u32 *)(lr + 4), *(u32 *)(lr + 0x10), 0);
}
