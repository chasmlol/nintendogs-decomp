#include "ctx.h"

extern u32 *func_0207385c(u32, u32);
extern void func_020737c8(u32 *);

u32 *func_02006b78(u32 param_1)
{
    u32 *piVar1;
    u32 *p;
    piVar1 = func_0207385c(param_1, 0x504c5454);
    p = piVar1 + 2;
    if ((p[3] & 0xf000000u) == 0) {
        func_020737c8(p);
    }
    return p;
}
