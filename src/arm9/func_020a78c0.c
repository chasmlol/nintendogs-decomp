#include "ctx.h"

extern u8 *data_0215942c;

s32 func_020a78c0(void)
{
    s32 c = 0;
    s32 i = 0;
    u8 *p = data_0215942c;
    u32 bit;
    do {
        bit = *(u16 *)(p + 0x20) & 1;
        p = p + 20;
        if (bit) {
            c = (s16)(c + 1);
        }
        i = (s16)(i + 1);
    } while (i < 3);
    return c;
}
