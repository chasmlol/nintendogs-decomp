#include "ctx.h"

extern void func_020c7c24(s32 a, s32 *b, s32 c);

void func_020e79a0(s32 param_1, s32 *param_2)
{
    func_020c7c24(param_1, param_2, 3);
    *(s32 *)(param_1 + 0xb4) = *(s32 *)(param_1 + 0xb4) + 0x52;
}
