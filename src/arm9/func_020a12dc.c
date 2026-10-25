#include "ctx.h"

extern u8 data_021592e4;
extern s32 func_020a1164(u8 *p, u32 a, u32 b, s32 c, s32 d);

s32 func_020a12dc(u32 param_1, u32 param_2, s32 param_3, s32 param_4)
{
    s32 r4;
    u32 bit;
    u8 *lr;

    lr = &data_021592e4;
    r4 = 0;
    for (;;) {
        bit = (u16)(1 << r4);
        if ((*(u16 *)(lr + 24) & bit) == 0) {
            *(u16 *)(lr + 24) |= bit;
            break;
        }
        r4 = (s16)(r4 + 1);
        if (r4 >= 4) {
            r4 = -1;
            break;
        }
    }
    if (r4 != -1) {
        if (func_020a1164(lr + 40 + r4 * 4, param_1, param_2, param_3, param_4) != 0) {
            return r4;
        }
    }
    return -1;
}
