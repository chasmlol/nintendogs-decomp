#include "ctx.h"

void func_02005514(int param_1, u16 param_2, u16 param_3, u16 param_4, u32 param_5, u32 param_6)
{
    *(u32 *)(param_1 + 0x30) = 5;
    *(u16 *)(param_1 + 0x34) = param_2;
    *(u16 *)(param_1 + 0x36) = param_3;
    *(u16 *)(param_1 + 0x38) = param_4;
    *(u16 *)(param_1 + 0x3a) = param_5;
    *(u16 *)(param_1 + 0x3c) = param_6;
}
