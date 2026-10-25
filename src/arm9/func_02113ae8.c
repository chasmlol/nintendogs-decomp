#include "ctx.h"

extern u32 data_02148b2c;
extern u32 data_02148b3c;
extern void func_0207c910(u32, u32, u32, u32);

void func_02113ae8(u32 *param_1)
{
    func_0207c910(0x1f, 0, param_1[3], 0xe0);
    func_0207c910(*(u32 *)((u8 *)&data_02148b2c + 8), 0, param_1[2], 0x4000);
    func_0207c910(*(u32 *)((u8 *)&data_02148b3c + 8), 0, param_1[6], 0x800);
    *param_1 = 0;
}
