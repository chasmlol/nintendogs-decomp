#include "ctx.h"

extern u32 data_0215be4c;

s32 func_02101764(u32 param_1, s32 param_2)
{
    u8 *b;
    s32 i;
    u8 *q;
    s32 r = -1;

    i = 0;
    q = (u8 *)data_0215be4c + 4;
    do {
        b = q + 24;
        if (*(s32 *)(q + 4) != 0 && *(s32 *)(q + 8) != 0) {
            if (*(s32 *)b == param_2) {
                r = i;
                break;
            }
        }
        i = i + 1;
        q = q + 440;
    } while (i < 24);
    return r;
}
