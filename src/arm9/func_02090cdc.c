#include "ctx.h"

u32 func_02090cdc(u8 *p, u32 i)
{
    return *(u32 *)(p + 8) + *(u32 *)(*(u32 *)(p + 4) + (i & 0xffff) * 4);
}
