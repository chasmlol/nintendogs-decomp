#include "ctx.h"

extern s32 func_01ffdb08(s32 idx);
extern s32 func_020351ac(s32 v);

u32 func_020c8e00(void)
{
    s32 i = 0;
    for (;;) {
        s32 v = func_01ffdb08(i);
        if (v != 0) {
            if (func_020351ac(v) != 0) {
                return 1;
            }
        }
        i = (s16)(i + 1);
        if (i > 3 - 1) {
            /* placeholder */
        }
        if (i >= 3) {
            return 0;
        }
    }
}
