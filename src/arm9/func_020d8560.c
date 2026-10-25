#include "ctx.h"

extern void func_020cf9c8(u8 *p, s32 a, s32 b, s32 c);
extern void func_020cf9bc(u8 *p);
extern void func_020be1d8(s32 a);

void func_020d8560(u8 *param_1)
{
    func_020cf9c8(param_1, 2, -1, 0);
    func_020cf9bc(param_1);
    func_020be1d8(0);
}
