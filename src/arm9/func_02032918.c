#include "ctx.h"

BOOL func_02032918(u8 *p)
{
    return (*(u32 *)(p + 0x924) & 0x80000000) != 0;
}
