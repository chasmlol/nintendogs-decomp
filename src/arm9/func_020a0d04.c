#include "ctx.h"

extern u8 data_02159074[];
extern u8 data_0212fdc5[];
extern void func_02070ba8(u32 a, u32 b, u32 c);

void func_020a0d04(u32 param_1, u32 param_2)
{
    u32 v;
    v = data_0212fdc5[*(u16 *)(data_02159074 + 24) * 6];
    if (v != 0xff) {
        func_02070ba8(v, param_1, param_2);
    }
}
