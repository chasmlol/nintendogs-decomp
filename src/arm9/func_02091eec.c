#include "ctx.h"

extern u8 data_0212f514[];

s32 func_02091eec(u8 *param_1)
{
    s32 r = 0;
    if (*(s16 *)(param_1 + 14) > 0) {
        goto done;
    }
    if (*(u32 *)(param_1 + 0x35c) != 0) {
        goto done;
    }
    *(s16 *)(param_1 + 4) = *(s16 *)(data_0212f514 + 20);
    *(s16 *)(param_1 + 14) = 30;
    *(u16 *)(param_1 + 8) = *(u16 *)(param_1 + 8) | 2;
    r = 1;
done:
    return r;
}
