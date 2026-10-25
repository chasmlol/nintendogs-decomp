#include "ctx.h"

u32 func_02090abc(u8 *p, u32 i)
{
    return *(u32 *)(p + 0x18) + i * 8;
}
