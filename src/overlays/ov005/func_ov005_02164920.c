#include "ctx.h"

u32 func_ov005_02164920(u32 param_1, s32 param_2)
{
    switch (param_1) {
    case 0:
        return 0;
    case 1:
        return 1;
    case 2:
        return 2;
    case 3:
        if (param_2 != 0) {
            return 3;
        }
        return 4;
    case 4:
        if (param_2 != 0) {
            return 5;
        }
        return 6;
    case 5:
        return 7;
    default:
        return param_1;
    }
}
