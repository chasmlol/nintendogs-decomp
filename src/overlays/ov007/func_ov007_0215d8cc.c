#include "ctx.h"

extern u32 data_ov007_02160d80;

void func_ov007_0215d8cc(u32 v)
{
    *(u32 *)(*(u32 *)&data_ov007_02160d80 + 0x14) = v;
}
