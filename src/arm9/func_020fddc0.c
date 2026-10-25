#include "ctx.h"

extern u8 *data_0215be48;

void func_020fddc0(s32 param_1)
{
    u8 *p = data_0215be48;
    if (*(s32 *)(p + 0xb0) != 0) {
        return;
    }
    if (param_1 < 0) {
        return;
    }
    if (param_1 < 43) {
        *(s32 *)(p + 0xb4) = param_1;
    }
}
