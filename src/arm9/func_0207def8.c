#include "ctx.h"

extern void func_0207d0f8(u32 *a, u32 b, u8 *c, u32 d, u32 e);

u32 *func_0207def8(u32 *param_1, u32 param_2, u16 param_3)
{
    u8 *r4 = (u8 *)param_1 + 36;
    func_0207d0f8(param_1, 0x46524d48, r4 + 12, param_2, param_3);
    param_1[9] = param_1[6];
    *(u32 *)(r4 + 4) = param_1[7];
    *(u32 *)(r4 + 8) = 0;
    return param_1;
}
