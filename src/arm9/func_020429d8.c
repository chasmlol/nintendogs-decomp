#pragma avoid_byte strb
#include "ctx.h"

extern u8 *data_0214f464;

void func_020429d8(s32 param_1)
{
    u8 *obj = data_0214f464;
    if (param_1 != *(s8 *)(obj + 9)) {
        return;
    }
    *(s8 *)(obj + 9) = -1;
    *(u32 *)(data_0214f464 + 0x40) = 0;
}
