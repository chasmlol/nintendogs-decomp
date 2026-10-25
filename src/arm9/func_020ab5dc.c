#include "ctx.h"

extern u32 func_01ffdb08(s32 i);
extern u32 func_020341f0(u32 v);

u32 func_020ab5dc(void)
{
    u32 res = 0;
    s32 i = 0;
    for (;;) {
        u32 r = func_01ffdb08(i);
        if (r != 0) {
            r = func_020341f0(r);
            if (r == 0) {
                res = 1;
                break;
            }
        }
        i = (s16)(i + 1);
        if (i >= 3) {
            break;
        }
    }
    return res;
}
