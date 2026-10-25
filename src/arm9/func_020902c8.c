#include "ctx.h"

u32 func_020902c8(u32 param_1)
{
    if (param_1 >= 97 && param_1 <= 122) {
        return (u16)(param_1 - 32);
    }
    if (param_1 < 224) {
        return param_1;
    }
    if (param_1 > 253) {
        return param_1;
    }
    if (param_1 != 247) {
        param_1 = (u16)(param_1 - 32);
    }
    return param_1;
}
