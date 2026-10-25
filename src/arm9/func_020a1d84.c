#include "ctx.h"

extern u32 data_021592e4[];
void func_02070ac8(u32 *a, u32 b, u32 c);

void func_020a1d84(u32 param_1)
{
    u8 *base = (u8 *)data_021592e4;
    u32 *piVar2 = (u32 *)(base + 40);
    s16 i = 0;
    do {
        if (*(u32 *)(base + (i << 2) + 0x28) != 0) {
            func_02070ac8(piVar2, 0, param_1);
        }
        i = (s16)(i + 1);
        piVar2 = piVar2 + 1;
    } while (i < 4);
}
