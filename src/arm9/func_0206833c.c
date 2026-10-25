#include "ctx.h"

void func_0206833c(u16 *param_1, s32 param_2)
{
    if (param_2 == 0) {
        *param_1 = 0;
        return;
    }
    if (param_2 > 0) {
        *param_1 = (u16)(param_2 | 0x4000);
    } else {
        *param_1 = (u16)(-param_2 | 0x8000);
    }
}
