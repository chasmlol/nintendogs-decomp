#include "ctx.h"

extern void func_020c7544(u32 p0, u32 p1, u32 p2, u32 p3, u32 p4, u32 p5);

void func_020f10c4(u8 *param_1, u32 *param_2, u32 *param_3)
{
    u8 *e = *(u8 **)(*(u8 **)(param_1 + 0x214));
    func_020c7544((u32)param_1, (u32)param_2, (u32)param_3, *(u32 *)(e + 4), *(u32 *)(e + 0x10), 0);
}
