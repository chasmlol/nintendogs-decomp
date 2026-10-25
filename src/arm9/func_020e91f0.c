#include "ctx.h"

extern u32 data_0213e770;

u32 func_020e91f0(u32 param_1, u32 param_2)
{
    u32 (*fp)(u32, u32, u32) = (u32 (*)(u32, u32, u32))data_0213e770;
    u32 r = fp(param_1, param_2, 0);
    return (r & 0xffff) << 3;
}
