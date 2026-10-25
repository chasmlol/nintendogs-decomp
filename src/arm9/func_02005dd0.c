#include "ctx.h"

void func_0206833c(u32 a, s32 b);

void func_02005dd0(u8 *param_1, s32 param_2)
{
    if (param_2 > 191) {
        param_2 = 191;
    }
    *(s8 *)(param_1 + param_2 + 0x1a);
    func_0206833c(0x0400106c, *(s8 *)(param_1 + param_2 + 0x1a));
}
