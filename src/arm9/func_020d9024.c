#include "ctx.h"
extern s32 func_01ffdb08(s32 x);

s32 func_020d9024(s32 p)
{
    p = (s16)(p + 1);
    if (func_01ffdb08(p) != 0) {
        goto found;
    }
    for (;;) {
        p = (s16)(p + 1);
        if (p >= 3) {
            return -1;
        }
        if (func_01ffdb08(p) != 0) {
            goto found;
        }
    }
found:
    return p;
}
