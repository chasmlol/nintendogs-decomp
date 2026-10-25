#include "ctx.h"

extern u32 data_0215b720;
void func_020e0114(u8 *p, u32 a, u32 b, u32 c, u32 d, u32 e);
void func_020e01a8(u32 a, u32 b, u32 c, u8 *p);

void func_020e1d58(u8 *param_1, u32 param_2, u32 param_3)
{
    func_020e0114(param_1, 0, 0, 8000, 0, data_0215b720);
    func_020e01a8(param_2, param_3, 60, param_1);
}
