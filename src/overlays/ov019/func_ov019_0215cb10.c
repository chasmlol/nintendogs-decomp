#include "ctx.h"

typedef struct { u32 a, b, c; } Tri;

void func_ov019_0215cb10(void *p, Tri *dst)
{
    if (p != 0) {
        *dst = *(Tri *)((u8 *)p + 0x68);
    }
}
