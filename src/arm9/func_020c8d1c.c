#include "ctx.h"

extern s32 func_01ffdb08(s32 v);
extern s32 func_020274a4(s32 v);

s32 func_020c8d1c(void)
{
    s32 i = 0;
    s32 v;
    for (;;) {
        v = func_01ffdb08(i);
        if (v != 0) {
            v = func_020274a4(v);
            if (v == 2) {
                return i;
            }
        }
        i = (s16)(i + 1);
        if (i >= 3) {
            return -1;
        }
    }
}
