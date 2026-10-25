#include "ctx.h"

extern u32 data_ov007_02160e58;

u32 func_ov007_0215f238(void)
{
    u8 *q = *(u8 **)&data_ov007_02160e58;
    return q ? *(u32 *)(q + 4) : 0;
}
