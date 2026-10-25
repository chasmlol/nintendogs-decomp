#include "ctx.h"

extern u8 *data_0214f464;

u32 func_020449e4(void)
{
    u8 *p = data_0214f464;
    s32 s = *(s8 *)(p + 6);
    u8 *r;
    if (*(s8 *)(p + s + 25) != 0) {
        r = p + 420 + s * 0x85c;
    } else {
        r = 0;
    }
    return *(u32 *)(r + 0xc);
}
