#include "ctx.h"

extern u32 data_0215be48;

s32 func_0210a2cc(void)
{
    s16 v;
    u8 *q;
    q = (u8 *)data_0215be48 + 0x300;
    v = *(s16 *)(q + 0x34);
    return (s16)(v - 1);
}
