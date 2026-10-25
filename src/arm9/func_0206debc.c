#include "ctx.h"

u32 func_0206ec40(u16 *p, u16 mask, u8 x, u32 y);

u32 func_0206debc(u8 *param_1, u32 param_2, u16 *param_3)
{
    u32 off;
    u8 *p;
    u32 ret;
    u16 mask;

    ret = 0;
    off = param_2 * 0x68;
    p = param_1 + 0x1d4 + off;
    mask = (u16)(1 << param_2);
    if (p[0] != 2) {
        return ret;
    }
    if (p[1] == 8) {
        ret = func_0206ec40(param_3, mask, p[2], *(u32 *)(p + 0x10));
        p[0] = 1;
    }
    return ret;
}
