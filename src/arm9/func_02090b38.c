#include "ctx.h"
u32 func_02090b38(u8 *o, u32 a, u32 b)
{
    u32 res = 0xffffffff;
    u32 i = 0;
    u32 hi;
    u32 lo;
    u32 *arr;
    u8 kind0;
    u32 n;
    u8 *d = *(u8 **)(o + 0xc);
    u32 e;
    n = *(u16 *)(d + 8);
    if (i < n) {
        kind0 = d[0xb];
        arr = *(u32 **)(o + 0x10);
        do {
            e = arr[i];
            if (kind0 == 1) {
                goto k1;
            }
            if (kind0 == 2) {
                hi = e >> 16;
                lo = e & 0xffff;
            }
            goto common;
k1:
            hi = e >> 8;
            lo = e & 0xff;
common:
            if (hi == a && lo == b) {
                res = i;
                break;
            }
            i = i + 1;
        } while (i < n);
    }
    return res;
}
