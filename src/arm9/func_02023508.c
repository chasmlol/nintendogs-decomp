#include "ctx.h"

s32 func_02023508(u8 *param_1, u32 param_2, u32 param_3)
{
    s16 i = 0;
    u8 *p;
    for (;;) {
        if (i < 0) {
            goto nullp;
        }
        if (i < 20) {
            goto compute;
        }
nullp:
        p = NULL;
        goto check;
compute:
        {
            u8 *base = *(u8 **)(param_1 + 0x9e8) + 0x90;
            p = base + i * 60;
        }
check:
        if (p != NULL && *(u16 *)p == param_2 && p[0x28] == param_3) {
            return i;
        }
        i = (s16)(i + 1);
        if (i >= 20) {
            return -1;
        }
    }
}
