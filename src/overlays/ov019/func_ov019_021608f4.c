#include "ctx.h"

void func_ov019_021608f4(u8 *p)
{
    u32 *q = *(u32 **)(p + 0xac);
    *(u32 *)*(u32 **)(p + 0xac) = 1;
    *(u32 *)(*(u8 **)(p + 0xac) + 4) = 1;
    *(u32 *)(*(u8 **)(p + 0xac) + 8) = 0;
}
