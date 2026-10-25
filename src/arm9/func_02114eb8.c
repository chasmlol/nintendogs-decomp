#include "ctx.h"
extern u8 *data_0215be48;
void func_02114eb8(s32 *param_1)
{
    *param_1 = *param_1 + 1;
    if (*param_1 > 20) {
        u8 *b = data_0215be48 + 0x4000;
        *(s32 *)(b + 0x868) = 1;
    }
}
