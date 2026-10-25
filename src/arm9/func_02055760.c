#include "ctx.h"

extern u32 func_0205807c(u8 *p, s32 a, s32 b);
extern u32 func_02057a84(u8 *p, s32 a, s32 b);
extern u32 func_02057468(u8 *p, s32 a, s32 b);

u32 func_02055760(u8 *param_1, s32 param_2, s32 param_3)
{
    if (param_2 == 0) {
        return 0;
    }
    switch (*(s8 *)(param_1 + 0x8b)) {
    case 0:
        return func_0205807c(param_1, param_2, param_3);
    case 1:
    case 2:
        return func_02057a84(param_1, param_2, param_3);
    case 3:
        return func_02057468(param_1, param_2, param_3);
    default:
        return 0;
    }
}
