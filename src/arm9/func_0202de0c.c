#include "ctx.h"

extern u8 data_0213cde7;

s32 func_0202de0c(void *p)
{
    s16 i = *(s16 *)((u8 *)p + 0x152);
    return *(s8 *)((u8 *)&data_0213cde7 + i * 8);
}
