#include "ctx.h"
extern u8 data_0215be48[];
extern void func_0207c910(u32 a, u32 b, u32 c, u32 d);
void func_02113ce8(u32 *param_1)
{
    if (param_1[4] == 0) {
        return;
    }
    if (param_1[5] != 0) {
        if ((*(u32 *)(*(u8 **)data_0215be48 + 0x4870) & 1) != 0) {
            func_0207c910(0x23, 0, param_1[5], param_1[7]);
            func_0207c910(0x1e, 0, param_1[4], 0x1c0);
            param_1[0] = 0;
            return;
        }
        return;
    }
    return;
}
