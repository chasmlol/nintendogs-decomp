#include "ctx.h"

u32 func_02080400(s32 i)
{
    u8 *q = (u8 *)(i * 4 + 0x2700000);
    u8 *r = q + 0xFF000;
    return *(u32 *)(r + 0xdc4);
}
