#include "ctx.h"

extern void func_020a0e04(s32 v);

void func_0210454c(s32 p0)
{
    s32 r = -1;
    if (p0 == 1) {
        goto L28;
    }
    if (p0 == 2) {
        goto L30;
    }
    if (p0 == 3) {
        r = 4;
    }
    goto join;
L28:
    r = 2;
    goto join;
L30:
    r = 3;
join:
    if (r < 0) {
        return;
    }
    func_020a0e04(r);
}
