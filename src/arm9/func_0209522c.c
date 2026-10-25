#include "ctx.h"

void func_0209522c(u8 *param_1, s16 *param_2)
{
    s16 i;
    s16 j;
    i = 0;
    do {
        *(s16 *)(param_1 + 18 + i * 2) = 0;
        i = i + 1;
    } while (i < 11);
    j = 0;
    do {
        u16 v = *(u16 *)param_2;
        if (v == 0) {
            return;
        }
        *(u16 *)(param_1 + 18 + j * 2) = v;
        j = j + 1;
        param_2 = param_2 + 1;
    } while (j < 10);
}
