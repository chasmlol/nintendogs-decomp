#include "ctx.h"

extern void func_020066d0(u32 a);

void func_ov009_0215cc44(void)
{
    u32 uVar1;
    uVar1 = 0;
    do {
        func_020066d0(uVar1);
        uVar1 = (u16)(uVar1 + 1);
    } while (uVar1 < 2);
}
