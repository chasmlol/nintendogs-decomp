#include "ctx.h"

typedef struct { u32 a, b, c; } Triple;

void func_020d345c(u8 *p, s32 i, Triple *out)
{
    Triple *src = (Triple *)(*(u8 **)(p + 4) + i * 12);
    *out = *src;
}
