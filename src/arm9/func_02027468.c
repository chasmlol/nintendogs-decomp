#include "ctx.h"

extern u8 data_0213c42c[];

s32 func_02027468(u8 *p)
{
    u16 *q = *(u16 **)(p + 0x9e8);
    return (s32)(s8)data_0213c42c[(u32)*q * 100];
}
