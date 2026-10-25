#include "ctx.h"

extern u32 data_ov028_0215df90;

void func_ov028_0215d614(u32 v)
{
    *(u32 *)(*(u8 **)&data_ov028_0215df90 + 0x18) = v;
}
