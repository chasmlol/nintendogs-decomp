#include "ctx.h"

void func_020c97a4(void *a, s32 b);

void func_020d39e8(s32 *param_1)
{
    s16 v;
    if (param_1[0] != 2) {
        return;
    }
    v = *(s16 *)((u8 *)param_1 + 92);
    if (v != -1) {
        func_020c97a4(param_1 + 12, (s32)v);
        param_1[0x16] = 1;
    }
}
