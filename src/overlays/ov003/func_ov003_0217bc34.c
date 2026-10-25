#include "ctx.h"

extern void func_ov003_0217bc54(void);

void func_ov003_0217bc34(u32 a)
{
    void (*fp)(u32, u32) = (void (*)(u32, u32))func_ov003_0217bc54;
    fp(a, 1);
}
