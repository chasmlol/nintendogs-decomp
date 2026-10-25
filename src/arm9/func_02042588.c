#pragma avoid_byte strb
#include "ctx.h"

extern u8 *data_0214f464;

s32 func_02042588(s32 param_1)
{
    u8 *g = data_0214f464;
    u8 *h;
    if (*(s8 *)(g + param_1 + 22) == -1) {
        u32 t = *(s8 *)(g + 21) + 1;
        g[21] = t;
        h = data_0214f464;
        {
            s32 v = *(s8 *)(h + 21);
            u8 *a = h + param_1;
            a[22] = v;
        }
    }
    return *(s8 *)(data_0214f464 + param_1 + 22);
}
