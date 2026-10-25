#include "ctx.h"

typedef struct { u32 w[11]; } T44;

u32 func_020d144c(s32 *param_1, u32 *param_2, s32 param_3)
{
    T44 *dst = (T44 *)(param_1 + 8);
    if (param_1[0] - 1 < param_3) {
        dst = (T44 *)((u8 *)dst + param_1[0] * 44);
        *dst = *(T44 *)param_2;
        param_1[0] = param_1[0] + 1;
        return 1;
    }
    return 0;
}
