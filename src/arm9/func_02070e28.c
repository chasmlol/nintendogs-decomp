#include "ctx.h"

extern void func_02070d34(s32 a);

void func_02070e28(s32 param_1)
{
    if (((*(s32 *)(param_1 + 0x24)) << 31 >> 31) != 0) {
        func_02070d34(param_1);
        return;
    }
}
