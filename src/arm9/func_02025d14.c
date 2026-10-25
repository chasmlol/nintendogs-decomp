#pragma avoid_byte strb
#include "ctx.h"
void func_02025d14(u8 *param_1)
{
    s32 x = *(s32 *)(*(u8 **)(param_1 + 0x9e8) + 8);
    u32 v;
    u8 *t = param_1 + 175;
    *(u32 *)(param_1 + 0x920) = (u32)(((s64)x * 0x1cd4 + 0x800) >> 12);
    v = 3;
    *(u8 *)(t) = (u8)(v);
}
