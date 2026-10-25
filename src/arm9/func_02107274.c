#include "ctx.h"

extern u32 data_0215be48;

void func_02107274(s32 *param_1)
{
    *param_1 = *param_1 + 1;
    if (*param_1 > 20) {
        u8 *obj = (u8 *)data_0215be48;
        *(u32 *)(obj + 0x4868) = 1;
    }
}
