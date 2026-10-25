#include "ctx.h"

extern u64 func_0205e270(u32 a, u32 b);

u32 func_0212109c(u8 *param_1, s32 param_2)
{
    u64 r = func_0205e270(*(u32 *)(param_1 + 0x50) + param_2 + 1, *(u32 *)(param_1 + 0x3c));
    return (u32)(r >> 32);
}
