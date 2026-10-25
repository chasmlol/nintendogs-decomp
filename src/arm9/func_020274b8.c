#include "ctx.h"

typedef struct { u32 a, b, c; } Vec3u;

void func_020274b8(u8 *p, Vec3u *src)
{
    *(Vec3u *)(p + 0x490) = *src;
}
