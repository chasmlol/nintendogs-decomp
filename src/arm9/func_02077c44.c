#include "ctx.h"

extern s32 func_02077ca4(u8 *p);

u8 *func_02077c44(u8 *param_1, u32 param_2)
{
    u32 tag;
    u32 m;
    s32 step;
    tag = param_1[0] & 31;
    if (tag == 1) {
        goto none;
    }
    m = (u8)(param_2 & 31);
loop:
    if (m == tag) {
        return param_1;
    }
    step = func_02077ca4(param_1);
    param_1 = param_1 + step;
    tag = param_1[0] & 31;
    if (tag != 1) {
        goto loop;
    }
none:
    return 0;
}
