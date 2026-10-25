#include "ctx.h"

extern u8 *data_021594d0;
extern s32 func_0206496c(u8 *p);

u8 func_020d3abc(u8 param_1)
{
    u8 buf[0x7b8];

    if (data_021594d0 == NULL) {
        return param_1;
    }
    if (func_0206496c(buf) == 0) {
        param_1 += 2;
    } else {
        param_1 += 1;
    }
    param_1 += 6;
    if (*(s32 *)(data_021594d0 + 0x40) == 1 && *(s32 *)(data_021594d0 + 0x20) == 2) {
        param_1 += 1;
    }
    return (u8)(param_1 + 1);
}
