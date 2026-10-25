#include "ctx.h"

s32 func_02022cd8(u8 *param_1)
{
    s32 a;
    s16 x = *(s16 *)(param_1 + 0xf0);

    if (x < 91) {
        goto L18;
    }
    if (x >= 111) {
        goto L18;
    }
    a = 1;
    goto L1c;
L18:
    a = 0;
L1c:
    if (a != 0) {
        x = 1;
        goto L40;
    }
    if (x < 15) {
        goto L3c;
    }
    if (x > 74) {
        goto L3c;
    }
    x = 1;
    goto L40;
L3c:
    x = 0;
L40:
    if (x != 0) {
        return *(s16 *)(param_1 + 0xf8);
    }
    return -1;
}
