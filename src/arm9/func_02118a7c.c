#include "ctx.h"
extern u8 *data_0215bf9c;
void func_02118a7c(s32 *param_1)
{
    *param_1 = *param_1 + 1;
    if (*param_1 >= 16) {
        *(s32 *)(*(u8 **)&data_0215bf9c + 0x198) = 1;
    }
}
