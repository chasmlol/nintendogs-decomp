#include "ctx.h"

s32 func_0206e820(u8 *p)
{
    s32 r8;
    s32 start;
    s32 bit;
    u32 *w;
    s32 n;
    u32 *base;
    n = *(s32 *)(p + 4);
    base = *(u32 **)(p + 0x14);
    r8 = *(s32 *)(p + 0xc) + 1;
    if (r8 >= n) {
        r8 = 0;
    }
    start = r8;
    w = base + (r8 >> 5);
    bit = r8 & 31;
Ltop:
    if ((*w & (1u << bit)) == 0) {
        goto Lfound;
    }
    r8 = r8 + 1;
    if (r8 >= n) {
        goto Lwrap;
    }
    bit = bit + 1;
    if (bit > 31) {
        bit = 0;
        w = w + 1;
    }
    goto Lcheck;
Lwrap:
    r8 = 0;
    bit = 0;
    w = base;
Lcheck:
    if (r8 == start) {
        goto Lneg;
    }
    goto Ltop;
Lfound:
    *(s32 *)(p + 8) = r8;
    return r8;
Lneg:
    return -1;
}
