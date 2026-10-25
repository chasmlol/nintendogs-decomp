#include "ctx.h"

extern u32 func_020038b8(u32 a, u32 b);
extern u32 data_0215946c;

void func_020be270(s32 *param_1)
{
    u32 uVar1;
    uVar1 = func_020038b8((u32)param_1, 0x18);
    data_0215946c = uVar1;
}
