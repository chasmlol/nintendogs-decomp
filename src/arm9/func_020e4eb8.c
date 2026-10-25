#include "ctx.h"

extern void func_020e9ca0(u32 *a, u32 *b, u32 c, u32 d, u32 e);

void func_020e4eb8(u8 *param_1)
{
    *(u32 *)(param_1 + 0xa8) = *(u32 *)(param_1 + 0xa8) + 0xc000;
    func_020e9ca0((u32 *)(param_1 + 0xa8), (u32 *)(param_1 + 0xb0), 0, 0, 0);
}
