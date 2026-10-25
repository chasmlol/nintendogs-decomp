#include "ctx.h"
extern u8 *func_02094608(s32 a);
u32 func_0211b4c0(s16 *p)
{
    s32 i;
    u32 res = 0;
    i = 0;
    do {
        u8 *e = func_02094608((s16)i);
        if (p[0] == *(s8 *)(e + 2) && p[1] == *(s16 *)e && *(s8 *)(e + 3) > 1) {
            res = 1;
            break;
        }
        i = i + 1;
    } while (i < 200);
    return res;
}
