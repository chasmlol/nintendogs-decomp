#include "ctx.h"

BOOL func_02032904(u8 *p)
{
    return (*(u32 *)(p + 0x924) & 0x40000000) != 0;
}
