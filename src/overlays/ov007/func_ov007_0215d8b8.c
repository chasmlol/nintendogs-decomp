#include "ctx.h"

extern u32 data_ov007_02160d80;

void func_ov007_0215d8b8(u32 param_1)
{
    *(u32 *)(data_ov007_02160d80 + 0x18) = param_1;
}
