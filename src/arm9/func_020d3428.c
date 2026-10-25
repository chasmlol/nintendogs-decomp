#include "ctx.h"

typedef struct { u32 w[3]; } Vec3w;

void func_020d3428(u8 *p, s32 i, Vec3w *out)
{
    Vec3w *src = (Vec3w *)(*(u8 **)(p + 8) + i * 12);
    *out = *src;
}
