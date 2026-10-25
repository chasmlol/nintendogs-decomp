#include "ctx.h"
u32 func_02007304(u32 *p)
{
    if (p[0] >= 100) {
        return 0;
    }
    if (p[1] < 1) {
        goto zero;
    }
    if (p[1] <= 12) {
        goto second;
    }
zero:
    return 0;
second:
    if (p[2] < 1) {
        goto zero2;
    }
    if (p[2] <= 31) {
        goto one;
    }
zero2:
    return 0;
one:
    return 1;
}
