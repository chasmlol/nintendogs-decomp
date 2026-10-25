#include "ctx.h"

extern void func_020cf9c8(s32 a, s32 b, s32 c, s32 d);
extern void func_020cf9bc(s32 a);
extern void func_020be1d8(s32 a);

void func_020d843c(s32 param_1)
{
    func_020cf9c8(param_1, 2, -1, 0);
    func_020cf9bc(param_1);
    func_020be1d8(1);
    *(s32 *)(param_1 + 0x6c) = 0;
    *(s16 *)(param_1 + 100) = 0;
}
