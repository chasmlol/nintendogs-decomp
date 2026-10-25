#include "ctx.h"

typedef void (*TabFn)(u8 *p);
extern TabFn data_ov019_021613f0[];

void func_ov019_0215d378(u8 *param_1)
{
    data_ov019_021613f0[*(s16 *)(param_1 + 30)](param_1);
}
