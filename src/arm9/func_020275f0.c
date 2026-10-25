#include "ctx.h"

typedef struct { u32 w[3]; } Vec3w;

void func_020275f0(u8 *p, Vec3w *out)
{
    *out = *(Vec3w *)(p + 0x33c);
}
