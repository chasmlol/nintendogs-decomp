#include "ctx.h"

typedef struct {
    s16 v;
    s16 pad;
} Entry;

extern Entry data_02126868[];

s32 func_02006f98(s32 param_1)
{
    if (param_1 <= 0) {
        return 0;
    }
    if (param_1 < 0x1000) {
        s32 idx = (s32)((u32)(param_1 << 18) >> 16) >> 4;
        return data_02126868[idx].v;
    }
    return 0x1000;
}
