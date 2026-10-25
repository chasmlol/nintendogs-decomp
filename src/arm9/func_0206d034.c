#include "ctx.h"

s32 func_0206d034(u32 param_1)
{
    s32 sum;
    s32 i;
    u32 sh;
    u32 mult;
    u32 sh2;
    s32 k;
    sum = 0;
    i = 0;
    sh = 0;
    do {
        if (((param_1 >> sh) & 15) >= 10) {
            return 0;
        }
        i = i + 1;
        sh = sh + 4;
    } while (i < 8);
    k = 0;
    sh2 = 0;
    mult = 1;
    do {
        sum = mult * ((param_1 >> sh2) & 15) + sum;
        k = k + 1;
        sh2 = sh2 + 4;
        mult = mult * 10;
    } while (k < 8);
    return sum;
}
