#include "ctx.h"

BOOL func_020ad10c(u8 *p)
{
    return (*(u32 *)(p + 0x20) & 1) != 0;
}
