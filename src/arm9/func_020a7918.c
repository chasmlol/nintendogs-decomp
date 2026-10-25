#include "ctx.h"

extern u32 data_0215942c;

s32 func_020a7918(void)
{
    s32 r = -1;
    s16 i = 0;
    u8 *b = (u8 *)data_0215942c + 0x20;
    do {
        if (*(u16 *)b & 4) {
            r = i;
            break;
        }
        i = i + 1;
        b = b + 20;
    } while (i < 3);
    return r;
}
