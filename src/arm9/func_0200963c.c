#include "ctx.h"

s32 func_0200963c(u8 *p, s32 a, s32 b)
{
    s16 i = 0;
    while (1) {
        if (*(s32 *)(p + i * 4 + 0x8fc) != 0) {
            if (a == *(s16 *)(p + i * 2 + 0x81c)) {
                if (b == *(s8 *)(p + i + 0x838)) {
                    return i;
                }
            }
        }
        i = (s16)(i + 1);
        if (i >= 7) {
            break;
        }
    }
    return -1;
}
