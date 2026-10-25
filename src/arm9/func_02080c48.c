#include "ctx.h"

extern u16 data_02156008;

void func_02080b84(u32 a, u32 b);

void func_02080c48(u32 param_1, u32 param_2)
{
    u32 t = ((param_2 & 0x7f00) << 8) >> 16;

    if (t == 16) {
        data_02156008 = 1;
        return;
    }
    func_02080b84(t, param_2);
}
