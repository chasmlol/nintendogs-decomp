#include "ctx.h"

extern u32 data_0215b71c;
extern u32 data_0215b720;
extern u32 data_0215b718;
extern u32 data_0215b724;

void func_020e1ed8(u32 param_1)
{
    if (param_1 != 0) {
        data_0215b71c = 1;
        data_0215b720 = 0;
        data_0215b724 = param_1 + 12;
        data_0215b718 = 0;
    }
}
