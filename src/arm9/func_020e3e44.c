#include "ctx.h"

BOOL func_020e3e44(s32 *param_1, s32 param_2)
{
    s32 nx;
    if (param_1[0] > param_2) {
        return TRUE;
    }
    nx = -param_2;
    if (param_1[0] < nx) {
        return TRUE;
    }
    if (param_1[1] > param_2) {
        return TRUE;
    }
    if (param_1[1] < nx) {
        return TRUE;
    }
    if (param_1[2] > param_2) {
        return TRUE;
    }
    return param_1[2] < nx;
}
