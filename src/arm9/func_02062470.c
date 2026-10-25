#pragma avoid_byte all
#include "ctx.h"
#pragma opt_propagation off

u8 *func_02062470(u8 *param_1, const u8 *param_2, s32 param_3)
{
    u8 *p = param_1;
    u8 *old;
    u8 zero;
    if (param_3 == 0) {
        return param_1;
    }
    do {
        old = p;
        *p++ = *param_2++;
        if (*old == 0) {
            param_3--;
            if (param_3 == 0) {
                return param_1;
            }
            zero = 0;
            do {
                *p++ = zero;
                param_3--;
            } while (param_3 != 0);
            return param_1;
        }
        param_3--;
    } while (param_3 != 0);
    return param_1;
}
