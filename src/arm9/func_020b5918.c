#include "ctx.h"

s32 func_020b5918(u8 *p)
{
    s16 sum2 = 0;
    s16 outer = 0;
    u8 *row = p;
    do {
        s16 j;
        s16 acc;
        acc = 0;
        j = 0;
        do {
            s32 k = j * 2;
            acc = (s16)(acc + *(s16 *)(row + k + 0x42));
            j = (s16)(j + 1);
        } while (j < 5);
        acc += *(s16 *)(p + outer * 2 + 0x60);
        if (acc < 0) {
            acc = 0;
        }
        sum2 = (s16)(sum2 + acc);
        outer = (s16)(outer + 1);
        row = row + 10;
    } while (outer < 3);
    return (s16)(sum2 / 3);
}
