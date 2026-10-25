#include "ctx.h"

extern u8 *data_0215bf9c;
extern void func_02112798(u32 a, u32 b, u32 c);

void func_0210a970(s32 *param_1)
{
    *(u32 *)(data_0215bf9c + 0x19c) = 1;
    func_02112798(0, 2, *param_1 == 1);
    func_02112798(0, 1, *param_1 == 2);
    func_02112798(0, 0, *param_1 == 3);
    func_02112798(0, 3, *param_1 == 4);
    func_02112798(0, 4, 0);
}
