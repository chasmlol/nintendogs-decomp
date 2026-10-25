#include "ctx.h"
extern u8 *data_0215be48;
void func_021060d8(s32 *param_1)
{
    *param_1 = *param_1 + 1;
    if (*param_1 > 16) {
        u8 *b = data_0215be48 + 0x4000;
        *(s32 *)(b + 0x868) = 1;
    }
}
