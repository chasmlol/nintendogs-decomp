#include "ctx.h"

extern void func_02008520(void);

void func_02008478(u32 a)
{
    void (*fp)(u32, u32, u32) = (void (*)(u32, u32, u32))func_02008520;
    fp(0, 2, a);
}
