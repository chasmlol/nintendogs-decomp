#include "ctx.h"
extern u8 *data_0214f464;
u32 func_02022000(s32 v)
{
    u32 r = 0;
    u8 *p = data_0214f464;
    if (v == *(s8 *)(p + 10) && *(s8 *)(p + 12) == 3) {
        r = 1;
    }
    return r;
}
