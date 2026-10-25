#include "ctx.h"

BOOL func_020328f0(u8 *p)
{
    return (*(u32 *)(p + 0x924) & 0x20000000) != 0;
}
