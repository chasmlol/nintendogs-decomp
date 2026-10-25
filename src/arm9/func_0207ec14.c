#include "ctx.h"

u32 func_0207ec14(u32 param_1)
{
    u16 old;
    u32 prev;
    old = *(vu16 *)0x04000208;
    *(vu16 *)0x04000208 = 0;
    prev = *(vu32 *)0x04000210;
    *(vu32 *)0x04000210 = prev | param_1;
    *(vu16 *)0x04000208;
    *(vu16 *)0x04000208 = old;
    return prev;
}
