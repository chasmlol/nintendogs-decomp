#include "ctx.h"

typedef struct { u32 a, b, c; } T3;

void func_020c5a48(u8 *p, u32 *dst)
{
    *(T3 *)dst = *(T3 *)(*(u32 *)(p + 0x214) + 0xc);
}
