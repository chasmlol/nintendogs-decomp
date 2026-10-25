#include "ctx.h"

typedef struct { u32 w[3]; } Vec3w;

void func_020d3444(u8 *p, s32 i, Vec3w *src)
{
    Vec3w *dst = (Vec3w *)(*(u8 **)(p + 4) + i * 12);
    *dst = *src;
}
