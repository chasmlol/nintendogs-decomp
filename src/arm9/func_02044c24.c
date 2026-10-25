#pragma avoid_byte strb
#include "ctx.h"
extern u8 *data_0214f464;
void func_02044c24(u8 v)
{
    u8 *g = data_0214f464;
    if (*(s8 *)(g + 7) == -1)
        g[8] = v;
}
