#include "ctx.h"

extern u32 func_0207c910(s32 a, u32 b, u8 *c, u32 d);

u32 func_020074a4(u8 *param_1)
{
    u32 b;
    u32 d;
    b = (*(u32 *)(param_1 + 0x2c) & 0xffff) << 3;
    d = (u32)(*(u16 *)(param_1 + 0x30)) << 3;
    func_0207c910(1, b, param_1 + *(u32 *)(param_1 + 0x38), d);
    *(u16 *)(param_1 + 0x32) = *(u16 *)(param_1 + 0x32) | 1;
    return 1;
}
