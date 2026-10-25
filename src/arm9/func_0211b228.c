#include "ctx.h"

u32 func_01ffdb08(s32 a);
u8 func_020341f0(u32 a);

s32 func_0211b228(s32 param_1)
{
    s16 i;
    s32 pk;
    s16 k;
    s16 kn;
    u32 r;
    k = 0;
    i = -1;
    pk = param_1;
top1:
    i = (s16)(i + 1);
    goto check;
top2:
    i = (s16)(i + 1);
check:
    if (i < 3) {
        r = func_01ffdb08(i);
        if (r == 0) {
            goto top2;
        }
        if (func_020341f0(r) != 0) {
            goto top2;
        }
    }
    kn = (s16)(k + 1);
    if (k < pk) {
        k = kn;
        goto top1;
    }
    k = kn;
    if (i >= 3) {
        i = -1;
    }
    return i;
}
