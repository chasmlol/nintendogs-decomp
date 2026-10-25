#include "ctx.h"

typedef struct { u32 a, b, c; } V3;

void func_020cedbc(u8 *p, V3 *d)
{
    *d = *(V3 *)(p + 4);
}
