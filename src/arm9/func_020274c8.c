#include "ctx.h"

typedef struct { u32 a, b, c; } Tri;

void func_020274c8(void *p, Tri *src)
{
    *(Tri *)((u8 *)p + 0x490) = *src;
}
