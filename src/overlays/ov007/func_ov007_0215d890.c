#include "ctx.h"

extern u32 data_ov007_02160d80;

void func_ov007_0215d890(u32 param_1)
{
    *(vu32 *)(data_ov007_02160d80 + 0x24) = param_1;
}
