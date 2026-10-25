#include "ctx.h"

extern u8 *data_0214f464;

s32 func_02033f14(void)
{
    s32 r3 = 0;
    s32 r2 = 0;
    s32 r4;
    do {
        if (r2 < 0 || r2 >= 3) {
            r4 = 0;
        } else {
            r4 = *(s32 *)(data_0214f464 + r2 * 4 + 0x54);
        }
        if (r4 != 0) {
            s32 x = *(s32 *)(*(u8 **)(r4 + 0x9e8) + 8);
            r3 = r3 + (s32)(((s64)x * 4100 + 0x800) >> 12);
        }
        r2 = (s16)(r2 + 1);
    } while (r2 < 3);
    return r3 << 1;
}
