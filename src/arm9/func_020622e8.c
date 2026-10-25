#pragma avoid_byte all
#include "ctx.h"

u32 *func_020622e8(u32 *param_1, u32 param_2)
{
    u8 *q;
    u32 m;
    u8 c = (u8)param_2;
    q = (u8 *)param_1 + 1;
    m = *(u8 *)param_1;
    if (m == 0) goto zero;
    for (;;) {
        if (m == c) {
            return (u32 *)(q - 1);
        }
        m = *q;
        q++;
        if (m == 0) break;
    }
zero:
    if (c != 0) {
        return NULL;
    }
    return (u32 *)(q - 1);
}
