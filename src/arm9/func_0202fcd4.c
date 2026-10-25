#include "ctx.h"
extern u8 *data_0214f464;
s32 func_0202fcd4(u8 *param_1)
{
    s16 i = 0;
    s32 v;
    s32 lim = *(s8 *)(param_1 + 136);
    u8 *arr;
    for (;;) {
        if (i != lim) {
            if (i < 0 || i >= 3) {
                v = 0;
            } else {
                arr = data_0214f464;
                v = *(s32 *)(arr + i * 4 + 0x54);
            }
            if (v != 0) {
                return v;
            }
        }
        i = i + 1;
        if (i >= 3) {
            return 0;
        }
    }
}
