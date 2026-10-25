#include "ctx.h"

extern s32 func_020280d8(u32 p);

s32 func_020ec43c(u32 p)
{
    s32 v = func_020280d8(p);
    if (v < 0) {
        goto check2;
    }
    if (v <= 15) {
        return v;
    }
check2:
    if (v >= 52 && v <= 55) {
        return v;
    }
    return -1;
}
