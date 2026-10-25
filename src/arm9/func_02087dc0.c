#include "ctx.h"

u32 func_02087dc0(u8 *param_1, s32 param_2)
{
    u32 r;
    s32 i;
    u32 sh;
    r = 0;
    if (param_2 > 3) {
        goto done;
    }
    i = 0;
    if (param_2 <= 0) {
        goto done;
    }
    sh = 0;
    do {
        u32 t;
        u32 c = param_1[i];
        if (c == 0) {
            goto done;
        }
        t = c - 65;
        if (t <= 25) {
            c = t + 97;
        } else {
            c = t + 65;
        }
        i = i + 1;
        r = r | (c << sh);
        sh = sh + 8;
    } while (i < param_2);
done:
    return r;
}
