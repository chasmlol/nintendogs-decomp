#include "ctx.h"

typedef struct { u32 a, b, c; } Vec3u;

void func_02027604(u8 *p, Vec3u *dst)
{
    *dst = *(Vec3u *)(p + 0x348);
}
