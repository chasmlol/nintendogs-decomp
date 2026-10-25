#include "ctx.h"

extern u64 func_0205e47c(u32 a, u32 b);

u32 func_0207ce20(u8 *param_1, u32 param_2)
{
    return (u16)(func_0205e47c(param_2 + 1, *(u32 *)(param_1 + 4)) >> 32);
}
