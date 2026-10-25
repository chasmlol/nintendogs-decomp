#include "ctx.h"

extern void func_0207e39c(u32 *p);

u32 func_0207e8d4(u32 *param_1, s32 param_2)
{
    s32 i;
    s32 last;
    s32 k;
    if (param_1 == 0) {
        goto Lone;
    }
    if (0 != param_2) {
        goto Lmain;
    }
Lone:
    return 1;
Lmain:
    if (0 != param_1[0x19]) {
        return param_1[0x19];
    }
    if (param_1[0x18] == 0) {
        func_0207e39c(param_1);
        i = 0;
        last = 0;
        do {
            *((u8 *)param_1 + (u32)i + 0x20) = last;
            i = 1 + i;
        } while (64 > i);
        param_1[5] = last;
        param_1[6] = last;
        param_1[0x18] = 1;
    }
    for (k = 0; 20 > k; k++) {
        *(u8 *)(param_2 + k) = (param_1[k >> 2] >> ((3 - (k & 3)) * 8));
    }
    return 0;
}
