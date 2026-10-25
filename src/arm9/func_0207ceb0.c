#include "ctx.h"

u32 func_0207ceb0(u32 *param_1, s32 param_2)
{
    if (param_2 == 0) {
        return *param_1;
    }
    return *(u32 *)(param_2 + *(u16 *)((u8 *)param_1 + 10) + 4);
}
