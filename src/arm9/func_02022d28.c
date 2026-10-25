#include "ctx.h"
u8 func_02022d28(u8 *param_1)
{
    s32 v = *(s16 *)(param_1 + 0xf0);
    u32 a = (v >= 91 && v < 111) ? 1 : 0;
    u32 b;
    if (a != 0) {
        b = 1;
    } else if (v >= 15 && v <= 74) {
        b = 1;
    } else {
        b = 0;
    }
    if (b != 0) {
        return param_1[0xa5];
    }
    return 0;
}
