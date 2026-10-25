#pragma avoid_byte strb
#include "ctx.h"

extern u8 *data_0214f464;

void func_02044b58(void)
{
    s32 i;
    u32 v;
    i = 0;
    v = 255;
    do {
        u32 t = *(u32 *)(data_0214f464 + i * 4 + 0x54);
        if (t != 0) {
            u8 *q = (u8 *)(t + 182);
            *q = v;
        }
        i = (s8)(i + 1);
    } while (i < 3);
}
