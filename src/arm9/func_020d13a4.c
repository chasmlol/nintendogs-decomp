#include "ctx.h"
typedef struct { u32 w[11]; } Ent44;
u32 func_020d13a4(s32 *param_1, s32 param_2, s32 *param_3, s32 param_4)
{
    s32 n = param_1[0];
    s32 pos = param_2;
    Ent44 *src = (Ent44 *)param_3;
    Ent44 *base = (Ent44 *)((u8 *)param_1 + 32);
    s32 i;
    Ent44 *s;
    Ent44 *d;
    if (n - 1 >= param_4) {
        goto ret0;
    }
    param_1[0] = n + 1;
    i = param_1[0] - 2;
    if (i >= pos) {
        do {
            s = base + i;
            d = s + 1;
            *d = *s;
            i = i - 1;
        } while (i >= pos);
    }
    d = base + pos;
    *d = *src;
    return 1;
ret0:
    return 0;
}
