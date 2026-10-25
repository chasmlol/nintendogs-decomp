#include "ctx.h"

u32 func_02022d78(u8 *param_1)
{
    u32 r;
    s32 b;
    s32 a;
    s32 x;

    x = *(s16 *)(param_1 + 0xf0);
    if (x < 91) goto L18;
    if (x < 111) {
        a = 1;
        goto LA;
    }
L18:
    a = 0;
LA:
    if (a != 0) {
        b = 1;
        goto LTAIL;
    }
    if (x < 15) goto L3C;
    if (x <= 74) {
        b = 1;
        goto LTAIL;
    }
L3C:
    b = 0;
LTAIL:
    if (b != 0) {
        r = (u16)(x - 12);
    } else {
        r = 0;
    }
    return r;
}
