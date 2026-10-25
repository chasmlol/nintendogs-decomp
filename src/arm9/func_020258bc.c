#pragma avoid_byte strb
#include "ctx.h"

void func_020258bc(u8 *param_1)
{
    s32 x = *(s32 *)(*(u8 **)(param_1 + 0x9e8) + 8);
    *(s32 *)(param_1 + 0x920) = (s32)(((s64)x * 10250 + 0x800) >> 12);
    param_1[175] = 2;
}
