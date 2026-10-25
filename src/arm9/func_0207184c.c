#include "ctx.h"

extern u8 *data_02152260;

s32 func_0207184c(u32 param_1)
{
    u8 *p = data_02152260;
    u8 *base = *(u8 **)(p + 0x88);
    u32 off = *(u32 *)(base + 0x1c);
    u32 e;
    u8 *s2;
    base = (off == 0) ? NULL : base + off;
    if (base == NULL) {
        return 0;
    }
    if ((s32)param_1 < 0) {
        return 0;
    }
    if (param_1 >= *(u32 *)base) {
        return 0;
    }
    e = *(u32 *)(base + param_1 * 4 + 4);
    s2 = *(u8 **)(p + 0x88);
    if (e == 0) {
        return 0;
    }
    return (s32)(s2 + e);
}
