#include "ctx.h"

typedef struct { u32 a, b, c; } Triple;

void func_02027640(u8 *p, Triple *dst)
{
    *dst = *(Triple *)(p + 0x2e8);
}
