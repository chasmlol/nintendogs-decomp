#include "ctx.h"

u32 func_020354c0(u8 *param_1)
{
    s32 v;
    s32 b;
    if (*(s8 *)(param_1 + 139) != 5) {
        return 0;
    }
    v = *(s16 *)(param_1 + 234);
    if (v >= 1 && v <= 12) {
        b = 1;
    } else {
        b = (v == 0x261);
    }
    if (b) {
        return 1;
    }
    if (v >= 792 && v <= 0x33b) {
        v = *(s16 *)(param_1 + 238);
        if (v >= 1 && v <= 12) {
            b = 1;
        } else {
            b = (v == 0x261);
        }
        if (b) {
            return 1;
        }
    }
    return 0;
}
