#pragma avoid_byte strb
#include "ctx.h"

s32 func_020397fc(u8 *param_1)
{
    s16 v;
    v = *(s16 *)(param_1 + 0xee);
    *(s16 *)(param_1 + 0xea) = v;
    *(s8 *)(param_1 + 0x8a) = -1;
    return 1;
}
