#include "ctx.h"

typedef struct { u32 a, b, c; } T3;

void func_02027654(u8 *p, u32 *dst)
{
    *(T3 *)dst = *(T3 *)(p + 0x2dc);
}
