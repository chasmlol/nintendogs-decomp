#include "ctx.h"

void func_020932c4(u8 *param_1, u32 param_2, u32 param_3, u8 *param_4)
{
    s16 i = 0;
    do {
        u8 *q = param_1 + i;
        if (*param_4 != q[8]) {
            return;
        }
        i = (s16)(i + 1);
        param_4++;
    } while (i < 6);
}
