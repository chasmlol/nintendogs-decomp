#include "ctx.h"

extern u8 *data_0215be48;
void func_0207c910(u32 a, u32 b, u32 c, u32 d);

void func_02113d64(u32 *param_1)
{
    u8 *q;
    q = data_0215be48;
    q = q + 0x4000;
    if ((*(u32 *)(q + 0x870) & 0x10000000) == 0) {
        return;
    }
    func_0207c910(35, *(u32 *)(q + 0x848), param_1[5], param_1[7]);
    func_0207c910(30, 448, param_1[4], 64);
    param_1[0] = 0;
}
