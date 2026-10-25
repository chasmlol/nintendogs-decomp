#include "ctx.h"
u32 func_02006e4c(s32 param_1)
{
    if (param_1 <= 0) {
        return 0;
    }
    if (param_1 < 0x1000) {
        s64 v = (s64)param_1 * (s64)param_1 + 0x800;
        return (u32)(v >> 12);
    }
    return 0x1000;
}
