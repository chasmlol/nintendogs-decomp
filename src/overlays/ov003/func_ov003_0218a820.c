#include "ctx.h"

extern void func_ov003_0218a84c(void);

void func_ov003_0218a820(u32 a)
{
    void (*fp)(u32, u32, u32) = (void (*)(u32, u32, u32))func_ov003_0218a84c;
    fp(a, 1, 31);
}
