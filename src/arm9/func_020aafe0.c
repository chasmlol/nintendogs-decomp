#include "ctx.h"

extern void func_0200b644(u32 a, u8 *b, u8 *c, u32 d, u32 *e);

void func_020aafe0(u8 *param_1, u32 param_2, u32 param_3)
{
    u32 local[3];
    local[0] = 0;
    local[1] = 0x1000;
    local[2] = 0;
    func_0200b644(param_2, *(u8 **)(param_1 + 0x1c) + 48, param_1 + 156, param_3, local);
}
