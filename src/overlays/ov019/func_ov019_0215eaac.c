#include "ctx.h"

void func_ov019_0215eaac(u8 *p)
{
    **(u32 **)(p + 0xac) = 0;
    *(u16 *)(*(u8 **)(p + 0xac) + 4) = 0;
}
