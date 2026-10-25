#include "ctx.h"

extern u32 data_ov028_0215df90;

u32 func_ov028_0215d6f0(void)
{
    return *(u32 *)(*(u32 *)&data_ov028_0215df90 + 0x28);
}
