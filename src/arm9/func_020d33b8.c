#include "ctx.h"
typedef struct { u32 w[3]; } Trip;
void func_020d33b8(u8 *o, s32 idx, u32 *src)
{
    s32 off = idx * 12;
    u8 *d = *(u8 **)(o + 4) + off;
    u8 *e;
    *(Trip *)d = *(Trip *)src;
    e = *(u8 **)(o + 8) + off;
    *(u32 *)e = 0;
    *(u32 *)(e + 4) = 0;
    *(u32 *)(e + 8) = 0;
    *(u32 *)(*(u8 **)(o + 0xc) + idx * 4) = 1;
}
