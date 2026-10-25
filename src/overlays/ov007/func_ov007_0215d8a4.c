#include "ctx.h"

extern u32 data_ov007_02160d80;

void func_ov007_0215d8a4(u32 v)
{
    *(u32 *)(*(u8 **)&data_ov007_02160d80 + 0x20) = v;
}
