#include "ctx.h"

void func_02089b3c(u32 a, u32 b);

void func_020703ec(u8 *param_1, u32 param_2)
{
    if (param_1 == NULL) {
        return;
    }
    if (param_2 != param_1[0x2e]) {
        func_02089b3c(param_1[0x3c], param_2);
        param_1[0x2e] = (u8)param_2;
        return;
    }
}
