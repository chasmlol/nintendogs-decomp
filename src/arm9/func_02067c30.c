#include "ctx.h"

typedef volatile u64 vu64;

s32 func_02067c30(s32 *p)
{
    s64 sum;
    sum = (s64)p[0] * p[0];
    sum += (s64)p[1] * p[1];
    sum += (s64)p[2] * p[2];
    *(vu16 *)0x040002b0 = 1;
    *(vu64 *)0x040002b8 = (u64)(sum * 4);
    while (*(vu16 *)0x040002b0 & 0x8000) {
    }
    return (*(volatile s32 *)0x040002b4 + 1) >> 1;
}
