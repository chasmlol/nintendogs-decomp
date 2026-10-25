#include "ctx.h"

extern u32 data_02152260;

u32 func_02071914(u32 param_1)
{
    u8 *g = (u8 *)data_02152260;
    u8 *inner = *(u8 **)(g + 0x88);
    u32 off = *(u32 *)(inner + 0x14);
    u32 *p;
    if (off == 0) {
        p = NULL;
    } else {
        p = (u32 *)(inner + off);
    }
    if (p == NULL) {
        return 0;
    }
    if ((s32)param_1 < 0) {
        return 0;
    }
    if (param_1 >= p[0]) {
        return 0;
    }
    {
        u32 *q = p + param_1;
        u32 o = q[1];
        u32 b = *(u32 *)(g + 0x88);
        return o == 0 ? 0 : b + o;
    }
}
