#include "ctx.h"

extern u32 func_0206782c(s32 a);

u32 func_02006e0c(s32 param_1)
{
    if (param_1 <= 0) {
        return 0;
    }
    if (param_1 >= 0x1000) {
        return 0x1000;
    }
    return func_0206782c(param_1);
}
