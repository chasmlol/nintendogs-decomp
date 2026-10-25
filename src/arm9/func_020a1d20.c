#include "ctx.h"

extern u32 data_021592e4;
extern void func_02070ac8(void *obj, u32 idx, int arg);

void func_020a1d20(int param_1)
{
    u8 *base = (u8 *)&data_021592e4;
    u8 *p = base + 0x28;
    s16 i = 0;
    do {
        if (*(int *)(base + i * 4 + 0x28) != 0) {
            func_02070ac8(p, *(u16 *)(base + i * 2 + 0x10), param_1);
        }
        i = (s16)(i + 1);
        p += 4;
    } while (i < 4);
}
