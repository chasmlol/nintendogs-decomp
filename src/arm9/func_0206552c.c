#include "ctx.h"

extern void func_02065824(void);

void func_0206552c(u32 a)
{
    void (*fp)(u32, u32) = (void (*)(u32, u32))func_02065824;
    fp(a, 2);
}
