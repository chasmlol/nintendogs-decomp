#include "ctx.h"

extern void func_0206c8f8(u32 addr, u32 *p);

u32 func_0206a33c(u32 *p)
{
    if ((*(vu32 *)0x04000600 & 0x8000000) == 0) {
        func_0206c8f8(0x04000640, p);
        return 0;
    }
    return 0xffffffff;
}
