#include "ctx.h"

typedef struct { u32 w[3]; } Vec3u;

void func_020d3410(u8 *p, u32 i, Vec3u *src)
{
    Vec3u *dst = (Vec3u *)(*(u8 **)(p + 8) + i * 12);
    *dst = *src;
}
