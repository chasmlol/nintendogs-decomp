#include "ctx.h"

extern u32 data_0215be48;
extern void func_0210b5f0(u32, u8 *, u32);

void func_021122d4(s32 param_1, u32 param_2)
{
    u8 *b = (u8 *)data_0215be48;
    func_0210b5f0(*(u32 *)(b + param_1 * 660 + 0x1df4), b + 0x283c + param_1 * 0x800, param_2);
}
