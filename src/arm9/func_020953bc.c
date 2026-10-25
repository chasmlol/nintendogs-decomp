#include "ctx.h"
#pragma opt_propagation off

extern u8 *data_02159034;

u32 func_020953bc(u8 *p)
{
    u8 *base;
    s32 a;
    u32 f;
    s32 b1;
    u32 z;
    u8 *Q;
    u8 *Q4;

    z = 0;
    a = *(s32 *)(p + 0x640);
    base = (u8 *)((u32)p + 1600);
    f = 1;
    if (a == 0) {
        b1 = *(s32 *)(base + 4);
        if (b1 == 0) {
            f = z;
        }
    }
    if (f == 0) {
        return z;
    }
    Q = *(u8 **)((u8 *)data_02159034 + 4096 + 0x41c);
    Q4 = Q + 4;
    if (a == *(s32 *)Q4 && *(s32 *)(base + 4) == *(s32 *)(Q4 + 4)) {
        return 1;
    }
    return 0;
}
