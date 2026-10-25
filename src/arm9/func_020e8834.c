#include "ctx.h"

extern void func_020c7544(u8 *a, s32 *b, u32 *c, u32 d, u32 e, u32 f);

void func_020e8834(u8 *param_1, s32 *param_2, u32 *param_3)
{
    u8 *p = *(u8 **)(*(u8 **)(param_1 + 0x214));
    func_020c7544(param_1, param_2, param_3, *(u32 *)(p + 4), *(u32 *)(p + 0x10), 0);
}
