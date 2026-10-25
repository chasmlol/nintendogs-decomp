#include "ctx.h"

extern void func_02108e24(u32 param_1);

void func_021001bc(u8 *param_1)
{
    func_02108e24(1);
    *(u32 *)(param_1 + 0x93c) = 0;
    *(u32 *)(param_1 + 0x94c) = 0;
}
