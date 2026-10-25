#include "ctx.h"
extern u8 *data_0215be4c;
s32 func_02101634(void)
{
    s32 sum = 0;
    s32 i = 0;
    u8 *p = data_0215be4c + 4;
    do {
        if (*(s32 *)(p + 4) != 0 && *(s32 *)(p + 8) != 0) {
            sum = sum + *(s32 *)(p + 0x24);
        }
        i = i + 1;
        p = p + 440;
    } while (i < 24);
    return sum;
}
