#include "ctx.h"

extern s32 data_0212f584[];

s32 func_020939ac(s32 param_1)
{
    s32 r = 0;
    s32 i = 0;
    do {
        if (param_1 <= data_0212f584[i]) {
            r = i;
            goto out;
        }
        i = (s16)(i + 1);
    } while (i < 15);
out:
    return r;
}
