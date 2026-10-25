#include "ctx.h"

extern u16 data_0213b4cc[];

BOOL func_02035a6c(u8 *p)
{
    u8 *s = *(u8 **)(p + 0x9e8);
    s32 i = s[0x11] - 1;
    s32 v = *(s16 *)(s + 0x1c);
    s32 t = data_0213b4cc[i];
    return v > t + 1000;
}
