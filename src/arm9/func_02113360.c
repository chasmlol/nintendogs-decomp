#include "ctx.h"

extern u32 data_0215be48;
void func_020fc594(u32 a, u32 b, u32 c);
void func_0207c910(u32 a, u32 b, u32 c, u32 d);

void func_02113360(u32 *param_1)
{
    func_020fc594(0, 0x10, 1);
    if (param_1[5] != 0) {
        func_0207c910(0x13, *(u32 *)((u8 *)data_0215be48 + 0x483c), param_1[5], param_1[7]);
        func_0207c910(0xe, 0, param_1[4], 0x1c0);
        param_1[0] = 0;
        return;
    }
    return;
}
