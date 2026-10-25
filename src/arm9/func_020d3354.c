#include "ctx.h"

typedef struct { u32 w[3]; } T12;

void func_020d3354(s32 *param_1)
{
    s32 i = 0;
    u32 off;
    if (param_1[0] <= 0) {
        return;
    }
    off = 0;
    do {
        u8 *dst = (u8 *)param_1[4] + off;
        u8 *src = (u8 *)param_1[1] + off;
        *(T12 *)dst = *(T12 *)src;
        i = i + 1;
        off = off + 12;
    } while (i < param_1[0]);
}
