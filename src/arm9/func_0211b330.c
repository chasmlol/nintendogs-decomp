#include "ctx.h"

extern u16 *func_020931a8(s32 i);

s32 func_0211b330(s32 param_1)
{
    s32 i;
    s32 k;
    s32 kold;
    k = 0;
    i = -1;
    for (;;) {
        i = (s16)(i + 1);
        while (i < 5 && *func_020931a8(i) == 0xffff) {
            i = (s16)(i + 1);
        }
        kold = k;
        k = (s16)(k + 1);
        if (kold >= param_1) {
            break;
        }
    }
    if (i >= 5) {
        i = -1;
    }
    return i;
}
