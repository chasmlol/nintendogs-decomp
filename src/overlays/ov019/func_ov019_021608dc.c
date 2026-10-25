#include "ctx.h"

void func_ov019_021608dc(u8 *p)
{
    **(u32 **)(p + 0xac) = 1;
    *(u32 *)(*(u8 **)(p + 0xac) + 4) = 1;
}
