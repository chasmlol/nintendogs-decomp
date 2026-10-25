#include "ctx.h"

typedef struct { u32 w[3]; } Vec3u;

void func_02039448(u8 *p)
{
    *(Vec3u *)(p + 0x26c) = *(Vec3u *)(p + 0x2a0);
}
