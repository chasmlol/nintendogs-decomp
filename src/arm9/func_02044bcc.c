#pragma avoid_byte strb
#include "ctx.h"

extern u8 *data_0214f464;

void func_02044bcc(u32 param_1)
{
    if ((s32)param_1 == *(s8 *)(data_0214f464 + 8)) {
        *(s8 *)(data_0214f464 + 8) = -1;
    }
}
