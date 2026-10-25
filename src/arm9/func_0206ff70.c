#include "ctx.h"

extern u32 data_021517e4[];

s32 func_0206ff70(void)
{
    u32 bit = 1;
    s32 i = 0;
    do {
        if ((data_021517e4[0] & bit) == 0) {
            data_021517e4[0] = data_021517e4[0] | bit;
            return i;
        }
        i = i + 1;
        bit = bit << 1;
    } while (i < 8);
    return -1;
}
