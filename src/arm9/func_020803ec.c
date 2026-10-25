#include "ctx.h"

u32 func_020803ec(u32 i)
{
    u8 *q = (u8 *)(i * 4 + 0x2700000);
    return *(u32 *)(q + 0xff000 + 0xda0);
}
