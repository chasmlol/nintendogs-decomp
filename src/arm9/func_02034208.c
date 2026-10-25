#include "ctx.h"

s32 func_02034208(u8 *param_1)
{
    if (*(s16 *)(param_1 + 234) != 1001) {
        goto z1;
    }
    if (*(s16 *)(param_1 + 256 + 98) != *(s16 *)(param_1 + 256 + 82)) {
        goto z2;
    }
    if (*(s16 *)(param_1 + 256 + 78) >= 1) {
        return 1;
    }
z2:
    return 0;
z1:
    return 0;
}
