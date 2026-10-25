#pragma avoid_byte strb
#include "ctx.h"

void func_02025804(u8 *param_1)
{
    s32 x = *(s32 *)(*(u8 **)(param_1 + 0x9e8) + 8);
    *(u32 *)(param_1 + 0x920) = (u32)(((s64)x * 0x1004 + 0x800) >> 12);
    param_1[175] = 1;
}
