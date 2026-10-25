#include "ctx.h"

typedef struct { u32 w[3]; } Vec3u;

void func_ov019_0215caf8(u8 *p, Vec3u *dst)
{
    if (p != NULL) {
        *dst = *(Vec3u *)(p + 0x80);
    }
}
