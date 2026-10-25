#include "ctx.h"

void func_02027abc(u8 *p, s32 i, s32 v)
{
    u16 uu;
    s32 hi;
    s32 lo;
    uu = *(u16 *)((u32)(p + 256) + (i << 1) + 56);
    hi = (s16)(uu + 5000);
    lo = (s16)(uu - 5000);
    if (v > hi) {
        v = hi;
    }
    if (v < lo) {
        v = lo;
    }
    if (v > 10000) {
        v = 10000;
    }
    if (v < 0) {
        v = 0;
    }
    ((s16 *)(p + 256 + 50))[i] = (s16)v;
}
