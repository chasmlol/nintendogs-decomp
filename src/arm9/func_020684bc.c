#include "ctx.h"

u32 func_020684bc(s32 param_1, u16 param_2)
{
    u16 *p = (u16 *)0x04000004;
    u32 u;
    u32 ret;
    u16 v;
    u = *(vu16 *)p;
    ret = u & 0x10;
    if (param_1 != 0) {
        v = *(vu16 *)p;
        v = v | 0x10;
        *p = v;
    } else {
        v = *(vu16 *)p;
        v = v & ~0x10;
        *p = v;
    }
    return ret;
}
