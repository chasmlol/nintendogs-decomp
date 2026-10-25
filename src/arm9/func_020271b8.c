#include "ctx.h"

extern void func_020271e8(u32 p0, u32 p1, u32 p2);
extern void func_01ff810c(u32 p0, u32 p1, u32 p2);

void func_020271b8(u32 param_1, u32 param_2, u32 param_3)
{
    func_020271e8(param_1, param_2, param_3);
    func_01ff810c(param_2, param_1 + 480, param_2);
}
