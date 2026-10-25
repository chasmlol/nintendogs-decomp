#include "ctx.h"

extern u32 *data_0215be48;
extern u32 *data_0215bf9c;

void func_021089b8(u32 param_1)
{
    if (data_0215be48[0xb8 / 4] == 40) {
        data_0215bf9c[0x1c / 4] = param_1;
    }
}
