#include "ctx.h"

typedef struct { u32 a, b, c; } V3;

void func_020275c8(u8 *p, V3 *d)
{
    *d = *(V3 *)(p + 0x36c);
}
