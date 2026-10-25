#include "ctx.h"

extern u32 data_0215ae98[];

void func_020ddee0(s32 param_1, u32 param_2, s32 param_3)
{
    if (param_3 == 1) {
        data_0215ae98[param_1] = data_0215ae98[param_1] | param_2;
    } else {
        data_0215ae98[param_1] = data_0215ae98[param_1] ^ param_2;
    }
}
