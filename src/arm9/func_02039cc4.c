#include "ctx.h"

extern u8 *data_0214f464;
s32 func_020bc14c(void);

u32 func_02039cc4(u8 *param_1)
{
    u32 r = 1;
    s32 c = *(s8 *)(param_1 + 0x88);
    s32 x = func_020bc14c();
    if (c != x) {
        if (c != *(s8 *)(data_0214f464 + 7)) {
            r = 0;
        }
    }
    return r;
}
