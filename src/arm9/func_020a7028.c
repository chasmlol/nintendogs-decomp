#include "ctx.h"

extern void func_020066d0(u32 idx);

void func_020a7028(void)
{
    u32 i = 0;
    do {
        func_020066d0(i);
        i = (u16)(i + 1);
    } while (i < 20);
}
