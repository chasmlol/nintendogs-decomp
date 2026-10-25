#include "ctx.h"

extern u8 *data_02159034;

s32 func_02093054(void)
{
    s32 r = -1;
    s32 i = 0;
    u8 *w = data_02159034;
    do {
        u8 *t = *(u8 **)(w + 0x14f4);
        if (*(u16 *)(t + 4) == 0xffff) {
            r = i;
            goto out;
        }
        i = (s16)(i + 1);
        w = w + 24;
    } while (i < 5);
out:
    return r;
}
