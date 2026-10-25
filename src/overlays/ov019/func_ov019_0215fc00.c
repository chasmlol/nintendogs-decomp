#include "ctx.h"

extern void (*data_ov019_021612b0[])(u8 *);

void func_ov019_0215fc00(u8 *param_1)
{
    s16 idx = *(s16 *)(param_1 + 30);
    data_ov019_021612b0[idx](param_1);
}
