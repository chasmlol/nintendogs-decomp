#include "ctx.h"

BOOL func_020d10dc(u32 *p)
{
    s32 lim = *(s32 *)p[0] - 1;
    s32 cur = p[2];
    if (cur >= lim) {
        goto ret0;
    }
    p[2] = cur + 1;
    p[1] = 0;
    return 1;
ret0:
    return 0;
}
