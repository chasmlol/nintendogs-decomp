#include "ctx.h"

extern void func_02089af4(u32 v, u32 p);

void func_02070a98(u32 *p0, u32 p1)
{
    if (*p0 != 0) {
        func_02089af4(*(u8 *)(*p0 + 0x3c), p1);
    }
}
