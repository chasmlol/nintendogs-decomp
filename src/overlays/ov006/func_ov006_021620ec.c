#include "ctx.h"

typedef struct { u32 w[3]; } Vec3u;

extern u8 *data_0214f464;

void func_ov006_021620ec(Vec3u *dst)
{
    *dst = *(Vec3u *)(data_0214f464 + 0x74);
}
