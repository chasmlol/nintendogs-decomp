#pragma avoid_byte strb
#include "ctx.h"

extern u8 *data_0214f464;

void func_0204494c(u8 v)
{
    if (*(s8 *)(data_0214f464 + 19) == 3) {
        *(u8 *)(data_0214f464 + 19) = v;
    }
}
