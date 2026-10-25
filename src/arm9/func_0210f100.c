#include "ctx.h"

extern u32 data_0214b3a4;

s16 *func_0210f100(s32 param_1, s32 param_2)
{
    s16 *p = (s16 *)&data_0214b3a4;
    if (p[2] == -1) {
        goto ret0;
    }
loop:
    if (p[1] == param_2 && p[0] == param_1) {
        return p;
    }
    p = (s16 *)((u8 *)p + 32);
    if (p[2] != -1) {
        goto loop;
    }
ret0:
    return NULL;
}
