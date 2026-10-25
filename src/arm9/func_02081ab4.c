#include "ctx.h"

extern u32 (*data_0213e770)(u32, u32, u32);

s32 func_02081ab4(u32 param_1, u32 param_2)
{
    u32 r = (*data_0213e770)(param_1, param_2, 0);
    return (s32)((r & 0xffff) << 3);
}
