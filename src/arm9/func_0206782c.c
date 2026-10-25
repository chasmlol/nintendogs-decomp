#include "ctx.h"

extern s32 func_02067760(void);

s32 func_0206782c(s32 param_1)
{
    vu32 *p;
    if (param_1 > 0) {
        *(vu16 *)0x040002b0 = 1;
        p = (vu32 *)0x040002b8;
        p[0] = 0;
        p[1] = (u32)param_1;
        return func_02067760();
    }
    return 0;
}
