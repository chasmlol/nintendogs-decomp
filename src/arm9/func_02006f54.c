#include "ctx.h"
extern s16 data_02126868[];
s32 func_02006f54(s32 param_1)
{
    if (param_1 <= 0) {
        return 0;
    }
    if (param_1 < 0x1000) {
        s32 t = (s32)(((u32)(param_1 << 18)) >> 16);
        t = t >> 4;
        return 0x1000 - data_02126868[t * 2 + 1];
    }
    return 0x1000;
}
