#include "ctx.h"

extern void func_02008250(void);

void func_02008178(u32 a)
{
    ((void (*)(u32, u32, u32))func_02008250)(2, 2, a);
}
