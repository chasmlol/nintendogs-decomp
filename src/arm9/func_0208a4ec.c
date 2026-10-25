#include "ctx.h"
extern u8 data_02157c60[];
u8 func_0208a4ec(s32 param_1, u32 param_2, u32 param_3)
{
    u8 *p = data_02157c60 + param_1 * 12;
    *(u32 *)(data_02157c60 + param_1 * 12) = param_2;
    *(u32 *)(p + 4) = param_3;
    p[8] = p[8] + 1;
    return p[8];
}
