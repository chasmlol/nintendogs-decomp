#include "ctx.h"

extern u8 *data_0215be48;

void func_02117040(s32 *param_1)
{
    *param_1 = *param_1 + 1;
    if (*param_1 > 10) {
        u8 *p = data_0215be48;
        *(s32 *)(p + 0x4868) = 1;
    }
}
