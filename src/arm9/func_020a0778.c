#include "ctx.h"

extern u32 data_021592bc;
extern u32 data_021592b4[];

void func_02070c18(u32 *p, u32 a);

void func_020a0778(u32 param_1)
{
    s32 i;
    u32 *p;
    u32 *base = data_021592b4;

    if (data_021592bc != 0) {
        func_02070c18(&data_021592bc, param_1);
    }
    p = base + 3;
    i = 0;
    do {
        if (*(u32 *)((u8 *)base + i * 4 + 12) != 0) {
            func_02070c18(p, param_1);
        }
        i = (s16)(i + 1);
        p = p + 1;
    } while (i < 2);
    base[5] = 0xffffffff;
}
