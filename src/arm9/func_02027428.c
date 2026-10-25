#include "ctx.h"

extern u8 data_0213c42f;

s32 func_02027428(u8 *p)
{
    u8 *q = *(u8 **)(p + 0x9e8);
    u32 i = *(u16 *)q;
    return *(s8 *)(&data_0213c42f + i * 100);
}
