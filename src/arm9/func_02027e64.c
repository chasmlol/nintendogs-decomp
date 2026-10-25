#pragma avoid_byte strb
#include "ctx.h"

void func_02027e64(u8 *param_1, s32 param_2, s32 param_3)
{
    s32 v;
    u32 t;
    t = (u32)param_2 + 8;
    v = (s16)(param_3 + *(s16 *)(*(u8 **)(param_1 + 0x9e8) + (((s32)(t << 16)) >> 15) + 0x18));
    *(u8 *)(param_1 + 0xd2) = 1;
    if (v < 0) {
        v = 0;
    }
    if (v > 10000) {
        v = 10000;
    }
    *(s16 *)(*(u8 **)(param_1 + 0x9e8) + (((s32)((u32)t << 16)) >> 15) + 0x18) = (s16)v;
}
