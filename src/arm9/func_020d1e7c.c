#include "ctx.h"

extern void func_020be1d8(s32 v);
extern void func_020cf9c8(u8 *p, s32 a, s32 b, s32 c);

void func_020d1e7c(u8 *param_1)
{
    func_020be1d8(1);
    func_020cf9c8(param_1, 3, -1, 0);
}
