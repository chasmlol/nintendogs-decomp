#include "ctx.h"

extern s8 data_0213c42e[];

s32 func_020273f0(u8 *param_1)
{
    u8 *p = *(u8 **)(param_1 + 0x9e8);
    u32 k = *(u16 *)p;
    if (k == 2) {
        if (p[2] == 0) {
            return 0;
        }
    }
    return data_0213c42e[k * 100];
}
