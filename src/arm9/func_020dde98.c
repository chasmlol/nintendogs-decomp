#include "ctx.h"

extern u32 data_02144a50;

void func_020dde98(u32 param_1, s32 param_2)
{
    if (param_2 != 0) {
        data_02144a50 = data_02144a50 | (1 << param_1);
        return;
    }
    data_02144a50 = data_02144a50 & (0xffff ^ (1 << param_1));
}
