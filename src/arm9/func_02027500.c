#include "ctx.h"

u32 func_02027500(u8 *param_1)
{
    s32 x = *(s32 *)(*(u8 **)(param_1 + 0x9e8) + 8);
    return (u32)(((s64)x * 3280 + 0x800) >> 12);
}
