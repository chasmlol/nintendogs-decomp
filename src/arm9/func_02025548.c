#pragma avoid_byte strb
#include "ctx.h"

void func_02025548(u8 *param_1)
{
    s32 a = *(s32 *)(*(u8 **)(param_1 + 0x9e8) + 8);
    *(s32 *)(param_1 + 0x920) = (s32)(((s64)a * 0x233c + 0x800) >> 12);
    *(u8 *)(param_1 + 175) = 2;
}
