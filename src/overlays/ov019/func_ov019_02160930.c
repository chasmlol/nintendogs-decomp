#include "ctx.h"

void func_ov019_02160930(u8 *p)
{
    u32 *q = *(u32 **)(p + 0xac);
    *q = 0;
    *(u32 *)(*(u32 **)(p + 0xac) + 1) = 0;
}
