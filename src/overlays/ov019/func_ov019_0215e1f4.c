#include "ctx.h"

extern void (*data_ov019_021612f8[])(u8 *);

void func_ov019_0215e1f4(u8 *param_1)
{
    s16 idx = *(s16 *)(param_1 + 30);
    data_ov019_021612f8[idx](param_1);
}
