#include "ctx.h"

extern u32 data_0213e79c[];

void func_0207c3d4(u32 *param_1)
{
    s32 i = 0;
    u32 *src = data_0213e79c;
    do {
        param_1[i * 2] = src[0];
        param_1[i * 2 + 1] = src[1];
        src += 6;
        i = i + 1;
    } while (i < 5);
}
