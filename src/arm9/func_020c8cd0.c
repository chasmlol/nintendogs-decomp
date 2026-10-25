#include "ctx.h"

extern u32 func_01ffdb08(s32 i);
extern u32 func_020350bc(u32 v);

s32 func_020c8cd0(void)
{
    s32 i = 0;
    for (;;) {
        u32 r = func_01ffdb08(i);
        if (r != 0) {
            r = func_020350bc(r);
            if (r != 0) {
                return i;
            }
        }
        i = (s16)(i + 1);
        if (i >= 3) {
            return -1;
        }
    }
}
