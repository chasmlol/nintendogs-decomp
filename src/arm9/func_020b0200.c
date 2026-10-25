#include "ctx.h"

u64 func_0205e47c(u32 a, u32 b);

void func_020b0200(s16 *p, u32 n, u32 *seed)
{
    s32 i;
    u32 j;
    u32 v;
    u32 hi;
    s16 a;
    s16 b;
    s32 idx;

    i = 0;
    if (n != 0) {
        do {
            p[i] = i;
            i = (s16)(i + 1);
        } while ((u32)i < n);
    }
    for (j = 0; j < n; j = j + 1) {
        v = *seed * 0x10dcd + 1;
        *seed = v;
        hi = (u32)(func_0205e47c((u16)v, n - j) >> 32);
        a = p[j];
        idx = (s16)(j + hi);
        if (a != 31) {
            b = p[idx];
            if (b != 31) {
                p[j] = b;
                p[idx] = a;
            }
        }
    }
}
