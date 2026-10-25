#include "ctx.h"

typedef struct { u32 a, b, c; } Tri;

void func_020275b4(void *p, Tri *dst)
{
    *dst = *(Tri *)((u8 *)p + 0x324);
}
