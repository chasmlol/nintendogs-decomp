#include "ctx.h"

extern u8 *data_ov028_0215df90;

void func_ov028_0215d628(u32 param_1)
{
    *(vu32 *)(data_ov028_0215df90 + 0x14) = param_1;
}
