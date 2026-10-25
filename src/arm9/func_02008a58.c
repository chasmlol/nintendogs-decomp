#include "ctx.h"

extern void func_02008a6c(void);

void func_02008a58(u32 a)
{
    void (*fp)(u32, u32) = (void (*)(u32, u32))func_02008a6c;
    fp(0, a);
}
