#include "ctx.h"

void func_020895a8(u32 a, u32 b, u32 c, u32 d, u32 e);

void func_020898a8(u32 param_1, u32 param_2, u32 param_3, u32 param_4,
                   u32 param_5, u32 param_6, u32 param_7)
{
    func_020895a8(0x11, param_3, param_4,
                  param_1 << 31 | param_2 << 30 | param_5 << 29 | param_6 << 28 | param_7 << 27,
                  0);
}
