#include "ctx.h"

extern void func_020870b8(u8 *a, u32 b);

void func_02086fd4(u8 *param_1, u16 param_2)
{
    *(u32 *)(param_1 + 0xc) = *(u32 *)(param_1 + 0xc) | 4;
    *(u32 *)(param_1 + 0x2c) = *(u32 *)(param_1 + 8);
    *(u32 *)(param_1 + 0x34) = 0;
    *(u16 *)(param_1 + 0x32) = 0;
    *(u16 *)(param_1 + 0x30) = param_2;
    func_020870b8(param_1, 2);
}
