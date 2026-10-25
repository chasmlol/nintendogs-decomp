#pragma avoid_byte strb
#include "ctx.h"

extern u8 *data_0214f464;

void func_02044bf0(u32 param_1)
{
    u8 *p = data_0214f464;
    if (param_1 != (u32)(s32)*(s8 *)(p + 7)) {
        return;
    }
    *(s8 *)(p + 8) = -1;
    *(s8 *)(p + 7) = *(s8 *)(p + 8);
}
