#include "ctx.h"

s32 func_02035018(u8 *param_1)
{
    s32 a;
    s32 c;
    BOOL b;
    if (*(s16 *)(param_1 + 0xea) != 0x3d9) {
        goto ret0;
    }
    a = *(s16 *)(param_1 + 0x152);
    c = *(s16 *)(param_1 + 0x162);
    if (c == a && *(s16 *)(param_1 + 0x14e) == 0x12) {
        b = TRUE;
    } else {
        b = FALSE;
    }
    if (!b) {
        if (c == a && *(s16 *)(param_1 + 0x14e) == 0x21) {
            b = TRUE;
        } else {
            b = FALSE;
        }
        if (!b) {
            if (c == a && *(s16 *)(param_1 + 0x14e) == 0x2e) {
                b = TRUE;
            } else {
                b = FALSE;
            }
            if (!b) {
                goto ret0;
            }
        }
    }
    return 1;
ret0:
    return 0;
}
