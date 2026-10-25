#include "ctx.h"
extern u8 *data_0215be44;
void func_020f3bdc(s32 x)
{
    s64 t = (s64)x * 40960 + 0x800;
    u8 *p = data_0215be44;
    u8 *q;
    u32 val;
    u8 *r;
    *(s32 *)(p + 0xc) = (s32)(t >> 12);
    p = data_0215be44;
    q = *(u8 **)(p + 0x48);
    val = *(u32 *)(p + 0xc);
    r = *(u8 **)(q + 0x78);
    *(u32 *)(r + 8) = val;
}
