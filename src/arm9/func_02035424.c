#include "ctx.h"

s32 func_02035424(u8 *param_1)
{
    s32 v;
    s32 b;
    if (*(s8 *)(param_1 + 0x8b) != 4) {
        return 0;
    }
    v = *(s16 *)(param_1 + 0xea);
    if (v < 1) {
        goto eq1;
    }
    if (v > 12) {
        goto eq1;
    }
    b = 1;
    goto common1;
eq1:
    b = (v == 0x262);
common1:
    if (b) {
        return 1;
    }
    if (v < 792) {
        goto ret0;
    }
    if (v > 827) {
        goto ret0;
    }
    v = *(s16 *)(param_1 + 0xee);
    if (v < 1) {
        goto eq2;
    }
    if (v > 12) {
        goto eq2;
    }
    b = 1;
    goto common2;
eq2:
    b = (v == 0x262);
common2:
    if (b) {
        return 1;
    }
ret0:
    return 0;
}
