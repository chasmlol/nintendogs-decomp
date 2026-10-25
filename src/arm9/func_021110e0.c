#include "ctx.h"

extern s32 func_01ffdb08(s32 idx);

s32 func_021110e0(u8 *param_1)
{
    s32 i;
    s32 found;
    s32 idx;
    found = 0;
    i = found;
    idx = -1;
    do {
        s32 r = func_01ffdb08(i);
        if (r != 0) {
            if (idx < 0) {
                found = 1;
                idx = i;
            } else {
                found = 0;
            }
        }
        i = (s16)(i + 1);
    } while (i < 3);
    if (found != 0 && idx >= 0) {
        *(s16 *)(param_1 + 4) = (s16)idx;
    }
    return found;
}
