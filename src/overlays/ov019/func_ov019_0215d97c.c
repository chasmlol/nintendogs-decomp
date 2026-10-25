#include "ctx.h"

extern void (*data_ov019_0216139c[])(u8 *);

void func_ov019_0215d97c(u8 *param_1)
{
    s16 idx = *(s16 *)(param_1 + 30);
    data_ov019_0216139c[idx](param_1);
}
