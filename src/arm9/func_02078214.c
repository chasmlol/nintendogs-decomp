#include "ctx.h"

s32 func_02078214(u8 *p)
{
    return (s32)p + *(s32 *)(p + *(u16 *)(p + 0xc));
}
